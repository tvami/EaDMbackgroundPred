#!/usr/bin/env python3
"""Signal efficiency at MATCHED background rate, not at a fixed score cut.

Comparing arms at the same S >= 0.9999 is not apples-to-apples: each network has
its own score calibration, and the retrained arms pass 4-7x more data than the
deployed v5 at that value. So part of their apparent signal-efficiency gain is just
a looser cut. This finds, per arm, the threshold that reproduces the deployed
network's DATA pass rate, then quotes the signal efficiency there.

The reference rate is taken in VR2 (pT < 200 GeV) on purpose. VR2 is not the signal
region, so its pass region is freely quotable -- whereas the pT>200 sample at
S >= 0.9999 is SR territory, which the analysis blinds from 1027 GeV up.
"""
import glob, re, os
import numpy as np

SD = os.path.dirname(os.path.abspath(__file__))
import sys
DEPTH = (sys.argv[1] if len(sys.argv) > 1 else os.environ.get('DEPTH', 'e4')).strip()
# full match: see plot_arms_signal_eff.py
FPAT = re.compile(rf'sig_{DEPTH}_(\d+)\.npz$')
REF = 'RNNScore'
ARMS = ['RNNScore', 'arm2_control', 'arm3_shift8', 'arm4_smear12',
        'arm5_match', 'arm1_center',
        # round 2, the variant grid (clusters 371701 / 371725-371729)
        'arm5b_match', 'E1_match', 'J_jitter2p8', 'Jo_jitter1p5',
        'N_noNeutrino', 'NJ_noNu_E1',
        # round 3, the one-variable gradients (clusters 371730 / 371731)
        'Sp_shift13', 'Wp_smear11',
        # round 4, the cone pair (clusters 372361 / 372362) -- read as C89 minus C75n
        'cone89', 'cone75n']
CUT = 0.9999
HELD_OUT = (1000, 5000, 10000, 90000)
# MEASURED by patched_v5_baseline.py (cluster 371700), not the older 0.88 estimate.
PATCH = 0.869


def load(pat):
    fs = sorted(glob.glob(f'{SD}/out/{pat}'))
    zs = [np.load(f) for f in fs]
    return {k: np.concatenate([z[k] for z in zs]).astype(np.float64) for k in ARMS}


vr2 = load('data_vr2_*.npz')
target = float(np.mean(vr2[REF] >= CUT))
print(f'VR2 data pass rate of the deployed network at S>={CUT}: {target:.6e} '
      f'({int(round(target * len(vr2[REF])))} of {len(vr2[REF])} events)')
print('\nthreshold that reproduces that VR2 data rate, per arm:')
thr = {}
for k in ARMS:
    # quantile of the data score distribution: the (1-target) quantile is the cut
    # passing exactly `target` of the data
    thr[k] = float(np.quantile(vr2[k], 1.0 - target))
    got = float(np.mean(vr2[k] >= thr[k]))
    print(f'  {k:14s} S >= {thr[k]:.8f}   (VR2 data rate {got:.6e})')

# ---------------------------------------------------------------- signal at that cut
files = sorted([f for f in glob.glob(f'{SD}/out/sig_{DEPTH}_*.npz')
                if FPAT.search(os.path.basename(f))],
               key=lambda x: int(FPAT.search(os.path.basename(x)).group(1)))
if not files:
    raise SystemExit(f'no sig_{DEPTH}_*.npz in {SD}/out')
print(f'\n=== SR signal efficiency, {DEPTH}: FIXED {CUT} vs MATCHED VR2 data rate ===')
hdr = f'{"M_DM":>8s} {"held":>5s}'
for k in ARMS:
    hdr += f' {k[:11]:>12s}'
print(hdr + '     (fixed cut | matched rate)')
acc_fixed = {k: [] for k in ARMS}
acc_iso = {k: [] for k in ARMS}
for p in files:
    m = int(FPAT.search(os.path.basename(p)).group(1))
    z = np.load(p)
    row = f'{2 * m / 1000.:7.1f}T {"Y" if m in HELD_OUT else "-":>5s}'
    for k in ARMS:
        s = z[k].astype(np.float64)
        ef, ei = float(np.mean(s >= CUT)), float(np.mean(s >= thr[k]))
        acc_fixed[k].append(ef)
        acc_iso[k].append(ei)
        row += f' {ef:5.3f}|{ei:5.3f}'
    print(row)

sel = [i for i, p in enumerate(files)
       if int(FPAT.search(os.path.basename(p)).group(1)) in HELD_OUT]
print('\n--- held-out masses only (unbiased for arms 1-5) ---')
print(f'{"arm":>14s} {"fixed 0.9999":>13s} {"matched rate":>13s} '
      f'{"vs v5 fixed":>12s} {"vs v5 matched":>14s} {f"vs deployed (x{PATCH})":>20s}')
rf = np.mean([acc_fixed[REF][i] for i in sel])
ri = np.mean([acc_iso[REF][i] for i in sel])
for k in ARMS:
    f_ = np.mean([acc_fixed[k][i] for i in sel])
    i_ = np.mean([acc_iso[k][i] for i in sel])
    print(f'{k:>14s} {f_:13.4f} {i_:13.4f} {f_ / rf:12.3f} {i_ / ri:14.3f} '
          f'{i_ / (rf * PATCH):20.3f}')
print(f'\nThe last column is the honest bar: the deployed working point is the v5\n'
      f'network WITH its +8 ns patch, i.e. v5 x {PATCH} (measured, cluster 371700), and\n'
      f'an arm that removes the need for the patch recovers that {(1-PATCH)*100:.1f}%.')
