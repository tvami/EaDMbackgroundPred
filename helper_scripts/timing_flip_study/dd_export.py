#!/usr/bin/env python3
# Export the sigma_SI envelope (median, 68%, 95%) for v31 and v33 plus the DD context curves
# usage: dd_export.py <out json>   (cmsenv only, run from CMSSW_14_1_0_pre4/src)
import sys, json
import numpy as np
sys.path.insert(0, "helper_scripts")
from plotSigmaVsMass_CMSstyle import best_over_epsilon, DD_CURVES  # noqa: E402
import load_dd  # noqa: E402

TAB = "exp_lim/signal_rpf2x0_Binningv13_Input{}_mergedDepths_SR_Blind_tracker_core_lowmass_alpha_max.txt"
rows = []
for v in ("v31", "v33"):
    m, med, lo68, hi68, _, _ = best_over_epsilon(TAB.format(v), 20.7, 0.23, "sigma", False, band="68")
    _, _, lo95, hi95, _, _ = best_over_epsilon(TAB.format(v), 20.7, 0.23, "sigma", False, band="95")
    for i in range(len(m)):
        rows.append({"series": v, "m_gev": float(m[i] * 1000), "med": float(med[i]), "lo68": float(lo68[i]),
                     "hi68": float(hi68[i]), "lo95": float(lo95[i]), "hi95": float(hi95[i])})
for stem, *_ in DD_CURVES:  # context curves, below the 100 GeV capture cut as in the AN figure
    mass, sigma, label = load_dd.load(stem)
    keep = mass <= 100
    for a, b in zip(mass[keep][::max(1, keep.sum() // 60)], sigma[keep][::max(1, keep.sum() // 60)]):
        rows.append({"series": label, "m_gev": float(a), "med": float(b), "lo68": None, "hi68": None, "lo95": None, "hi95": None})
json.dump(rows, open(sys.argv[1], "w"))
v = {s: {r["m_gev"]: r["med"] for r in rows if r["series"] == s} for s in ("v31", "v33")}
for mm in sorted(set(v["v31"]) & set(v["v33"])):
    print(f"{mm:9.0f} GeV  v31 {v['v31'][mm]:.3g}  v33 {v['v33'][mm]:.3g}  ratio {v['v33'][mm] / v['v31'][mm]:.3f}")
