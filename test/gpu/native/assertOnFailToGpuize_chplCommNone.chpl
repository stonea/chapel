// This is really meant to be a case under assertOnFailToGpuize.chpl but it
// fails with a different error under the gasnet configuration Public issue
// #20641 involves figuring out why and resolving it.

// I want to lock down the working behavior when CHPL_COMM=none so I separated
// things out into this test and add a .skipif that will trigger when using
// gasnet.

// TODO: Once public issue #20641 is solved move this delete this test and
// uncomment the corresponding test case (==5) in assertOnFailToGpuize.

use GPU;

var globalVar = 42;
proc usesOutsideVar() { return globalVar; }

on here.gpus[0] {
  foreach i in 0..10 {
    assertOnGpu();
    usesOutsideVar();
  }
}
