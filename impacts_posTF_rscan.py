#!/usr/bin/env python3
# r-hat and its 68% interval from a profile scan (fresh + warm starts), written into a RooFit impacts json.
# usage: AREA=<dir with card.root> impacts_posTF_rscan.py <json>
import sys, json
import unblind_impacts_roofit as U
U.load()
G = U.G; w = G["w"]; ROOT = G["ROOT"]; nll = G["nll"]
v0, r0, snap = U.fitmin({})
best = {n: v for n, (v, e) in snap.items()}


def warm(x):
    for n, v in best.items():
        w.var(n).setVal(v)
    r = w.var("r"); r.setVal(x); r.setConstant(True)
    for s in (0, 1, 2):
        m = ROOT.RooMinimizer(nll); m.setPrintLevel(-1); m.setStrategy(s); m.minimize("Minuit2", "Migrad")
    v = nll.getVal(); r.setConstant(False)
    return v


q = lambda x: 2 * (min(U.fitmin({"r": x})[0], warm(x)) - v0)
grid = [round(max(0.0, r0 - 0.5) + 0.1 * i, 2) for i in range(12)]
vals = [(x, q(x)) for x in grid]
qmin = min(min(v for _, v in vals), 0.0)
xm = r0 if qmin == 0.0 else min(vals, key=lambda t: t[1])[0]
print("grid 2dNLL:", [(x, round(v - qmin, 3)) for x, v in vals])


def bis(a, b, up):
    for _ in range(16):
        m = 0.5 * (a + b)
        if ((q(m) - qmin) < 1) == up:
            a = m
        else:
            b = m
    return 0.5 * (a + b)


lo = 0.0 if q(0.0) - qmin < 1 else bis(0.0, xm, False)
hi = bis(xm, 8.0, True)
print(f"r_hat {xm:.3f} (free fit {r0:.3f}); 68%: [{lo:.3f}, {hi:.3f}]; 2dNLL(0) = {q(0.0) - qmin:.2f}")
d = json.load(open(sys.argv[1])); d["POIs"][0]["fit"] = [lo, xm, hi]
for p in d["params"]:
    p.pop("q", None)
json.dump(d, open(sys.argv[1], "w"), indent=1)
