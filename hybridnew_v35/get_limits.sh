#!/bin/bash
# usage: get_limits.sh <M> <dir with higgsCombine*.HybridNew*.root>
# merges the grid, extracts obs + 5 expected quantiles, and per seed for the toy-stability check
set -e
M=$1; IN=$(readlink -f $2)
SRC=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
cd $SRC && source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh`
OUT=$SRC/hybridnew_v35/results/M$M; mkdir -p $OUT; cd $OUT
cp $SRC/hybridnew_v35/ws/M$M.root card.root
hadd -f -k merged.root $IN/higgsCombine*.HybridNew.mH120.*.root > hadd.log
for s in 1 2; do hadd -f -k merged_s$s.root $IN/higgsCombine*.HybridNew.mH120.$s.root >> hadd.log; done
OPT="-M HybridNew --LHCmode LHC-limits --readHybridResults -m 120 --rAbsAcc 0"
for G in merged merged_s1 merged_s2; do
  combine -d card.root $OPT --grid=$G.root -n .$G.obs > $G.obs.log 2>&1
  for q in 0.025 0.16 0.5 0.84 0.975; do
    combine -d card.root $OPT --grid=$G.root --expectedFromGrid $q -n .$G.q$q > $G.q$q.log 2>&1
  done
done
python3 - <<'PY'
import ROOT, glob
for G in ["merged", "merged_s1", "merged_s2"]:
    row = []
    for tag in ["obs", "q0.025", "q0.16", "q0.5", "q0.84", "q0.975"]:
        f = ROOT.TFile(glob.glob(f"higgsCombine.{G}.{tag}.HybridNew.mH120*.root")[0]); t = f.Get("limit"); t.GetEntry(0)
        row.append(f"{t.limit:.4g}+-{t.limitErr:.2g}")
    print(G, "obs, 2.5, 16, 50, 84, 97.5:", "  ".join(row))
PY
