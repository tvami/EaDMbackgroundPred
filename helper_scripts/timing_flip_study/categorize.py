#!/usr/bin/env python3
# Category table for RNN-PASS vs FAIL events from extract_timing.py output
import sys
import numpy as np

d = dict(np.load(sys.argv[1]))
WP = 0.99999
P = d["rnn"] >= WP
F = ~P
both = (d["ntop"] > 0) & (d["nbot"] > 0)
dt = d["t0top"] - d["t0bot"]


def frac(m, s):
    n = int((m & s).sum()); N = int(s.sum())
    return f"{n:7d} / {N:7d} = {100.0 * n / max(N, 1):6.2f}%"


print(f"PASS events: {P.sum()}, FAIL events kept (1/100 prescale): {F.sum()}")
print("pT of PASS: median %.1f, max %.1f" % (np.median(d["pt"][P]), d["pt"][P].max()))
rows = [
    ("both hemispheres", both),
    ("top only", (d["ntop"] > 0) & (d["nbot"] == 0)),
    ("bottom only", (d["ntop"] == 0) & (d["nbot"] > 0)),
    ("no top/bottom (side only)", (d["ntop"] == 0) & (d["nbot"] == 0)),
    ("muon_n == 1", d["muon_n"] == 1),
    ("muon_n == 2", d["muon_n"] == 2),
    ("muon_n >= 3", d["muon_n"] >= 3),
    ("any invalid t0 segment", d["nseg"] > d["nvalid"]),
    ("any side segment |y|<2m", d["nside"] > 0),
    ("any >15 ns outlier", d["nout"] > 0),
    ("any ~25 ns (18-32) outlier", d["nbx"] > 0),
    ("both hemi & dt(top-bot) > 50 ns", both & (dt > 50)),
    ("both hemi & dt(top-bot) > 25 ns", both & (dt > 25)),
    ("both hemi & |dt| < 25 ns", both & (abs(dt) < 25)),
    ("both hemi & dt < -25 ns", both & (dt < -25)),
    ("t0-vs-y slope > +3 ns/m", d["slope"] > 3),
    ("any twin segment (>15 ns apart)", d["ntwin"] > 0),
    ("earliest seg is a twin", d["earlytwin"]),
    ("earliest seg is a bottom twin", d["earlytwinbot"]),
    ("dt>50 OR early bottom twin OR inval", (both & (dt > 50)) | d["earlytwinbot"] | (d["nseg"] > d["nvalid"])),
]
print(f"{'category':34s} {'PASS':>28s}   {'FAIL':>28s}")
for name, m in rows:
    print(f"{name:34s} {frac(m, P)}   {frac(m, F)}")

for lab, s in (("PASS", P), ("FAIL", F)):
    b = s & both
    print(f"{lab} both-hemi dt(top-bot): median {np.nanmedian(dt[b]):.1f} ns, "
          f"16/84% {np.nanpercentile(dt[b], 16):.1f}/{np.nanpercentile(dt[b], 84):.1f}; "
          f"nvalid median {np.median(d['nvalid'][s]):.0f}, yspan median {np.median(d['yspan'][s]) / 100:.1f} m")
