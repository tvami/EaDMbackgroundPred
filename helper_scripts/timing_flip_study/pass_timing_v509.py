#!/usr/bin/env python3
# Timing of RNN-PASS events with the cleaned (v5.0.9) scores, on the cleaned segments the RNN sees.
# SR data is cut to pT < 1027 GeV BEFORE anything is computed (blinded above).
# usage: pass_timing_v509.py <sample> <region> <wp> [ptmax]
import sys, os, glob
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), ".."))
import numpy as np
import awkward as ak
import uproot
from seg_cleaning import clean_segments

BASE = "/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.9_wRNN"
BR = ["RNNScore", "muon_n", "muon_dtSeg_t0timing", "muon_dtSeg_globX", "muon_dtSeg_globY", "muon_dtSeg_globZ", "muon_fromGenTrack_Pt"]
sample, region, wp = sys.argv[1], sys.argv[2], float(sys.argv[3])
ptmax = float(sys.argv[4]) if len(sys.argv) > 4 else None

rows = []
for f in sorted(glob.glob(f"{BASE}/{sample}/{region}/matched_muon/{os.environ.get('PAT', '*')}.root")):  # PAT picks one sample
    with uproot.open(f) as fh:
        if "tree" not in fh:
            continue
        for a in fh["tree"].iterate(BR, step_size="200 MB", library="ak"):
            pt = ak.to_numpy(ak.fill_none(ak.max(a["muon_fromGenTrack_Pt"], axis=1), 0.0))
            keep = ak.to_numpy(a["RNNScore"]) >= wp
            if ptmax is not None:
                keep &= pt < ptmax  # blinding: never look above ptmax
            a = a[keep]
            if len(a) == 0:
                continue
            t, x, y, z = clean_segments(a["muon_dtSeg_t0timing"], a["muon_dtSeg_globX"], a["muon_dtSeg_globY"], a["muon_dtSeg_globZ"], "dropboth")
            top, bot = y > 200, y < -200
            rows.append(np.stack([ak.to_numpy(ak.sum(top, axis=1)), ak.to_numpy(ak.sum(bot, axis=1)),
                                  ak.to_numpy(ak.fill_none(ak.mean(t[top], axis=1), np.nan)),
                                  ak.to_numpy(ak.fill_none(ak.mean(t[bot], axis=1), np.nan)),
                                  ak.to_numpy(a["muon_n"]), pt[keep]], 1))
r = np.concatenate(rows) if rows else np.zeros((0, 6))
nt, nb, tt, tb, mu, pt = r.T
both = (nt > 0) & (nb > 0)
dt = tt - tb
N = len(r)
print(f"{sample} {region} WP {wp} ptmax {ptmax}: PASS events {N}")
if N:
    print(f"  both hemispheres {both.sum()} ({100 * both.mean():.0f}%)")
    print(f"  top late >50 ns {np.sum(both & (dt > 50))}, 25-50 ns {np.sum(both & (dt > 25) & (dt <= 50))}, |dt|<25 {np.sum(both & (abs(dt) < 25))}, top early < -25 {np.sum(both & (dt < -25))}")
    print(f"  dt median {np.nanmedian(dt[both]):.1f} ns, 16/84% {np.nanpercentile(dt[both], 16):.1f}/{np.nanpercentile(dt[both], 84):.1f}; muon_n>=3 {np.sum(mu >= 3)}; pT median {np.median(pt):.0f} GeV")
