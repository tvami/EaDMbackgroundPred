#!/bin/bash
# harvest every mass once all 200 outputs are on ceph; loops until all 26 are done (max ~4 h)
cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/hybridnew_v35
for i in $(seq 1 48); do
  left=0
  for M in $(cat masses.txt); do
    [ -f results/M$M/summary.txt ] && continue
    n=$(ls /ceph/cms/store/user/tvami/EarthAsDM/HybridNew_v35/Combine/eadm_v35_hn_M$M/*/0000/combine_output_*.tar 2>/dev/null | wc -l)
    if [ "$n" -ge 200 ]; then ./harvest.sh $M > harvest_M$M.log 2>&1; mkdir -p results/M$M; grep "^merged" harvest_M$M.log > results/M$M/summary.txt; echo "$(date +%H:%M) M$M done"
    else left=$((left+1)); fi
  done
  [ $left -eq 0 ] && { echo "all done $(date)"; exit 0; }
  sleep 300
done
