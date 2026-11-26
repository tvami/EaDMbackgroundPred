#!/usr/bin/env python3
"""Point-by-point HybridNew / Bayesian N95 (obs and expected quantiles) and the flux ranges quoted in the paper."""
import json
O = "/ceph/cms/store/user/tvami/EarthAsDM/work/arc4_appB_hn"
r = json.load(open(f"{O}/out/hn_limits.json")); c = json.load(open(f"{O}/cards/cases.json"))
print(f"{'case':11s} {'x':>6s} | {'N95 obs HN':>10s} {'Bayes':>6s} {'ratio':>5s} | {'exp50 HN':>8s} {'Bayes':>6s} {'ratio':>5s} | ratios 2.5/16/84/97.5 | Phi95 obs HN")
rat = {"mom": {"obs": [], "exp": []}, "cos": {"obs": [], "exp": []}}
for k, v in r.items():
    if k == "unit_n0":
        print(f"unit test n=0, b~0: N95 = {v['obs']:.3f} (exact 2.996)"); continue
    cc = c[k]; t = k[:3]; x = cc.get("pt_med", cc.get("cos_lo"))
    ro, re = v["obs"] / v["bay_obs"], v["exp"][2] / v["bay_exp"][2]
    rat[t]["obs"].append(ro); rat[t]["exp"].append(re)
    print(f"{k:11s} {x:6.0f} | {v['obs']:10.3f} {v['bay_obs']:6.3f} {ro:5.3f} | {v['exp'][2]:8.3f} {v['bay_exp'][2]:6.3f} {re:5.3f} | "
          + " ".join(f"{a / b:.2f}" for a, b in zip([v['exp'][i] for i in (0, 1, 3, 4)], [v['bay_exp'][i] for i in (0, 1, 3, 4)]))
          + f" | {v['obs'] * cc['conv']:.2e}")
for t in rat:
    print(t, "obs ratio %.3f-%.3f, median exp ratio %.3f-%.3f" % (min(rat[t]["obs"]), max(rat[t]["obs"]), min(rat[t]["exp"]), max(rat[t]["exp"])))
fl = [v["obs"] * c[k]["conv"] for k, v in r.items() if k.startswith("mom")]
fa = [v["obs"] * c[k]["conv"] for k, v in r.items() if k.startswith("cos")]
print("pT 0.25-5 TeV obs flux range %.2e - %.2e (P=10 TeV point excluded: %.2e)" % (min(fl[:-1]), max(fl[:-1]), fl[-1]))
print("cos -1..-0.4 obs flux range %.2e - %.2e" % (min(fa), max(fa)))
