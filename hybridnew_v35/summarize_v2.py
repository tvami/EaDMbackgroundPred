#!/usr/bin/env python3
# table of round-2 HybridNew limits vs the production asymptotic ones; writes hn_v2_limits.csv
import ROOT
A = "../rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all"
g = {l.split()[0]: float(l.split()[1].split(':')[1]) for l in open('grids_v2.txt')}
csv = open("hn_v2_limits.csv", "w"); csv.write("M,mchi_TeV,obs,q2.5,q16,q50,q84,q97.5,asym_obs,asym_q50\n")
print(f"{'M':>6} | {'asym obs':>8} {'asym med':>8} | {'HN obs':>7} {'q2.5':>7} {'q16':>7} {'med':>7} {'q84':>7} {'q97.5':>7} | {'h1/h2 obs':>15} {'h1/h2 q2.5':>13} {'h1/h2 q97.5':>13}")
for m in [l.strip() for l in open('masses.txt')]:
    f = ROOT.TFile(f"{A}/rpf2x0_Signal_M{m}GeV_mergedDepth_SR/Signal_M{m}GeV_mergedDepth_SR-1x0_area/higgsCombineTest.AsymptoticLimits.mH120.root")
    q = {round(e.quantileExpected, 3): e.limit for e in f.Get("limit")}
    L = open(f'results_v2/M{m}/summary.txt').read().splitlines()
    v = {l.split()[0]: [float(x.split('+-')[0]) for x in l.split(':')[1].split()] for l in L}
    a, h1, h2 = v['merged'], v['merged_s1'], v['merged_s2']
    edge = 'EDGE' if a[5] > 0.95 * g[m] else ''
    print(f"{m:>6} | {q[-1.0]:8.4g} {q[0.5]:8.4g} | {a[0]:7.4g} {a[1]:7.4g} {a[2]:7.4g} {a[3]:7.4g} {a[4]:7.4g} {a[5]:7.4g} | {h1[0]:7.4g}/{h2[0]:<7.4g} {h1[1]:6.4g}/{h2[1]:<6.4g} {h1[5]:6.4g}/{h2[5]:<6.4g} {edge}")
    csv.write(f"{m},{2*int(m)/1000:g}," + ",".join(f"{x:.6g}" for x in a) + f",{q[-1.0]:.6g},{q[0.5]:.6g}\n")
