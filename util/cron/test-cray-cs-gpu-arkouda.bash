#!/usr/bin/env bash
#
# Run arkouda testing on a cray-cs with HDR IB

CWD=$(cd $(dirname $0) ; pwd)
source $CWD/common-native-gpu.bash
export CHPL_COMM=none

export CHPL_NIGHTLY_TEST_CONFIG_NAME="cray-cs-gpu-arkouda"

# setup arkouda
export CHPL_TEST_ARKOUDA_PERF=false
source $CWD/common-arkouda.bash
export ARKOUDA_NUMLOCALES=16

module list

# setup for CS perf (gasnet-large, gnu, 128-core Rome)
source $CWD/common-cray-cs.bash
export CHPL_LAUNCHER_PARTITION=rome64Share
export CHPL_TARGET_CPU=none

module list

export GASNET_PHYSMEM_MAX="9/10"
nightly_args="${nightly_args} -no-buildcheck"

test_nightly
sync_graphs
