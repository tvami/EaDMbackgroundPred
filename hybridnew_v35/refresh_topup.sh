#!/bin/bash
# after the hn3 grid top-up: add its outputs to the round-2 grid, re-merge, re-extract, rewrite hn_v2_limits_own.csv
SRC=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
cd $SRC && source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh` && cd hybridnew_v35
for M in 200 250 300 80000 90000; do
  if [ $M = 90000 ]; then  # CRAB task sat idle; killed and run locally (local3_M90000)
    cp local3_M90000/higgsCombine*.HybridNew.mH120.*.root untar_v2/M$M/; echo "M$M: $(ls local3_M90000/higgsCombine*.root | wc -l) local top-up files"
  else
    IN=$(ls -d /ceph/cms/store/user/tvami/EarthAsDM/HybridNew_v35/Combine/eadm_v35_hn3_M$M/*/0000 | tail -1)
    echo "M$M: $(ls $IN/*.tar | wc -l) top-up tars"
    for f in $IN/combine_output_*.tar; do tar -xf $f -C untar_v2/M$M; done
  fi
  ./get_limits_v2.sh $M untar_v2/M$M > harvest2_M$M.log 2>&1
done
for M in $(cat masses.txt); do echo results_v2/M$M/merged.root results_v2/M$M/merged_s1.root results_v2/M$M/merged_s2.root; done | xargs -n 3 -P 4 python3 limits_from_grid.py 2>/dev/null > own_limits_v2.txt
python3 make_csv.py
