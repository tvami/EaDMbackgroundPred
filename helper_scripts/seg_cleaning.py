# DT segment cleaning before RNN inference (timing_flip_study/, reviewer question 2026-10-12).
# RNN-PASS data events are dominated by two artifacts: t0 sentinels (-999 / 9999) that sort to
# the front of the t0-ordered sequence, and same-chamber "twin" segments whose t0 differs by
# 20-60 ns, whose early copy also sorts to the front.
import numpy as np
import awkward as ak

TWIN_DR = 30.0  # cm, same chamber spot
TWIN_DT = 15.0  # ns, exact duplicates (same t0) are left alone


def _median(t):
    s = ak.sort(t, axis=1)
    n = ak.to_numpy(ak.num(s))
    li = ak.local_index(s)
    mid = (li == (n - 1) // 2) | (li == n // 2)  # one or two middle entries
    return ak.fill_none(ak.mean(s[mid], axis=1), 0.0)  # empty events -> 0


def clean_segments(t0, x, y, z, mode):
    """mode: 'none', 'median' (keep the twin copy closest to the event median t0),
    'dropboth' (drop both copies). Sentinels are dropped in every mode except 'none'."""
    if mode == "none":
        return t0, x, y, z
    good = (t0 > -998.0) & (t0 < 9998.0)
    t0, x, y, z = t0[good], x[good], y[good], z[good]
    i, j = ak.unzip(ak.argcombinations(t0, 2))
    dr = np.sqrt((x[i] - x[j]) ** 2 + (y[i] - y[j]) ** 2 + (z[i] - z[j]) ** 2)
    tw = (dr < TWIN_DR) & (abs(t0[i] - t0[j]) > TWIN_DT)
    if mode == "dropboth":
        losers = ak.concatenate([i[tw], j[tw]], axis=1)
    elif mode == "median":
        med = _median(t0)
        losers = ak.where(abs(t0[j] - med) > abs(t0[i] - med), j, i)[tw]
    else:
        raise ValueError(f"unknown cleanSegments mode {mode}")
    # flat global indices instead of a nested cartesian (that one needed ~30 GB on the data SR)
    counts = ak.to_numpy(ak.num(t0))
    starts = np.concatenate([[0], np.cumsum(counts)[:-1]])
    flat_drop = np.zeros(int(counts.sum()), bool)
    flat_drop[ak.to_numpy(ak.flatten(losers + starts))] = True
    drop = ak.unflatten(flat_drop, counts)
    keep = ~drop | ak.all(drop, axis=1)  # never empty an event
    return t0[keep], x[keep], y[keep], z[keep]
