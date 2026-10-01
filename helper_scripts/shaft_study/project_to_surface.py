#!/usr/bin/env python3
# Vectorized DT-segment line fit, extrapolated to the surface; saves (x, z), pT, RNN score per event
import sys, glob
import numpy as np
import awkward as ak
import uproot

BASE = "/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.8_wRNN"
Y_SURF = 8887.4  # cm, CosmicMuonParameters.h SurfaceOfEarth
BR = ["muon_dtSeg_globX", "muon_dtSeg_globY", "muon_dtSeg_globZ", "muon_fromGenTrack_Pt", "RNNScore"]


def surface_xz(X, Y, Z):
    n = ak.to_numpy(ak.num(X))
    mx, my, mz = ak.mean(X, axis=1), ak.mean(Y, axis=1), ak.mean(Z, axis=1)
    dx, dy, dz = X - mx, Y - my, Z - mz
    C = np.zeros((len(n), 3, 3))
    comps = [dx, dy, dz]
    for i in range(3):
        for j in range(i, 3):
            C[:, i, j] = C[:, j, i] = ak.to_numpy(ak.fill_none(ak.sum(comps[i] * comps[j], axis=1), 0.0))
    spread = np.stack([ak.to_numpy(ak.fill_none(ak.max(c, axis=1) - ak.min(c, axis=1), 0.0)) for c in (X, Y, Z)], 1)
    ok = (n >= 2) & (spread.max(1) > 100.0)  # >1 m lever arm
    C[~ok] = np.eye(3)
    _, v = np.linalg.eigh(C)
    d = v[:, :, 2]  # principal axis
    ok &= np.abs(d[:, 1]) > 0.2  # drop near-horizontal lines
    c = np.stack([ak.to_numpy(ak.fill_none(m, 0.0)) for m in (mx, my, mz)], 1)
    with np.errstate(divide="ignore", invalid="ignore"):
        t = (Y_SURF - c[:, 1]) / d[:, 1]
    out = np.stack([c[:, 0] + t * d[:, 0], c[:, 2] + t * d[:, 2]], 1)
    out[~ok] = np.nan
    return out


if __name__ == "__main__":
    sample, region, pat, outdir = sys.argv[1:5]
    files = sorted(glob.glob(f"{BASE}/{sample}/{region}/matched_muon/{pat}"))
    xz_l, pt_l, rnn_l = [], [], []
    for f in files:
        with uproot.open(f) as fh:
            for a in fh["tree"].iterate(BR, step_size="300 MB", library="ak"):
                xz_l.append(surface_xz(a["muon_dtSeg_globX"], a["muon_dtSeg_globY"], a["muon_dtSeg_globZ"]))
                pt_l.append(ak.to_numpy(ak.fill_none(ak.max(a["muon_fromGenTrack_Pt"], axis=1), 0.0)))
                rnn_l.append(ak.to_numpy(a["RNNScore"]))
    tag = f"{sample}_{region}_{pat.replace('*', '').replace('.root', '')}"
    np.savez_compressed(f"{outdir}/v2_{tag}.npz", xz=np.concatenate(xz_l), pt=np.concatenate(pt_l), rnn=np.concatenate(rnn_l))
    print(tag, sum(len(p) for p in pt_l))
