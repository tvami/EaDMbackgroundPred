#!/usr/bin/env python3
"""Pre-screen candidate training variants from the cached tensor -- no training.

A training slot is 10 h. The post-transform input distribution costs seconds, and it
already tells you two of the three things that matter:

  1. does label 0 land on data (location AND width)?  -- what the arm is FOR
  2. how much class separation survives the transform? -- what the arm COSTS

Only the third (what the network then does with it) needs the slot. Anything that
wrecks 2 should never be submitted; arm 1 is the standing proof (full centering ->
separation 0.00 -> 0.205x the signal efficiency).

Usage: screen_variants.py            # the default grid
Env:   CACHE, MAXEV
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
MAXEV = int(os.environ.get('MAXEV', '150000'))
SEED = 20260728          # must match smear_t0's default, so this mirrors training

# (name, shift, smear, jitter, drop_neutrino)
GRID = [
    ('arm2  nominal',          0.0,  0.0, 0.0, False),
    ('arm3  shift8',           8.0,  0.0, 0.0, False),
    ('arm4  smear12',          0.0, 12.0, 0.0, False),
    ('arm5  12.2/7.2 (DONE)', 12.2,  7.2, 0.0, False),
    ('arm5b 11.6/8.3 (RUN)',  11.6,  8.3, 0.0, False),
    # --- THE SUBMITTED GRID (cluster list in HANDOVER_20260730) -----------------
    # E1 is the point that actually satisfies BOTH matching conditions. The two are
    # not independent: a per-event smear applied to an asymmetric distribution moves
    # its MEDIAN too (+0.59 ns at sigma 8.3), and sigma68 does not add in quadrature
    # for this distribution. derive_match_params.py solves them separately and so hits
    # neither -- which is why 12.2/7.2 (arm 5) and 11.6/8.3 (arm 5b) both miss.
    ('E1  11.0/7.7  MATCHED',  11.0,  7.7, 0.0, False),
    ('J   E1 + jitter 2.8',    11.0,  7.7, 2.8, False),
    ('Jo  E1 + jitter 1.5',    11.0,  7.7, 1.5, False),
    ('N   no-nu, no transform', 0.0,  0.0, 0.0, True),
    ('NJ  no-nu + E1',         11.0,  7.7, 0.0, True),
    ('S+  13.0/7.7 grad',      13.0,  7.7, 0.0, False),
    ('W+  11.0/11.0 grad',     11.0, 11.0, 0.0, False),
]


# Subsample: these are distributional statistics, and the full 2.69M events x 13
# variants is 35M per-event medians. 200k per group is far more than enough and keeps
# the whole screen under a minute -- which is the entire point of screening.
NSUB = int(os.environ.get('NSUB', '200000'))


def load_group(g):
    fs = sorted(glob.glob(f'{CACHE}/raw_g{g}_c*.npy'))
    if not fs:
        raise SystemExit(f'no cached group {g} in {CACHE}')
    a = np.concatenate([np.load(f)[..., 0] for f in fs])
    if NSUB and a.shape[0] > NSUB:
        idx = np.random.default_rng(7).choice(a.shape[0], NSUB, replace=False)
        a = a[np.sort(idx)]
    return a


def med_per_event(t, v):
    """Vectorized per-event median over the valid segments of a padded array."""
    x = np.where(v, t, np.nan)
    with np.errstate(all='ignore'):
        import warnings
        with warnings.catch_warnings():
            warnings.simplefilter('ignore')
            m = np.nanmedian(x, axis=1)
    return m[np.isfinite(m)]


def resid(t, v):
    x = np.where(v, t, np.nan)
    with np.errstate(all='ignore'):
        import warnings
        with warnings.catch_warnings():
            warnings.simplefilter('ignore')
            m = np.nanmedian(x, axis=1)
    r = x - m[:, None]
    return r[np.isfinite(r)]


print(f'loading cache from {CACHE}')
t0 = {g: load_group(g) for g in (0, 1, 2)}
valid = {g: (a > SENTINEL_LO) & (a < SENTINEL_HI) for g, a in t0.items()}
for g in (0, 1, 2):
    print(f'  group {g}: {t0[g].shape[0]} events, {valid[g].sum()} valid segments')

# ---- data, untransformed: this is what label 0 has to land on ------------------
evs = []
for reg in ('sr', 'vr2'):
    ch = ROOT.TChain('tree')
    for f in sorted(glob.glob(f'{B}/Data/{reg}/matched_muon/'
                              f'skimmed_matched_muon_{reg}_Ntuplizer-Cosmics_*.root')):
        if '_All_' not in f:
            ch.Add(f)
    raw = ROOT.RDataFrame(ch).Range(MAXEV).AsNumpy(
        ['muon_dtSeg_t0timing'])['muon_dtSeg_t0timing']
    for x in raw:                       # copy: see derive_match_params.py
        a = np.array(x, dtype=np.float64, copy=True)
        evs.append(a[(a > SENTINEL_LO) & (a < SENTINEL_HI)])
evs = [a for a in evs if a.size]
d_med = np.array([np.median(a) for a in evs])
d_seg = np.concatenate(evs)
d_res = np.concatenate([a - np.median(a) for a in evs])
d_n = np.array([a.size for a in evs])


def s68(a):
    q = np.percentile(a, [16, 84])
    return (q[1] - q[0]) / 2


D_MED, D_S68 = np.median(d_med), s68(d_med)

# The within-event residual target must be MULTIPLICITY-REWEIGHTED onto the MC spectrum.
# Pooling segments weights each event by its multiplicity, and data has more segments
# per event than MC (7.34 vs 6.74), so the raw pooled data residual overstates the
# target. See residual_diagnostics.py definition E.
mc_n = valid[0].sum(axis=1)
w = np.zeros(d_n.shape)
for n in np.unique(d_n):
    fd, fm = (d_n == n), (mc_n == n)
    if fd.sum() and fm.sum():
        w[fd] = fm.mean() / fd.mean()
seg_w = np.concatenate([np.full(k, ww) for k, ww in zip(d_n, w)])
keep_w = seg_w > 0
i = np.argsort(d_res[keep_w])
aa, ww_ = d_res[keep_w][i], seg_w[keep_w][i]
cc = np.cumsum(ww_) - 0.5 * ww_
q16, q84 = np.interp(np.array([.16, .84]) * ww_.sum(), cc, aa)
D_RES = (q84 - q16) / 2
print(f'\ndata target: per-event median {D_MED:+.2f} ns, sigma68 {D_S68:.2f} ns')
print(f'             within-event residual sigma68 {s68(d_res):.2f} ns raw, '
      f'{D_RES:.2f} ns multiplicity-reweighted (the target)\n')


def transform(g, shift, smear, jitter):
    """Apply the training transforms to group g exactly as build_rnn_tensor would:
    shift_t0 then smear_t0 (per EVENT), and jitter per SEGMENT, valid segments only."""
    t, v = t0[g].copy(), valid[g]
    if shift:
        t[v] += shift
    rng = np.random.default_rng(SEED)
    if smear:
        d = rng.normal(0.0, smear, t.shape[0])
        t = np.where(v, t + d[:, None], t)
    if jitter:
        j = rng.normal(0.0, jitter, t.shape)
        t = np.where(v, t + j, t)
    return t, v


hdr = (f'{"variant":24s} {"l0 med":>7s} {"l0 s68":>7s} {"dMed":>6s} {"dWidth":>7s} '
       f'{"l0 resid":>9s} {"dResid":>7s} {"separation":>11s} {"keep":>6s}')
print(hdr)
print('-' * len(hdr))
base_sep = None
for name, sh, sm, ji, dropnu in GRID:
    t_l0, v_l0 = transform(0, sh, sm, ji)
    med0 = med_per_event(t_l0, v_l0)
    res0 = resid(t_l0, v_l0)
    l1 = []
    for g in ((2,) if dropnu else (1, 2)):
        tg, vg = transform(g, sh, sm, ji)
        l1.append(med_per_event(tg, vg))
    med1 = np.concatenate(l1)
    sep = np.median(med1) - np.median(med0)
    if base_sep is None:
        base_sep = sep
    print(f'{name:24s} {np.median(med0):+7.2f} {s68(med0):7.2f} '
          f'{np.median(med0) - D_MED:+6.2f} {s68(med0) / D_S68:7.3f} '
          f'{s68(res0):9.2f} {s68(res0) / D_RES:7.3f} {sep:+11.2f} '
          f'{sep / base_sep:6.3f}')

print(f'\n  dMed   = label-0 per-event median MINUS data       -> 0.00 is perfect')
print(f'  dWidth = label-0 per-event sigma68 / data          -> 1.00 is perfect')
print(f'  dResid = label-0 within-event sigma68 / data       -> 1.00 is perfect '
      f'(only a per-SEGMENT jitter moves this)')
print(f'  keep   = class separation relative to arm 2 nominal -> what the arm COSTS')
