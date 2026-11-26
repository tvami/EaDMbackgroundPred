#!/bin/bash
# run_topup_s7.sh: round 2, seeds 7-14 (2500 toys each) from tasks_topup_s7.txt (TOPUP_SEED0=7 TOPUP_ALWAYS= TOPUP_HALF=4 make_topup.py 1.0 8 <all cards>), 6 in parallel
O=/ceph/cms/store/user/tvami/EarthAsDM/work/arc4_appB_hn
cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src && source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh`
date; xargs -P 6 -L 1 bash $O/scripts/run_point.sh < $O/tasks_topup_s7.txt; date; echo ALLDONE
