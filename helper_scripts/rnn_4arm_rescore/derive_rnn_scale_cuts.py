"""Derive the CMS_EXO26004_RNN_scale +/-4% working-point cuts for a given network.

The systematic is implemented as a SHIFT of the RNN working point, so an event
migrates between pass and fail and pass+fail is conserved. The two cuts are the ones
that move the signal efficiency, AVERAGED OVER THE 18 depth-e4 mass points, by +4%
and -4% relative to nominal.

Averaging over masses rather than re-deriving per sample is deliberate: a per-sample
cut would impose exactly 4% everywhere and destroy the pT/n_Seg shape content, which
is the entire reason this is a shape systematic and not the lnN it started as. The
residual per-mass spread around 4% IS the shape.

Validated against the documented v5 pair: at cut 0.9999 the 'old_v5' column of
out/sig_e4_<m>.npz gives nominal 0.5223 (documented 0.5225) and the documented cuts
0.9998533130 / 0.9999332428 reproduce ratios 1.0399 / 0.9600.

Usage:
    python3 derive_rnn_scale_cuts.py --column old_v5 --suffix _shift8 --wp 0.99999
"""
import argparse
import glob
import os

import numpy as np

MASSES = [1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000,
          10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000]

p = argparse.ArgumentParser()
p.add_argument('--column', default='old_v5',
               help="score column in the npz, e.g. old_v5, E1_match, arm3_shift8")
p.add_argument('--suffix', default='',
               help="npz filename suffix; '_shift8' selects the 8 ns-shifted evaluation")
p.add_argument('--wp', type=float, default=0.99999, help="nominal working point")
p.add_argument('--delta', type=float, default=0.04, help="target efficiency shift")
p.add_argument('--outdir', default='out')
args = p.parse_args()


def load():
    s = {}
    for m in MASSES:
        f = os.path.join(args.outdir, f'sig_e4_{m}{args.suffix}.npz')
        if not os.path.exists(f):
            raise SystemExit(f'missing {f}')
        z = np.load(f)
        if args.column not in z:
            raise SystemExit(f'{f} has no column {args.column!r}; has {list(z.files)}')
        s[m] = z[args.column].astype(np.float64)
    return s


def eff(scores, cut):
    """Efficiency averaged over the 18 mass points."""
    return float(np.mean([(v >= cut).mean() for v in scores.values()]))


def solve(scores, target, lo, hi):
    """Bisect for the cut giving `target` efficiency.

    Bisection runs in u = -log10(1 - cut), because the interesting cuts all sit within
    1e-4 of 1.0 and a linear search there loses resolution immediately.
    """
    ulo, uhi = -np.log10(1 - lo), -np.log10(1 - hi)
    for _ in range(200):
        um = 0.5 * (ulo + uhi)
        e = eff(scores, 1 - 10 ** (-um))
        # efficiency falls as the cut tightens (u grows)
        if e > target:
            ulo = um
        else:
            uhi = um
    return 1 - 10 ** (-0.5 * (ulo + uhi))


scores = load()
nom = eff(scores, args.wp)
print(f'column={args.column!r}  suffix={args.suffix!r}  working point={args.wp!r}')
print(f'  nominal efficiency (mean over {len(MASSES)} masses): {nom:.4f}')

# 'up' = looser cut = higher efficiency; 'down' = tighter cut. The script that consumes
# these asserts 0 < up < down < 1.
up = solve(scores, nom * (1 + args.delta), 0.5, args.wp)
down = solve(scores, nom * (1 - args.delta), args.wp, 1 - 1e-9)

print(f'  +{args.delta:.0%} eff cut (up)  : {up:.10f}   -> {eff(scores, up) / nom:.4f} x nominal')
print(f'  -{args.delta:.0%} eff cut (down): {down:.10f}   -> {eff(scores, down) / nom:.4f} x nominal')

print('\n  per-mass ratio at the global cuts (the spread IS the shape):')
print(f"    {'MinP':>7}{'nominal':>10}{'up':>9}{'down':>9}")
ru, rd = [], []
for m in MASSES:
    v = scores[m]
    e0 = (v >= args.wp).mean()
    if e0 == 0:
        continue
    a, b = (v >= up).mean() / e0, (v >= down).mean() / e0
    ru.append(a)
    rd.append(b)
    print(f'    {m:>7}{e0:10.4f}{a:9.3f}{b:9.3f}')
print(f'    spread: up {min(ru):.3f}-{max(ru):.3f}   down {min(rd):.3f}-{max(rd):.3f}')

print(f'\n  pass to run_ntuple_processing_batch.sh as arguments 9 and 10:')
print(f'    {up:.10f} {down:.10f}')
