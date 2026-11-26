#!/usr/bin/env python3
# Refine the RooFit impacts json: each +-1 sigma crossing found by bisection, every fit the best of
# three fresh starts and a warm start from the global minimum (the likelihood has a shallow second
# basin that fresh starts can fall into). usage: unblind_impacts_refine.py <area with card.root> <json>
import sys, json, math
from multiprocessing import Pool
import unblind_impacts_roofit as U

AREA, JS = sys.argv[1], sys.argv[2]
U.AREA = AREA
B = {}


def setup():
    U.load()
    v0, r0, snap = U.fitmin({})
    B.update(v0=v0, r0=r0, best={n: v for n, (v, e) in snap.items()})


def fit(name, x):
    G = U.G; w = G["w"]; ROOT = G["ROOT"]; nll = G["nll"]
    a = U.fitmin({name: x})
    for n, v in B["best"].items():
        w.var(n).setVal(v)
    w.var(name).setVal(x); w.var(name).setConstant(True); w.var("r").setConstant(False)
    for s in (0, 1, 2):
        m = ROOT.RooMinimizer(nll); m.setPrintLevel(-1); m.setStrategy(s); m.minimize("Minuit2", "Migrad")
    b = (nll.getVal(), w.var("r").getVal())
    w.var(name).setConstant(False)
    return min((a[0], a[1]), b)


def crossing(name, c, s, sign):
    q = lambda t: 2 * (fit(name, c + sign * t * s)[0] - B["v0"])
    lo, hi = 0.0, 1.0
    for _ in range(6):  # bracket 2dNLL = 1
        if q(hi) >= 1:
            break
        lo, hi = hi, hi * 2
    for _ in range(12):
        m = 0.5 * (lo + hi)
        if q(m) < 1:
            lo = m
        else:
            hi = m
    x = c + sign * 0.5 * (lo + hi)
    v, r = fit(name, x)
    return x, r, 2 * (v - B["v0"])


def refine(p):
    if not B:
        setup()
    lo, c, hi = p["fit"]
    gauss = p["type"] == "Gaussian"
    s_lo, s_hi = (1.0, 1.0) if gauss else (max(c - lo, 1e-9), max(hi - c, 1e-9))
    c = B["best"][p["name"]]
    xl, rl, ql = crossing(p["name"], c, s_lo, -1)
    xh, rh, qh = crossing(p["name"], c, s_hi, +1)
    r0 = B["r0"]
    return dict(p, fit=[xl, c, xh], r=[rl, r0, rh], impact_r=max(abs(rl - r0), abs(rh - r0)), q=[ql, qh])


if __name__ == "__main__":
    d = json.load(open(JS))
    with Pool(4) as pool:
        res = pool.map(refine, d["params"])
    setup()
    shift = d["POIs"][0]["fit"][1] - B["r0"]  # keep the r-hat from the profile scan as the reference
    for p in res:
        p["r"] = [x + shift for x in p["r"]]
    d["params"] = [{k: v for k, v in p.items() if k != "q"} for p in res]
    json.dump(d, open(JS, "w"), indent=1)
    for p in sorted(res, key=lambda p: -p["impact_r"])[:10]:
        r0 = p["r"][1]
        print(f'{p["name"][13:]:32s} theta {p["fit"][1]:+.3g}  dr {p["r"][0] - r0:+.3f}/{p["r"][2] - r0:+.3f}  2dNLL {p["q"][0]:.2f}/{p["q"][1]:.2f}', flush=True)
    print("REFINE DONE")
