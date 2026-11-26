#!/usr/bin/env python3
"""Write per-mass higgsCombineTest.AsymptoticLimits.mH120.root files for a parallel limit area.

The new file copies the tree structure of the production file (all branches, entry order,
quantileExpected values) and replaces only `limit`:
  --mode hn   : HybridNew r limits from the CSV (limitErr set to 0)
  --mode asym : the production values themselves (validation of the plumbing, file content identical)

q97.5 = nan in the CSV (grid top-up pending) -> asym_q97.5 * (q84 / asym_q84), flagged.
A provenance table is written to <dst_area>/hn_inputs_used.txt.
"""
import argparse, csv, math, os, sys
from array import array
import ROOT

p = argparse.ArgumentParser()
p.add_argument("--src", required=True, help="production area dir")
p.add_argument("--dst", required=True, help="parallel area dir (tree of symlinks, made by make_hn_area.sh)")
p.add_argument("--csv", required=True)
p.add_argument("--mode", choices=["hn", "asym"], required=True)
p.add_argument("--tf", default="1x0")
a = p.parse_args()

FN = "higgsCombineTest.AsymptoticLimits.mH120.root"
QCOL = {-1.0: "obs", 0.025: "q2.5", 0.16: "q16", 0.5: "q50", 0.84: "q84", 0.975: "q97.5"}

rows = {int(r["M"]): r for r in csv.DictReader(open(a.csv))}
masses = sorted(int(d.split("_M")[1].split("GeV")[0]) for d in os.listdir(a.src) if d.startswith("rpf2x0_Signal_M"))
missing = [m for m in masses if m not in rows]
if a.mode == "hn" and missing:
    sys.exit(f"CSV has no row for M = {missing}")

prov = ["# M  quantile  r_written  r_asym_production  source"]
nflag = 0
for m in masses:
    sig = f"Signal_M{m}GeV_mergedDepth_SR"
    sub = f"rpf2x0_{sig}/{sig}-{a.tf}_area"
    src, dst = os.path.join(a.src, sub, FN), os.path.join(a.dst, sub, FN)
    if os.path.islink(dst) or os.path.exists(dst):
        os.remove(dst)  # never write through a symlink into production
    fin = ROOT.TFile.Open(src)
    t = fin.Get("limit")
    lim = array("d", [0.]); err = array("d", [0.]); q = array("f", [0.])
    t.SetBranchAddress("limit", lim); t.SetBranchAddress("limitErr", err)
    t.SetBranchAddress("quantileExpected", q)
    fout = ROOT.TFile(dst, "RECREATE")
    nt = t.CloneTree(0)
    r = rows.get(m)
    for i in range(t.GetEntries()):
        t.GetEntry(i)
        key = round(float(q[0]), 3)
        orig = lim[0]
        if r is not None:  # sanity: CSV asym columns must match the production file
            ac = float(r["asym_" + QCOL[key]])
            if abs(ac - orig) > 1e-4 * abs(orig) + 1e-9:
                print(f"WARNING M{m} q={key}: CSV asym {ac} != production {orig}")
        src_tag = "production asymptotic"
        if a.mode == "hn":
            v = float(r[QCOL[key]])
            src_tag = "HybridNew"
            if not math.isfinite(v):
                if key != 0.975:
                    sys.exit(f"M{m}: HybridNew {QCOL[key]} is nan, only q97.5 may fall back")
                v = float(r["asym_q97.5"]) * float(r["q84"]) / float(r["asym_q84"])
                src_tag = "FALLBACK asym_q97.5*q84/asym_q84"
                nflag += 1
            lim[0] = v; err[0] = 0.
        nt.Fill()
        prov.append(f"{m:6d} {key:6.3f} {lim[0]:12.6g} {orig:12.6g}  {src_tag}")
    nt.Write(); fout.Close(); fin.Close()

open(os.path.join(a.dst, "hn_inputs_used.txt"), "w").write("\n".join(prov) + "\n")
print(f"wrote {len(masses)} limit files into {a.dst} (mode={a.mode})")
if nflag:
    print(f"FLAG: {nflag} q97.5 entries are the asymptotic fallback (see {a.dst}/hn_inputs_used.txt)")
