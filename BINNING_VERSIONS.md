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
