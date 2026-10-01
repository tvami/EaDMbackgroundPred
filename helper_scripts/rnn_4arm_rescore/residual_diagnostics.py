#!/usr/bin/env python3
"""Why does the within-event t0 residual ratio not reproduce?

HANDOVER_20260727 / HANDOVER_20260729_4arm state the within-event scatter is
~1.23-1.25x wider in DATA than MC after centering (and 1.48-1.93x on absolute t0).
derive_match_params.py measures 0.973 (sigma68) / 0.759 (IQR) -- data slightly
NARROWER. That sign disagreement blocks the per-segment-jitter arm, which only makes
sense if data really is wider, so pin down which measurement definition is which.

The suspect is the pooling. `res = t0_segment - median(event)` pooled over all
segments of all events is NOT a clean estimator of the within-event spread:

  * an event with 1 valid segment contributes exactly one 0.0, by construction;
  * an event with 2 contributes +-d/2, i.e. two entries straddling zero;
  * high-multiplicity events dominate the sample (an n-segment event contributes n
    entries), so the pooled spread is a multiplicity-weighted mixture.

So if data and MC have different DT-segment multiplicity distributions -- and they do,
which is exactly why the arm-5 shift differs between the per-event (12.2 ns) and
per-segment (11.1 ns) frames -- the pooled ratio measures that difference as much as
it measures any resolution difference.

This script measures the ratio under several definitions to find which one gives
1.23-1.25 and which gives 0.97, so the jitter decision rests on a defined number.
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
REGIONS = os.environ.get('REGIONS', 'sr,vr2').split(',')


def sig68(a):
    q = np.percentile(a, [16, 84])
    return (q[1] - q[0]) / 2


def iqr(a):
    q = np.percentile(a, [25, 75])
    return q[1] - q[0]


def load_mc_label0():
    """Padded (N, nMax) t0 of the label-0 downward cosmic MC, as the training saw it."""
    fs = sorted(glob.glob(f'{CACHE}/raw_g0_c*.npy'))
    if not fs:
        raise SystemExit(f'no cached label-0 tensor in {CACHE}')
    t0 = np.concatenate([np.load(f)[..., 0] for f in fs])
    v = (t0 > SENTINEL_LO) & (t0 < SENTINEL_HI)
    return [row[m] for row, m in zip(t0, v)]


def load_data():
    evs = []
    for reg in REGIONS:
        ch = ROOT.TChain('tree')
        for f in sorted(glob.glob(f'{B}/Data/{reg}/matched_muon/'
                                  f'skimmed_matched_muon_{reg}_Ntuplizer-Cosmics_*.root')):
            if '_All_' not in f:
                ch.Add(f)
        df = ROOT.RDataFrame(ch)
        if MAXEV:
            df = df.Range(MAXEV)
        raw = df.AsNumpy(['muon_dtSeg_t0timing'])['muon_dtSeg_t0timing']
        for x in raw:
            # the boolean-mask index copies, which is what keeps `evs` valid after
            # `raw` is rebound on the next region -- np.asarray on an RVec is only a
            # VIEW, and holding one past that point is what corrupted
            # derive_match_params.py. Do not "simplify" this to append the view.
            a = np.array(x, dtype=np.float64, copy=True)
            evs.append(a[(a > SENTINEL_LO) & (a < SENTINEL_HI)])
    return evs


print(f'reading label-0 cosmic MC from {CACHE}')
mc = load_mc_label0()
print(f'reading data, regions {REGIONS}, MAXEV={MAXEV} per region')
dat = load_data()

nmc = np.array([len(a) for a in mc])
ndt = np.array([len(a) for a in dat])
mc = [a for a, n in zip(mc, nmc) if n > 0]
dat = [a for a, n in zip(dat, ndt) if n > 0]
nmc, ndt = nmc[nmc > 0], ndt[ndt > 0]
print(f'  MC   {len(mc):>8d} events with >=1 valid segment, {nmc.sum():>9d} segments')
print(f'  data {len(dat):>8d} events with >=1 valid segment, {ndt.sum():>9d} segments')

# ---------------------------------------------------------- multiplicity, the suspect
print('\n=== valid-segment multiplicity (the suspected confounder) ===')
print(f'{"n_valid":>9s} {"MC frac":>10s} {"data frac":>10s} {"MC segfrac":>11s} '
      f'{"data segfrac":>12s}')
for lo, hi in ((1, 1), (2, 2), (3, 3), (4, 5), (6, 9), (10, 19), (20, 10 ** 6)):
    fm, fd = (nmc >= lo) & (nmc <= hi), (ndt >= lo) & (ndt <= hi)
    lab = f'{lo}' if lo == hi else (f'{lo}+' if hi > 10 ** 5 else f'{lo}-{hi}')
    print(f'{lab:>9s} {fm.mean():10.4f} {fd.mean():10.4f} '
          f'{nmc[fm].sum() / nmc.sum():11.4f} {ndt[fd].sum() / ndt.sum():12.4f}')
print(f'{"mean":>9s} {nmc.mean():10.3f} {ndt.mean():10.3f}')
print(f'{"median":>9s} {np.median(nmc):10.1f} {np.median(ndt):10.1f}')

# ---------------------------------------------------------------- the definitions
res_mc = [a - np.median(a) for a in mc]
res_dt = [a - np.median(a) for a in dat]
pool_mc, pool_dt = np.concatenate(res_mc), np.concatenate(res_dt)


def report(name, m, d, note=''):
    out = (f'{name:44s} sigma68 {sig68(d) / sig68(m):6.3f}   '
           f'IQR {iqr(d) / iqr(m):6.3f}   RMS {d.std() / m.std():6.3f}')
    print(out + (f'   {note}' if note else ''))


print('\n=== data/MC WITHIN-EVENT residual ratio, by definition ===')
print(f'{"definition":44s} {"":8s}{"ratio":>6s}')
report('A  pooled over all segments (as documented)', pool_mc, pool_dt,
       '<- derive_match_params')

# The n=1 events are pure zeros: they cannot carry spread information, only dilute it.
k_mc = np.concatenate([r for r, n in zip(res_mc, nmc) if n >= 2])
k_dt = np.concatenate([r for r, n in zip(res_dt, ndt) if n >= 2])
report('B  pooled, events with n_valid >= 2 only', k_mc, k_dt)

k_mc = np.concatenate([r for r, n in zip(res_mc, nmc) if n >= 4])
k_dt = np.concatenate([r for r, n in zip(res_dt, ndt) if n >= 4])
report('C  pooled, events with n_valid >= 4 only', k_mc, k_dt)

# Per-multiplicity: removes the weighting entirely, one number per n.
print('\n=== D  per multiplicity (no weighting left to differ) ===')
print(f'{"n_valid":>9s} {"n_ev MC":>9s} {"n_ev data":>10s} {"sigma68 MC":>11s} '
      f'{"sigma68 data":>13s} {"ratio":>7s} {"IQR ratio":>10s}')
for n in (2, 3, 4, 5, 6, 8, 10, 12):
    a = np.concatenate([r for r, k in zip(res_mc, nmc) if k == n]) \
        if (nmc == n).any() else np.array([])
    b = np.concatenate([r for r, k in zip(res_dt, ndt) if k == n]) \
        if (ndt == n).any() else np.array([])
    if a.size < 100 or b.size < 100:
        continue
    print(f'{n:9d} {int((nmc == n).sum()):9d} {int((ndt == n).sum()):10d} '
          f'{sig68(a):11.3f} {sig68(b):13.3f} {sig68(b) / sig68(a):7.3f} '
          f'{iqr(b) / iqr(a):10.3f}')

# Reweight data to the MC multiplicity spectrum: the cleanest single number.
w = np.zeros(ndt.shape)
for n in np.unique(ndt):
    fd, fm = (ndt == n), (nmc == n)
    if fd.sum() and fm.sum():
        w[fd] = fm.mean() / fd.mean()
seg_w_dt = np.concatenate([np.full(len(r), ww) for r, ww in zip(res_dt, w)])
keep = seg_w_dt > 0


def wq(a, ws, qs):
    i = np.argsort(a)
    a, ws = a[i], ws[i]
    c = np.cumsum(ws) - 0.5 * ws
    return np.interp(np.asarray(qs) * ws.sum(), c, a)


q = wq(pool_dt[keep], seg_w_dt[keep], [.16, .25, .75, .84])
print(f'\nE  data reweighted to the MC multiplicity spectrum, pooled')
print(f'{"":44s} sigma68 {((q[3] - q[0]) / 2) / sig68(pool_mc):6.3f}   '
      f'IQR {(q[2] - q[1]) / iqr(pool_mc):6.3f}')

# Per-event spread, one entry per EVENT: every event counts once regardless of n.
sp_mc = np.array([a.max() - a.min() for a, n in zip(mc, nmc) if n >= 2])
sp_dt = np.array([a.max() - a.min() for a, n in zip(dat, ndt) if n >= 2])
print(f'\nF  per-EVENT full range (max-min), one entry per event, n>=2')
print(f'{"":44s} median  MC {np.median(sp_mc):6.2f}  data {np.median(sp_dt):6.2f}   '
       f'ratio {np.median(sp_dt) / np.median(sp_mc):6.3f}')

# ------------------------------------------------ the absolute-t0 number, for calibration
print('\n=== G  ABSOLUTE t0 (no centering) -- documented as 1.48-1.93x ===')
abs_mc, abs_dt = np.concatenate(mc), np.concatenate(dat)
report('   pooled absolute segment t0', abs_mc, abs_dt)
pe_mc = np.array([np.median(a) for a in mc])
pe_dt = np.array([np.median(a) for a in dat])
report('   per-event median t0', pe_mc, pe_dt)

print('\nRead the table before sizing any per-segment jitter: a jitter is only\n'
      'justified if the definition that survives the multiplicity confounder (D/E)\n'
      'still says data is wider.')

# ------------------------------------------------------------- sizing the jitter
# Done by scan, not by quadrature. Subtracting the per-event median correlates the
# jitter into the reference itself, so the residual widens by less than the jitter
# added -- by a factor that depends on the event's multiplicity, hence on the whole
# multiplicity spectrum. Scanning reproduces that exactly; sqrt(target^2 - now^2)
# does not and would undershoot.
print('\n=== H  per-SEGMENT jitter needed to widen the MC residual onto data ===')
print('    (applied to MC, then the SAME multiplicity-controlled ratio recomputed)')
rng = np.random.default_rng(20260730)
tgt_s = wq(pool_dt[keep], seg_w_dt[keep], [.16, .84])
tgt_s = (tgt_s[1] - tgt_s[0]) / 2
tgt_i = wq(pool_dt[keep], seg_w_dt[keep], [.25, .75])
tgt_i = tgt_i[1] - tgt_i[0]
print(f'{"jitter [ns]":>12s} {"MC sigma68":>11s} {"ratio":>7s} {"MC IQR":>8s} {"ratio":>7s}')
print(f'{0.0:12.1f} {sig68(pool_mc):11.3f} {tgt_s / sig68(pool_mc):7.3f} '
      f'{iqr(pool_mc):8.3f} {tgt_i / iqr(pool_mc):7.3f}')
best = None
for j in (1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 5.0):
    jm = np.concatenate([(lambda y: y - np.median(y))(a + rng.normal(0, j, a.size))
                         for a in mc])
    rs, ri = tgt_s / sig68(jm), tgt_i / iqr(jm)
    print(f'{j:12.1f} {sig68(jm):11.3f} {rs:7.3f} {iqr(jm):8.3f} {ri:7.3f}')
    if best is None or abs(rs - 1) < best[1]:
        best = (j, abs(rs - 1))
print(f'\n  closest sigma68 match on this grid: jitter = {best[0]:.1f} ns')
print('  Sanity-check it against the dt0/dy discrimination before training on it:\n'
      '  a per-segment jitter degrades the gradient, which is the ONLY thing the\n'
      '  centered arm has left, so it trades data/MC agreement for separation.')
