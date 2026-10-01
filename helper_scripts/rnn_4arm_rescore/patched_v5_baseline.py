#!/usr/bin/env python3
"""The DEPLOYED baseline: v5 WITH its +8 ns MC patch, measured in THIS pipeline.

Every arm has so far been compared against v5 with no t0 shift anywhere (VR2 mid-RNN
band 1.851). That is not what runs in production. Production shifts the MC/signal by
+8 ns at inference, and the older study reported that this takes the VR2 band 1.81 ->
1.12 and costs 10-15% of the signal efficiency. Those numbers come from a different
pipeline, and the arm-5 decision turned out to be tight enough that crossing studies
is not good enough -- so re-measure the patched baseline here.

The patch is ASYMMETRIC by construction: MC and signal move +8 ns, data does not
(data already defines the frame). So this reads
    cosmicMC_<reg>_shift8.npz / sig_e4_<M>_shift8.npz   (cluster 371700, T0_SHIFT=8)
against the SAME unshifted data as everything else (cluster 371681).

Only the `old_v5` column of a shifted file is meaningful here. Arms 2/4/5/1 take shift
0 everywhere, so their shifted columns measure them in a frame they were never trained
in; arm 3 is the one other network with a training-time +8, and it is reported for
completeness.

nMax=64 caveat: the re-scored old_v5 is clipped at 64 segments whereas the deployed v5
runs at the per-file max, which distorts the ~0.1% of events with >64 segments
(mean|diff| 7e-5, max|diff| 0.998 against the stored branch). That is harmless for the
mid-RNN BAND, which is a bulk metric, but it is NOT harmless at a 2e-5 pass fraction.
So the efficiency here is quoted as a RATIO shifted/unshifted within the re-scored
old_v5 column -- the same network on the same events, so the clipping distortion
largely cancels -- and that ratio is then applied to the stored-branch efficiency.
That is also how the documented 0.88 was constructed.
"""
import glob, os, re
import numpy as np

SD = os.path.dirname(os.path.abspath(__file__))
CUT = 0.9999
HELD_OUT = (1000, 5000, 10000, 90000)
T_LO, T_HI = 0.26, 3.0          # the mid-RNN band, in T = -log10(1-S)

# Every candidate that is judged against the deployed baseline. Each is scored with
# NO t0 shift (that is the whole point -- they are supposed to make the +8 ns patch
# unnecessary), so each reads its own unshifted column against the same unshifted data.
CAND = [('arm5_match',   'arm 5  (12.2/7.2)'),
        ('arm5b_match',  'arm 5b (11.6/8.3)'),
        ('E1_match',     'E1     (11.0/7.7)'),
        ('J_jitter2p8',  'J   E1 + 2.8 ns jitter'),
        ('Jo_jitter1p5', 'Jo  E1 + 1.5 ns jitter'),
        ('N_noNeutrino', 'N   no-neutrino label 1'),
        ('NJ_noNu_E1',   'NJ  no-neutrino + E1'),
        ('Sp_shift13',   'Sp  shift only  (13.0/7.7)'),
        ('Wp_smear11',   'Wp  smear only  (11.0/11.0)'),
        ('cone89',       'C89  0-89 cone label 0'),
        ('cone75n',      'C75n 0-75 cone, same campaign')]


def T(s):
    return np.where(s >= 1.0, 5.99, -np.log10(np.clip(1.0 - s, 1e-8, None)))


def cat(pat, key):
    fs = sorted(glob.glob(f'{SD}/out/{pat}'))
    if not fs:
        raise SystemExit(f'no files match {pat} -- has cluster 371700 finished?')
    return np.concatenate([np.load(f)[key] for f in fs]).astype(np.float64)


def band_frac(s):
    t = T(s)
    return float(np.mean((t > T_LO) & (t < T_HI)))


print('=== mid-RNN band (0.26 < T < 3) MC/data: unpatched vs PATCHED v5 ===')
print('    MC shifted +8 ns, data left alone -- the deployed configuration\n')
print(f'{"region":>7s} {"network":>26s} {"MC band":>9s} {"data band":>10s} {"MC/data":>9s}')
rows = {}
for reg in ('vr2', 'vr1'):
    d_stored = cat(f'data_{reg}_*.npz', 'RNNScore')
    d_v5 = cat(f'data_{reg}_*.npz', 'old_v5')
    m_stored = cat(f'cosmicMC_{reg}.npz', 'RNNScore')
    m_v5_0 = cat(f'cosmicMC_{reg}.npz', 'old_v5')
    m_v5_8 = cat(f'cosmicMC_{reg}_shift8.npz', 'old_v5')
    m_a3_8 = cat(f'cosmicMC_{reg}_shift8.npz', 'arm3_shift8')
    d_a3 = cat(f'data_{reg}_*.npz', 'arm3_shift8')
    for lab, mb, db in (
            [('v5 stored, no patch', m_stored, d_stored),
             ('v5 re-scored, no patch', m_v5_0, d_v5),
             ('v5 re-scored, +8 ns PATCH', m_v5_8, d_v5)]
            + [(lb, cat(f'cosmicMC_{reg}.npz', k), cat(f'data_{reg}_*.npz', k))
               for k, lb in CAND]
            + [('arm 3 (+8 at inference)', m_a3_8, d_a3)]):
        r = band_frac(mb) / band_frac(db)
        rows[(reg, lab)] = r
        print(f'{reg:>7s} {lab:>26s} {band_frac(mb):9.5f} {band_frac(db):10.5f} {r:9.3f}')
    print()

print('  reference: the older study documented VR2 1.81 -> 1.12 at +8 ns,')
print('             VR1 pass 1.29 -> 1.19 at +8, 0.95 at +7.\n')

# ------------------------------------------------------- efficiency at matched rate
print('=== signal efficiency at MATCHED VR2 data rate ===')
d_stored = cat('data_vr2_*.npz', 'RNNScore')
d_v5 = cat('data_vr2_*.npz', 'old_v5')
target = float(np.mean(d_stored >= CUT))
print(f'  reference VR2 data pass rate (stored v5 @ {CUT}): {target:.6e}')

thr = {'stored': float(np.quantile(d_stored, 1 - target)),
       'v5rs': float(np.quantile(d_v5, 1 - target))}
for k, _lb in CAND:
    thr[k] = float(np.quantile(cat('data_vr2_*.npz', k), 1 - target))


def sig_eff(key, cut, shifted=False):
    """Held-out-mass mean efficiency. The filename match is a FULL match on purpose:
    a glob like 'sig_e4_[0-9]*.npz' also matches 'sig_e4_1000_shift8.npz', which
    silently averages the shifted and unshifted samples together and destroys exactly
    the shifted-vs-unshifted comparison this script exists to make."""
    pat = re.compile(r'sig_e4_(\d+)_shift8\.npz$' if shifted
                     else r'sig_e4_(\d+)\.npz$')
    e = {}
    for p in glob.glob(f'{SD}/out/sig_e4_*.npz'):
        mo = pat.search(os.path.basename(p))
        if mo and int(mo.group(1)) in HELD_OUT:
            e[int(mo.group(1))] = float(
                np.mean(np.load(p)[key].astype(np.float64) >= cut))
    if len(e) != len(HELD_OUT):
        raise SystemExit(f'expected {len(HELD_OUT)} held-out files '
                         f'(shifted={shifted}), found {sorted(e)}')
    return float(np.mean([e[m] for m in HELD_OUT]))


e_stored = sig_eff('RNNScore', thr['stored'])
e_v5_0 = sig_eff('old_v5', thr['v5rs'])
e_v5_8 = sig_eff('old_v5', thr['v5rs'], shifted=True)
e_cand = {k: sig_eff(k, thr[k]) for k, _lb in CAND}

patch_cost = e_v5_8 / e_v5_0 if e_v5_0 else 0.0
print(f'\n  held-out masses {HELD_OUT}')
print(f'  v5 stored branch, no patch          eff = {e_stored:.4f}')
print(f'  v5 re-scored,     no patch          eff = {e_v5_0:.4f}')
print(f'  v5 re-scored,     +8 ns patch       eff = {e_v5_8:.4f}')
print(f'  -> PATCH COST (ratio, clipping cancels)  = {patch_cost:.3f}'
      f'   (documented: 0.85-0.90)')
print(f'  => deployed working point = {e_stored:.4f} x {patch_cost:.3f} '
      f'= {e_stored * patch_cost:.4f}')
for k, lb in CAND:
    print(f'  {lb:34s} eff = {e_cand[k]:.4f}')

dep = e_stored * patch_cost
print(f'\n=== THE DECISION NUMBERS ===')
print(f'{"":26s} {"VR2 band":>10s} {"VR1 band":>10s} {"eff (matched)":>14s} '
      f'{"eff/deployed":>13s}')
print(f'{"deployed: v5 + 8 ns patch":26s} '
      f'{rows[("vr2", "v5 re-scored, +8 ns PATCH")]:10.3f} '
      f'{rows[("vr1", "v5 re-scored, +8 ns PATCH")]:10.3f} {dep:14.4f} '
      f'{1.0:13.3f}')
for k, lb in CAND:
    print(f'{lb:26s} {rows[("vr2", lb)]:10.3f} {rows[("vr1", lb)]:10.3f} '
          f'{e_cand[k]:14.4f} {e_cand[k] / dep if dep else 0:13.3f}')
print(f'\nA candidate has to be better on the band AND at least equal on efficiency\n'
      f'to be worth the disruption of a new deployed network. Judge VR2 first: that\n'
      f'is the axis where the +8 ns patch is genuinely good ({rows[("vr2", "v5 re-scored, +8 ns PATCH")]:.3f}) and where\n'
      f'arm 5 lost. Do NOT pick the best band post hoc -- that is what arm 3 did.')
