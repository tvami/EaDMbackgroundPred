#!/usr/bin/env python3
# r grid per mass from the asymptotic (tolerance-rerun) limits: [0.7*exp2.5, 1.25*max(exp97.5, obs)], 100 points
import ROOT, sys
A = "rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all"
NPTS = 100
out = open("hybridnew_v35/grids.txt", "w")
for m in [l.strip() for l in open("hybridnew_v35/masses.txt")]:
    f = ROOT.TFile(f"{A}/rpf2x0_Signal_M{m}GeV_mergedDepth_SR/Signal_M{m}GeV_mergedDepth_SR-1x0_area/higgsCombineTest.AsymptoticLimits.mH120.root")
    t = f.Get("limit"); q = {}
    for e in t: q[round(e.quantileExpected, 3)] = e.limit
    lo = 0.7 * q[0.025]; hi = 1.25 * max(q[0.975], q[-1.0])
    step = (hi - lo) / (NPTS - 1)
    rmax = 3 * hi
    out.write(f"{m} {lo:.6g}:{hi + 0.5*step:.6g}:{step:.6g} {rmax:.6g}\n")
    print(f"M{m}: exp2.5={q[0.025]:.4g} med={q[0.5]:.4g} exp97.5={q[0.975]:.4g} obs={q[-1.0]:.4g} grid {lo:.4g}..{hi:.4g} step {step:.3g}")
