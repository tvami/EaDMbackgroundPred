#!/bin/bash
# run_all.sh: all grid points, 6 in parallel (uaf 8-core quota)
O=/ceph/cms/store/user/tvami/EarthAsDM/work/arc4_appB_hn
cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src && source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh`
date; xargs -P 6 -L 1 bash $O/scripts/run_point.sh < $O/tasks.txt; date; echo ALLDONE
