#!/bin/bash
# usage: get_limits.sh <M> <dir with higgsCombine*.HybridNew*.root>
# merges the grid, extracts obs + 5 expected quantiles, and per seed for the toy-stability check
set -e
M=$1; IN=$(readlink -f $2)
SRC=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
cd $SRC && source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh`
OUT=$SRC/hybridnew_v35/results_v2/M$M; mkdir -p $OUT; cd $OUT
cp $SRC/hybridnew_v35/ws/M$M.root card.root
hadd -f -k merged.root $IN/higgsCombine*.HybridNew.mH120.*.root > hadd.log
# halves: seeds 1-4 vs the doubling seeds (5-8, or 9-12 for M40000); else 1+2 vs 3+4
if ls $IN/higgsCombine*.HybridNew.mH120.5.root >/dev/null 2>&1; then S1="1 2 3 4"; S2="5 6 7 8"
elif ls $IN/higgsCombine*.HybridNew.mH120.9.root >/dev/null 2>&1; then S1="1 2 3 4"; S2="9 10 11 12"
else S1="1 2"; S2="3 4"; fi
hadd -f -k merged_s1.root $(for s in $S1; do ls $IN/higgsCombine*.HybridNew.mH120.$s.root; done) >> hadd.log
hadd -f -k merged_s2.root $(for s in $S2; do ls $IN/higgsCombine*.HybridNew.mH120.$s.root; done) >> hadd.log
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
