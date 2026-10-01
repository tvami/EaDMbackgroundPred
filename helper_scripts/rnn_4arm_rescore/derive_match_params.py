#!/usr/bin/env python3
"""Derive the (shift, smear) that bring the label-0 MC t0 onto data.

Rationale: data is overwhelmingly downward-going cosmics, so the label-0 sample is
what should describe it. arm 3's +8 ns was tuned on RNN-score agreement rather than
on the t0 distribution, so re-derive the numbers from t0 directly.

The decomposition matters, because a per-EVENT smear can only touch one piece:

  t0(segment) = [per-event offset]  +  [within-event residual]
                 ^ shift and per-event smear act here
                                          ^ only a per-SEGMENT jitter acts here

So (shift, smear) are fitted on the per-event median t0 distribution, and the
within-event residual is reported separately to show what is left over -- that
leftover is the arm-5 territory the handover flagged.
"""
import os, sys, glob
import numpy as np

sys.path.insert(0, '/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/helper_scripts')
from rnn_input_prep import SENTINEL_LO, SENTINEL_HI

import ROOT
ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kError

CACHE = os.environ.get('CACHE', '/ceph/cms/store/user/tvami/EarthAsDM/'
                                'RNNtrainings/tensor_cache')
B = '/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.4_wRNN'
MAXEV = int(os.environ.get('MAXEV', '300000'))


def decompose_padded(t0):
    """(per-event median, within-event residuals) from a padded (N, nMax) t0 array."""
    v = (t0 > SENTINEL_LO) & (t0 < SENTINEL_HI)
    x = np.where(v, t0, np.nan)
    with np.errstate(all='ignore'):
        med = np.nanmedian(x, axis=1)
    ok = np.isfinite(med)
    res = (x[ok] - med[ok, None])
    return med[ok], res[np.isfinite(res)]


def decompose_jagged(evs):
    meds, res = [], []
    for a in evs:
        a = a[(a > SENTINEL_LO) & (a < SENTINEL_HI)]
        if a.size:
            m = np.median(a)
            meds.append(m)
            res.append(a - m)
    return np.asarray(meds), np.concatenate(res)


# ---- label 0 (cosmic MC, downward) from the cached training tensor -------------
fs = sorted(glob.glob(f'{CACHE}/raw_g0_c*.npy'))
if not fs:
    raise SystemExit(f'no cached label-0 tensor in {CACHE}')
t0_l0 = np.concatenate([np.load(f)[..., 0] for f in fs])
m_l0, r_l0 = decompose_padded(t0_l0)

# ---- data ---------------------------------------------------------------------
evs = []
for reg in ('sr', 'vr2'):
    ch = ROOT.TChain('tree')
    for f in sorted(glob.glob(f'{B}/Data/{reg}/matched_muon/'
                              f'skimmed_matched_muon_{reg}_Ntuplizer-Cosmics_*.root')):
        if '_All_' not in f:
            ch.Add(f)
    df = ROOT.RDataFrame(ch)
    if MAXEV:
        df = df.Range(MAXEV)
    raw = df.AsNumpy(['muon_dtSeg_t0timing'])['muon_dtSeg_t0timing']
    # copy=True is NOT optional. np.asarray on an RVec makes a VIEW into memory owned
    # by the RDataFrame result, and `evs` outlives it: `ch`/`df`/`raw` are rebound on
    # the next region, the first region's buffers are freed, and the entries this list
    # still points at become garbage. That silently corrupted every number below --
    # the data within-event residual came out sigma68 3.57 / IQR 3.16 (data NARROWER
    # than MC, ratios 0.969 / 0.753) when the true values are 5.41 / 5.97 (data WIDER,
    # 1.47 / 1.43), and it biased the per-event median too, giving shift 12.24 and
    # smear 7.21 instead of 11.59 and 8.29. Reading it back interactively segfaults
    # outright; here it just returned plausible-looking wrong numbers.
    evs += [np.array(v, dtype=np.float64, copy=True) for v in raw]
m_d, r_d = decompose_jagged(evs)


def stats(a, name):
    q = np.percentile(a, [16, 25, 50, 75, 84])
    # robust sigma from the central 68%: insensitive to the heavy tails that make
    # the plain RMS meaningless here
    print(f'  {name:28s} n={a.size:>10d}  median={np.median(a):+7.2f}  '
          f'RMS={a.std():7.2f}  IQR={q[3] - q[1]:6.2f}  sigma68={(q[4] - q[0]) / 2:6.2f}')
    return np.median(a), (q[4] - q[0]) / 2, q[3] - q[1]


print('=== per-EVENT median t0 (what shift + per-event smear can change) ===')
med0, s0, i0 = stats(m_l0, 'label 0 (cosmic MC, down)')
medd, sd, idd = stats(m_d, 'Run-3 Cosmics data')

print('\n=== WITHIN-event residual t0 - median (only a per-SEGMENT jitter changes) ===')
_, rs0, ri0 = stats(r_l0, 'label 0 (cosmic MC, down)')
_, rsd, rid = stats(r_d, 'Run-3 Cosmics data')

print('\n=== derived matching parameters (label 0 -> data) ===')
shift = medd - med0
print(f'  shift  = median(data) - median(label0) = {medd:+.2f} - ({med0:+.2f}) '
      f'= {shift:+.2f} ns')
print(f'         (independently: the documented data-MC offset is ~11.6 ns)')
var_gap = sd ** 2 - s0 ** 2
if var_gap > 0:
    smear = np.sqrt(var_gap)
    print(f'  smear  = sqrt(sigma68_data^2 - sigma68_label0^2) '
          f'= sqrt({sd:.2f}^2 - {s0:.2f}^2) = {smear:.2f} ns')
else:
    smear = 0.0
    print(f'  smear  = 0 ns  -- data is NARROWER than label 0 in per-event median '
          f'(sigma68 {sd:.2f} vs {s0:.2f}), so a smear, which can only WIDEN, '
          f'cannot match it.')
gap_iqr = idd ** 2 - i0 ** 2
print(f'  (cross-check on IQR: data {idd:.2f} vs label0 {i0:.2f} -> '
      f'{"widen" if gap_iqr > 0 else "NARROW, smear cannot help"})')

print('\n=== what shift+smear cannot fix: the within-event spread ===')
print(f'  data / label0 sigma68 of the residual = {rsd / rs0:.3f}')
print(f'  data / label0 IQR      of the residual = {rid / ri0:.3f}')
print('  A per-event smear leaves this ratio EXACTLY unchanged (it is the dt0/dy\n'
      '  gradient the discrimination rests on). Matching it needs a per-SEGMENT\n'
      '  jitter, which no arm has yet. Caveat: this pooled ratio is confounded by\n'
      '  the data/MC segment-multiplicity difference -- see residual_diagnostics.py\n'
      '  for the multiplicity-controlled version, which is the one to size a jitter on.')

print(f'\nDERIVED ARM PARAMETERS: T0_SHIFT={shift:.1f}  T0_SMEAR={smear:.1f}  '
      f'(T0_CENTER=none)')
print(f'  arm 5 (cluster 371516) was trained with T0_SHIFT=12.2 T0_SMEAR=7.2, which\n'
      f'  came from the pre-fix, memory-corrupted version of this script. If the\n'
      f'  numbers above differ, arm 5 is mistuned by that much -- judge it on the\n'
      f'  measured post-transform label-0/data agreement, not on these targets.')
