#!/usr/bin/env python3
"""Top-up toys where the seed halves disagree beyond the main-result criterion (halves within 5% for obs,
median and +-1 sigma, 10% for +-2 sigma): for every (card, obs/expected quantile) with
|half1 - half2|/2 > THR x value (THR = SCALE x [0.025, 0.05, 0.025, 0.025, 0.025, 0.05]), add seeds 3..2+NS (2500 toys each) on the grid points within +-HALF steps
of the crossing (usage: make_topup.py SCALE NS card...). Writes tasks_topup.txt (same format as tasks.txt)."""
import json, sys, numpy as np
O = "/ceph/cms/store/user/tvami/EarthAsDM/work/arc4_appB_hn"
import os
SCALE, HALF = float(sys.argv[1]), int(os.environ.get("TOPUP_HALF", 2))
SEED0 = int(os.environ.get("TOPUP_SEED0", 3))  # round 2: TOPUP_SEED0=7 TOPUP_ALWAYS= TOPUP_HALF=4
THRS = [SCALE * t for t in (0.025, 0.05, 0.025, 0.025, 0.025, 0.05)]
NS = int(sys.argv[2]); cards = sys.argv[3:]
ALWAYS = tuple(int(x) for x in os.environ.get("TOPUP_ALWAYS", "1,2").split(",") if x)  # 2.5% and 16% expected: CLsb ~ 0.001-0.008 there, so every card gets the top-up
res = json.load(open(f"{O}/out/hn_limits.json"))
grid = {}
for l in open(f"{O}/tasks.txt"):
    k, r, s = l.split(); grid.setdefault(k, set()).add(r)
out = set()
for k in cards:
    v = res[k]; rs = sorted(grid[k], key=float); rf = np.array([float(x) for x in rs])
    vals = [v["obs"]] + v["exp"]
    for j, (x, st, thr) in enumerate(zip(vals, v["stab"], THRS)):
        if st > thr * x or j in ALWAYS:
            i = int(np.argmin(abs(np.log(rf / x))))
            for r in rs[max(0, i - HALF):i + HALF + 1]:
                for s in range(SEED0, SEED0 + NS):
                    out.add((k, r, s))
            print(k, ["obs", "2.5", "16", "50", "84", "97.5"][j], f"{x:.3f} +- {st:.3f}")
with open(f"{O}/tasks_topup" + ("" if SEED0 == 3 else f"_s{SEED0}") + ".txt", "w") as f:
    for k, r, s in sorted(out):
        f.write(f"{k} {r} {s}\n")
print(len(out), "top-up points")
