#!/usr/bin/env bash

# sets 'datFile', 'logDir', 'experimentName', and 'runLog'
source $CHPL_HOME/util/test/chplExperimentGatherUtils/boilerplate.bash $@

# -----------------------------------------------------------------------------
# Build and run tests
# -----------------------------------------------------------------------------
cd "$CHPL_HOME/test/release/examples/benchmarks/shootout"

# we currently exclude the threadring test from the results
rm -f *.notest
#touch binarytrees.notest
#touch chameneosredux.notest
#touch chameneosredux-fast.notest
#touch fannkuchredux.notest
#touch fasta.notest
touch knucleotide.notest
#touch mandelbrot.notest
#touch mandelbrot-fast.notest
#touch meteor.notest
#touch meteor-fast.notest
#touch nbody.notest
#touch pidigits.notest
#touch pidigits-fast.notest
#touch regexdna.notest
#touch regexdna-redux.notest
#touch revcomp.notest
#touch revcomp-fast.notest
#touch spectralnorm.notest
touch threadring.notest

start_test -performance . | tee -a "$runLog"

# -----------------------------------------------------------------------------
# Gather compile and execution data, store in results.dat
# -----------------------------------------------------------------------------
inner_time_data=$(./grep_start_test_log.py "ELAPSED TIME:" $runLog | sed -r -n 's/.*ELAPSED TIME: //p')
outer_time_data=$(./grep_start_test_log.py "real" $runLog | sed -r -n 's/.*real //p')
inner_tests=$(./grep_start_test_log.py "ELAPSED TIME:" $runLog | sed -r -n 's/.*\[(.*)\].*/\1/p')

total_init_time=$(./grep_start_test_log.py "GPU_TIMER TOTAL: " $runLog | sed -r -n 's/.*GPU_TIMER TOTAL: //p')
cuinit_time=$(./grep_start_test_log.py "GPU_TIMER CuInit: " $runLog | sed -r -n 's/.*GPU_TIMER CuInit: //p')

set +x
echo -e "\tinner_time\touter_time\ttotal_init_time\tcuinit_time" > $datFile
paste \
  <(printf "%s\n" "${inner_tests[@]}") \
  <(printf "%s\n" "${inner_time_data[@]}") \
  <(printf "%s\n" "${outer_time_data[@]}") \
  <(printf "%s\n" "${total_init_time[@]}") \
  <(printf "%s\n" "${cuinit_time[@]}") >> "$datFile"
