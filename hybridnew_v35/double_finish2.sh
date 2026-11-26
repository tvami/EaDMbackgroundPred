#!/bin/bash
# final doubling merge: M200 = hn4 CRAB outputs + 15 jobs run locally (stage-out failures), M40000 = hn5, M60000 = hn4
SRC=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
cd $SRC && source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh` && cd hybridnew_v35
(cd local4_M200 && cat cmds.txt | xargs -P 8 -I CMD bash -c 'CMD > /dev/null 2>&1 || echo "FAIL: CMD"' > fails.txt)
echo "local M200: $(ls local4_M200/higgsCombine*.root | wc -l) files, $(wc -l < local4_M200/fails.txt) fails $(date +%H:%M)"
for x in hn4:200 hn5:40000 hn4:60000; do
  T=${x%%:*}; M=${x##*:}
  IN=$(ls -d /ceph/cms/store/user/tvami/EarthAsDM/HybridNew_v35/Combine/eadm_v35_${T}_M$M/*/0000 | tail -1)
  for f in $IN/combine_output_*.tar; do tar -xf $f -C untar_v2/M$M; done
  [ $M = 200 ] && cp local4_M200/higgsCombine*.HybridNew.mH120.*.root untar_v2/M200/
  echo "M$M: $(ls untar_v2/M$M/higgsCombine*.root | wc -l) files after doubling"
  ./get_limits_v2.sh $M untar_v2/M$M > harvest2_M$M.log 2>&1
done
for M in $(cat masses.txt); do echo results_v2/M$M/merged.root results_v2/M$M/merged_s1.root results_v2/M$M/merged_s2.root; done | xargs -n 3 -P 4 python3 limits_from_grid.py 2>/dev/null > own_limits_v2.txt
python3 make_csv.py > make_csv_double.log
./run_hn_chain.sh HN > run_hn_chain_double.log 2>&1 && echo "chain done $(date +%H:%M)"
