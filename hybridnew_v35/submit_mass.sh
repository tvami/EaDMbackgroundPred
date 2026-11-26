#!/bin/bash
# usage: submit_mass.sh <M> [--dry-run]   (M = muon pT label, m_chi = 2M)
# one CRAB task per mass; one job per (r point, seed); 2 seeds x 10k s+b + 10k b toys per point
set -e
M=$1; shift
EXTRA=("$@"); set --   # crab.sh parses "$@"
SRC=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
cd $SRC && source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh` && source /cvmfs/cms.cern.ch/crab3/crab.sh
cd $SRC/hybridnew_v35
export PATH=$SRC/hybridnew_v35/shim:$PATH   # myproxy-info via el9 container (not installed on uaf-2)
read -r _ GRID RMAX <<< "$(grep "^$M " grids.txt)"
mkdir -p crab_M$M && cp ws/M$M.root crab_M$M/card.root && cd crab_M$M
combineTool.py -d card.root -M HybridNew --LHCmode LHC-limits --clsAcc 0 --fullBToys -T 10000 -s 1:2:1 \
  --singlePoint $GRID --saveHybridResult -m 120 --cminDefaultMinimizerStrategy 0 \
  --setParameterRanges r=0,$RMAX \
  --job-mode crab3 --task-name eadm_v35_hn_M$M --custom-crab ../custom_crab.py "${EXTRA[@]}"
