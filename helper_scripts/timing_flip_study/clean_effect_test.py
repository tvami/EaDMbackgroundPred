#!/usr/bin/env python3
# Signal efficiency and SR data yields (unblinded pT < 1027 GeV only) at the 0.99999 WP for the three
# --cleanSegments modes, with the deployed v5 network and the v5.0.8 inference settings
import os, sys, glob
os.environ["TF_NUM_INTEROP_THREADS"] = "1"; os.environ["TF_NUM_INTRAOP_THREADS"] = "4"
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), ".."))
import numpy as np
import awkward as ak
import uproot
from tensorflow.keras import Sequential, layers
from seg_cleaning import clean_segments

BASE = "/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.8_wRNN"
WP, SHIFT, SIGSTART, NMAX_SIG = 0.99999, 8.0, 1027.0, 30000
BR = ["muon_dtSeg_t0timing", "muon_dtSeg_globX", "muon_dtSeg_globY", "muon_dtSeg_globZ",
      "muon_fromGenTrack_Pt", "RNNScore"]
model = Sequential([layers.Masking(mask_value=-9999.), layers.Bidirectional(layers.LSTM(64)),
                    layers.Dense(64, activation="relu"), layers.Dense(1, activation="sigmoid")])
model.load_weights(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "rnn_v5_188k_final_weights.ckpt"))


def score(a, mc, mode):
    t0 = a["muon_dtSeg_t0timing"]
    if mc:  # same as the production -S 8: valid MC segments only
        t0 = ak.where((t0 > -998.0) & (t0 < 9998.0), t0 + SHIFT, t0)
    t0, x, y, z = clean_segments(t0, a["muon_dtSeg_globX"], a["muon_dtSeg_globY"], a["muon_dtSeg_globZ"], mode)
    ind = ak.argsort(t0, axis=1)
    n = int(ak.max(ak.num(t0)))
    X = np.stack([ak.to_numpy(ak.fill_none(ak.pad_none(v[ind], n, axis=1), -9999.0)) for v in (t0, x, y, z)], -1)
    return model.predict(X, batch_size=4096, verbose=0)[:, 0]


def run(files, mc, nmax=None):
    arr = [uproot.open(f)["tree"].arrays(BR, entry_stop=nmax) for f in files]
    a = ak.concatenate(arr)
    s = {m: score(a, mc, m) for m in ("none", "median", "dropboth")}
    if not mc:
        assert np.allclose(s["none"], ak.to_numpy(a["RNNScore"]), atol=1e-6), "none does not reproduce RNNScore"
    pt = ak.to_numpy(ak.fill_none(ak.max(a["muon_fromGenTrack_Pt"], axis=1), 0.0))
    return s, pt


print(f"{'sample':34s} {'N':>7s} " + " ".join(f"{m:>14s}" for m in ("none", "median", "dropboth")))
for mass in (1000, 3000, 10000, 50000):
    f = glob.glob(f"{BASE}/Signal/sr/matched_muon/*MinP-{mass}-MinTheta-91-*SurfaceDepth-e4_*.root")
    s, pt = run(f, True, NMAX_SIG)
    print(f"{'signal MinP-%d e4 eff' % mass:34s} {len(pt):7d} " + " ".join(f"{np.mean(s[m] >= WP):14.4f}" for m in s), flush=True)

s, pt = run(sorted(glob.glob(f"{BASE}/Data/sr/matched_muon/*.root")), False)
lo = pt < SIGSTART
print(f"{'data SR pT<1027 PASS':34s} {lo.sum():7d} " + " ".join(f"{np.sum(lo & (s[m] >= WP)):14d}" for m in s))
print(f"{'data SR pT<1027 PASS/FAIL x1e5':34s} {lo.sum():7d} " +
      " ".join(f"{1e5 * np.sum(lo & (s[m] >= WP)) / np.sum(lo & (s[m] < WP)):14.2f}" for m in s))
print(f"{'data SR all FAIL':34s} {len(pt):7d} " + " ".join(f"{np.sum(s[m] < WP):14d}" for m in s))
