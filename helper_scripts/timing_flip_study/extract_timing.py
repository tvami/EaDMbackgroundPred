#!/usr/bin/env python3
# Per-event DT timing summaries for RNN-PASS events vs a prescaled FAIL sample (reviewer question:
# are the top segments really late by >50 ns in events the RNN calls upward-going?)
import sys, glob, os, pickle
import numpy as np
import awkward as ak
import uproot
from multiprocessing import Pool

BASE = "/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.8_wRNN"
WP = 0.99999
FAIL_PRESCALE = 100  # keep 1 in 100 FAIL events
Y_SIDE = 200.0       # cm, |y| below this = horizontal-sector chambers, no hemisphere
OUTLIER = 15.0       # ns, residual wrt the per-event t0-vs-y line
BR = ["run", "event", "RNNScore", "muon_n", "muon_dtSeg_t0timing", "muon_dtSeg_globX",
      "muon_dtSeg_globY", "muon_dtSeg_globZ", "muon_fromGenTrack_Pt"]


def summarize(a):
    t0, y = a["muon_dtSeg_t0timing"], a["muon_dtSeg_globY"]
    valid = (t0 > -998.0) & (t0 < 9998.0)
    tv, yv = t0[valid], y[valid]
    top, bot = yv > Y_SIDE, yv < -Y_SIDE
    out = {
        "run": ak.to_numpy(a["run"]), "event": ak.to_numpy(a["event"]),
        "rnn": ak.to_numpy(a["RNNScore"]), "muon_n": ak.to_numpy(a["muon_n"]),
        "pt": ak.to_numpy(ak.fill_none(ak.max(a["muon_fromGenTrack_Pt"], axis=1), 0.0)),
        "nseg": ak.to_numpy(ak.num(t0)), "nvalid": ak.to_numpy(ak.num(tv)),
        "ntop": ak.to_numpy(ak.sum(top, axis=1)), "nbot": ak.to_numpy(ak.sum(bot, axis=1)),
        "nside": ak.to_numpy(ak.sum(~top & ~bot, axis=1)),
        "t0top": ak.to_numpy(ak.fill_none(ak.mean(tv[top], axis=1), np.nan)),
        "t0bot": ak.to_numpy(ak.fill_none(ak.mean(tv[bot], axis=1), np.nan)),
        "t0min": ak.to_numpy(ak.fill_none(ak.min(tv, axis=1), np.nan)),
        "t0max": ak.to_numpy(ak.fill_none(ak.max(tv, axis=1), np.nan)),
        "yspan": ak.to_numpy(ak.fill_none(ak.max(yv, axis=1) - ak.min(yv, axis=1), 0.0)),
    }
    # least-squares slope of t0 vs y, ns per m (upward with the cosmic ToF calibration ~ +6.7 ns/m)
    n = ak.num(tv)
    my, mt = ak.mean(yv, axis=1), ak.mean(tv, axis=1)
    sxy, sxx = ak.sum((yv - my) * (tv - mt), axis=1), ak.sum((yv - my) ** 2, axis=1)
    slope = ak.to_numpy(ak.fill_none(sxy / sxx, np.nan)) * 100.0
    slope[(ak.to_numpy(n) < 2) | (ak.to_numpy(ak.fill_none(sxx, 0.0)) <= 0)] = np.nan
    out["slope"] = slope
    resid = tv - (mt + (yv - my) * ak.fill_none(sxy / sxx, 0.0))
    out["nout"] = ak.to_numpy(ak.sum(abs(resid) > OUTLIER, axis=1))
    # t0 residual near +-25 ns = segment from a neighboring BX
    out["nbx"] = ak.to_numpy(ak.sum((abs(resid) > 18.0) & (abs(resid) < 32.0), axis=1))
    # twins: two valid segments in the same chamber spot (<30 cm) with t0 differing by >15 ns
    seg = ak.zip({"t": tv, "x": a["muon_dtSeg_globX"][valid], "y": yv, "z": a["muon_dtSeg_globZ"][valid]})
    p = ak.combinations(seg, 2)
    d3 = np.sqrt((p["0"].x - p["1"].x) ** 2 + (p["0"].y - p["1"].y) ** 2 + (p["0"].z - p["1"].z) ** 2)
    tw = (d3 < 30.0) & (abs(p["0"].t - p["1"].t) > 15.0)
    out["ntwin"] = ak.to_numpy(ak.sum(tw, axis=1))
    # is the earliest valid segment one half of such a twin, and in the bottom hemisphere?
    tmin = ak.min(tv, axis=1)
    early = tw & ((p["0"].t == tmin) | (p["1"].t == tmin))
    ybot = ak.where(p["0"].t == tmin, p["0"].y, p["1"].y) < -Y_SIDE
    out["earlytwin"] = ak.to_numpy(ak.sum(early, axis=1) > 0)
    out["earlytwinbot"] = ak.to_numpy(ak.sum(early & ybot, axis=1) > 0)
    return out, valid


def process(f):
    res, segs = [], []
    with uproot.open(f) as fh:
        for i, a in enumerate(fh["tree"].iterate(BR, step_size="200 MB", library="ak")):
            rnn = ak.to_numpy(a["RNNScore"])
            idx = np.arange(len(rnn))
            keep = (rnn >= WP) | ((idx % FAIL_PRESCALE) == 0)
            a = a[keep]
            s, _ = summarize(a)
            res.append(s)
            p = ak.to_numpy(a["RNNScore"]) >= WP
            segs.append(a[["run", "event", "RNNScore", "muon_n", "muon_dtSeg_t0timing", "muon_dtSeg_globX",
                           "muon_dtSeg_globY", "muon_dtSeg_globZ"]][p])
    out = {k: np.concatenate([r[k] for r in res]) for k in res[0]}
    print(os.path.basename(f), len(out["rnn"]), int((out["rnn"] >= WP).sum()), flush=True)
    return out, ak.concatenate(segs) if segs else None


if __name__ == "__main__":
    sample, region, outdir = sys.argv[1:4]
    files = sorted(glob.glob(f"{BASE}/{sample}/{region}/matched_muon/*.root"))
    os.makedirs(outdir, exist_ok=True)
    with Pool(min(8, len(files))) as p:
        results = p.map(process, files)
    out = {k: np.concatenate([r[0][k] for r in results]) for k in results[0][0]}
    np.savez_compressed(f"{outdir}/summary_{sample}_{region}.npz", **out)
    segs = ak.concatenate([r[1] for r in results if r[1] is not None])
    with open(f"{outdir}/passsegs_{sample}_{region}.pkl", "wb") as fp:  # no pyarrow in cmsenv
        pickle.dump(ak.to_list(segs), fp)
    print("DONE", sample, region, len(out["rnn"]), "pass", int((out["rnn"] >= WP).sum()))
