#!/bin/bash
# harvest every mass once all 200 outputs are on ceph; loops until all 26 are done (max ~4 h)
cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/hybridnew_v35
for i in $(seq 1 96); do
  left=0
  for M in $(cat masses.txt); do
    [ -f results_v2/M$M/summary.txt ] && continue
    n=$(ls /ceph/cms/store/user/tvami/EarthAsDM/HybridNew_v35/Combine/eadm_v35_hn2_M$M/*/0000/combine_output_*.tar 2>/dev/null | wc -l)
    if [ "$n" -ge 470 ]; then ./harvest_v2.sh $M > harvest2_M$M.log 2>&1; mkdir -p results_v2/M$M; grep "^merged" harvest2_M$M.log > results_v2/M$M/summary.txt; echo "$(date +%H:%M) M$M done"
    else left=$((left+1)); fi
  done
  [ $left -eq 0 ] && { echo "all done $(date)"; exit 0; }
  sleep 300
done
