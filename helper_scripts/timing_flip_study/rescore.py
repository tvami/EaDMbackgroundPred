#!/usr/bin/env python3
# Re-score RNN-PASS events with the deployed v5 network: nominal (must reproduce RNNScore) and
# with the invalid-t0 sentinel segments (-999 / 9999) removed
import sys, pickle, os
os.environ["TF_NUM_INTEROP_THREADS"] = "1"; os.environ["TF_NUM_INTRAOP_THREADS"] = "1"
import numpy as np
import tensorflow as tf
from tensorflow.keras import Sequential, layers

CKPT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "rnn_v5_188k_final_weights.ckpt")
model = Sequential([layers.Masking(mask_value=-9999.), layers.Bidirectional(layers.LSTM(64)),
                    layers.Dense(64, activation="relu"), layers.Dense(1, activation="sigmoid")])
model.load_weights(CKPT)


def dedupe(s):
    # collapse same-chamber twins (<30 cm), keeping the copy closest to the event median t0
    med = np.median(s[:, 0])
    keep = np.ones(len(s), bool)
    for i in range(len(s)):
        for j in range(i + 1, len(s)):
            if keep[i] and keep[j] and np.linalg.norm(s[i, 1:] - s[j, 1:]) < 30.0:
                keep[j if abs(s[j, 0] - med) > abs(s[i, 0] - med) else i] = False
    return s[keep]


def build(evs, drop_invalid, dedup=False):
    seqs = []
    for e in evs:
        s = np.array([e["muon_dtSeg_t0timing"], e["muon_dtSeg_globX"], e["muon_dtSeg_globY"],
                      e["muon_dtSeg_globZ"]], float).T
        if drop_invalid:
            s = s[(s[:, 0] > -998.0) & (s[:, 0] < 9998.0)]
        if dedup:
            s = dedupe(s)
        seqs.append(s[np.argsort(s[:, 0], kind="stable")])  # same t0 ordering as production
    n = max(len(s) for s in seqs)
    X = np.full((len(seqs), n, 4), -9999.0)
    for i, s in enumerate(seqs):
        X[i, :len(s)] = s
    return X


evs = pickle.load(open(sys.argv[1], "rb"))
stored = np.array([e["RNNScore"] for e in evs])
nom = model.predict(build(evs, False), verbose=0)[:, 0]
clean = model.predict(build(evs, True), verbose=0)[:, 0]
dd = model.predict(build(evs, True, True), verbose=0)[:, 0]
ninv = np.array([sum(not (-998 < t < 9998) for t in e["muon_dtSeg_t0timing"]) for e in evs])
np.savez(sys.argv[2], run=[e["run"] for e in evs], event=[e["event"] for e in evs],
         stored=stored, nom=nom, clean=clean, dd=dd, ninv=ninv)
print(f"invalid dropped + twins collapsed: still PASS {(dd >= 0.99999).sum()} / {len(evs)}, "
      f"below 0.9: {(dd < 0.9).sum()}")
print("nominal reproduces stored: max |diff| = %.2e" % np.max(np.abs(nom - stored)))
WP = 0.99999
has = ninv > 0
print(f"PASS events with invalid-t0 segments: {has.sum()} / {len(evs)}")
print(f"  still PASS after dropping them: {(clean[has] >= WP).sum()} / {has.sum()}")
print(f"  score after drop: median {np.median(clean[has]):.4g}, below 0.9: {(clean[has] < 0.9).sum()}")
print(f"PASS events without invalid segments: {(~has).sum()} (score unchanged by construction)")
