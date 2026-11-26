#!/bin/bash
# run_rest.sh: resume run_all.sh in screen (appB_hn); skips grid points whose log already has "Done in"
O=/ceph/cms/store/user/tvami/EarthAsDM/work/arc4_appB_hn
cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src && source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh`
while read C R S NT; do grep -qs "Done in" $O/grids/$C/log.r$R.s$S || echo "$C $R $S${NT:+ $NT}"; done < $O/tasks.txt > $O/tasks_rest.txt
echo "$(date) $(wc -l < $O/tasks_rest.txt) points left"
xargs -P 6 -L 1 bash $O/scripts/run_point.sh < $O/tasks_rest.txt
date; echo ALLDONE
