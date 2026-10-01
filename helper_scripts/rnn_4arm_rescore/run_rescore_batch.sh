#!/bin/bash
# Condor wrapper for rescore_arms.py (see step9_condor_rnn_rescore.cfg).
# Args: $1 = output npz name  $2 = ISTART  $3 = ISTOP  $4 = input root path
#       $5 = T0_SHIFT in ns (optional, default 0; only MC/signal ever needs it, for
#            arm 3, which was trained on MC moved into the data t0 frame)
echo "Run script starting"
echo "OUT: $1  ISTART: $2  ISTOP: $3  T0_SHIFT: ${5:-0}"
echo "IN:  $4"

arch=el9_amd64_gcc12
rel=CMSSW_14_1_0_pre4

echo -e "------------------- START --------------------"
printf "Start time: "; TZ=CET /bin/date
printf "Job is running on node: "; /bin/hostname
printf "Job is running in directory: "; /bin/pwd -P
printf "Available memory: "; free -g | awk '/Mem:/ {print $2" GB"}'
printf "Allocated CPUs: "; nproc

echo -e "\n[0] source /cvmfs/cms.cern.ch/cmsset_default.sh"
source /cvmfs/cms.cern.ch/cmsset_default.sh

echo -e "\n[1] export SCRAM_ARCH=$arch"
export SCRAM_ARCH=$arch

echo -e "\n[2] scramv1 project CMSSW $rel"
scramv1 project CMSSW $rel

echo -e "\n[3] cd $rel/src/ && cmsenv"
cd $rel/src/
eval `scramv1 runtime -sh`
cd ../../

########## CMSSW is set up ##########

# The inputs are read straight off /ceph, which is UCSD-local -- same reason
# +DESIRED_Sites is pinned to T2_US_UCSD. Name the failure instead of writing an
# empty npz if the path is not visible from this worker.
if [ ! -f "$4" ]; then
    echo "FATAL: input file not visible from this worker: $4"
    echo "  (/ceph is UCSD-local; check +DESIRED_Sites)"
    exit 1
fi

export ISTART=${2:-0}
export ISTOP=${3:-0}
export T0_SHIFT=${5:-0}
# TF sizes its thread pool from the affinity mask; request_cpus sets that on condor
export NTHREADS=$(nproc)
export OMP_NUM_THREADS=$(nproc)

echo -e "\n[4] rescore_arms.py"
python3 rescore_arms.py "$4" "$1.npz" 500000
rc=$?
echo "python exit code: $rc"

ls -la *.npz
printf "End time: "; TZ=CET /bin/date
exit $rc
