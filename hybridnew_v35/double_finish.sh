#!/bin/bash
# wait for the seed 5-8 tasks (M200, M40000, M60000), merge them, re-extract, rerun the HN chain
SRC=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
cd $SRC && source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh` && cd hybridnew_v35
for i in $(seq 1 96); do
  ok=0
  for M in 200 40000 60000; do
    T=hn4; [ $M = 40000 ] && T=hn5   # M40000 idle on hn4 -> killed, rerun as hn5 (seeds 9-12, US T2s)
    n=$(ls /ceph/cms/store/user/tvami/EarthAsDM/HybridNew_v35/Combine/eadm_v35_${T}_M$M/*/0000/combine_output_*.tar 2>/dev/null | wc -l)
    [ "$n" -ge 476 ] && ok=$((ok+1))
  done
  echo "$(date +%H:%M) $ok/3 masses complete"
  [ $ok -eq 3 ] && break
  sleep 300
done
for M in 200 40000 60000; do
  T=hn4; [ $M = 40000 ] && T=hn5
  IN=$(ls -d /ceph/cms/store/user/tvami/EarthAsDM/HybridNew_v35/Combine/eadm_v35_${T}_M$M/*/0000 | tail -1)
  for f in $IN/combine_output_*.tar; do tar -xf $f -C untar_v2/M$M; done
  echo "M$M: $(ls untar_v2/M$M/higgsCombine*.root | wc -l) files after doubling"
  ./get_limits_v2.sh $M untar_v2/M$M > harvest2_M$M.log 2>&1
done
for M in $(cat masses.txt); do echo results_v2/M$M/merged.root results_v2/M$M/merged_s1.root results_v2/M$M/merged_s2.root; done | xargs -n 3 -P 4 python3 limits_from_grid.py 2>/dev/null > own_limits_v2.txt
python3 make_csv.py > make_csv_double.log
./run_hn_chain.sh HN > run_hn_chain_double.log 2>&1 && echo "chain done $(date)"
