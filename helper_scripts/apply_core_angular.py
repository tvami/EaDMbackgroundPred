#!/usr/bin/env python3
"""Scale the signal-rate rows of a limit input file by the core-model angular efficiency factors.

The selection efficiency is measured on CMSCGEN samples with a U-shaped arrival-angle distribution;
the core model sends the muons vertically. Per DM mass, the factor R = N_core / N_nominal of the
depth-merged SR yield (work/arc_angular) multiplies the predicted rate. The pT shape is not reweighted.
"""
import argparse, json, os
import numpy as np
p = argparse.ArgumentParser()
p.add_argument("sigfile", help="exp_lim/signal_<LIMITDIR>_alpha_max.txt, scaled in place")
p.add_argument("-k", "--key", default="R_core_ang_g", help="factor column (R_core_ang_g nominal, R_core_ang = alpha<3 deg)")
p.add_argument("-f", "--factors", default=os.path.join(os.path.dirname(os.path.abspath(__file__)), "core_angular_factors.json"))
a = p.parse_args()
rows = json.load(open(a.factors))["rows"]
m = np.array([r["m_chi"] for r in rows], float); R = np.array([r[a.key] for r in rows], float)
ok = R > 0; m, R = m[ok], R[ok]  # 400 GeV is below the vertical range threshold
lines = open(a.sigfile).read().splitlines()
masses = [float(x) for x in lines[1].split(",")]
fac = [float(np.interp(np.log(x), np.log(m), R)) for x in masses]  # log-mass interpolation, flat outside
out = lines[:3] + [",".join(repr(float(x) * f) for x, f in zip(l.split(","), fac)) for l in lines[3:] if l.strip()]
open(a.sigfile, "w").write("\n".join(out) + "\n")
print("core angular factors:", " ".join(f"{x/1000:g}TeV:{f:.2f}" for x, f in zip(masses, fac)))
