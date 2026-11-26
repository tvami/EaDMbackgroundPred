#!/usr/bin/env python3
# own-extraction HybridNew limits (own_limits_v2.txt) + asymptotic -> hn_v2_limits_own.csv, with half-vs-half check
import ROOT, re
A = "../rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all"
L = {}
for l in open("own_limits_v2.txt"):
    m = re.search(r"M(\d+)/(merged\w*)\.root", l.split()[0]); L[(m.group(1), m.group(2))] = l.split(":")[1].split()
num = lambda v: [float(x.split("(")[0]) for x in v]
csv = open("hn_v2_limits_own.csv", "w")
csv.write("M,mchi_TeV,obs,q2.5,q16,q50,q84,q97.5,asym_obs,asym_q2.5,asym_q16,asym_q50,asym_q84,asym_q97.5\n")
for m in [l.strip() for l in open("masses.txt")]:
    f = ROOT.TFile(f"{A}/rpf2x0_Signal_M{m}GeV_mergedDepth_SR/Signal_M{m}GeV_mergedDepth_SR-1x0_area/higgsCombineTest.AsymptoticLimits.mH120.root")
    q = {round(e.quantileExpected, 3): e.limit for e in f.Get("limit")}
    a, h1, h2 = num(L[(m, "merged")]), num(L[(m, "merged_s1")]), num(L[(m, "merged_s2")])
    d = [100 * abs(x - y) / z if z == z else float("nan") for x, y, z in zip(h1, h2, a)]
    print(f"mchi {2*int(m)/1000:g} TeV: HN obs {a[0]:.4g} (asym {q[-1.0]:.4g}), med {a[3]:.4g} (asym {q[0.5]:.4g}); halves diff % obs/2.5/16/50/84/97.5: " + " ".join(f"{x:.1f}" for x in d))
    csv.write(f"{m},{2*int(m)/1000:g}," + ",".join(f"{x:.6g}" for x in a) + "," + ",".join(f"{q[k]:.6g}" for k in [-1.0, 0.025, 0.16, 0.5, 0.84, 0.975]) + "\n")
