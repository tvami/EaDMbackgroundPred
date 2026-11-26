#!/bin/bash
# crab status summary for all masses (uses the myproxy-info shim)
SRC=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
cd $SRC && source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh` && set -- && source /cvmfs/cms.cern.ch/crab3/crab.sh
export PATH=$SRC/hybridnew_v35/shim:$PATH
cd $SRC/hybridnew_v35
for M in $(cat masses.txt); do
  echo "M$M: $(crab status -d crab_M$M/crab_eadm_v35_hn_M$M 2>&1 | grep -E 'Jobs status|^\s+(running|finished|failed|idle|transferring|transferred|toRetry|unsubmitted)' | tr -s ' ' | tr '\n' ' ')"
done
