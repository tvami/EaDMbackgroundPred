#!/usr/bin/env python3
# Cleaned number of physical muons per event (muon_n_cleaned) and the survival of RNN-PASS events
# (v5.0.9) under muon_n_cleaned == 1. Two reconstructed muons are one physical muon if they share a
# DT segment (duplicate track) or if one's segments lie within 30 cm of the line fitted through the
# other's (two legs of one crossing muon). SR data is cut to pT < 1027 GeV before anything else.
import sys, os, glob
import numpy as np
import awkward as ak
import uproot

BASE = "/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.9_wRNN"
BR = ["RNNScore", "muon_n", "muon_dtSeg_n", "muon_dtSeg_t0timing", "muon_dtSeg_globX", "muon_dtSeg_globY",
      "muon_dtSeg_globZ", "muon_fromGenTrack_Pt"]
WP, SAME_SEG, LINE_DIST = 0.99999, 1.0, 30.0  # cm


def n_physical(e):
    x, y, z, t = (np.asarray(e[k]) for k in ("muon_dtSeg_globX", "muon_dtSeg_globY", "muon_dtSeg_globZ", "muon_dtSeg_t0timing"))
    real = x < 9998  # null refs are not counted in muon_dtSeg_n
    p, t = np.stack([x, y, z], 1)[real], t[real]
    cnt = np.asarray(e["muon_dtSeg_n"])
    if cnt.sum() != len(p):
        return -1  # block mismatch, cannot assign segments to muons
    blocks = [p[s:s + c] for s, c in zip(np.concatenate([[0], np.cumsum(cnt)[:-1]]), cnt) if c > 0]
    n = len(blocks)
    parent = list(range(n))

    def find(i):
        while parent[i] != i:
            parent[i] = parent[parent[i]]; i = parent[i]
        return i

    lines = []
    for b in blocks:  # principal axis through the muon's segments
        c = b.mean(0)
        if len(b) >= 2 and np.ptp(b, 0).max() > 50:
            d = np.linalg.svd(b - c)[2][0]
            lines.append((c, d))
        else:
            lines.append(None)
    for i in range(n):
        for j in range(i + 1, n):
            dmin = np.min(np.linalg.norm(blocks[i][:, None, :] - blocks[j][None, :, :], axis=2))
            same = dmin < SAME_SEG
            for a, b in ((i, j), (j, i)):
                if not same and lines[a] is not None:
                    c, d = lines[a]
                    r = blocks[b] - c
                    dist = np.linalg.norm(r - np.outer(r @ d, d), axis=1)
                    same = np.median(dist) < LINE_DIST
            if same:
                parent[find(i)] = find(j)
    return len({find(i) for i in range(n)})


def study(files, ptmax=None, wp=WP, fail_prescale=None):
    out = []
    for f in files:
        with uproot.open(f) as fh:
            if "tree" not in fh:
                continue
            for a in fh["tree"].iterate(BR, step_size="200 MB", library="ak"):
                pt = ak.to_numpy(ak.fill_none(ak.max(a["muon_fromGenTrack_Pt"], axis=1), 0.0))
                r = ak.to_numpy(a["RNNScore"])
                if fail_prescale:
                    keep = (r < wp) & (np.arange(len(r)) % fail_prescale == 0)
                else:
                    keep = r >= wp
                if ptmax is not None:
                    keep &= pt < ptmax  # blinding
                for e in a[keep]:
                    out.append((n_physical(e), int(e["muon_n"])))
    return np.array(out).reshape(-1, 2)


def show(label, r):
    good = r[:, 0] >= 0
    nc, nr = r[good, 0], r[good, 1]
    N = len(nc)
    h = {k: int(np.sum(nc == k)) for k in (0, 1, 2)}
    print(f"{label:26s} N {N:6d} (mismatch {int((~good).sum())})  cleaned=1 {h[1]} ({100 * h[1] / max(N, 1):.1f}%)  "
          f"cleaned=2 {h[2]}  cleaned>=3 {int(np.sum(nc >= 3))}  cleaned=0 {h[0]} | raw<=2 {int(np.sum(nr <= 2))} ({100 * np.mean(nr <= 2):.1f}%)", flush=True)


if __name__ == "__main__":
  for mass in (1000, 3000, 10000, 50000):
    show(f"signal MinP-{mass} e4", study(glob.glob(f"{BASE}/Signal/sr/matched_muon/*MinP-{mass}-MinTheta-91-*SurfaceDepth-e4_*.root")))
  show("data SR PASS pT<1027", study(sorted(glob.glob(f"{BASE}/Data/sr/matched_muon/*.root")), 1027.0))
  show("data VR2 PASS", study(sorted(glob.glob(f"{BASE}/Data/vr2/matched_muon/*.root"))))
  show("data VR2 FAIL (1/1000)", study(sorted(glob.glob(f"{BASE}/Data/vr2/matched_muon/*.root")), fail_prescale=1000))
