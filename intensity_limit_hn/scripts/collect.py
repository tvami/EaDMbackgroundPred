#!/usr/bin/env python3
"""HybridNew CLs N95 from the stored toys of each grid (logic of hybridnew_v35/limits_from_grid.py):
observed CLs from the data test statistic, expected quantile p from the b-only toys (q* = (1-p) percentile,
CLs = CLsb(q*)/CLb(q*), CLb(q*) = p for a continuous q but not with the ties of a Poisson count); N95 = log-linear fit of CLs(r) over the points around the 0.05 crossing.
Toy stability: the same extraction on the odd and on the even seeds separately (half the toys each).
Writes out/hn_limits.json, out/expected_bands_iso_hn.json, out/limit_vs_angle_P1000_cos_hn.json
(same schema as arc3_flux, so the plotting scripts only change the input file)."""
import glob, json, re, sys
import numpy as np
import ROOT
ROOT.gErrorIgnoreLevel = ROOT.kError
O = "/ceph/cms/store/user/tvami/EarthAsDM/work/arc4_appB_hn"
QUANTS = [0.025, 0.16, 0.5, 0.84, 0.975]


def load(files):
    pts = {}
    for fn in files:
        f = ROOT.TFile(fn); d = f.Get("toys")
        for k in d.GetListOfKeys():
            o = k.ReadObj(); r = float(re.search(r"_r([0-9.e+-]+)_", k.GetName()).group(1))
            if r in pts: pts[r].Append(o)
            else: pts[r] = o.Clone()
        f.Close()
    out = []
    for r in sorted(pts):
        h = pts[r]
        sb = np.sort(np.array(h.GetAltDistribution().GetSamplingDistribution()))
        b = np.sort(np.array(h.GetNullDistribution().GetSamplingDistribution()))
        out.append((r, h.GetTestStatisticData(), sb, b))
    return out


TOL = 2e-3  # minimizer noise on q: equal Poisson counts give q equal to ~1e-4 only; ties must count as >=


def frac_ge(a, x):
    return 1.0 - np.searchsorted(a, x - TOL, side="left") / len(a)


def crossing(rs, cls, alpha=0.05, half=4):
    rs, cls = np.array(rs), np.array(cls)
    idx = np.where((cls[:-1] > alpha) & (cls[1:] <= alpha))[0]
    if len(idx) == 0:
        return float("nan"), 0
    i = idx[0]; lo, hi = max(0, i - half + 1), min(len(rs), i + half + 1)
    p = np.polyfit(rs[lo:hi], np.log(np.clip(cls[lo:hi], 1e-6, None)), 1)
    return float((np.log(alpha) - p[1]) / p[0]), int(len(idx))


def limits(g):
    rs = [x[0] for x in g]
    res = [crossing(rs, [frac_ge(sb, q) / max(frac_ge(b, q), 1e-9) for r, q, sb, b in g])]
    for p in QUANTS:
        # CLb evaluated at q* (not set to p): identical for a continuous q, correct with the ties of Poisson counts
        qs = [np.quantile(b, 1 - p) for r, q, sb, b in g]
        res.append(crossing(rs, [frac_ge(sb, x) / max(frac_ge(b, x), 1e-9) for x, (r, q, sb, b) in zip(qs, g)]))
    return [v for v, n in res], [n for v, n in res]


cases = json.load(open(f"{O}/cards/cases.json"))
only = sys.argv[1:]
res = {}
for k, c in cases.items():
    if only and k not in only:
        continue
    allf = glob.glob(f"{O}/grids/{k}/higgsCombine.{k}.r*.HybridNew.mH120.*.root")
    seed = lambda f: int(f.split(".")[-2])
    fs = {h: sorted(f for f in allf if seed(f) % 2 == h) for h in (1, 0)}  # halves: odd / even seeds (top-ups: seeds >= 3)
    if not fs[1]:
        continue
    v, ncross = limits(load(fs[1] + fs[0]))
    v1, _ = limits(load(fs[1])); v2, _ = limits(load(fs[0])) if fs[0] else (v1, None)
    res[k] = dict(obs=v[0], exp=v[1:], ncross=ncross, half1=v1, half2=v2, nfiles=len(allf),
                  stab=[abs(a - b) / 2 for a, b in zip(v1, v2)], bay_obs=c.get("bay_obs", 3.0), bay_exp=c.get("bay_exp"))
    r = res[k]
    print(f"{k:11s} obs {r['obs']:6.3f} (Bayes {r['bay_obs']:6.3f}, ratio {r['obs']/r['bay_obs']:.3f})  exp "
          + " ".join(f"{x:6.3f}" for x in r["exp"]) + f"  +-{max(r['stab']):.3f}  ncross {ncross}", flush=True)
json.dump(res, open(f"{O}/out/hn_limits" + ("_partial" if only else "") + ".json", "w"), indent=1)
if only:
    sys.exit()

# flux-space files with the arc3_flux schema
bands = {r["P"]: r for r in json.load(open("/ceph/cms/store/user/tvami/EarthAsDM/work/arc3_flux/out/expected_bands_iso.json"))}
iso = [dict(P=c["P"], pt_med=c["pt_med"], obs=res[k]["obs"] * c["conv"], exp=[x * c["conv"] for x in res[k]["exp"]],
            obs_bayes=bands[c["P"]]["obs"], exp_bayes=bands[c["P"]]["exp"])
       for k, c in cases.items() if k.startswith("mom_")]
json.dump(iso, open(f"{O}/out/expected_bands_iso_hn.json", "w"), indent=1)
ang = [dict(cos_lo=c["cos_lo"], cos_hi=c["cos_hi"], eps=c["eps"], n=c["n"][0], b=c["b"][0], sb=c["sb"][0],
            obs=res[k]["obs"] * c["conv"], exp=[x * c["conv"] for x in res[k]["exp"]],
            obs_bayes=c["bay_obs_flux"], exp_bayes=c["bay_exp_flux"])
       for k, c in cases.items() if k.startswith("cos")]
json.dump(ang, open(f"{O}/out/limit_vs_angle_P1000_cos_hn.json", "w"), indent=1)
