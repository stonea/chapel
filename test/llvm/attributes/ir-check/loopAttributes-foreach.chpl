proc loop_start() {}
proc loop_end() {}

proc loops() {
  // CHECK-LABEL: @loops
  var sum = 0;
  @llvm.metadata("loop.attr.byitself")
  foreach i in 0..<512 with (ref sum) {
    // CHECK-LABEL: loop_start
    loop_start();

    sum += i;

    // CHECK-LABEL: loop_end
    loop_end();

    // CHECK: br i1
    // CHECK-SAME: !llvm.loop ![[LOOP1:[0-9]+]]
  }
  @llvm.metadata(("loop.attr.num", 1))
  foreach i in 0..<512 with (ref sum) {
    // CHECK-LABEL: loop_start
    loop_start();

    sum += i;

    // CHECK-LABEL: loop_end
    loop_end();

    // CHECK: br i1
    // CHECK-SAME: !llvm.loop ![[LOOP2:[0-9]+]]
  }
  @llvm.metadata(("loop.attr.str", "strVal"))
  foreach i in 0..<512 with (ref sum) {
    // CHECK-LABEL: loop_start
    loop_start();

    sum += i;

    // CHECK-LABEL: loop_end
    loop_end();

    // CHECK: br i1
    // CHECK-SAME: !llvm.loop ![[LOOP3:[0-9]+]]
  }
  @llvm.metadata(("loop.attr.bool", true))
  foreach i in 0..<512 with (ref sum) {
    // CHECK-LABEL: loop_start
    loop_start();

    sum += i;

    // CHECK-LABEL: loop_end
    loop_end();

    // CHECK: br i1
    // CHECK-SAME: !llvm.loop ![[LOOP4:[0-9]+]]
  }
  @llvm.metadata(("loop.attr.nested", ("loop.attr.inner", 1)))
  foreach i in 0..<512 with (ref sum) {
    // CHECK-LABEL: loop_start
    loop_start();

    sum += i;

    // CHECK-LABEL: loop_end
    loop_end();

    // CHECK: br i1
    // CHECK-SAME: !llvm.loop ![[LOOP5:[0-9]+]]
  }
  @llvm.metadata(("loop.attr.multi1", 9), "loop.attr.byitself", ("loop.attr.multi2", false))
  foreach i in 0..<512 with (ref sum) {
    // CHECK-LABEL: loop_start
    loop_start();

    sum += i;

    // CHECK-LABEL: loop_end
    loop_end();

    // CHECK: br i1
    // CHECK-SAME: !llvm.loop ![[LOOP6:[0-9]+]]
  }
  return sum;
}


// CHECK: ![[LOOP1]] = distinct !{![[LOOP1]], ![[LOOP1_PA:[0-9]+]], ![[BY_ITSELF_STR:[0-9]+]]}
// CHECK: ![[LOOP1_PA]] = !{!"llvm.loop.parallel_accesses",
// CHECK: ![[BY_ITSELF_STR]] = !{!"loop.attr.byitself"}

// CHECK: ![[LOOP2]] = distinct !{![[LOOP2]], ![[LOOP2_PA:[0-9]+]], ![[LOOP2_ATTR:[0-9]+]]}
// CHECK: ![[LOOP2_PA]] = !{!"llvm.loop.parallel_accesses",
// CHECK: ![[LOOP2_ATTR]] = !{!"loop.attr.num", i64 1}

// CHECK: ![[LOOP3]] = distinct !{![[LOOP3]], ![[LOOP3_PA:[0-9]+]], ![[LOOP3_ATTR:[0-9]+]]}
// CHECK: ![[LOOP3_PA]] = !{!"llvm.loop.parallel_accesses",
// CHECK: ![[LOOP3_ATTR]] = !{!"loop.attr.str", ![[LOOP3_ATTR_VAL:[0-9]+]]}
// CHECK: ![[LOOP3_ATTR_VAL]] = !{!"strVal"}

// CHECK: ![[LOOP4]] = distinct !{![[LOOP4]], ![[LOOP4_PA:[0-9]+]], ![[LOOP4_ATTR:[0-9]+]]}
// CHECK: ![[LOOP4_PA]] = !{!"llvm.loop.parallel_accesses",
// CHECK: ![[LOOP4_ATTR]] = !{!"loop.attr.bool", i1 true}

// CHECK: ![[LOOP5]] = distinct !{![[LOOP5]], ![[LOOP5_PA:[0-9]+]], ![[LOOP5_ATTR:[0-9]+]]}
// CHECK: ![[LOOP5_PA]] = !{!"llvm.loop.parallel_accesses",
// CHECK: ![[LOOP5_ATTR]] = !{!"loop.attr.nested", ![[LOOP5_ATTR_VAL:[0-9]+]]}
// CHECK: ![[LOOP5_ATTR_VAL]] = !{!"loop.attr.inner", i64 1}

// CHECK: ![[LOOP6]] = distinct !{![[LOOP6]], ![[LOOP6_PA:[0-9]+]], ![[LOOP6_ATTR1:[0-9]+]], ![[BY_ITSELF_STR]], ![[LOOP6_ATTR3:[0-9]+]]}
// CHECK: ![[LOOP6_PA]] = !{!"llvm.loop.parallel_accesses",
// CHECK: ![[LOOP6_ATTR1]] = !{!"loop.attr.multi1", i64 9}
// CHECK: ![[LOOP6_ATTR3]] = !{!"loop.attr.multi2", i1 false}


var sum = loops();
writeln("Result is ", sum);
