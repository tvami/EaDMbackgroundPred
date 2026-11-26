#!/bin/bash
# usage: harvest.sh <M>: untar the CRAB outputs from ceph and extract the limits (get_limits.sh)
M=$1
IN=$(ls -d /ceph/cms/store/user/tvami/EarthAsDM/HybridNew_v35/Combine/eadm_v35_hn_M$M/*/0000 | tail -1)
U=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/hybridnew_v35/untar/M$M; mkdir -p $U
N=$(ls $IN/combine_output_*.tar | wc -l); echo "M$M: $N tar files in $IN"
for f in $IN/combine_output_*.tar; do tar -xf $f -C $U; done
echo "M$M: $(ls $U/higgsCombine*.root | wc -l) root files"
/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/hybridnew_v35/get_limits.sh $M $U
