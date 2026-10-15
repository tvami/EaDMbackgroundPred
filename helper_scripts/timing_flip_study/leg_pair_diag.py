#!/usr/bin/env python3
# Diagnostic for muon_n_cleaned: angle and distance between pairs of reconstructed muons (per-muon DT
# segment blocks), for signal (one physical muon) and data RNN-PASS events. Prints quantiles.
import glob
import numpy as np
import awkward as ak
import uproot
from muon_n_cleaned_v509 import BASE, BR, WP

def pairs(files, ptmax=None, nmax=3000):
    ang, dist, shared = [], [], 0
    evs = []  # per event: list of (angle, dist) pairs
    for f in files:
        with uproot.open(f) as fh:
            if "tree" not in fh:
                continue
            a = fh["tree"].arrays(BR)
        pt = ak.to_numpy(ak.fill_none(ak.max(a["muon_fromGenTrack_Pt"], axis=1), 0.0))
        keep = ak.to_numpy(a["RNNScore"]) >= WP
        if ptmax is not None:
            keep &= pt < ptmax  # blinding
        for e in a[keep][:nmax]:
            x, y, z = (np.asarray(e[k]) for k in ("muon_dtSeg_globX", "muon_dtSeg_globY", "muon_dtSeg_globZ"))
            real = x < 9998
            p = np.stack([x, y, z], 1)[real]
            cnt = np.asarray(e["muon_dtSeg_n"])
            if cnt.sum() != len(p):
                continue
            blocks = [p[s:s + c] for s, c in zip(np.concatenate([[0], np.cumsum(cnt)[:-1]]), cnt) if c >= 2]
            lines = []; ev = []
            for b in blocks:
                c = b.mean(0)
                lines.append((c, np.linalg.svd(b - c)[2][0]) if np.ptp(b, 0).max() > 50 else None)
            for i in range(len(blocks)):
                for j in range(i + 1, len(blocks)):
                    if np.min(np.linalg.norm(blocks[i][:, None] - blocks[j][None], axis=2)) < 1.0:
                        shared += 1; continue
                    if lines[i] is None or lines[j] is None:
                        continue
                    d1, d2 = lines[i][1], lines[j][1]
                    ang.append(np.degrees(np.arccos(min(1.0, abs(d1 @ d2)))))
                    best = 1e9
                    for (c, d), b in ((lines[i], blocks[j]), (lines[j], blocks[i])):
                        r = b - c
                        best = min(best, np.median(np.linalg.norm(r - np.outer(r @ d, d), axis=1)))
                    dist.append(best); ev.append((ang[-1], best))
            evs.append(ev)
    ang, dist = np.array(ang), np.array(dist)
    return ang, dist, shared, evs

def q(v):
    return " ".join(f"{p}%:{np.percentile(v, p):.1f}" for p in (10, 50, 90, 99)) if len(v) else "none"

for label, fs, ptmax in (("signal MinP-3000 e4", glob.glob(f"{BASE}/Signal/sr/matched_muon/*MinP-3000-MinTheta-91-*SurfaceDepth-e4_*.root"), None),
                         ("signal MinP-50000 e4", glob.glob(f"{BASE}/Signal/sr/matched_muon/*MinP-50000-MinTheta-91-*SurfaceDepth-e4_*.root"), None),
                         ("data VR2 PASS", sorted(glob.glob(f"{BASE}/Data/vr2/matched_muon/*.root")), None),
                         ("data SR PASS pT<1027", sorted(glob.glob(f"{BASE}/Data/sr/matched_muon/*.root")), 1027.0)):
    a, d, s, evs = pairs(fs, ptmax)
    grid = " ".join(f"[<{ac}deg,>{dc}cm]:{100*np.mean([any(x<ac and y>dc for x,y in ev) for ev in evs]):.1f}%" for ac in (3,5,10) for dc in (100,200,300))
    print(f"{label:22s} events {len(evs)} vetoed by shower-pair: {grid}", flush=True)
