#!/bin/bash
# unblinded SR GoF, saturated, all 14 PASS bins, 5 x 1000 toys
cd "$(dirname "$0")"
eval "$(cd ~/EarthAsDM/CMSSW_14_1_0_pre4/src && scramv1 runtime -sh)"
export OMP_NUM_THREADS=1
text2workspace.py -b card.txt -o gof_workspace.root --X-no-jmax > gof_v35_t2w.log 2>&1 || exit 1
combine -M GoodnessOfFit -d gof_workspace.root --algo=saturated --fixedSignalStrength 0 -n _gof_data -v 0 --cminDefaultMinimizerStrategy 0 > gof_v35_data.log 2>&1
for s in 1 2 3 4 5; do
  combine -M GoodnessOfFit -d gof_workspace.root --algo=saturated --fixedSignalStrength 0 -n _gof_toys -v 0 --cminDefaultMinimizerStrategy 0 --toysFrequentist -t 1000 -s $s > gof_v35_toys_$s.log 2>&1 &
done
wait
echo GOF_V35_DONE
