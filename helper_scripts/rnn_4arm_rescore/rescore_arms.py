#!/usr/bin/env python3
"""Re-score a skimmed ntuple with the RNN arm checkpoints (clusters 371179 + 371516
+ the variant grid 371701 / 371725-371729).

Scores fourteen networks in one pass over the file:
  arm2_control   rnn_retrain_weights_absoluteT0_control.ckpt   (A/B control)
  arm3_shift8    rnn_retrain_weights_shift8ns_absolute.ckpt
  arm4_smear12   rnn_retrain_weights_smear12ns_absolute.ckpt
  arm5_match     rnn_retrain_weights_matchL0toData_shift12p2_smear7p2.ckpt
  arm1_center    rnn_retrain_weights_centeredT0_median.ckpt    (needs the CENTERED tensor)
  arm5b_match    ...matchL0toData_shift11p6_smear8p3.ckpt      (arm 5 retuned, superseded)
  E1_match       ...matchL0toData_shift11p0_smear7p7.ckpt      (the matched point; primary)
  J_jitter2p8    ...matchL0toData_E1_jitter2p8.ckpt            (E1 + 2.8 ns per-SEGMENT jitter)
  Jo_jitter1p5   ...matchL0toData_E1_jitter1p5.ckpt            (E1 + 1.5 ns, linearity probe)
  N_noNeutrino   rnn_retrain_weights_noNeutrino_absoluteT0.ckpt (class-definition control)
  NJ_noNu_E1     rnn_retrain_weights_noNeutrino_E1.ckpt         (N + E1)
  old_v5         rnn_v5_188k_final_weights.ckpt                (deployed reference)

  Sp_shift13     ...matchL0toData_shift13p0_smear7p7.ckpt   (E1 + shift only, 13.0)
  Wp_smear11     ...matchL0toData_shift11p0_smear11p0.ckpt  (E1 + smear only, 11.0)
  cone89         ...cone89_shift11p0_smear7p7.ckpt          (E1 recipe, 0-89 label 0)
  cone75n        ...cone75n_shift11p0_smear7p7.ckpt         (E1 recipe, 0-75 same campaign)

Sp and Wp are the one-variable gradients off E1: no two of arms 2/3/4/5 differ in a
single variable, which is why the band looked non-monotonic in shift (the smear was
moving underneath). They are the only pair that can say which knob drives the band.

NO t0 shift and NO smearing: every arm is evaluated in its deployment configuration
(arm 4's smearing is training-time augmentation only, never applied at inference; arm
5's shift+smear were applied to the *training* samples so that label 0 lands on data,
which is precisely why data must be left alone here), so all the absolute-t0 arms see
the same tensor and one read serves all of them. `old_v5` doubles as a per-file
validation: it must reproduce the stored RNNScore branch.

Arm 1 is the exception: it was trained on per-event median-centered t0, so it must be
scored on the centered tensor, built by a second build_rnn_tensor call on the same
already-read arrays (the jagged read, not the tensor build, is what costs).

Do NOT try to shortcut that by median-centering the padded absolute tensor in numpy:
build_rnn_tensor centers over every valid segment and clips to nMax afterwards, so for
the ~0.1% of events with >64 segments the two differ -- measured max|diff| = 18.4 ns on
the vr2 cosmic MC. Training used the pre-clip convention, so inference must too.
`SELFTEST=1` re-checks the fast median in rnn_input_prep against the original per-event
np.median loop it replaced.

The tensor is built through rnn_input_prep.build_rnn_tensor -- the same function the
training used -- with nMax=64 to match how the arms were trained. That differs
from the production inference convention (per-file max multiplicity), but the Masking
layer makes the padded length irrelevant to the weights; the only real difference is
the clip=True truncation of the ~0.1% of events with >64 segments, and training had
exactly that same truncation.

Usage: rescore_arms.py <input.root> <output.npz> [chunk_size]
Env:   ISTART/ISTOP  entry-range shard (ISTOP=0 means to the end)
       CKPTDIR       where the .ckpt files live (default: next to this script,
                     falling back to helper_scripts/)
"""
import os, sys, time
import numpy as np

os.environ.setdefault('TF_CPP_MIN_LOG_LEVEL', '3')
import ROOT
import awkward as ak

HERE = os.path.dirname(os.path.abspath(__file__))
HELPERS = '/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/helper_scripts'
# on a condor worker everything is transferred into the cwd; interactively the
# shared module lives one level up in helper_scripts/
for p in (HERE, os.getcwd(), HELPERS):
    if p not in sys.path:
        sys.path.insert(0, p)
from rnn_input_prep import build_rnn_tensor, valid_mask, _median_per_event

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kError

# (column name, checkpoint, which tensor: 'abs' = absolute t0, 'cen' = median-centered)
#
# Every variant of the grid trained with T0_CENTER=none, so they are all 'abs' --
# arm 1 remains the only network needing the centered tensor.
ARMS = [('arm2_control',  'rnn_retrain_weights_absoluteT0_control.ckpt',              'abs'),
        ('arm3_shift8',   'rnn_retrain_weights_shift8ns_absolute.ckpt',               'abs'),
        ('arm4_smear12',  'rnn_retrain_weights_smear12ns_absolute.ckpt',              'abs'),
        ('arm5_match',    'rnn_retrain_weights_matchL0toData_shift12p2_smear7p2.ckpt','abs'),
        ('arm1_center',   'rnn_retrain_weights_centeredT0_median.ckpt',               'cen'),
        ('arm5b_match',   'rnn_retrain_weights_matchL0toData_shift11p6_smear8p3.ckpt','abs'),
        ('E1_match',      'rnn_retrain_weights_matchL0toData_shift11p0_smear7p7.ckpt','abs'),
        ('J_jitter2p8',   'rnn_retrain_weights_matchL0toData_E1_jitter2p8.ckpt',      'abs'),
        ('Jo_jitter1p5',  'rnn_retrain_weights_matchL0toData_E1_jitter1p5.ckpt',      'abs'),
        ('N_noNeutrino',  'rnn_retrain_weights_noNeutrino_absoluteT0.ckpt',           'abs'),
        ('NJ_noNu_E1',    'rnn_retrain_weights_noNeutrino_E1.ckpt',                   'abs'),
        ('Sp_shift13',    'rnn_retrain_weights_matchL0toData_shift13p0_smear7p7.ckpt','abs'),
        ('Wp_smear11',    'rnn_retrain_weights_matchL0toData_shift11p0_smear11p0.ckpt','abs'),
        ('cone89',        'rnn_retrain_weights_cone89_shift11p0_smear7p7.ckpt','abs'),
        ('cone75n',       'rnn_retrain_weights_cone75n_shift11p0_smear7p7.ckpt','abs'),
        ('old_v5',        'rnn_v5_188k_final_weights.ckpt',                           'abs')]
NMAX = 64
KEYS = ('muon_dtSeg_t0timing', 'muon_dtSeg_globX', 'muon_dtSeg_globY', 'muon_dtSeg_globZ')
# Carried through so the figures can veto runs without a second read, and so old_v5
# can be validated against the production score.
#
# pT is deliberately NOT here. The analysis variable is `pT_max` = Max of
# muon_fromGenTrack_Pt over a quality_mask (skimmed_ntuple_processing_script.py
# ~L469), not a plain branch -- muon_fromGenTrack_Pt is a vector with multiplicity
# 1-39 (mean 2.1), so storing any single element would be a guess. The region skims
# already apply the pT split (VR2 < 200 GeV, VR1/SR > 200 GeV), which is all these
# score figures need. Anything requiring pT binning should come from a proper
# step6 version production instead.
EXTRA = ('RNNScore', 'run')


def slow_median_per_event(masked):
    """The original per-event np.median loop, kept only as the SELFTEST reference."""
    return np.array([float(np.median(np.asarray(ev))) if len(ev) else 0.0
                     for ev in ak.drop_none(masked)])


def find_ckpt(fn):
    for d in (os.environ.get('CKPTDIR', ''), HERE, os.getcwd(), HELPERS):
        if d and os.path.exists(os.path.join(d, fn + '.index')):
            return os.path.join(d, fn)
    raise SystemExit(f'checkpoint not found: {fn}')


inp, out = sys.argv[1], sys.argv[2]
CHUNK = int(sys.argv[3]) if len(sys.argv) > 3 else 500000
ISTART = int(os.environ.get('ISTART', '0'))
ISTOP = int(os.environ.get('ISTOP', '0'))
# T0_SHIFT: constant ns added to the valid t0 before building the tensor.
#
# Needed for arm 3, which is ASYMMETRIC between data and MC: it was trained on MC
# moved into the data absolute-t0 frame (+8 ns), so at inference data is already in
# that frame (shift 0) and MC has to be moved into it (shift +8). Run the MC and
# signal files a second time with T0_SHIFT=8 to get arm 3's MC in the frame it was
# trained in; scoring MC unshifted would measure it in a frame the network never saw.
#
# Arms 2 and 4 take shift 0 everywhere (arm 4's smearing is training-time only), so
# only the arm3_shift8 column of a shifted pass is physically meaningful -- except
# that old_v5 with +8 ns also reproduces the documented +8 ns patch numbers, which
# makes the shifted pass a useful validation of the whole chain.
T0_SHIFT = float(os.environ.get('T0_SHIFT', '0'))


def build_models():
    import keras
    import tensorflow as tf
    from keras import layers
    from tensorflow.keras.models import Sequential
    # TensorFlow sizes its eigen pool from the CPU affinity mask, which is what
    # actually bounds it -- request_cpus does that on condor. These calls are belt
    # and braces (they were NOT sufficient on a 256-core interactive node, where
    # each process still built a ~280-thread pool and tripped the 2048 cgroup
    # pids limit; run interactively under taskset if you need a hard cap).
    nt = int(os.environ.get('NTHREADS', '0'))
    if nt:
        tf.config.threading.set_intra_op_parallelism_threads(nt)
        tf.config.threading.set_inter_op_parallelism_threads(1)
    ms = {}
    for name, ck, _var in ARMS:
        m = Sequential([
            layers.Masking(mask_value=-9999.),
            layers.Bidirectional(layers.LSTM(64)),
            layers.Dense(64, activation='relu'),
            layers.Dense(1, activation='sigmoid'),
        ])
        m.build((None, NMAX, 4))
        m.load_weights(find_ckpt(ck)).expect_partial()
        ms[name] = m
    return ms


f = ROOT.TFile.Open(inp)
if not f or f.IsZombie():
    raise SystemExit(f'cannot open {inp}')
tree = f.Get('tree')
ntot = tree.GetEntries()
avail = {b.GetName() for b in tree.GetListOfBranches()}
f.Close()
extra = [e for e in EXTRA if e in avail]
lo = ISTART
hi = min(ISTOP, ntot) if ISTOP else ntot
print(f'{os.path.basename(inp)}: {ntot} entries, doing [{lo}:{hi}], extra {extra}, '
      f'T0_SHIFT={T0_SHIFT} ns', flush=True)

models = build_models()
acc = {name: [] for name, _, _ in ARMS}
acc_extra = {e: [] for e in extra}
NEED_CEN = any(var == 'cen' for _, _, var in ARMS)

for start in range(lo, hi, CHUNK):
    stop = min(start + CHUNK, hi)
    t = time.time()
    df = ROOT.RDataFrame('tree', inp).Range(start, stop)
    cols = df.AsNumpy(list(KEYS) + extra)
    arrs = [ak.Array([np.asarray(v, dtype=np.float64) for v in cols[k]]) for k in KEYS]
    X, _ = build_rnn_tensor(*arrs, nMax=NMAX, center=None, shift=T0_SHIFT, smear=0.0)
    if os.environ.get('SELFTEST'):
        m = ak.mask(arrs[0], valid_mask(arrs[0]))
        d = np.abs(_median_per_event(m) - slow_median_per_event(m))
        print(f'  SELFTEST fast vs loop per-event median: max|diff|={d.max():.3e}',
              flush=True)
    for e in extra:
        acc_extra[e].append(np.asarray(cols[e]))
    del cols
    tensors = {'abs': X}
    if NEED_CEN:
        tensors['cen'], _ = build_rnn_tensor(*arrs, nMax=NMAX, center='median')
    del arrs
    for name, _ck, var in ARMS:
        s = models[name].predict(tensors[var], batch_size=4000,
                                 verbose=0).ravel().astype(np.float32)
        acc[name].append(s)
    del X, tensors
    print(f'  [{start}:{stop}] {time.time() - t:.0f}s', flush=True)

res = {k: np.concatenate(v) for k, v in acc.items()}
for e in extra:
    res[e] = np.concatenate(acc_extra[e])
np.savez_compressed(out, **res)
for name, _ck, _var in ARMS:
    s = res[name]
    print(f'  {name:14s} mean={s.mean():.5f} frac(>=0.45)={np.mean(s >= 0.45):.5f} '
          f'frac(>=0.9999)={np.mean(s >= 0.9999):.6f}', flush=True)
if 'RNNScore' in res:
    d = np.abs(res['old_v5'].astype(np.float64) - res['RNNScore'].astype(np.float64))
    if T0_SHIFT:
        # a shifted pass is EXPECTED to disagree with the stored branch -- that is
        # the shift doing its job, not a broken tensor build
        print(f'  (old_v5 vs stored RNNScore differs by construction at '
              f'T0_SHIFT={T0_SHIFT} ns: mean|diff|={d.mean():.3e})', flush=True)
    else:
        print(f'  VALIDATION old_v5 vs stored RNNScore: max|diff|={d.max():.3e} '
              f'mean|diff|={d.mean():.3e}', flush=True)
print(f'wrote {out}', flush=True)
