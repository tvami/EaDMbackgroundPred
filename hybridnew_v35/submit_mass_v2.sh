#!/bin/bash
# usage: submit_mass.sh <M> [--dry-run]   (M = muon pT label, m_chi = 2M)
# one CRAB task per mass; one job per (r point, seed); 4 seeds x 10k s+b + 10k b toys per point
set -e
M=$1; shift
EXTRA=("$@"); set --   # crab.sh parses "$@"
SRC=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
cd $SRC && source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh` && source /cvmfs/cms.cern.ch/crab3/crab.sh
cd $SRC/hybridnew_v35
export PATH=$SRC/hybridnew_v35/shim:$PATH   # myproxy-info via el9 container (not installed on uaf-2)
read -r _ GRID RMAX <<< "$(grep "^$M " grids_v2.txt)"
mkdir -p crab2_M$M && cp ws/M$M.root crab2_M$M/card.root && cd crab2_M$M
combineTool.py -d card.root -M HybridNew --LHCmode LHC-limits --clsAcc 0 --fullBToys -T 10000 -s 1:4:1 \
  --singlePoint $GRID --saveHybridResult -m 120 --cminDefaultMinimizerStrategy 0 --cminFallbackAlgo Minuit2,Migrad,1:0.1 --cminFallbackAlgo Minuit2,Simplex,0:0.1 --X-rtd MINIMIZER_freezeDisassociatedParams \
  --setParameterRanges r=0,$RMAX \
  --job-mode crab3 --task-name eadm_v35_hn2_M$M --custom-crab ../custom_crab.py "${EXTRA[@]}"
