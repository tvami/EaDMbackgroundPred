#!/bin/bash
# xcheck_readhybrid.sh <card>...: combine --readHybridResults observed limit from the merged grid (cross-check only)
O=/ceph/cms/store/user/tvami/EarthAsDM/work/arc4_appB_hn
cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src && source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh`
for C in "$@"; do
  cd $O/grids/$C
  hadd -f -k merged.root higgsCombine.$C.r*.HybridNew.mH120.*.root > /dev/null
  combine -d $O/cards/$C.root -M HybridNew --LHCmode LHC-limits --readHybridResults --grid=merged.root -m 120 --rAbsAcc 0 -n .$C.xcheck > xcheck.log 2>&1
  echo "$C $(grep -m1 'Limit: r <' xcheck.log)"
done
