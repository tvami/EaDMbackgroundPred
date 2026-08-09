# 2DAlphabet Binning Versions

This file documents the x-axis (e.g. mass / score) binning schemes used in the 2DAlphabet templates.

---

## Binning v8

**Files:** `config_Binningv8_InputTemplate_*.json`, `config_Binningv8alt_InputTemplate_VR2_Unblind.json`

| Region | BINS |
|--------|------|
| SR, VR1 | `[200, 350, 726, 1329, 2157, 3212, 4267, 6000]` |
| VR2 (alt) | `[10, 19, 34, 55, 82, 115, 155, 200]` |

---

## Binning v9

**Files:** `config_Binningv9_InputTemplate_*.json`, `config_Binningv9alt_InputTemplate_VR2_Unblind.json`

| Region | BINS |
|--------|------|
| SR, VR1 | `[200, 350, 726, 1329, 2157, 3212, 4267, 6001]` |
| VR2 (alt) | `[10, 19, 34, 55, 82, 115, 155, 200]` (unchanged) |

**Change from v8:** The last SR/VR1 bin edge was extended from `6000` to `6001`.
This makes the final bin half-open (`[4267, 6001)`) with the upper edge sitting just
above the physical reach of the histogram, ensuring no events fall outside the last
bin due to rounding at exactly 6000.

---

## VR2 "alt" binning

VR2 uses a separate lower-range binning scheme throughout all versions because the
variable distribution in VR2 peaks at much lower values than SR/VR1. This binning is
versioned alongside the main scheme (v8alt → v9alt) but is otherwise independent.

---

## Binning RNNv1 (RNN-axis fit, region tag `RNNSR`)

**Files:** `config_BinningRNNv1_Inputv26_RNNSR_M3000GeV_e4.json`

This is a **different observable**, not another pT binning. The RNN-axis fit estimates the
RNN score distribution at pT > 200 GeV from a control region at pT < 200 GeV, i.e. it swaps
the roles of pT and RNNScore relative to every version above. See the `RNNSR` entry in the
README's "Region description".

| Axis | Value |
|------|-------|
| X | `RNNt100` = `100 * (-log10(1 - RNNScore))` |
| BINS | `[20, 40, 60, 80, 100, 130, 160, 200, 260, 320, 400, 500, 700]` |
| SIGSTART / SIGEND | `200` / `260` |
| Y | `N`, `NBINS 1, MIN 1, MAX 200` (unchanged from the pT-axis configs) |

**Why `100 *` the log:** `copy_hist_with_new_bins` compares input and output bin edges with
exact float equality. The fine input histograms are `(700, 0, 700)`, so every edge is an
integer and rebinning is exact; a `(700, 0, 7)` axis has bin width `7.0/700`, which is not
exactly `0.01` in binary, and an edge at `0.2` would fail to match. Same reasoning as the
`(12500, 0, 12500)` 1-GeV-per-bin pT axis. One fine bin is also exactly one step of the
`punzi_rnn_optimization.py` threshold scan (`XSTEP = 0.01`).

**Why the axis starts at 20** (RNNScore = 0.369) rather than 0: the `RNNScore ~ 0` spike below
that holds ~98% of all events and has a pass/fail ratio of ~0.040, against ~0.13-0.18 over the
rest of the axis. Above 20 the ratio rises smoothly and near-linearly.

**Blinding:** `SIGSTART = 200` is RNNScore = 0.99.
