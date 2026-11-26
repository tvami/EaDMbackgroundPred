#!/usr/bin/env python3
"""Headline numbers of one limit area (production, ASV or HN), from the chain outputs.
  python3 summarize_hn.py <limitdir> <livetime> [<sigma log>]   (run from $SRC)
"""
import json, os, re, sys
import numpy as np
import ROOT

LD, LT = sys.argv[1], sys.argv[2]
SIGLOG = sys.argv[3] if len(sys.argv) > 3 else None
FN = "higgsCombineTest.AsymptoticLimits.mH120.root"
REF = 4e-8


def at_ref(path):
    d = json.load(open(path)); e = np.array(d["eps"], float)
    i = int(np.argmin(abs(np.log(e / REF))))
    return d, e, i


def window(lo, hi):
    if lo is None or lo <= 0:
        return "none"
    return f"{lo:.3g} to {hi:.3g} TeV" if hi and hi > 0 else f"{lo:.3g} TeV to open (grid end)"


def tip(sigfile, lt, q):
    """Lowest excluded eps, log-interpolated: max over mass of theory/limit crosses 1."""
    L = open(sigfile).read().splitlines()
    areas = L[0].split(","); rates = np.array([[float(x) for x in l.split(",")] for l in L[3:] if l.strip()])
    eps = np.array([float(x) for x in open(os.path.splitext(sigfile)[0] + ".eps.txt") if x.strip()])
    r = []
    for a in areas:
        f = ROOT.TFile.Open(os.path.join(a, FN)); t = f.Get("limit"); v = None
        for k in range(t.GetEntries()):
            t.GetEntry(k)
            if abs(t.quantileExpected - q) < 1e-3:
                v = t.limit
        r.append(v); f.Close()
    lim = np.array(r) * 100. / float(lt)
    ratio = (rates / lim[None, :]).max(axis=1)
    ok = np.flatnonzero(ratio > 1)
    if not len(ok):
        return None
    i = ok[0]
    if i == 0:
        return eps[0]
    x0, x1 = np.log(eps[i - 1]), np.log(eps[i]); y0, y1 = np.log(ratio[i - 1]), np.log(ratio[i])
    return float(np.exp(x0 + (0 - y0) * (x1 - x0) / (y1 - y0)))


main = f"exp_lim/signal_{LD}_livetime_{LT}_limit/exclusion_limits.json"
d, e, i = at_ref(main)
print(f"== {LD}  ({LT} months)")
print(f"eps = {e[i]:g}: observed {window(d['obs_lim'][i], d['closed_obs_lim'][i])}; "
      f"expected {window(d['exp_lim'][i], d['closed_exp_lim'][i])}")
print(f"   expected 68%: -1sigma {window(d['exp_lim_upper'][i], d['exp_lim_upper_closed'][i])}, "
      f"+1sigma {window(d['exp_lim_lower'][i], d['exp_lim_lower_closed'][i])}")
sig = f"exp_lim/signal_{LD}_alpha_max.txt"
for name, ko, kc, q in (("observed", "obs_lim", "closed_obs_lim", -1.0), ("expected", "exp_lim", "closed_exp_lim", 0.5)):
    lo = np.array([x if x is not None else -1 for x in d[ko]], float)
    hi = np.array([x if x is not None else -1 for x in d[kc]], float)
    m = lo > 0
    if not m.any():
        print(f"{name}: no exclusion"); continue
    mc = hi[m & (hi > 0)]; op = e[m & (hi <= 0)]
    print(f"{name}: lowest excluded eps on the grid {e[m].min():.3g}, interpolated {tip(sig, LT, q):.3g}; "
          f"max closed m_chi {mc.max() if len(mc) else -1:.3g} TeV; open windows at {len(op)} eps points"
          + (f" ({op.min():.3g} to {op.max():.3g})" if len(op) else ""))
fl = f"exp_lim/signal_{LD}_angfloat_livetime_{LT}_limit/exclusion_limits.json"
if os.path.exists(fl):
    d, e, i = at_ref(fl)
    print(f"floating, eps = {e[i]:g}: observed {window(d['obs_lim'][i], d['closed_obs_lim'][i])}; "
          f"expected {window(d['exp_lim'][i], d['closed_exp_lim'][i])}")
if SIGLOG and os.path.exists(SIGLOG):
    for l in open(SIGLOG):
        if re.search(r"strongest|at that mass|winning", l):
            print("sigma:" + l.rstrip())
