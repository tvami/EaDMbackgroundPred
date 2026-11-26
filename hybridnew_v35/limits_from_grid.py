#!/usr/bin/env python3
# CLs limits straight from the HybridNew grid (merged.root): observed from the stored data test statistic,
# expected quantile p from the b-only toys (q* = (1-p) percentile, CLs = CLsb(q*)/p);
# limit = log-linear fit of CLs(r) over the points around the 0.05 crossing.
# usage: limits_from_grid.py <grid.root> [<grid.root> ...]
import ROOT, re, sys, numpy as np
ROOT.gErrorIgnoreLevel = ROOT.kError
QUANTS = [0.025, 0.16, 0.5, 0.84, 0.975]

def load(fn):
    f = ROOT.TFile(fn); d = f.Get("toys"); pts = {}
    for k in d.GetListOfKeys():
        o = k.ReadObj(); r = float(re.search(r"_r([0-9.e+-]+)_", k.GetName()).group(1))
        if r in pts: pts[r].Append(o)
        else: pts[r] = o.Clone()
    out = []
    for r in sorted(pts):
        h = pts[r]
        sb = np.array(h.GetAltDistribution().GetSamplingDistribution()); b = np.array(h.GetNullDistribution().GetSamplingDistribution())
        out.append((r, h.GetTestStatisticData(), np.sort(sb), np.sort(b)))
    return out

def frac_ge(sorted_arr, x):  # fraction of toys with q >= x
    return 1.0 - np.searchsorted(sorted_arr, x, side="left") / len(sorted_arr)

def crossing(rs, cls, alpha=0.05, half=4):
    rs, cls = np.array(rs), np.array(cls)
    idx = np.where((cls[:-1] > alpha) & (cls[1:] <= alpha))[0]
    if len(idx) == 0: return float("nan"), 0
    i = idx[0]; lo, hi = max(0, i - half + 1), min(len(rs), i + half + 1)
    x, y = rs[lo:hi], np.log(np.clip(cls[lo:hi], 1e-6, None))
    p = np.polyfit(x, y, 1)
    return (np.log(alpha) - p[1]) / p[0], len(idx)

for fn in sys.argv[1:]:
    g = load(fn); rs = [x[0] for x in g]
    cls_obs = [frac_ge(sb, q) / max(frac_ge(b, q), 1e-9) for r, q, sb, b in g]
    res = [crossing(rs, cls_obs)]
    for p in QUANTS:
        cl = []
        for r, q, sb, b in g:
            qs = np.quantile(b, 1 - p)
            cl.append(frac_ge(sb, qs) / p)
        res.append(crossing(rs, cl))
    print(fn, "obs, 2.5, 16, 50, 84, 97.5:", "  ".join(f"{v:.4g}" + ("" if n == 1 else f"(x{n})") for v, n in res))
