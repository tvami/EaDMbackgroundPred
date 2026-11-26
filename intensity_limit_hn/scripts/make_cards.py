#!/usr/bin/env python3
"""Counting cards for the App. B flux limit with HybridNew CLs. Inputs identical to arc3_flux (Bayesian, published):
  mom_P<P> : 5 SR bins (4 LOW + merged >1027), n, B-only post-fit b, sb; signal rate = eps-shape normalized to 1 total
  cos<lo>  : one bin per cos(zenith) bin at p = 1 TeV, pT > 200 GeV, b = 18.995 x FAIL fraction; signal rate 1
  unit_n0  : n = 0, negligible b (unit test, CLs N95 must be 3.0)
Background uncertainty = lnN kappa = 1 + sb/b per bin (independent bins). No signal systematics. r95 = N95.
Also writes cards/cases.json with the Bayesian obs/exp per case (for the grid range and the comparison)."""
import json
import numpy as np

W = "/ceph/cms/store/user/tvami/EarthAsDM/work"
O = f"{W}/arc4_appB_hn"
fl = json.load(open(f"{W}/arc3_flux/out/flux_limits.json"))
n5, b5, s5 = fl["nobs"], fl["bkg"], fl["bkg_err"]
iso = {r["P"]: r for r in fl["curves"]["iso"]}
band = {r["P"]: r for r in json.load(open(f"{W}/arc3_flux/out/expected_bands_iso.json"))}
ang = json.load(open(f"{W}/arc3_flux/out/limit_vs_angle_P1000_cos.json"))

PS = [P for P in sorted(band) if P >= 250 and band[P]["pt_med"] < 6900] + [10000]  # points drawn in the paper figure
cases = {}
for P in PS:
    r = iso[P]; et = r["eps_tot"]; conv = 1.0 / (fl["T_h"] * 3600. * fl["AOmega_flt_cm2sr"] * et)
    cases[f"mom_P{P}"] = dict(n=n5, b=b5, sb=s5, f=list(np.array(r["eps_bins"]) / et), conv=conv, P=P,
                              pt_med=band[P]["pt_med"], bay_obs=r["N95_all"], bay_exp=[x / conv for x in band[P]["exp"]])
for r in ang:
    if r["eps"] <= 0.01:  # same selection as the paper figure (cos < -0.4)
        continue
    cases[f"cos{r['cos_lo']:+.1f}"] = dict(n=[r["n"]], b=[r["b"]], sb=[r["sb"]], f=[1.0], cos_lo=r["cos_lo"], cos_hi=r["cos_hi"],
                                          eps=r["eps"], bay_obs_flux=r["obs"], bay_exp_flux=r["exp"])
cases["unit_n0"] = dict(n=[0], b=[1e-4], sb=[1e-5], f=[1.0])

# conversion factors for the angular bins: same formula as limit_vs_angle.py (T x aom_bin x eps)
import sys
sys.path.insert(0, f"{W}/arc3_flux/scripts"); sys.path.insert(0, f"{W}/arc_angular/scripts")
from angular_and_candle import aom_bin
T = fl["T_h"] * 3600.
for k, c in cases.items():
    if k.startswith("cos"):
        lo, hi = -c["cos_hi"], (1.0001 if c["cos_lo"] <= -1.0 else -c["cos_lo"])  # as limit_vs_angle.py
        c["conv"] = 1.0 / (T * aom_bin(lo, hi) * c["eps"])
        c["bay_obs"] = c["bay_obs_flux"] / c["conv"]; c["bay_exp"] = [x / c["conv"] for x in c["bay_exp_flux"]]


def card(name, n, b, sb, f):
    nb = len(n)
    L = [f"imax {nb}", "jmax 1", "kmax *", "-" * 40,
         "bin " + " ".join(f"b{i}" for i in range(nb)),
         "observation " + " ".join(str(int(x)) for x in n), "-" * 40,
         "bin " + " ".join(f"b{i} b{i}" for i in range(nb)),
         "process " + " ".join("sig bkg" for _ in range(nb)),
         "process " + " ".join("0 1" for _ in range(nb)),
         "rate " + " ".join(f"{fi:.6g} {bi:.6g}" for fi, bi in zip(f, b)), "-" * 40]
    for i in range(nb):
        L.append(f"bkg{i} lnN " + " ".join(("- %.4f" % (1 + sb[i] / b[i])) if j == i else "- -" for j in range(nb)))
    open(f"{O}/cards/{name}.txt", "w").write("\n".join(L) + "\n")


for k, c in cases.items():
    card(k, c["n"], c["b"], c["sb"], c["f"])
    print(k, "n", c["n"], "N95 Bayes obs", round(c.get("bay_obs", 3.0), 3), "exp", np.round(c.get("bay_exp", []), 2))
json.dump(cases, open(f"{O}/cards/cases.json", "w"), indent=1)
