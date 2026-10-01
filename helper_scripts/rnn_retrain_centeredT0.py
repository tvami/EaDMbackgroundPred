#!/usr/bin/env python3
"""RNN retraining with PER-EVENT CENTERED t0.

Same architecture, samples and class weighting as rnn_retrain.py; the only change
is that the t0 fed to the network is the per-event *centered* t0 (median of the
event's valid segments subtracted), so the network sees the t0 gradient along the
track rather than the absolute segment timing.

Motivation: with absolute t0 the score is pathologically sensitive to the timing
scale -- a coherent +-10 ns shift of the cosmic MC changes its pass rate by up to
an order of magnitude, and the ~10 ns data-vs-MC t0 offset appears as a data/MC
disagreement in the RNN score across the VRs. Centering removes that entire class
of sensitivity by construction, since the discriminating physics (upward- vs
downward-going = sign of dt0/dy) is invariant under a global timing offset.

Env knobs:
  NTUPLE_BASE   input tree base           (default: Ntuples_v5.0.4_wRNN)
  T0_SHIFT      constant ns added to valid t0 (default 0; use with T0_CENTER=none)
  T0_SMEAR      per-event Gaussian sigma in ns  (default 0; use with T0_CENTER=none)
  T0_CENTER     median | mean | first | none   (default: median; 'none' reproduces
                the original absolute-t0 training, for an A/B comparison)
  NMAX          padded sequence length    (default: 280 = max multiplicity in v5.0.4)
  PREPROCESS    1 = build the tensors and cache to .npy, 0 = load the cache
  ARRDIR        where the .npy cache lives (default: $PWD)
  TAG           output name tag           (default: centeredT0_<date>)
  T0_JITTER     per-SEGMENT Gaussian sigma in ns (default 0). NOT redundant with
                centering -- it is the only knob that touches the within-event residual
  DROP_GROUPS   comma-separated INPUTS indices to exclude ("1" = the neutrino MC)
  CLASS_W0      weight on label 0 (default 100)
  EPOCHS        (default 150)
"""
import os, glob, gc, sys
import numpy as np
import ROOT
import awkward as ak
import keras
from keras import layers
from tensorflow.keras.models import Sequential
import tensorflow as tf
from sklearn.model_selection import train_test_split

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from rnn_input_prep import build_rnn_tensor  # shared with the inference script

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kError

BASE = os.environ.get('NTUPLE_BASE',
                      '/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.4_wRNN')
T0_CENTER = os.environ.get('T0_CENTER', 'median')
# T0_SHIFT: constant ns added to the valid t0 before centering. Only meaningful with
# T0_CENTER=none -- centering is invariant under a global shift, so the two cannot be
# combined. +8 puts the (all-MC) training samples in the data absolute-t0 frame.
T0_SHIFT = float(os.environ.get('T0_SHIFT', '0'))
# T0_SMEAR: per-event Gaussian sigma (ns) on t0, as training augmentation. Also only
# meaningful with T0_CENTER=none. sigma=0 is the absolute-t0 network, sigma=inf is
# centering; in between the network can use absolute t0 but cannot depend on it.
T0_SMEAR = float(os.environ.get('T0_SMEAR', '0'))
# T0_JITTER: per-SEGMENT Gaussian sigma (ns). Unlike T0_SHIFT/T0_SMEAR this one DOES
# survive centering, because it changes t0_i - t0_j. It exists to widen the MC
# within-event residual onto data (too narrow by 1.31x, multiplicity-controlled), which
# no per-event transform can do. ~2.8 ns closes the gap. It degrades the dt0/dy
# gradient, so it trades discrimination for data/MC agreement -- screen it with
# rnn_4arm_rescore/screen_variants.py first.
T0_JITTER = float(os.environ.get('T0_JITTER', '0'))
# DROP_GROUPS: comma-separated INPUTS indices to exclude, e.g. "1" drops the neutrino
# MC. The neutrino sample is 43% of label 1 and the deployed v5 never saw it, so the
# retrained arms differ from v5 in CLASS DEFINITION and not only in samples/nMax --
# which is why arm 2 is not the clean control it was assumed to be. "1" reproduces v5's
# class definition in this pipeline and is the only way to isolate that confound.
DROP_GROUPS = {int(x) for x in os.environ.get('DROP_GROUPS', '').split(',') if x.strip()}
# CLASS_W0: weight on label 0. 100 was set because label 0 is only 3.1% of the training
# set. Dropping the neutrino group changes that to 5.2%, so a DROP_GROUPS run at the
# same weight is NOT weight-matched to the full-sample runs -- deliberately, so that the
# class DEFINITION is the only thing that changes. If a drop run moves the band, rerun
# it weight-matched (57 restores the original weighted label0/label1 ratio) to separate
# the two effects.
CLASS_W0 = float(os.environ.get('CLASS_W0', '100'))
NMAX = int(os.environ.get('NMAX', '280'))
PREPROCESS = os.environ.get('PREPROCESS', '1') == '1'
ARRDIR = os.environ.get('ARRDIR', '.')
TAG = os.environ.get('TAG', 'centeredT0')
EPOCHS = int(os.environ.get('EPOCHS', '150'))
# MAXEV > 0 caps the events read per input chain -- for smoke tests only.
MAXEV = int(os.environ.get('MAXEV', '0'))

CKPT = f'rnn_retrain_weights_{TAG}.ckpt'
HIST = f'training_history_{TAG}.csv'
FIT_NPY = os.path.join(ARRDIR, f'fit_arr_{TAG}.npy')
LAB_NPY = os.path.join(ARRDIR, f'label_arr_{TAG}.npy')

# BKG_CONE: which downward-going sample supplies label 0.
#   '75'  (default) -- the DEPLOYED background: tvami's own v5a production
#                      (CosmicToMu_Par-...-MaxTheta-75_cosmuogen), ~23.5M raw events,
#                      82205 skimmed entries. This is what every arm through Wp used.
#   '89'  -- the wider 0-89 deg cone, smasanam's Ntuplizer-0to89Theta production,
#            ~9.25M raw events. Skimmed by cluster 372321 (v5.0.0 cutflow).
#   '75n' -- the 0-75 deg cone from the SAME smasanam campaign as '89'.
#
# '75n' is NOT decoration: '89' and the default '75' differ in TWO things at once, the
# cone AND the ntuplizer campaign (different branch content, 2.5x different statistics,
# and the smasanam ntuples predate the bField branch). Comparing '89' straight to the
# deployed arms repeats exactly the arm-2 mistake the handover documents -- a "control"
# that moved more than one variable. Only the '89' vs '75n' step isolates the cone.
BKG_CONE = os.environ.get('BKG_CONE', '75')
# The smasanam skims carry no RNNScore, so they live in the plain v5.0.0 tree, not
# _wRNN. That is fine here: training reads only the four dtSeg branches.
V500 = '/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.0'
_L0 = {
    '75':  (BASE, 'BkgMC/*/matched_muon/skimmed_matched_muon_*_CosmicToMu_Par-MinP-4-'
                  'MaxP-3000-MinTheta-0-MaxTheta-75_cosmuogen_v5.0.0.root'),
    '89':  (V500, 'BkgMC/*/matched_muon/skimmed_matched_muon_*_Ntuplizer-0to89Theta-'
                  '4to3000GeV-140X_mcRun3_2024cosmics_realistic_deco_v14-v2_s3_'
                  'v5.0.0.root'),
    '75n': (V500, 'BkgMC/*/matched_muon/skimmed_matched_muon_*_Ntuplizer-0to75Theta-'
                  '4to3000GeV-140X_mcRun3_2024cosmics_realistic_deco_v14-v2_s2_'
                  'v5.0.0.root'),
}
if BKG_CONE not in _L0:
    sys.exit(f'BKG_CONE={BKG_CONE!r} unknown; pick one of {sorted(_L0)}')
L0_BASE, L0_PATTERN = _L0[BKG_CONE]

# label 0 = cosmic background (downward-going), label 1 = signal-like (upward-going)
INPUTS = [
    (L0_BASE, L0_PATTERN, 0),
    (BASE, 'BkgMC/*/matched_muon/skimmed_matched_muon_*_CosmicToMu_Par-MinP-10-MaxP-10000-'
           'MinTheta-91-MaxTheta-179_cosmuogen_v5.0.0.root', 1),
    (BASE, 'Signal/*/matched_muon/skimmed_matched_muon_*_CosmicToMu_Par-MinP-*-'
           'MinTheta-91-MaxTheta-179-SurfaceDepth-*_cosmuogen_v5.0.0.root', 1),
]
# signal mass points held out of training (kept as an unbiased test set), as in rnn_retrain.py
HELD_OUT = ('-1000-MinTheta', '-5000-MinTheta', '-10000-MinTheta', '-90000-MinTheta')

print(f'BASE={BASE}\nBKG_CONE={BKG_CONE}  L0_BASE={L0_BASE}\n'
      f'T0_CENTER={T0_CENTER}  T0_SHIFT={T0_SHIFT} ns  T0_SMEAR={T0_SMEAR} ns  '
      f'T0_JITTER={T0_JITTER} ns  NMAX={NMAX}  TAG={TAG}  DROP_GROUPS={sorted(DROP_GROUPS) or "none"}',
      flush=True)

if PREPROCESS:
    fits, labs = [], []
    for gi, (gbase, pattern, label) in enumerate(INPUTS):
        if gi in DROP_GROUPS:
            print(f'  group {gi} (label {label}): DROPPED via DROP_GROUPS', flush=True)
            continue
        ch = ROOT.TChain('tree')
        nf = 0
        for f in sorted(glob.glob(f'{gbase}/{pattern}')):
            if '/vr1/' in f:                       # vr1 duplicates the sr skim
                continue
            if 'Signal' in f and any(h in f for h in HELD_OUT):
                continue
            ch.Add(f); nf += 1
        print(f'  label {label}: {nf} files, {ch.GetEntries()} entries', flush=True)
        rdf = ROOT.RDataFrame(ch)
        if MAXEV:
            rdf = rdf.Range(MAXEV)
        cols = rdf.AsNumpy(
            ['muon_dtSeg_t0timing', 'muon_dtSeg_globX',
             'muon_dtSeg_globY', 'muon_dtSeg_globZ'])
        # np.asarray each RVec first: ak.Array cannot ingest RVec<double> directly
        # when the frame comes from a TChain, which is how this script reads inputs.
        arrs = [ak.Array([np.asarray(v, dtype=np.float64) for v in cols[k]]) for k in
                ('muon_dtSeg_t0timing', 'muon_dtSeg_globX',
                 'muon_dtSeg_globY', 'muon_dtSeg_globZ')]
        tensor, _ = build_rnn_tensor(*arrs, nMax=NMAX, center=T0_CENTER,
                                     shift=T0_SHIFT, smear=T0_SMEAR,
                                     jitter=T0_JITTER)
        print(f'    tensor {tensor.shape}  {tensor.nbytes/1e9:.1f} GB', flush=True)
        fits.append(tensor)
        labs.append(np.full(tensor.shape[0], label, dtype=np.float32))
        del cols, arrs
        gc.collect()

    X = np.concatenate(fits); Y = np.concatenate(labs)
    del fits, labs; gc.collect()
    print('total', X.shape, Y.shape, f'{X.nbytes/1e9:.1f} GB', flush=True)
    np.save(FIT_NPY, X); np.save(LAB_NPY, Y)
    print(f'cached -> {FIT_NPY}', flush=True)
else:
    X = np.load(FIT_NPY, mmap_mode='r'); Y = np.load(LAB_NPY)
    print('loaded', X.shape, Y.shape, flush=True)

X_train, X_tmp, Y_train, Y_tmp = train_test_split(X, Y, test_size=0.2, random_state=0)
X_val, X_test, Y_val, Y_test = train_test_split(X_tmp, Y_tmp, test_size=0.5, random_state=0)
del X, Y, X_tmp, Y_tmp
gc.collect()
print('bincount train:', np.bincount(Y_train.astype(np.int64)),
      ' val:', np.bincount(Y_val.astype(np.int64)), flush=True)

model = Sequential([
    layers.Masking(mask_value=-9999.),
    layers.Bidirectional(layers.LSTM(64)),
    layers.Dense(64, activation='relu'),
    layers.Dense(1, activation='sigmoid'),
])
model.compile('adam', loss='binary_crossentropy', metrics=['accuracy'])

cbs = [
    keras.callbacks.ModelCheckpoint(filepath=CKPT, verbose=1, save_best_only=True,
                                    save_weights_only=True, monitor='val_loss', mode='min'),
    keras.callbacks.EarlyStopping(monitor='val_loss', patience=50, restore_best_weights=True),
    keras.callbacks.CSVLogger(HIST, append=True),
]

train_ds = tf.data.Dataset.from_tensor_slices((X_train, Y_train)).batch(4000) \
                          .prefetch(tf.data.experimental.AUTOTUNE)
val_ds = tf.data.Dataset.from_tensor_slices((X_val, Y_val)).batch(4000) \
                        .prefetch(tf.data.experimental.AUTOTUNE)
del X_train, Y_train
gc.collect()

print('Fit model on training data', flush=True)
model.fit(train_ds, epochs=EPOCHS, validation_data=val_ds, callbacks=cbs,
          class_weight={0: CLASS_W0, 1: 1})

print('\nheld-out test evaluation:', flush=True)
print(model.evaluate(X_test, Y_test, batch_size=4000, verbose=0), flush=True)
print(f'checkpoint written: {CKPT}', flush=True)
