/*
 * Copyright 2020-2023 Hewlett Packard Enterprise Development LP
 * Copyright 2004-2019 Cray Inc.
 * Other additional copyright holders may be indicated within.
 *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <cstdio>
#include <algorithm>
#include <set>
#include <queue>
#include <list>
#include "stmt.h"
#include "stlUtil.h"
#include "passes.h"
#include "ModuleSymbol.h"
#include "LoopStmt.h"
#include "ForLoop.h"
#include "expr.h"
#include "driver.h"
#include "CForLoop.h"
#include "bb.h"
#include "astutil.h"
#include "optimizations.h"
#include "timer.h"
#include "misc.h"
#include "view.h"

#include "global-ast-vecs.h"

static Timer gpuTransformTimer;

static bool debugPrintGPUChecks = false;
static bool allowFnCallsFromGPU = true;
static int indentGPUChecksLevel = 0;

// Ideally, if we do gpuSpecialization, we could safely assume that any function
// that isn't marked with FLAG_GPU_SPECIALIZE would be executed on a CPU locale.
// Unfortunately, as of today, this isn't the case because these functions can
// be reached by virtual dispatch and our specialization cloning isn't
// sophisticated enough to clone these functions and update the dispatch calls
// as appropriate.
//
// The good news is it's still safe to assume that anything marked with
// FLAG_GPU_SPECIALIZE must execute on the gpu.
//
// Anyway, of course, our hope would be to make things handle virtual dispatch
// properly, but, in the meantime, if you want to ignore this and make
// these assumptions anyway you can turn this flag to true. And once we do
// update things we can get just simplify things and get rid of this flag
// altogether.
static bool assumeNonGpuSpecFnsAreOnCpu = false;

extern int classifyPrimitive(CallExpr *call, bool inLocal);
extern bool inLocalBlock(CallExpr *call);

// ----------------------------------------------------------------------------
// Utilities
// ----------------------------------------------------------------------------

static bool isFnGpuSpecialized(FnSymbol *fn) {
  return fn->hasFlag(FLAG_GPU_SPECIALIZATION);
}

static bool isFieldAccessPrimitive(CallExpr *call) {
  return call->isPrimitive(PRIM_GET_MEMBER_VALUE) ||
      call->isPrimitive(PRIM_GET_MEMBER) ||
      call->isPrimitive(PRIM_SET_MEMBER) ||
      call->isPrimitive(PRIM_GET_SVEC_MEMBER_VALUE) ||
      call->isPrimitive(PRIM_GET_SVEC_MEMBER) ||
      call->isPrimitive(PRIM_SET_SVEC_MEMBER);
}

// If any SymExpr is referring to a variable defined outside the
// function return the SymExpr. Otherwise return nullptr
static SymExpr* hasOuterVarAccesses(FnSymbol* fn) {
  std::vector<SymExpr*> ses;
  collectSymExprs(fn, ses);
  for_vector(SymExpr, se, ses) {
    if (VarSymbol* var = toVarSymbol(se->symbol())) {
      if (var->defPoint->parentSymbol != fn) {
        if (!var->isParameter() && var != gVoid && var != gNil) {
          if (CallExpr* parent = toCallExpr(se->parentExpr)) {
            if (isFieldAccessPrimitive(parent)) {
              continue;
            }
          }
          return se;
        }
      }
    }
  }
  return nullptr;
}

static void errorForOuterVarAccesses(FnSymbol* fn) {
  if (SymExpr* se = hasOuterVarAccesses(fn)) {
    VarSymbol* var = toVarSymbol(se->symbol());
    INT_ASSERT(var);
    USR_FATAL(se, "variable '%s' must be defined in the function it"
                  " is used in for GPU usage", var->name);
  }
}

static VarSymbol* insertNewVarAndDef(BlockStmt* insertionPoint,
                                     const char* name, Type* type) {
  VarSymbol *var = new VarSymbol(name, type);
  var->defPoint = new DefExpr(var);
  insertionPoint->insertAtTail(var->defPoint);
  return var;
}

static VarSymbol* generateAssignmentToPrimitive(FnSymbol* fn,
                                                const char *varName,
                                                PrimitiveTag prim,
                                                Type *primReturnType) {

  VarSymbol *var = insertNewVarAndDef(fn->body, varName, primReturnType);
  CallExpr *c1 = new CallExpr(PRIM_MOVE, var, new CallExpr(prim));
  fn->insertAtTail(c1);

  return var;
}

template <size_t Size>
bool isEqualToAnyOfTheLoops(LoopStmt* loop, CForLoop* const (&loops)[Size]) {
  for (size_t i = 0; i < Size; i++) {
    if (loops[i] == loop) return true;
  }
  return false;
}

template <size_t Size>
static bool isDefinedInTheLoops(Symbol* sym, CForLoop* const (&loops)[Size]) {
  LoopStmt* curLoop = LoopStmt::findEnclosingLoop(sym->defPoint);

  while (curLoop != nullptr) {
    if (isEqualToAnyOfTheLoops(curLoop, loops)) {
      return true;
    }
    curLoop = LoopStmt::findEnclosingLoop(curLoop->parentExpr);
  }

  return false;
}

// This is primarily to handle the indexOfInterest generated for promoted
// expressions. That symbol is a ref that's defined outside the for loop, but
// it is def'd and use'd only inside the block. Moreover, one of its defs is
// actually redundant and should be removed. However at this stage in the
// compilation it is not. The bottom line is, that ref could actually just be a
// local variable in the loop body. So, we handle that specially to avoid
// passing that as an argument to the GPU kernel.  TODO: investigate whether
// that def is removed later in the compilation.  Ideally move GPU transforms
// after that pass
template <size_t Size>
static bool isDegenerateOuterRef(Symbol* sym, CForLoop* const (&loops)[Size]) {
  if (isDefinedInTheLoops(sym, loops) ||
      !sym->hasFlag(FLAG_TEMP)        ||
      !sym->isRef()                   ||
      !isVarSymbol(sym)) {
    return false;
  }

  for_SymbolUses(use, sym) {
    if (!isEqualToAnyOfTheLoops(LoopStmt::findEnclosingLoop(use), loops)) {
      return false;
    }
  }

  for_SymbolDefs(def, sym) {
    if (!isEqualToAnyOfTheLoops(LoopStmt::findEnclosingLoop(def), loops)) {
      return false;
    }
  }

  return true;
}

// ----------------------------------------------------------------------------
// CreateGpuFunctionSpecializations
// ----------------------------------------------------------------------------

/**
 * Performs a pass to find functions reachable from an `on` statement and clones
 * them into functions flagged with FLAG_GPU_SPECIALIZATION. Rewrite the
 * specializations to call to each other and rewrite the 'on block' to query
 * whether or not the current sublocale is to a GPU and if so, call the GPU
 * specialized clone (and if not, call the non-GPU specialized original).
 *
 * Effectively this sets things up so within a "GPU Specialized" function we can
 * safely assume we're 'on' a GPU sublocale.
 **/
class CreateGpuFunctionSpecializations {
  std::map<FnSymbol *, FnSymbol *> specMap_; // Map original functions to GPU specialized clones

  FnSymbol* getGpuSpecializationOfFcn(FnSymbol *nonGpuFunction) const;
  FnSymbol* createGpuSpecializationOfFn(FnSymbol* fn);
  std::queue<FnSymbol*> findAndCloneOnFns();
  void findAndCloneFnsReachableFromQueue(std::queue<FnSymbol*> &queue);
  void rewriteCallToOnFnInOnBlock(CallExpr *call) const;
  void rewriteOnBlock(FnSymbol *fn) const;
  void findAndRewriteOnBlocks() const;
  void rewriteSpecializationToCallOtherSpecializations(FnSymbol *fn) const;
  void rewriteSpecializationsToCallOtherSpecializations() const;

  public:

  void doit();
};

FnSymbol* CreateGpuFunctionSpecializations::getGpuSpecializationOfFcn(FnSymbol *nonGpuFunction) const {
  auto entry = specMap_.find(nonGpuFunction);
  if(entry != specMap_.end()) {
    return entry->second;
  }
  return nullptr;
}

FnSymbol* CreateGpuFunctionSpecializations::createGpuSpecializationOfFn(FnSymbol* fn) {
  SET_LINENO(fn);
  auto specMapFnIter = specMap_.find(fn);

  if (specMapFnIter != specMap_.end()) {
    return nullptr;
  } else if (!fn->hasFlag(FLAG_EXTERN)) {
    FnSymbol* gpuSpecFn = fn->copy();
    gpuSpecFn->addFlag(FLAG_GPU_SPECIALIZATION);
    fn->defPoint->insertBefore(new DefExpr(gpuSpecFn));

    specMap_[fn] = gpuSpecFn;
    specMap_[gpuSpecFn] = gpuSpecFn; // to handle recursion

    return gpuSpecFn;
  }
  return nullptr;
}

std::queue<FnSymbol*> CreateGpuFunctionSpecializations::findAndCloneOnFns() {
  std::queue<FnSymbol*> queue;
  forv_Vec(FnSymbol, fn, gFnSymbols) {
    if (fn->hasFlag(FLAG_ON)) {
      SET_LINENO(fn);
      if(FnSymbol *newSpec = createGpuSpecializationOfFn(fn)) {
        queue.push(newSpec);
      }
    }
  }
  return queue;
}

void CreateGpuFunctionSpecializations::findAndCloneFnsReachableFromQueue(std::queue<FnSymbol*> &queue) {
  // We rewrite wrap_on functions (those flagged with FLAG_ON_BLOCK) to dispatch
  // to the either a gpu or cpu specialized "on" function, we don't need to
  // clone these functions themselves.
  auto shouldExemptCallToFn = [](FnSymbol *fn) {
    return fn->hasFlag(FLAG_ON_BLOCK);
  };

  while (queue.empty() == false) {
    FnSymbol* gpuReachableFn = queue.front();
    queue.pop();

    std::vector<CallExpr*> calls;
    collectCallExprs(gpuReachableFn, calls);
    for_vector(CallExpr, call, calls) {
      if (FnSymbol* fn = call->resolvedFunction()) {
        if(shouldExemptCallToFn(fn)) {
          continue;
        }

        FnSymbol* gpuFn = createGpuSpecializationOfFn(fn);
        if(gpuFn) {
          queue.push(gpuFn);
        }
      }
    }
  }
}

void CreateGpuFunctionSpecializations::rewriteCallToOnFnInOnBlock(CallExpr *call) const {
  SET_LINENO(call);
  BlockStmt* cpuBlock = new BlockStmt();
  BlockStmt* gpuBlock = new BlockStmt();

  // populate the gpu block
  CallExpr* gpuCall = call->copy();
  gpuCall->baseExpr = new SymExpr(getGpuSpecializationOfFcn(call->resolvedFunction()));
  gpuBlock->insertAtTail(gpuCall);

  CallExpr* condExpr = new CallExpr(PRIM_GREATEROREQUAL,
                                    new CallExpr(PRIM_GET_REQUESTED_SUBLOC),
                                    new_IntSymbol(0));

  // we can't add elseStmt later on
  CondStmt* cond = new CondStmt(condExpr, gpuBlock, cpuBlock);

  // first, make sure the conditional is in place
  call->insertBefore(cond);

  // then relocate the loop
  cpuBlock->insertAtHead(call->remove());
}

void CreateGpuFunctionSpecializations::rewriteOnBlock(FnSymbol *fn) const {
  std::vector<CallExpr*> calls;
  collectCallExprs(fn, calls);
  for_vector(CallExpr, call, calls) {
    if (FnSymbol* callee = call->resolvedFunction()) {
      if(callee->hasFlag(FLAG_ON)) {
        rewriteCallToOnFnInOnBlock(call);
      }
    }
  }
}

void CreateGpuFunctionSpecializations::findAndRewriteOnBlocks() const {
  forv_Vec(FnSymbol, fn, gFnSymbols) {
    if (fn->hasFlag(FLAG_ON_BLOCK)) {
      rewriteOnBlock(fn);
    }
  }
}

void CreateGpuFunctionSpecializations::rewriteSpecializationToCallOtherSpecializations(FnSymbol *fn) const {
  std::vector<CallExpr*> calls;
  collectCallExprs(fn, calls);
  for_vector(CallExpr, call, calls) {
    FnSymbol* callee = call->resolvedFunction();
    if (FnSymbol* newFn = getGpuSpecializationOfFcn(callee)) {
      SET_LINENO(call);
      call->baseExpr->replace(new SymExpr(newFn));
    }
  }
}

void CreateGpuFunctionSpecializations::rewriteSpecializationsToCallOtherSpecializations() const {
  for (const auto& entry : specMap_) {
    rewriteSpecializationToCallOtherSpecializations(entry.second);
  }
}

void CreateGpuFunctionSpecializations::doit() {
  std::queue<FnSymbol*> queue = findAndCloneOnFns();
  findAndCloneFnsReachableFromQueue(queue);
  findAndRewriteOnBlocks();
  rewriteSpecializationsToCallOtherSpecializations();
}


// ----------------------------------------------------------------------------
// GpuizableLoop
// ----------------------------------------------------------------------------

// Used to evaluate if a loop is eligible to be outlined into a GPU kernel and
// extracts information about the loop's bounds and indices.
class GpuizableLoop {
  CForLoop* loop_ = nullptr;
  FnSymbol* parentFn_ = nullptr;
  bool isEligible_ = false;
  Symbol* upperBound_ = nullptr;
  std::vector<Symbol*> loopIndices_;
  std::vector<Symbol*> lowerBounds_;
  std::vector<CallExpr*> gpuAssertions_;
  CallExpr* compileTimeGpuAssertion_;
  const char* reason = nullptr;

  CondStmt* gpuCond_ = nullptr;
  BlockStmt* cpuBlock_ = nullptr;
  BlockStmt* gpuBlock_ = nullptr;
  CForLoop* gpuLoop_ = nullptr;

  // To allow move constructor
  GpuizableLoop() {}
public:
  GpuizableLoop(BlockStmt* blk);
  GpuizableLoop(GpuizableLoop&&) = default;
  GpuizableLoop(const GpuizableLoop&) = default;

  static GpuizableLoop fromEligibleClone(BlockStmt* blk) {
    GpuizableLoop loop{blk};
    std::swap(loop.gpuLoop_, loop.loop_);

    // Try to recover some fields from existing AST structure.
    loop.gpuBlock_ = toBlockStmt(loop.gpuLoop_->parentExpr);
    INT_ASSERT(loop.gpuBlock_ != nullptr);
    loop.gpuCond_ = toCondStmt(loop.gpuBlock_->parentExpr);
    INT_ASSERT(loop.gpuCond_);
    loop.cpuBlock_ = loop.gpuCond_->elseStmt;
    INT_ASSERT(loop.cpuBlock_);

    // LICM might've moved a few things outside of the loop.
    for_alist(expr, loop.cpuBlock_->body) {
      loop.loop_ = toCForLoop(expr);
      if (loop.loop_) break;
    }
    INT_ASSERT(loop.loop_);

    return loop;
  }

  bool isReportWorthy();

  CForLoop* cpuLoop() const { return loop_; }
  CForLoop* gpuLoop() const { return gpuLoop_; }

  bool isEligible() const { return isEligible_; }
  Symbol* upperBound() const { return upperBound_; }
  const std::vector<Symbol*>& loopIndices() const { return loopIndices_; }
  const std::vector<Symbol*>& lowerBounds() const { return lowerBounds_; }
  bool isIndexVariable(Symbol* sym) const {
    return std::find(loopIndices_.begin(), loopIndices_.end(), sym) !=
      loopIndices_.end();
  }

  CForLoop* generateGpuAndNonGpuPaths();
  void makeCpuOnly() const;
  void makeGpuOnly() const;
  void fixupNonGpuPath() const;

private:
  CallExpr* findCompileTimeGpuAssertions();
  void printNonGpuizableError(CallExpr* assertion, Expr* loc);
  bool evaluateLoop();
  void cleanupAssertGpuizable();
  bool isAlreadyInGpuKernel();
  bool parentFnAllowsGpuization();
  bool callsInBodyAreGpuizable();
  bool attemptToExtractLoopInformation();
  bool extractIndicesAndLowerBounds();
  bool extractUpperBound();
  void reportNotGpuizable(const BaseAST* ast, const char *msg);

  bool callsInBodyAreGpuizableHelp(BlockStmt* blk,
                                   std::set<FnSymbol*>& okFns,
                                   std::set<FnSymbol*> visitedFns);
};

std::unordered_map<CForLoop*, GpuizableLoop> eligibleLoops;

GpuizableLoop::GpuizableLoop(BlockStmt *blk) {
  INT_ASSERT(blk->getFunction());

  this->loop_ = toCForLoop(blk);
  this->parentFn_ = toFnSymbol(blk->getFunction());
  this->compileTimeGpuAssertion_ = findCompileTimeGpuAssertions();
  this->isEligible_ = evaluateLoop();

  // Ideally we should error out earlier than this with a more specific
  // error message but here's a final fallback error.
  // There's one use case we want to exempt, which is failure to
  // gpuize a nested loop. In this case if there was a failure to gpuize
  // the outer loop we already would have errored.
  if(this->compileTimeGpuAssertion_ &&
    !this->isEligible_ &&
    !isAlreadyInGpuKernel())
  {
    printNonGpuizableError(this->compileTimeGpuAssertion_, blk);
    USR_STOP();
  }

  cleanupAssertGpuizable();
}

// Given --report-gpu we don't want to report on all 'for' loops, just those
// that are from forall/foreach that aren't already within GPU kernels
bool GpuizableLoop::isReportWorthy() {
  CForLoop *cfl = this->loop_;
  INT_ASSERT(cfl);

  if (!cfl->inTree())
    return false;

  if (!cfl->isOrderIndependent())
    return false;

  // We currently don't support launching kernels from kernels. So if
  // the loop is within a function already marked for use on the GPU,
  // don't GPUize.
  if(isAlreadyInGpuKernel()) {
    return false;
  }

  return true;
}

CallExpr* GpuizableLoop::findCompileTimeGpuAssertions() {
  CForLoop *cfl = this->loop_;
  INT_ASSERT(cfl);

  // The gpuizable check will kick in if `assertOnGpu()` appears in the
  // body of the loop absent of any control flow.
  // It's necessary to do this instead of just checking the first
  // statement as by the time we get to gpuTransforms code may have
  // been added to the start of the loop (for example to
  // assign to the loop iteration variable if we're iterating
  // over values rather than indices)
  for_alist(expr, cfl->body) {
    CallExpr *call = toCallExpr(expr);
    if (call && call->isPrimitive(PRIM_ASSERT_ON_GPU)) {
      return call;
    }
  }

  return nullptr;
}

void GpuizableLoop::printNonGpuizableError(CallExpr* assertion, Expr* loc) {
    debuggerBreakHere();
    const char* reason = "contains assertOnGpu()";
    auto isAttributeSym = toSymExpr(assertion->get(1));
    INT_ASSERT(isAttributeSym);
    if (isAttributeSym->symbol() == gTrue) {
      reason = "is marked with @assertOnGpu";
    }
    USR_FATAL_CONT(loc, "Loop %s but is not eligible for execution on a GPU", reason);
}

bool GpuizableLoop::isAlreadyInGpuKernel() {
  return this->parentFn_->hasFlag(FLAG_GPU_CODEGEN);
}

bool GpuizableLoop::evaluateLoop() {
  return isReportWorthy() &&
         parentFnAllowsGpuization() &&
         callsInBodyAreGpuizable() &&
         attemptToExtractLoopInformation();
}

void GpuizableLoop::cleanupAssertGpuizable() {
  // Remove the string reasons passed to the primitive (they don't go to
  // the runtime).
  for (auto call : gpuAssertions_) {
    if (call->numActuals())
      call->get(1)->remove();
  }
}

bool GpuizableLoop::parentFnAllowsGpuization() {
  FnSymbol *cur = this->parentFn_;
  while (cur) {
    if (cur->hasFlag(FLAG_NO_GPU_CODEGEN)) {
      reportNotGpuizable(cur, "parent function disallows execution on a GPU");
      return false;
    }

    // this is obviously a weak implementation. But the purpose is to track the
    // call chain from things like `coforall_fn`, `wrapcoforall_fn` etc, which
    // are always single invocation
    if (CallExpr *singleCall = cur->singleInvocation()) {
      cur = singleCall->getFunction();
    }
    else {
      break;
    }
  }
  return true;
}

bool GpuizableLoop::callsInBodyAreGpuizable() {
  std::set<FnSymbol*> okFns;
  std::set<FnSymbol*> visitedFns;
  return callsInBodyAreGpuizableHelp(this->loop_, okFns, visitedFns);
}

bool GpuizableLoop::callsInBodyAreGpuizableHelp(BlockStmt* blk,
                                                std::set<FnSymbol*>& okFns,
                                                std::set<FnSymbol*> visitedFns) {
  FnSymbol* fn = blk->getFunction();
  if (debugPrintGPUChecks) {
    printf("%*s%s:%d: %s[%d]\n", indentGPUChecksLevel, "",
           fn->fname(), fn->linenum(), fn->name, fn->id);
  }

  if (visitedFns.count(blk->getFunction()) != 0) {
    return true; // allow recursive functions
  }

  visitedFns.insert(blk->getFunction());

  std::vector<CallExpr*> calls;
  collectCallExprs(blk, calls);

  for_vector(CallExpr, call, calls) {
    if (call->primitive) {
      // classifyPrimitive gets mad that that this primitive should already
      // have been removed from the tree. We know it's safe, so just
      // leave it.
      if (call->primitive->tag == PRIM_GPU_ELIGIBLE) continue;

      // only primitives that are fast and local are allowed for now
      bool inLocal = inLocalBlock(call);
      int is = classifyPrimitive(call, inLocal);
      if ((is != FAST_AND_LOCAL)) {
        reportNotGpuizable(call, "primitive is not fast and local");
        return false;
      }
    } else if (call->isResolved()) {
      if (!allowFnCallsFromGPU)
        return false;

      FnSymbol *fn = call->resolvedFunction();

      if (fn->hasFlag(FLAG_NO_GPU_CODEGEN)) {
        reportNotGpuizable(fn, "function is marked as not eligible for GPU execution");
        return false;
      }

      if(fn->hasFlag(FLAG_EXTERN) &&
        !fn->hasFlag(FLAG_GPU_CODEGEN) &&
        !fn->hasFlag(FLAG_GPU_AND_CPU_CODEGEN))
      {
        std::string msg = "function calls out to extern function (";
        msg += fn->name;
        msg += "), which is not marked as GPU eligible";
        reportNotGpuizable(fn, msg.c_str());
        return false;
      }

      if (hasOuterVarAccesses(fn)) {
        reportNotGpuizable(call, "call has outer var access");
        return false;
      }

      indentGPUChecksLevel += 2;
      if (okFns.count(fn) != 0 ||
          callsInBodyAreGpuizableHelp(fn->body, okFns, visitedFns)) {
        indentGPUChecksLevel -= 2;
        okFns.insert(fn);
      } else {
        indentGPUChecksLevel -= 2;
        return false;
      }
    }
  }
  return true;
}

bool GpuizableLoop::attemptToExtractLoopInformation() {
  // Pattern match loop boundaries to determine lower
  // and upper bounds. If we fail to match exit early.
  return extractIndicesAndLowerBounds() && extractUpperBound();
}

bool GpuizableLoop::extractIndicesAndLowerBounds() {
  if(BlockStmt* bs = toBlockStmt(loop_->initBlockGet())) {
    for_alist (expr, bs->body) {
      if(CallExpr *call = toCallExpr(expr)) {
        if(call->isPrimitive(PRIM_ASSIGN) ||
           call->isPrimitive(PRIM_MOVE)) {

          SymExpr *idxSymExpr = toSymExpr(call->get(1));
          SymExpr *boundSymExpr = toSymExpr(call->get(2));

          INT_ASSERT(idxSymExpr);
          INT_ASSERT(boundSymExpr);

          this->loopIndices_.push_back(idxSymExpr->symbol());
          this->lowerBounds_.push_back(boundSymExpr->symbol());
        }
      }
    }

    INT_ASSERT(bs->body.length == (int)this->loopIndices_.size());
    INT_ASSERT(bs->body.length == (int)this->lowerBounds_.size());
  } else {
    reportNotGpuizable(loop_, "loop indices do not match expected pattern for GPU execution");
    return false;
  }

  return true;
}

bool GpuizableLoop::extractUpperBound() {
  if(BlockStmt* bs = toBlockStmt(loop_->testBlockGet())) {
    for_exprs_postorder (expr, bs) {
      if(CallExpr *call = toCallExpr(expr)) {
        if(call->isPrimitive(PRIM_LESSOREQUAL)) {
          if(SymExpr *symExpr = toSymExpr(call->get(2))) {

            SymExpr* lhsSymExpr = toSymExpr(call->get(1));
            INT_ASSERT(lhsSymExpr && lhsSymExpr->symbol() == loopIndices_[0]);

            upperBound_ = symExpr->symbol();

            break;
          }
        }
      }
    }
  }

  if(upperBound_ == nullptr) {
    reportNotGpuizable(loop_, "upper bound does not match expected pattern for GPU execution");
    return false;
  }
  return true;
}

void GpuizableLoop::reportNotGpuizable(const BaseAST* ast, const char *msg) {
  this->reason = msg;
  if(this->compileTimeGpuAssertion_) {
    printNonGpuizableError(this->compileTimeGpuAssertion_, loop_);
    USR_PRINT(ast, "%s", msg);
    USR_STOP();
  }
}

// ----------------------------------------------------------------------------
// GpuKernel
// ----------------------------------------------------------------------------

// Given a GpuizableLoop that was determined to be "eligible" we generate an
// outlined function
// for GPU code generation that:
//    - Contains computation to determine what index of the loop is being
//      processed based on GPU block and thread ID
//    - Contains a copy of loop's body
//    - Passes in any variables that are declared outside of the loop as
//      parameters to this new function.
class GpuKernel {
  const GpuizableLoop &gpuLoop;
  FnSymbol* fn_;
  std::vector<Symbol*> kernelIndices_;
  std::vector<Symbol*> kernelActuals_;
  SymbolMap copyMap_;
  bool lateGpuizationFailure_;
  SymExpr* blockSize_;

  public:
  GpuKernel(const GpuizableLoop &gpuLoop, DefExpr* insertionPoint);

  FnSymbol* fn() const { return fn_; }
  const std::vector<Symbol*>& kernelActuals() { return kernelActuals_; }
  bool lateGpuizationFailure() const { return lateGpuizationFailure_; }
  SymExpr* blockSize() const {return blockSize_; }

  private:
  void buildStubOutlinedFunction(DefExpr* insertionPoint);
  void determineBlockSize();
  static bool isCallToPrimitiveWeShouldNotCopyIntoKernel(CallExpr *call);
  void populateBody(FnSymbol *outlinedFunction);
  void normalizeOutlinedFunction();
  void finalize();

  void generateIndexComputation();
  void generateEarlyReturn();
  void markGPUSubCalls(FnSymbol* fn);
  Symbol* addKernelArgument(Symbol* symInLoop);
  Symbol* addLocalVariable(Symbol* symInLoop);
};

GpuKernel::GpuKernel(const GpuizableLoop &gpuLoop, DefExpr* insertionPoint)
  : gpuLoop(gpuLoop)
  , lateGpuizationFailure_(false)
  , blockSize_(nullptr)
{
  buildStubOutlinedFunction(insertionPoint);
  normalizeOutlinedFunction();
  determineBlockSize();
  populateBody(fn_);
  if(!lateGpuizationFailure_) {
    finalize();
  }
}

static const char* getLoopName(CForLoop* loop) {
  auto filename = loop->astloc.filename();
  auto line = loop->astloc.stringLineno();
  auto moduleName = chpl::uast::Builder::filenameToModulename(filename);
  return astr("chpl_gpu_kernel_", moduleName.c_str(), "_line_", line, "_");
}

void GpuKernel::buildStubOutlinedFunction(DefExpr* insertionPoint) {
  fn_ = new FnSymbol(getLoopName(gpuLoop.gpuLoop()));

  fn_->body->blockInfoSet(new CallExpr(PRIM_BLOCK_LOCAL));

  fn_->addFlag(FLAG_RESOLVED);
  fn_->addFlag(FLAG_ALWAYS_RESOLVE);
  fn_->addFlag(FLAG_GPU_CODEGEN);

  generateIndexComputation();
  generateEarlyReturn();

  insertionPoint->insertBefore(new DefExpr(fn_));
}

Symbol* GpuKernel::addKernelArgument(Symbol* symInLoop) {
  Type* symType = symInLoop->typeInfo();
  IntentTag intent = symInLoop->isRef() ? INTENT_REF : INTENT_IN;
  ArgSymbol* newFormal = new ArgSymbol(intent, symInLoop->name, symType);
  fn_->insertFormalAtTail(newFormal);

  kernelActuals_.push_back(symInLoop);
  copyMap_.put(symInLoop, newFormal);

  return newFormal;
}

Symbol* GpuKernel::addLocalVariable(Symbol* symInLoop) {
  VarSymbol* newSym = toVarSymbol(symInLoop->copy());

  INT_ASSERT(newSym);

  fn()->insertAtHead(new DefExpr(newSym));
  copyMap_.put(symInLoop, newSym);

  return newSym;
}

/**
 *  For each loopIndex, generates and inserts the following AST into fn:
 *
 *  blockIdxX  = __primitive('gpu blockIdx x')
 *  blockDimX  = __primitive('gpu blockDim x')
 *  threadIdxX = __primitive('gpu threadIdx x')
 *  t0 = varBlockIdxX * varBlockDimX
 *  t1 = t0 + threadIdxX
 *  index = t1 + lowerBound
 *
 *  Also adds the loopIndex->index to the copyMap_
 **/
void GpuKernel::generateIndexComputation() {
  std::vector<Symbol*>::size_type numIndices = gpuLoop.loopIndices().size();
  INT_ASSERT(gpuLoop.lowerBounds().size() == numIndices);

  for (std::vector<Symbol*>::size_type i=0 ; i<numIndices ; i++) {
    Symbol* loopIndex  = gpuLoop.loopIndices()[i];
    Symbol* lowerBound = gpuLoop.lowerBounds()[i];

    // we want some of these variables to be 64-bits to be able to avoid
    // overflows in number of threads.
    VarSymbol *varBlockIdxX = generateAssignmentToPrimitive(fn_, "blockIdxX",
      PRIM_GPU_BLOCKIDX_X, dtInt[INT_SIZE_64]);
    VarSymbol *varBlockDimX = generateAssignmentToPrimitive(fn_, "blockDimX",
      PRIM_GPU_BLOCKDIM_X, dtInt[INT_SIZE_32]);
    VarSymbol *varThreadIdxX = generateAssignmentToPrimitive(fn_, "threadIdxX",
      PRIM_GPU_THREADIDX_X, dtInt[INT_SIZE_32]);

    VarSymbol *tempVar = insertNewVarAndDef(fn_->body, "t0",
      dtInt[INT_SIZE_64]);
    CallExpr *c1 = new CallExpr(PRIM_MOVE, tempVar, new CallExpr(
      PRIM_MULT, varBlockIdxX, varBlockDimX));
    fn_->insertAtTail(c1);

    VarSymbol *tempVar1 = insertNewVarAndDef(fn_->body, "t1",
      dtInt[INT_SIZE_64]);
    CallExpr *c2 = new CallExpr(PRIM_MOVE, tempVar1, new CallExpr(
      PRIM_ADD, tempVar, varThreadIdxX));
    fn_->insertAtTail(c2);

    Symbol* startOffset = addKernelArgument(lowerBound);
    VarSymbol* index = insertNewVarAndDef(fn_->body, "chpl_simt_index",
                                          dtInt[INT_SIZE_64]);
    fn_->insertAtTail(new CallExpr(PRIM_MOVE, index, new CallExpr(
      PRIM_ADD, tempVar1, startOffset)));

    kernelIndices_.push_back(index);
    copyMap_.put(loopIndex, index);
  }

  INT_ASSERT(kernelIndices_.size() == gpuLoop.loopIndices().size());
}

/*
 * Adds the following AST to a GPU kernel
 *
 * def chpl_is_oob;
 * chpl_is_oob = `calculated thread idx` > upperBound
 * if (chpl_is_oob) {
 *   return;
 * }
 *
 */
void GpuKernel::generateEarlyReturn() {
  Symbol* localUpperBound = addKernelArgument(gpuLoop.upperBound());

  VarSymbol* isOOB = new VarSymbol("chpl_is_oob", dtBool);
  fn_->insertAtTail(new DefExpr(isOOB));

  CallExpr* comparison = new CallExpr(PRIM_GREATER,
                                      kernelIndices_[0],
                                      localUpperBound);
  fn_->insertAtTail(new CallExpr(PRIM_MOVE, isOOB, comparison));

  BlockStmt* thenBlock = new BlockStmt();
  thenBlock->insertAtTail(new CallExpr(PRIM_RETURN, gVoid));
  fn_->insertAtTail(new CondStmt(new SymExpr(isOOB), thenBlock));
}

void GpuKernel::determineBlockSize() {
  std::vector<CallExpr*> callExprsInBody;
  for_alist(node, gpuLoop.gpuLoop()->body) {
    collectCallExprs(node, callExprsInBody);
  }

  for_vector(CallExpr, callExpr, callExprsInBody) {
    if (callExpr->isPrimitive(PRIM_GPU_SET_BLOCKSIZE)) {
      if (blockSize_ != nullptr) {
        USR_FATAL(callExpr, "Can only set GPU block size once per GPU-eligible loop.");
      }
      blockSize_ = toSymExpr(callExpr->get(1));
    }
  }
}

bool GpuKernel::isCallToPrimitiveWeShouldNotCopyIntoKernel(CallExpr *call) {
  if (!call) return false;

  return call->isPrimitive(PRIM_ASSERT_ON_GPU) ||
         call->isPrimitive(PRIM_GPU_SET_BLOCKSIZE);
}

void GpuKernel::populateBody(FnSymbol *outlinedFunction) {
  std::set<Symbol*> handledSymbols;

  // Some of the conditions below are intended to check for "things that
  // only happen in the loop body". However, the pre-LICM cloning means
  // there are actually two loop bodies. Use both for these checks to avoid
  // throwing off various checks.
  CForLoop* loopForBody = gpuLoop.gpuLoop();
  CForLoop* cloneOfLoop = gpuLoop.cpuLoop();

  for_alist(node, loopForBody->body) {
    bool copyNode = true;
    std::vector<SymExpr*> symExprsInBody;
    collectSymExprs(node, symExprsInBody);

    std::vector<DefExpr*> defExprsInBody;
    collectDefExprs(node, defExprsInBody);

    CallExpr* call = toCallExpr(node);
    if(isCallToPrimitiveWeShouldNotCopyIntoKernel(call)) {
      copyNode = false;
    }
    else if (DefExpr* def = toDefExpr(node)) {
      copyNode = false; // we'll do it here to adjust our symbol map

      DefExpr* newDef = def->copy();
      this->copyMap_.put(def->sym, newDef->sym);

      outlinedFunction->insertBeforeEpilogue(newDef);
    }
    else {
      // We also need to copy any defs that appear in blocks.
      // This pattern appears in Arkouda, so we do the following
      // as a workaround:
      for_vector(DefExpr, def, defExprsInBody) {
        DefExpr* newDef = def->copy();
        this->copyMap_.put(def->sym, newDef->sym);
        outlinedFunction->insertBeforeEpilogue(newDef);
      }

      for_vector(SymExpr, symExpr, symExprsInBody) {
        Symbol* sym = symExpr->symbol();

        if (handledSymbols.count(sym) == 1) {
          continue;
        }
        handledSymbols.insert(sym);

        if (isDefinedInTheLoops(sym, {loopForBody})) {
          // looks like this symbol was declared within the loop body,
          // so do nothing. TODO: I am hoping that we don't need to
          // check the type of the variable here, and we'll know that it
          // is a valid variable to declare on the gpu via the loop body
          // analysis
        }
        else if (isDegenerateOuterRef(sym, {loopForBody, cloneOfLoop})) {
          addLocalVariable(sym);
        }
        else if (sym->isImmediate()) {
          // nothing to do
        }
        else if (isTypeSymbol(sym)) {
          // nothing to do
        }
        else if (gpuLoop.isIndexVariable(sym)) {
          // These are handled already, nothing to do
        }
        else {
          if (CallExpr* parent = toCallExpr(symExpr->parentExpr)) {
            if (isFieldAccessPrimitive(parent)) {
              if (symExpr == parent->get(2)) {  // this is a field
                // do nothing
              }
              else if (symExpr == parent->get(1) ||
                (parent->numActuals() >= 3 && symExpr == parent->get(3)))
              {
                addKernelArgument(sym);
              }
              else {
                INT_FATAL("Malformed PRIM_GET_MEMBER_*");
              }
            }
            else if (parent->isPrimitive()) {
              addKernelArgument(sym);
            }
            else if (FnSymbol* calledFn = parent->resolvedFunction()) {
              if (!toFnSymbol(sym)) {
                addKernelArgument(sym);
              }

              if (!calledFn->hasFlag(FLAG_GPU_AND_CPU_CODEGEN)) {
                 markGPUSubCalls(calledFn);
              }
            }
            else {
              INT_FATAL("Unexpected call expression");
            }
          } else if (CondStmt* cond = toCondStmt(symExpr->parentExpr)) {
            // Parent is a conditional statement.
            if (symExpr == cond->condExpr) {
              addKernelArgument(sym);
            }
          } else {
            INT_FATAL("Unexpected symbol expression");
          }
        }
      }
    }

    if (copyNode) {
      outlinedFunction->insertBeforeEpilogue(node->copy());
    }
  }

  update_symbols(outlinedFunction->body, &copyMap_);
}


void GpuKernel::normalizeOutlinedFunction() {
  normalize(fn_);

  // When compiling Arkouda normalization introduces untyped IR.
  // To avoid that becoming a problem we check for the presence of
  // this IR and fail gpuization in that case.
  std::vector<DefExpr*> defExprsInBody;
  collectDefExprs(fn_, defExprsInBody);
  for_vector (DefExpr, def, defExprsInBody) {
    if(def->sym->type == dtUnknown) {
      this->lateGpuizationFailure_ = true;
    }
  }

  // normalization above adds PRIM_END_OF_STATEMENTs. It is probably too
  // wide of a brush. We can:
  //  (a) generate the AST we are generating from scratch inside some
  //      block, normalize that block, weed out these primitives inside
  //      that block only, flatten and remove
  //  (b) generate the new AST in the normalized form and never call
  //      normalize
  //  (c) keep things as is until this becomes an issue
  std::vector<CallExpr*> callsInBody;
  collectCallExprs(fn_, callsInBody);
  for_vector (CallExpr, call, callsInBody) {
    if (call->isPrimitive(PRIM_END_OF_STATEMENT)) {
      call->remove();
    }
  }
}

void GpuKernel::finalize() {
  // just repeat the dead code elimination steps for the new function
  cleanupLoopBlocks(this->fn_);
  deadVariableElimination(this->fn_);
  cleanupLoopBlocks(this->fn_);
  deadExpressionElimination(this->fn_);
}

void GpuKernel::markGPUSubCalls(FnSymbol* fn) {
  if (!fn->hasFlag(FLAG_GPU_AND_CPU_CODEGEN)) {
    fn->addFlag(FLAG_GPU_AND_CPU_CODEGEN);
    fn->addFlag(FLAG_GPU_CODEGEN);
  } else {
    // this function has already been handled
    return;
  }

  errorForOuterVarAccesses(fn);

  std::vector<CallExpr*> calls;
  collectCallExprs(fn, calls);
  for_vector(CallExpr, call, calls) {
    if (FnSymbol* fn = call->resolvedFunction()) {
      markGPUSubCalls(fn);
    }
  }
}

// ----------------------------------------------------------------------------
// CpuBoundLoopCleanup
// ----------------------------------------------------------------------------

// Post process a foreach loop after we have outlined it into a GPU kernel
// or have it remain in a non-gpu specialization of a function
class CpuBoundLoopCleanup {
  // If these primitives are ever encountered in a loop (running on the CPU) then
  // we should have a runtime error
  static const std::unordered_map<PrimitiveTag, const char *>
    gpuPrimitivesDisallowedOnHost;

  // We will remove any calls to these primitives on host code
  static const std::unordered_set<PrimitiveTag> gpuPrimitivesStripOnHost;

  static bool replaceDisallowedPrimitiveWithError(CallExpr *callExpr) {
    INT_ASSERT(callExpr->isPrimitive());
    SET_LINENO(callExpr);

    auto tagIt = gpuPrimitivesDisallowedOnHost.find(callExpr->primitive->tag);
    if (tagIt == gpuPrimitivesDisallowedOnHost.end()) {
        return false;
    }

    auto errorMsg = new_CStringSymbol(
        astr("operation not allowed outside of GPU: ", tagIt->second));
    // Expecting AST:
    //   (move call_tmp (call 'gpu prim'))
    // Want:
    //   (call 'rt_error' c"Operation not allowed")
    //   (move call_tmp 0)
    callExpr->parentExpr->insertBefore(new CallExpr(PRIM_RT_ERROR, errorMsg));
    callExpr->replace(new SymExpr(new_IntSymbol(0)));

    return true;
  }

  static bool stripPrimitiveIfWeShouldStrip(CallExpr *callExpr) {
    INT_ASSERT(callExpr->isPrimitive());
    auto tagIt = gpuPrimitivesStripOnHost.find(callExpr->primitive->tag);
    if (tagIt == gpuPrimitivesStripOnHost.end()) {
        return false;
    }
    callExpr->remove();
    return true;
  }

  public:

  static void doit(CForLoop *loop) {
    std::vector<CallExpr*> callExprsInBody;
    for_alist(node, loop->body) {
      collectCallExprs(node, callExprsInBody);
    }

    for_vector(CallExpr, callExpr, callExprsInBody) {
      if(callExpr->isPrimitive()) {
        replaceDisallowedPrimitiveWithError(callExpr) ||
        stripPrimitiveIfWeShouldStrip(callExpr);
      }
    }
  }
};

const std::unordered_map<PrimitiveTag, const char *>
  CpuBoundLoopCleanup::gpuPrimitivesDisallowedOnHost = {
      {PRIM_GPU_BLOCKIDX_X, "getBlockIdxX"},
      {PRIM_GPU_BLOCKIDX_Y, "getBlockIdxY"},
      {PRIM_GPU_BLOCKIDX_Z, "getBlockIdxZ"},
      {PRIM_GPU_BLOCKDIM_X, "getBlockDimX"},
      {PRIM_GPU_BLOCKDIM_Y, "getBlockDimY"},
      {PRIM_GPU_BLOCKDIM_Z, "getBlockDimZ"},
      {PRIM_GPU_THREADIDX_X, "getThreadIdxX"},
      {PRIM_GPU_THREADIDX_Y, "getThreadIdxY"},
      {PRIM_GPU_THREADIDX_Z, "getThreadIdxZ"},
      {PRIM_GPU_GRIDDIM_X, "getGridDimX"},
      {PRIM_GPU_GRIDDIM_Y, "getGridDimY"},
      {PRIM_GPU_GRIDDIM_Z, "getGridDimZ"},
};

// We will remove any calls to these primitives on host code
const std::unordered_set<PrimitiveTag>
    CpuBoundLoopCleanup::gpuPrimitivesStripOnHost = {
      PRIM_GPU_SET_BLOCKSIZE
    };

// ----------------------------------------------------------------------------
// GPU Transforms
// ----------------------------------------------------------------------------
/**
 * Given a CForLoop with lower bound lb and upper bound ub
 * (See extractUpperBound\extractIndicesAndLowerBound to
 * see what we pattern match and extract), generate the
 * following AST and insert it into gpuLaunchBlock:
 *
 *   chpl_block_delta = ub - lb
 *   chpl_gpu_num_threads = chpl_block_delta + 1
 */
static VarSymbol* generateNumThreads(BlockStmt* gpuLaunchBlock,
                                     const GpuizableLoop& gpuLoop) {

  VarSymbol *varBoundDelta = insertNewVarAndDef(gpuLaunchBlock,
                                                "chpl_block_delta",
                                                dtInt[INT_SIZE_64]);
  VarSymbol *numThreads = insertNewVarAndDef(gpuLaunchBlock,
                                             "chpl_num_gpu_threads",
                                             dtInt[INT_SIZE_64]);

  CallExpr *c1 = new CallExpr(PRIM_ASSIGN, varBoundDelta,
                              new CallExpr(PRIM_SUBTRACT,
                                           gpuLoop.upperBound(),
                                           gpuLoop.lowerBounds()[0]));
  gpuLaunchBlock->insertAtTail(c1);

  CallExpr *c2 = new CallExpr(PRIM_ASSIGN, numThreads,
                              new CallExpr(PRIM_ADD, varBoundDelta,
                                           new_IntSymbol(1)));
  gpuLaunchBlock->insertAtTail(c2);

  return numThreads;
}

static CallExpr* generateGPUCall(GpuKernel& info, VarSymbol* numThreads) {
  CallExpr *call = new CallExpr(PRIM_GPU_KERNEL_LAUNCH_FLAT);

  call->insertAtTail(info.fn());

  call->insertAtTail(numThreads);  // total number of GPU threads

  if (info.blockSize()) {
    // sets blockSize if specified with by "gpu set BlockSize" primitive
    call->insertAtTail(info.blockSize()->copy());
  } else {
    int blockSize = fGPUBlockSize != 0 ? fGPUBlockSize : 512;
    call->insertAtTail(new_IntSymbol(blockSize));
  }

  for_vector (Symbol, actual, info.kernelActuals()) {
    call->insertAtTail(new SymExpr(actual));
  }

  return call;
}

static void generateGPUKernelCall(const GpuizableLoop &gpuLoop,
                                  GpuKernel &kernel) {
  BlockStmt* gpuBlock = new BlockStmt();

  // populate the gpu block
  VarSymbol *numThreads = generateNumThreads(gpuBlock, gpuLoop);
  CallExpr* gpuCall = generateGPUCall(kernel, numThreads);
  gpuBlock->insertAtTail(gpuCall);
  gpuLoop.gpuLoop()->replace(gpuBlock);

  FnSymbol *fnContainingLoop = gpuBlock->getFunction();
  bool canAssumeFnWillRunOnGpu =
    fGpuSpecialization && (assumeNonGpuSpecFnsAreOnCpu || isFnGpuSpecialized(fnContainingLoop));

  if(canAssumeFnWillRunOnGpu) {
    // If we are creating GPU specializations then we already know we're on a GPU
    // sublocale and can just generate the kernel launch call (or, in the case
    // of CPU-as-device, a kernel launch followed by the CPU loop).
    gpuLoop.makeGpuOnly();
  } else {
    // we don't know if we're in a specialization, so we need to keep
    // the conditional.
    gpuLoop.fixupNonGpuPath();
  }
}

static CallExpr* getGpuEligibleMarker(CForLoop* loop) {
  if (loop->body.length > 0) {
    if (auto callExpr = toCallExpr(loop->body.get(1))) {
      if (callExpr->primitive && callExpr->primitive->tag == PRIM_GPU_ELIGIBLE) {
        return callExpr;
      }
    }
  }
  return nullptr;
}

static void processTaskIndependenceInNonGpuLoop(CForLoop *loop);

static void outlineEligibleLoop(FnSymbol *fn, GpuizableLoop &gpuLoop) {
  SET_LINENO(gpuLoop.gpuLoop());

  // The marker is a compile-time only primitive; remove it now.
  if (auto marker = getGpuEligibleMarker(gpuLoop.gpuLoop())) {
    marker->remove();
  }

  // Construction of the GpuKernel will create the outlined function
  GpuKernel kernel(gpuLoop, fn->defPoint);
  if(!kernel.lateGpuizationFailure()) {
    generateGPUKernelCall(gpuLoop, kernel);
  } else {
    kernel.fn()->defPoint->remove();
    gpuLoop.makeCpuOnly();
    processTaskIndependenceInNonGpuLoop(gpuLoop.cpuLoop());
  }
}

static void outlineGpuKernelsInFn(FnSymbol *fn) {
  std::vector<CForLoop*> asts;
  collectCForLoopStmtsPreorder(fn, asts);

  for_vector(CForLoop, loop, asts) {
    // In the case of a nested foreach loop we may end up replacing the
    // outer loop with a kernel call and in doing so making the loop no
    // longer in the tree.
    if (!loop->inTree()) {
      continue;
    }

    auto foundLoop = eligibleLoops.find(loop);
    if (foundLoop != eligibleLoops.end()) {
      // Even though the original eligible loops are not in the GPU specialized
      // copies, they need to be outlined to account for virtual dispatch.
      auto& eligibleLoop = foundLoop->second;
      outlineEligibleLoop(fn, eligibleLoop);
    } else if (fGpuSpecialization && getGpuEligibleMarker(loop)) {
      // Even if this wasn't a loop originally marked eligible, it could
      // be a copy of one. If that's the case, we inserted a primitive
      // into its body.

      // TODO: sometimes, this loop can be made no longer eligible by
      // other transformations. Is that okay?
      auto gpuLoop = GpuizableLoop::fromEligibleClone(loop);
      if (gpuLoop.isEligible()) {
        outlineEligibleLoop(fn, gpuLoop);
      } else {
        gpuLoop.makeCpuOnly();
        processTaskIndependenceInNonGpuLoop(gpuLoop.cpuLoop());
      }
    }
  }
}

// We need to strip any GPU specific primitives that remain
static void cleanupForeachLoopsGuaranteedToRunOnCpu(FnSymbol *fn) {
  std::vector<CForLoop*> asts;
  collectCForLoopStmtsPreorder(fn, asts);
  for_vector(CForLoop, loop, asts) {
    CpuBoundLoopCleanup::doit(loop);
  }
}

static void doGpuTransforms() {
  if(fGpuSpecialization) {
    CreateGpuFunctionSpecializations().doit();
  }

  // Outline all eligible loops; cleanup CPU bound loops
  forv_Vec(FnSymbol*, fn, gFnSymbols) {
    bool canAssumeFnWillRunOnCpu = fGpuSpecialization &&
                                   !isFnGpuSpecialized(fn) &&
                                   assumeNonGpuSpecFnsAreOnCpu;
    if(canAssumeFnWillRunOnCpu)
    {
      // By definition all foreach loops in a function without this flag
      // will be run on the CPU:
      cleanupForeachLoopsGuaranteedToRunOnCpu(fn);
    } else {
      outlineGpuKernelsInFn(fn);

      // All eligible loops in the function will have been outlined into
      // kernels at this point so anything that remains is guaranteed to
      // run on the CPU
      cleanupForeachLoopsGuaranteedToRunOnCpu(fn);
    }
  }
}

static void logGpuizableLoops() {
  struct LocationComparator {
    bool operator()(const CForLoop* item1, const CForLoop* item2) const {
      const char* s1 = item1->fname();
      const char* s2 = item2->fname();
      int result = strcmp(s1, s2);
      if (result != 0) {
        return result < 0;
      }
      return item1->linenum() < item2->linenum();
    }
  };
  std::set<CForLoop*, LocationComparator> eligibleLoops;
  std::set<CForLoop*, LocationComparator> ineligibleLoops;

  forv_Vec(FnSymbol*, fn, gFnSymbols) {
    std::vector<CForLoop*> loops;
    collectCForLoopStmtsPreorder(fn, loops);

    for_vector(CForLoop, loop, loops) {
      GpuizableLoop gpuLoop(loop);
      bool isInModuleWeShouldReportOn = developer || loop->getModule()->modTag == MOD_USER;
      if (gpuLoop.isReportWorthy() && isInModuleWeShouldReportOn) {
        if(gpuLoop.isEligible()) {
          eligibleLoops.insert(loop);
        } else {
          ineligibleLoops.insert(loop);
        }
      }
    }
  }

  printf("GPU INELIGIBLE LOOPS:\n");
  printf("---------------------\n");
  for (const auto& loop : ineligibleLoops) {
    printf("%s\n", loop->stringLoc());
  }
  printf("\n");

  printf("GPU ELIGIBLE LOOPS:\n");
  printf("-------------------\n");
  for (const auto& loop : eligibleLoops) {
    printf("%s\n", loop->stringLoc());
  }
}

// ----------------------------------------------------------------------------

void lateGpuTransforms() {
  if (fReportGpu) {
    logGpuizableLoops();
  }

  // For now, we are doing GPU outlining here. In the future, it should
  // probably be its own pass.
  if (usingGpuLocaleModel()) {
    if (fReportGpuTransformTime) gpuTransformTimer.start();

    doGpuTransforms();

    if (fReportGpuTransformTime) {
      gpuTransformTimer.stop();
      std::cout << "GPU transformation time (s): " <<
                   gpuTransformTimer.elapsedSecs() << std::endl;
    }
  }
}

bool isLoopGpuBound(CForLoop* loop) {
  return eligibleLoops.find(loop) != eligibleLoops.end();
}

// TODO: is LICM required for some loops to be eligible? thonk.

/* Eligible loops are immediately placed into a conditional with a copy of
   the loop, like:

       if runningOnGpuLocale() {
          // loop
       } else {
          // loop
       }

   This way, the GPU-bound loop can be LICM'ed differently. Normally, LICM
   is not a fan of reference variables, etc. However, we relax these
   restrictions for GPU-bound loops to make it possible to save on
   shiftedData access etc.

 */

CForLoop* GpuizableLoop::generateGpuAndNonGpuPaths() {
  SET_LINENO(cpuLoop());

  // Without GPU specialization, every time, before doing a kernel launch, we
  // need to check and see if we are on a GPU sublocale. The code to do this
  // looks like this:
  //
  // if (chpl_task_getRequestedSubloc() >= 0) {
  //   code to determine number of threads to launch kernel with
  //   call the generated GPU kernel
  // } [else] {
  //   run the existing loop on the CPU
  // }
  //
  // Normally, We put the CPU block as the else block. If we are not doing GPU
  // codegen, we want the CPU loop to run always, and thus instead put it in
  // an anonymous block after the conditional.
  //
  // The code below always generates if-GPU-else-CPU structure; the else
  // branch is moved into the anonymous block by fixupNonGpuPath later. Deferring
  // that transformation helps simplify other logic (e.g. if we know
  // the condition will be true or false, we can just replace the if-else with
  // one of its branches; this doesn't work if there might be more code after
  // the conditional).

  BlockStmt* cpuBlock = new BlockStmt();
  BlockStmt* gpuBlock = new BlockStmt();

  CallExpr* condExpr = new CallExpr(PRIM_GREATEROREQUAL,
                                    new CallExpr(PRIM_GET_REQUESTED_SUBLOC),
                                    new_IntSymbol(0));

  // Create a copy of the CPU loop for LICM purposes
  CForLoop* gpuLoop = cpuLoop()->copy();
  gpuBlock->insertAtTail(gpuLoop);

  // later on, if we're using CPU-as-device, the CPU block will be moved
  // to follow the if-statement. For now, leave it as-is to make it
  // easier to wrangle the CondStmt AST elsewhere (c.f. makeCpuOnly,
  // makeGpuOnly).
  CondStmt* cond = new CondStmt(condExpr, gpuBlock, cpuBlock);

  // first, make sure the conditional is in place
  cpuLoop()->insertBefore(cond);

  // then relocate the loop
  cpuBlock->insertAtHead(cpuLoop()->remove());

  // Save the new AST nodes we created so we can operate on them later.
  cpuBlock_ = cpuBlock;
  gpuBlock_ = gpuBlock;
  gpuLoop_ = gpuLoop;
  gpuCond_ = cond;

  return gpuLoop;
}

void GpuizableLoop::makeCpuOnly() const {
  cpuBlock_->remove();
  gpuCond_->replace(cpuBlock_);
  cpuBlock_->flattenAndRemove();
}

void GpuizableLoop::makeGpuOnly() const {
  cpuBlock_->remove();
  gpuBlock_->remove();
  gpuCond_->replace(gpuBlock_);

  if (!isFullGpuCodegen()) {
    // put the CPU loop right after where the kernel launch would
    // be to make CPU-as-device work.
    gpuBlock_->insertAfter(cpuBlock_);
    cpuBlock_->flattenAndRemove();
  }

  gpuBlock_->flattenAndRemove();
}

void GpuizableLoop::fixupNonGpuPath() const {
  // In the CPU-as-device mode, instead of the plain loop being in an "else",
  // it's always executed. This will make sure that we call the runtime support
  // as if there's a GPU, yet still executing the loop always.
  //
  // So, take it from its else branch and put it after the conditional.

  if (!isFullGpuCodegen()) {
    cpuBlock_->remove();
    gpuCond_->insertAfter(cpuBlock_);
  }
}

std::set<VarSymbol*> processedVar;

static void processTaskIndependenceInNonGpuLoop(CForLoop *loop) {
  std::vector<SymExpr*> ses;
  collectSymExprs(loop, ses);
  for_vector(SymExpr, se, ses) {
    if (VarSymbol* var = toVarSymbol(se->symbol())) {
      if(var->hasFlag(FLAG_TASK_PRIVATE_VARIABLE)) {
        if(processedVar.find(var) != processedVar.end())
          continue;
        processedVar.insert(var);

        // *AIS* I don't think it's necessarily safe to assume the initpoint
        // follows from the defpoint. Is there a way to put an initialization
        // into a defpoint?
        Expr *defPoint = var->defPoint;
        Expr *initPoint = defPoint->next;

        CallExpr *callExpr = toCallExpr(initPoint);
        INT_ASSERT(callExpr);
        CallExpr* taskIndSvarPrim = toCallExpr(callExpr->get(2));
        INT_ASSERT(taskIndSvarPrim);
        SymExpr* capturedSvarExp = toSymExpr(taskIndSvarPrim->get(1));
        INT_ASSERT(capturedSvarExp);

        SET_LINENO(var);

        initPoint->replace(new CallExpr(PRIM_MOVE, var, capturedSvarExp->symbol()));
      }
    }
  }
}

static void duplicateEligibleLoopsForAdjustedLICM(FnSymbol* fn) {
  std::vector<CForLoop*> asts;
  collectCForLoopStmtsPreorder(fn, asts);

  for_vector(CForLoop, loop, asts) {
    // In the case of a nested foreach loop we may end up replacing the
    // outer loop with a kernel call and in doing so making the loop no
    // longer in the tree.
    if (!loop->inTree()) {
      continue;
    }

    if(loop->id == 205808) {
      static int z = 0;
      z = z + 1;
    }

    GpuizableLoop gpuLoop(loop);
    if (gpuLoop.isEligible()) {
      SET_LINENO(loop);
      auto gpuCopy = gpuLoop.generateGpuAndNonGpuPaths();
      eligibleLoops.insert({ gpuCopy, std::move(gpuLoop) });
      gpuCopy->body.insertAtHead(new CallExpr(PRIM_GPU_ELIGIBLE));
    }
    processTaskIndependenceInNonGpuLoop(loop);
  }
}

void earlyGpuTransforms() {
  if (usingGpuLocaleModel()) {
    forv_Vec(FnSymbol*, fn, gFnSymbols) {
      duplicateEligibleLoopsForAdjustedLICM(fn);
    }
  }
}
