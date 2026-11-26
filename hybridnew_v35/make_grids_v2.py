#!/usr/bin/env python3
# v2 grid: [0.7 x min(asymptotic, HybridNew v1) 2.5%, 1.5 x max(HybridNew v1 97.5%, obs)], 120 points
NPTS = 120
asym = {}
import ROOT
A = "rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all"
out = open("grids_v2.txt", "w")
for m in [l.strip() for l in open("masses.txt")]:
    f = ROOT.TFile(f"../{A}/rpf2x0_Signal_M{m}GeV_mergedDepth_SR/Signal_M{m}GeV_mergedDepth_SR-1x0_area/higgsCombineTest.AsymptoticLimits.mH120.root")
    q = {round(e.quantileExpected, 3): e.limit for e in f.Get("limit")}
    lo, hi = q[0.025], max(q[0.975], q[-1.0])
    try:
        v = [float(x.split('+-')[0]) for x in open(f"results/M{m}/summary.txt").readline().split(':')[1].split()]
        lo = min(lo, v[1]); hi = max(hi, v[5], v[0])
    except OSError:
        hi *= 1.3
    lo *= 0.7; hi *= 1.5
    step = (hi - lo) / (NPTS - 1)
    out.write(f"{m} {lo:.6g}:{hi + 0.5*step:.6g}:{step:.6g} {3*hi:.6g}\n")
    print(f"M{m}: {lo:.4g}..{hi:.4g} step {step:.3g}")
