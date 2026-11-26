#!/usr/bin/env python3
"""Task list for the HybridNew grids: per card, NPTS geometric r points over
[0.6 x min(Bayes exp 2.5%, obs), 1.4 x max(Bayes exp 97.5%, obs)], SEEDS seeds of NT toys each."""
import json, numpy as np
O = "/ceph/cms/store/user/tvami/EarthAsDM/work/arc4_appB_hn"
NPTS, SEEDS = 50, (1, 2)
c = json.load(open(f"{O}/cards/cases.json"))
with open(f"{O}/tasks.txt", "w") as f:
    for k, v in c.items():
        lo = 0.6 * min(v.get("bay_exp", [3.0])[0], v.get("bay_obs", 3.0))
        hi = 1.4 * max(v.get("bay_exp", [3.0] * 5)[-1], v.get("bay_obs", 3.0))
        for r in np.geomspace(lo, hi, NPTS):
            for s in SEEDS:
                f.write(f"{k} {r:.5f} {s}\n")
        print(k, f"{lo:.3f} {hi:.3f}")
