#!/usr/bin/env python3
# Survival of RNN-PASS events (v5.0.9 cleaned scores) under extra cuts: dt(top-bottom) > 25/50 ns on the
# cleaned segments, and muon_n <= 2. SR data is cut to pT < 1027 GeV before anything is computed.
import sys, os, glob
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), ".."))
import numpy as np
import awkward as ak
import uproot
from seg_cleaning import clean_segments

BASE = "/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.9_wRNN"
BR = ["RNNScore", "muon_n", "muon_dtSeg_t0timing", "muon_dtSeg_globX", "muon_dtSeg_globY", "muon_dtSeg_globZ", "muon_fromGenTrack_Pt"]
WP = 0.99999


def survival(files, ptmax=None):
    cols = []
    for f in files:
        with uproot.open(f) as fh:
            if "tree" not in fh:
                continue
            for a in fh["tree"].iterate(BR, step_size="200 MB", library="ak"):
                pt = ak.to_numpy(ak.fill_none(ak.max(a["muon_fromGenTrack_Pt"], axis=1), 0.0))
                keep = ak.to_numpy(a["RNNScore"]) >= WP  # region files already carry the pT cut
                if ptmax is not None:
                    keep &= pt < ptmax  # blinding
                a = a[keep]
                if len(a) == 0:
                    continue
                t, x, y, z = clean_segments(a["muon_dtSeg_t0timing"], a["muon_dtSeg_globX"], a["muon_dtSeg_globY"], a["muon_dtSeg_globZ"], "dropboth")
                top, bot = y > 200, y < -200
                dt = ak.to_numpy(ak.fill_none(ak.mean(t[top], axis=1), np.nan)) - ak.to_numpy(ak.fill_none(ak.mean(t[bot], axis=1), np.nan))
                cols.append(np.stack([dt, ak.to_numpy(a["muon_n"])], 1))
    if not cols:
        return 0, {}
    dt, mu = np.concatenate(cols).T
    n = len(dt)
    c = {"dt>25": dt > 25, "dt>50": dt > 50, "mu<=2": mu <= 2, "dt>25 & mu<=2": (dt > 25) & (mu <= 2), "dt>50 & mu<=2": (dt > 50) & (mu <= 2)}
    return n, {k: v.sum() for k, v in c.items()}


def show(label, n, s):
    print(f"{label:28s} PASS {n:6d}  " + "  ".join(f"{k} {v:5d} ({100 * v / max(n, 1):5.1f}%)" for k, v in s.items()), flush=True)


for mass in (1000, 3000, 10000, 50000):
    fs = glob.glob(f"{BASE}/Signal/sr/matched_muon/*MinP-{mass}-MinTheta-91-*SurfaceDepth-e4_*.root")
    show(f"signal MinP-{mass} e4", *survival(fs))
show("data SR pT<1027", *survival(sorted(glob.glob(f"{BASE}/Data/sr/matched_muon/*.root")), 1027.0))
show("data VR2", *survival(sorted(glob.glob(f"{BASE}/Data/vr2/matched_muon/*.root"))))
