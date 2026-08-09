# 2DAlphabet for Earth as DM search

## Set up
```
cmsrel CMSSW_14_1_0_pre4
cd CMSSW_14_1_0_pre4/src
cmsenv
git clone git@github.com:tvami/EaDMbackgroundPred.git .
git clone https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
cd HiggsAnalysis/CombinedLimit
git fetch origin
git checkout v10.0.1
cd ../..
scram b -j
```

## Set up the enviroment (only once)
```
python3 -m virtualenv twoD-env
source twoD-env/bin/activate
cd 2DAlphabet
python3 setup.py develop
cd ..
```

## Use the enviroment 
```
cd /path/to/CMSSW_14_1_0_pre4/src
cmsenv
source twoD-env/bin/activate
```

**OS note (uaf):** the uaf nodes run el8, which is what this `CMSSW_14_1_0_pre4` / `SCRAM_ARCH=el8`
release was built for. If you land on a node where el8 is not available (e.g. an el9 host — `scram`
will warn `trying to use SCRAM architecture 'el8' on host with operating system 'el9'`), run inside
the el8 singularity container. Pass the command after `--`:
```
cmssw-el8 -- bash -c 'cd /path/to/CMSSW_14_1_0_pre4/src && eval `scram runtime -sh` && source twoD-env/bin/activate && <your command>'
```
Note `cmssw-el8 <cmd>` (without `--`) misparses the first token as a container image — always use `--`.

**All `combine`-based commands below assume the el8 environment** — on an el9 host wrap them in
`cmssw-el8 -- bash -c '...'` (see the "OS note (uaf)" above).

## Example running (NOTE: Use same X, Y, - between all scripts)
```
python3 runWith1DVanilla_vY_-R.py rpf1x0_BinningvX_InputvY_-R_Unblind config_BinningvX_InputvY_-R_Unblind.json
```

## Run files (Binningv10 / Inputv25)
Each run file pairs with the config of the same suffix and runs the full chain for that region:
build the workspace, fit each TF order, make the fit/transfer-factor plots, run the
goodness-of-fit on condor (then harvest + plot it), and run the 1x0-vs-2x0 F-test.

| Run file | Config | Signal | Region cut |
|---|---|---|---|
| `runWith1DVanilla_v25_SR_BkgMC.py` | `config_Binningv10_Inputv25_SR_BkgMC.json` | `Signal_M3000GeV_e4_SR` | SR, "data" = cosmics BkgMC |
| `runWith1DVanilla_v25_SR_M3000GeV_e4.py` | `config_Binningv10_Inputv25_SR_M3000GeV_e4.json` | `Signal_M3000GeV_e4_SR` | SR, RNNScore >= 0.9999 |
| `runWith1DVanilla_v25_VR1_M3000GeV_e4.py` | `config_Binningv10_Inputv25_VR1_M3000GeV_e4.json` | `Signal_M3000GeV_e4_VR1` | VR1, 0.45 <= RNNScore < 0.9999 |
| `runWith1DVanilla_v25_VR2_M3000GeV_e4.py` | `config_Binningv9alt_Inputv25_VR2_M3000GeV_e4.json` | `Signal_M3000GeV_e4_VR2` | VR2, pT < 200 GeV (alt binning), RNNScore >= 0.9999 |

Each takes the working-area name as its first argument, e.g.:
```
python3 runWith1DVanilla_v25_VR1_M3000GeV_e4.py rpfmult_Binningv10_Inputv25_VR1_M3000GeV_e4
```

### Current run files (Binningv13 / Inputv28)
Same structure, pointed at `histograms_for_2DAlphabet_v28` (skimmed ntuples v5.0.4_wRNN) with the
overflow moved to 7001 GeV (v5.0.4 clips pT at 7000, so the tail piles at 7000 instead of 10000). VR2
keeps the `Binningv9alt` binning; the config JSON is hardcoded in each script's `configJSON = ...`.

| Run file | Config | Signal | Region cut |
|---|---|---|---|
| `runWith1DVanilla_v28_SR_BkgMC.py` | `config_Binningv13_Inputv28_SR_BkgMC.json` | `Signal_M3000GeV_e4_SR` | SR, "data" = cosmics BkgMC |
| `runWith1DVanilla_v28_SR_M3000GeV_e4.py` | `config_Binningv13_Inputv28_SR_M3000GeV_e4.json` | `Signal_M3000GeV_e4_SR` | SR, RNNScore >= 0.9999 |
| `runWith1DVanilla_v28_VR1_M3000GeV_e4.py` | `config_Binningv13_Inputv28_VR1_M3000GeV_e4.json` | `Signal_M3000GeV_e4_VR1` | VR1, 0.45 <= RNNScore < 0.9999 |
| `runWith1DVanilla_v28_VR2_M3000GeV_e4.py` | `config_Binningv9alt_Inputv28_VR2_M3000GeV_e4.json` | `Signal_M3000GeV_e4_VR2` | VR2, pT < 200 GeV (alt binning), RNNScore >= 0.9999 |

The previous version (Binningv12 / Inputv27, skimmed v5.0.3_wRNN, overflow at 10001) uses the
`runWith1DVanilla_v27_*` / `config_Binningv12_Inputv27_*` files.
The GoF is submitted to condor (T2_US_UCSD, rhel8 image); `wait_for_condor` blocks until the
jobs finish, then the toys are harvested and plotted. A valid grid proxy is required first
(`voms-proxy-init -voms cms`); set `useCondor = False` in `__main__` to run the toys locally instead.

## Re-plotting the GoF (regenerate plots without re-running the fits/toys)
Run from `.../CMSSW_14_1_0_pre4/src` with the environment active (see "Use the enviroment").
The plotting functions read existing fit/toy output, so they are fast and need no proxy.

Goodness-of-fit plot (`gof_plot.{png,pdf}` + `gof_results.txt` in the fit area).
Use `condor=True` if the toys are condor output tarballs (`*_gof_toys_output_*.tgz`),
or `condor=False` for a single local toy file:
```
python3 -c "from TwoDAlphabet import plot; plot.plot_gof('rpfmult_Binningv10_Inputv25_SR_BkgMC','Signal_M3000GeV_e4_SR-2x0_area', condor=True)"
```

Transfer-factor plot (`transfer_func.{png,pdf}`, from the b-only postfit pass/fail ratio):
```
python3 -c "from TwoDAlphabet import plot; plot.plot_transfer_funcs('rpfmult_Binningv10_Inputv25_SR_BkgMC','Signal_M3000GeV_e4_SR-2x0_area')"
```

F-test plot (`ftest_<poly1>_vs_<poly2>_notoys.{png,pdf}`). The leading `sys.argv` is only
needed because the run script reads the working area from `sys.argv[1]` at import:
```
python3 -c "import sys; sys.argv=['x','rpfmult_Binningv10_Inputv25_SR_BkgMC','config_Binningv10_Inputv25_SR_BkgMC.json']; import runWith1DVanilla_v25_SR_BkgMC as m; m.test_FTest('1x0','2x0','Signal_M3000GeV_e4_SR')"
```

## Bumping to a new Input / Binning version (runbook)

This is the exact procedure for turning a fresh set of skimmed ntuples into a runnable 2DAlphabet
setup (worked example: skimmed `v5.0.3_wRNN` → **Input v27**, **Binning v12**). "Input v<N>" is the
histogram-dir version; "Binning v<M>" is the analysis binning — the two are bumped independently.

1. **Get the skimmed ntuples + 2DA histograms onto ceph.** Run step 6 (process skimmed ntuples). Its
   condor wrapper writes the per-era `2DA/EaDM_*.root` straight to
   `/ceph/.../Ntuples/Ntuples_v<X.Y.Z>_wRNN/`; for any jobs that returned locally,
   `helper_scripts/organizeSkimmedNtuples.sh <X.Y.Z>` moves them there too. Add a bullet for `<X.Y.Z>`
   under **Skimmed Ntuple Versions** below.

2. **Build the histogram dir (step 6c).** `histograms_for_2DAlphabet_v<N>/` is what the configs point at:
   ```bash
   python3 collect_and_merge_histograms.py --version v<N> \
       --source-base /ceph/.../Ntuples/Ntuples_v<X.Y.Z>_wRNN
   ```
   Add a bullet for `v<N>` under **Histogram Versions**.

3. **Decide the binning.** If the analysis binning is unchanged, reuse the existing `Binningv<M>` name.
   If you change it (e.g. moved the overflow), pick the next `v<M>` and record it under **Binning
   Versions**. Region → binning convention:
   - **SR**, **SR_BkgMC**, and **VR1** → one shared `Binningv<M>` (unified from v12 onward, incl. the
     narrow overflow bin `[…,OVF-1,OVF]`). Before v12 these were split into `Binningv<M>b` (SR, with the
     overflow bin) and `Binningv<M>a` (VR1, single wide last bin); v11 and earlier keep that a/b split.
   - **VR2** → `Binningv9alt` (low-pT alt binning `[10,…,200]`, essentially never changes).

4. **Make the four config JSONs** by copying the previous version's and editing only:
   - `GLOBAL.path` → `./histograms_for_2DAlphabet_v<N>`
   - `BINNING.default.X.BINS` if the binning changed (keep `SIGSTART`/`SIGEND` — these set the blinding
     boundary; the last `BINS` edge must be ≤ 12500, the fine-hist x-range).
   - Leave per-region `GLOBAL.SIGNAME`, `data_obs.ALIAS`/`TITLE`, systematics, and `OPTIONS` as-is
     (note SR_BkgMC uses `data_obs.ALIAS = BkgMC_M4GeV_SR` and the `...NA` blinding flags = UNblinded).
   ```bash
   # e.g. SR M3000: config_Binningv11b_Inputv26_SR_M3000GeV_e4.json
   #            ->  config_Binningv12_Inputv27_SR_M3000GeV_e4.json
   ```
   Names follow `config_Binningv<M>[alt]_Inputv<N>_<REGION>_<SIGNAL|BkgMC>.json` (SR/VR1 share the
   unified `Binningv<M>` from v12 on; `alt` = VR2; the pre-v12 `a`/`b` suffixes are historical).

5. **Make the four run scripts** by copying the previous `runWith1DVanilla_v<N-1>_*.py` to
   `runWith1DVanilla_v<N>_*.py` and repointing the **hardcoded** `configJSON = "..."` near the top of
   each to the matching config from step 4 (nothing else changes). Update the "Current run files" table.

6. **Smoke-test one workspace build** (no fit, no proxy) — catches out-of-range `BINS` / hist-name
   mismatches before you burn a condor cycle:
   ```bash
   python3 -c "import sys; sys.argv=['x','SMOKETEST']; import runWith1DVanilla_v<N>_SR_M3000GeV_e4 as m; m.make_workspace()"
   rm -rf SMOKETEST
   ```

7. **Run the chain** per region (see "Current run files"), e.g.
   `python3 runWith1DVanilla_v<N>_SR_M3000GeV_e4.py rpfmult_Binningv<M>_Inputv<N>_SR_M3000GeV_e4`.

## Histogram Versions

- v0: Cosmic MC
  - VR: cut on pT [10,inf)
- v0 with Binningv5: Cosmic MC
  - VR: cuts on pT [50,inf], eta [-0.9,0.9], nTracks [1,2]
    - VR syst: t0, pT, signal yield (5%)
  - SR: cuts on pT [10,inf], eta [-0.9,0.9], nTracks [1,2]
    - SR syst: t0, pT, signal yield (5%)
- v1: 2023Dv1 Cosmics
  - VR: cut on pT [10,inf)
  - SR: cuts on pT [10,400], eta [-0.9,0.9], nTracks [1,2]
    - SR syst: t0, pT, signal yield (1.6%)
- v2: 2023Dv2 Cosmics
  - VR: cut on pT [10,inf)
- v3: 2023Dv1+v2 Cosmics
  - VR: cut on pT [10,inf)
  - SR: cuts on pT [10,400], eta [-0.9,0.9], nTracks [1,2]
    - SR syst: t0, pT, signal yield (1.6%)
- v4: 2023Dv1+v2 Cosmics
  - VR: cuts on pT [100,inf], eta [-0.9,0.9], nTracks [1,2]
    - VR syst: t0, pT, signal yield (0.1% - tried removing but got segmentation error during limit calculation)
  - SR: cuts on pT [100,440], eta [-0.9,0.9], nTracks [1,2]
    - SR syst: t0, pT, signal yield (0.1% nomial; 5% for rpfmult dir)
- v5: skipped
- v6: 2023Dv1+v2 Cosmics (New CR/VR/SR definitions - [0,0.15), [0.15,0.3), [0.3,1] respectively)
  - VR: cuts on pT [50,inf], eta [-0.9,0.9], nTracks [1,2]
    - VR syst: t0, pT, signal yield (0.1%)
  - SR: cuts on pT [10,inf], eta [-0.9,0.9], nTracks [1,2]
    - SR syst: t0, pT, signal yield (0.1%)
- v7: Cosmics MC with CR/VR/SR definitions - [0,0.45),[0.45,0.9],[0.9,1]
- v8: 2023D Cosmics with CR/VR/SR - [0,0.45),[0.45,0.9],[0.9,1]
- v9: Run 3 Cosmics
- v10: Cosmic MC with RNN cut at 0.9
- v11: 2023D Cosmics with CR/VR/SR - [0,0.45),[0.45,0.9999],[0.9999,1]
- v12: Run 3 Cosmics with CR/VR/SR - [0,0.45),[0.45,0.9999],[0.9999,1]
- v13: Run 3 Cosmics with CR/VR/SR - [0,0.45),[0.45,0.9999],[0.9999,1] w/ chi2/ndof cut at 35
- v14: Run 3 Cosmics with CR/VR/SR - [0,0.45),[0.45,0.9999],[0.9999,1] w/ chi2/ndof cut at 35 & high mass points
- v15: 2023D Cosmics w/ max chi2/ndof cut at 35 & high mass points
- v16: 2023D Cosmics w/ min chi2/ndof cut at 7 & high mass points
- v17: ...
- v18: Cosmic MC w/ skimmed ntuples v4.0.7
- v19: 2023D Cosmics w/ skimmed ntuples v4.0.7
- v20: Run 3 Cosmics w/ skimmed ntuples v4.0.7
- v21: Run-3 Cosmics w/ skimmed ntuples v4.0.9
- v22: Run-3 Cosmics w/ skimmed ntuples v4.0.9 but extended range and new preselection applied correctly
- v23: Run-3 Cosmics w/ skimmed ntuples v4.0.9 but reduced range and new preselection applied correctly
- v24: Run-3 Cosmics w/ skimmed ntuples v4.0.9_wRNN_v4, adding bootstrapping-based RNN systematic
 - v25:  Run-3 Cosmics w/ skimmed ntuples v4.0.9_wRNN_v4, adding bootstrapping-based RNN systematic but binning such that the overflow is included
 - v26: Run-3 Cosmics, finer high-pT binning (Binningv11a/v11b, overflow bin at 6000/6001) and the signal nuisances renamed to the `CMS_EXO26004_*` convention.
 - v27: Run-3 Cosmics w/ skimmed ntuples v5.0.3_wRNN, whose pT range was extended to 10 TeV (v5.0.2 was too strict), so the high-pT tail that used to pile into the overflow now lands in its own bins → Binningv12 (overflow moved to 10001 GeV). Built with `collect_and_merge_histograms.py --source-base .../Ntuples_v5.0.3_wRNN` (see below) so the Commissioning20XX data eras are now merged into `EaDM_Run3_Cosmics_Data_All_*` (the old `Run202*`-only glob silently dropped them).
 - v28: Run-3 Cosmics w/ skimmed ntuples v5.0.4_wRNN (same RNN as v5.0.2/3; the only change is `PT_MAX_CLIP` in `skimmed_ntuple_processing_script.py` lowered 10000→7000 GeV, so the high-pT tail now piles at 7000 instead of 10000). Paired with **Binningv13**, which moves the overflow edge 10001→7001 to sit just above the new clip. Built with `collect_and_merge_histograms.py --version v28 --source-base /ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.4_wRNN`.
  - v29: Same as v28 except the `Signal` histograms were additionally **depth-merged**: the five
   `SurfaceDepth-e2 … e6` samples of each mass are summed with `props_dict` shell weights into one
   template, via `helper_scripts/run_2DAInput_signal_merge_local.sh` (which drives
   `skimmed_ntuple_processing_script_mergeDepths.py -T 2DAInput -s Signal`). The dir holds the usual
   per-depth files **plus** 18 `EaDM_Signal_M<mass>GeV_mergedDepth_SR.root` — SR only; the merge can
   produce VR1/VR2 too, but nothing downstream consumes them. See
   **[Depth-merged signals (mergedDepth)](#depth-merged-signals-mergeddepth)**.

> **Building the histogram dir.** `collect_and_merge_histograms.py -v <ver> [-s SOURCE_BASE]` collects the
> step-6 `2DA/EaDM_*.root` trees into `histograms_for_2DAlphabet_<ver>/`, merging the per-era data files
> into `EaDM_Run3_Cosmics_Data_All_{SR,VR1,VR2}.root`. `-s/--source-base` points at the tree base
> (defaults to local `helper_scripts/`); after `organizeSkimmedNtuples.sh` has moved the trees to ceph,
> pass the `.../Ntuples_vX.Y.Z_wRNN` path. The data merge now includes **all** eras (Run202* and
> Commissioning20XX).

## Skimmed Ntuple Versions

Versioning convention (in effect from now on): **`vX.Y.Z`** where
- **X** = ntuple version (the underlying v4 ntuples)
- **Y** = skimming version (changes in the cutflow [re-run the  `step2_condor_skim.cfg` / `skim_ntuples.C`])
- **Z** = small changes / re-running with a different RNN / just re-running the `step6_condor_ntuple_processing.cfg` /  `skimmed_ntuple_processing` script

- v4.0.11: v4 ntuples skimmed to be v4.0 (also called v4.0.9 before a good naming convention was established).
  Uses the RNN retraining that excluded some of the not-well-modelled regions.
- v5.0.0: New v5 input ntuples (raw inputs under `Cosmics/*v5a`). Adds a `bField > 0.1 T` (magnet-on)
  requirement as the first cutflow step in `skim_ntuples.C`, before the trigger, and keeps the new
  `bField` branch in the skimmed output. `NTUPLE_VERSION` is now embedded in the skimmed filenames
  (`skimmed_..._v5.0.0[_jobN].root`).
  - **Note:** v5.0.0 unintentionally merged in the commissioning data (the `Ntuplizer-Cosmics_Commissioning20XX`
    entries in `input_ntuples_v5.0.0.txt`). This is kept on purpose from v5.0.1 onward.
- v5.0.1: Re-run of the `step6_condor_ntuple_processing.cfg` / `skimmed_ntuple_processing` step on the
  v5.0.0 skims (no cutflow change), using RNN training
  `rnn_retrain_weights_june2026_privateCosmicMC.ckpt`. Commissioning data is retained (now intentionally).
  Processed (wRNN) outputs land in `/ceph/.../Ntuples/Ntuples_v5.0.1_wRNN/` (organize the local condor
  returns with `helper_scripts/organizeSkimmedNtuples.sh 5.0.1`). Bump the `Z` for each subsequent RNN
  re-run (v5.0.2_wRNN, ...).
- v5.0.2: Same as v5.0.1 (re-run of `step6` on the v5.0.0 skims, commissioning retained) but using the
  older RNN training `rnn_v5_188k_final_weights.ckpt` instead. The RNN choice is set in two places, with
  the previous (v5.0.1) `rnn_retrain_weights_june2026_privateCosmicMC.ckpt` kept commented out in both:
  `checkpoint_path` in `helper_scripts/skimmed_ntuple_processing_script.py` and `transfer_input_files` in
  `helper_scripts/step6_condor_ntuple_processing.cfg`. Organize with
  `helper_scripts/organizeSkimmedNtuples.sh 5.0.2` (outputs in `Ntuples_v5.0.2_wRNN/`).
- v5.0.3: Re-run of `step6` on the v5.0.0 skims, commissioning retained, using the **same** RNN as v5.0.2
  (`rnn_v5_188k_final_weights.ckpt`). The change vs v5.0.2 is that the **pT range was extended to 10 TeV**
  (v5.0.2 was too strict): the high-pT tail that v5.0.2 piled into the overflow now lands in its own
  bins, which is why the analysis binning grows the extra edges (Binningv12, overflow at 10001) while the
  total event count is unchanged from v26 (same events, just binned correctly — e.g. the ~1193 SR fail
  events in [6000,10001) are no longer dumped at the 6001 overflow). Organized with
  `helper_scripts/organizeSkimmedNtuples.sh 5.0.3` (this is now the `DEFAULT_VERSION`), outputs in
  `/ceph/.../Ntuples/Ntuples_v5.0.3_wRNN/`. Feeds histogram version v27.
- v5.0.4: Re-run of `step6` on the v5.0.0 skims, commissioning retained, using the **same** RNN as
  v5.0.2/v5.0.3 (`rnn_v5_188k_final_weights.ckpt`). The only change vs v5.0.3 is that the pT clipping
  bound `PT_MAX_CLIP` in `helper_scripts/skimmed_ntuple_processing_script.py` was lowered from 10000 to
  **7000 GeV**: `pT_max` (and its up/down variants) is now `std::min(pT_max, 7000)` before filling, so
  the high-pT tail piles up at 7000 instead of 10000. `N_SEG_CLIP` is unchanged. Organize with
  `helper_scripts/organizeSkimmedNtuples.sh 5.0.4` (outputs in `Ntuples_v5.0.4_wRNN/`).

## Binning Versions

- v7: SR/VR1 BINS = [200, 252, 452, 800, 1296, 1941, 2733, 3674, 4763, 6000], VR2 alt BINS = [10, 19, 34, 55, 82, 115, 155, 200]
- v8: SR/VR1 BINS = [200, 350, 726, 1329, 2157, 3212, 4267, 6000], VR2 alt BINS = [10, 19, 34, 55, 82, 115, 155, 200]
- v9: SR/VR1 BINS = [200, 350, 726, 1329, 2157, 3212, 4267, 6001], VR2 alt BINS = [10, 19, 34, 55, 82, 115, 155, 200]
- v10: SR/VR1 BINS = [200, 350, 726, 1027, 1329, 2157, 3212, 4267, 6001] -- the v9 third bin [726,1329] is split at 1027, giving 4 unblinded SR bins (pT < 1329) instead of 3 while keeping the same blinding boundary (SIGSTART 1329, so [1329,2157] stays blinded)
- v11: finer high-pT binning on top of v10. Two sub-variants:
  - v11a (VR1): BINS = [200, 350, 726, 1027, 1329, 1743, 2157, 2685, 3212, 3740, 4267, 5134, 6001] -- last bin [5134,6001] is a single wide bin.
  - v11b (SR): BINS = [200, 350, 726, 1027, 1329, 1743, 2157, 2685, 3212, 3740, 4267, 5134, 6000, 6001] -- same as v11a plus a narrow overflow bin [6000,6001] that collects everything at/above 6000.
- v12: **SR and VR1 share one unified binning** (no more a/b split — both use `Binningv12`). Relative to
  v11: range extended to 10001 GeV (the underlying fine histograms span 0-12500 in 1 GeV bins, so this is
  in range); the 2nd bin [350,726] split at its midpoint 538 (equal ~188-wide halves); and the high-pT
  tail uses round 4000/5000/6500 edges with a wide [6500,10001] last bin.
  - BINS = [200, 350, 538, 726, 1027, 1329, 1743, 2157, 2685, 3212, 3740, 4000, 5000, 6500, 10001].
  - **Why these tail edges (VR1 pass pulls):** the pass region has ~100x fewer events than fail. With the
    earlier 4267/5134/7000 edges the sparse pass events happened to group into two low bins at 4-7 TeV
    (p/f ~0.030 vs a ~0.045 plateau), which a smooth transfer function can't carve out → a coherent band
    of large negative VR1 pass pulls (−3σ). This "dip" was largely a **bin-edge artifact**: regrouping the
    same events with 4000/5000/6500 edges gives a **flat** high-pT ratio (~0.036-0.040, see
    `vr1_passfail_ratio_Binningv12.png`) that the TF fits smoothly. The last bin [6500,10001] also absorbs
    the ≥10 TeV pile of mismeasured cosmics (real feature, cosmic pT is effectively unbounded), so there
    is **no separate overflow bin**. Note SR pass is empty/blinded above ~1.3 TeV, so the tail granularity
    only affects high-mass signal templates, not the SR background fit.
- v13: v12 retuned for the v5.0.4 skims (which clip pT at `PT_MAX_CLIP` = 7000 GeV, so the whole high-pT
  tail piles at exactly 7000). Changes vs v12:
  (1) the last bin is a **tight pile-only overflow `[6900, 7001]`** — raised from 6500/10001 so it isolates
  the ~7000 clip pile (~956 of the old last bin's 1032 VR1-fail events were the pile) instead of mixing pile
  with real spectrum; the 7001 upper edge sits just above the 7000 clip, per the v9 "edge just above
  physical reach" convention.
  (2) the real tail below the overflow is **fine** (`…, 3740, 4500, 5500, 6900`) so the Events/bin profile
  falls monotonically (SR fail 533→465→335→319; a coarse tail let a wide bin hold more raw counts than the
  narrower bin before it — a bin-width artifact). This was chosen over a coarse tail even though the fine
  tail gives VR1 a ~−2σ pass-pull band, because that band is **shape-driven, not a binning artifact**: the
  p/f peaks at bin 9 [2685,3212]=0.053 then falls and the pile bin sits above the trend, so a smooth TF
  leaves the band regardless of tail granularity (verified — `2x0`, relaxed-bound `2x0`, and additive-x²
  `2x0old` all converge to the same curve/band; fitted par2=−0.84 is not railed against its −0.9 bound).
  Coarsening the tail therefore buys VR1 nothing, while the fine tail cleans up the SR fail plot (whose
  pass is blinded/empty in the tail → no pull cost) and gives finer high-mass signal templates. SR and VR1
  share this one unified binning (no a/b split).
  - BINS = [200, 350, 538, 726, 1027, 1329, 1743, 2157, 2685, 3212, 3740, 4500, 5500, 6900, 7001].
  - **SR blinding:** `SIGSTART` = 1027 (was 1329) → SR blinds from bin 5 [1027,1329] up; TF fit on the 4
    LOW bins [200,1027). `SIGEND` = 2157. VR1 stays unblinded.
- VR2 keeps the alt binning (`Binningv9alt`) unchanged across all of the above: BINS = [10, 19, 34, 55, 82, 115, 155, 200].

## Running on condor
```
./submit_2DA_SR.sh
```

This will make the inputs using the `generate_condor_inputs.py` file:
 - `input_2DA_SR.txt`: contains binning / SR / blind specific template JSON, called `config_Binningv8_InputTemplate_SR_Blind.json`, the mass point and the TF
 - `step7_condor_2DA_SR.cfg` quees from `input_2DA_SR.txt` to condor, note the directory name is hardcoded here, e.g. `rpf2x0_Binningv8_Inputv23_SR`
- Condor then will run `run_2DA_SR_batch.sh`, note the directory name is hardcoded here too, e.g. `rpf2x0_Binningv8_Inputv23_SR` together wtih `histograms_for_2DAlphabet_v23`, this sets up the env in the condor node, and runs run_single_signal_2DA.py
- `run_single_signal_2DA.py` is a templated single signal running version


## Region description
- SR (Signal Region): pT > 200 GeV, RNNScore >= 0.9999
- VR1 (Validation Region 1): pT > 200 GeV, 0.45 <= RNNScore < 0.9999
- VR2 (Validation Region 2): pT < 200 GeV, RNNScore >= 0.9999 --> with "alt" binning

## Depth-merged signals (mergedDepth)

### What it is and why

The signal MC is generated at five discrete surface depths, `SurfaceDepth-e2 … e6`, i.e. 1e2 … 1e6 mm
past the front face of the volume at 8 m. The standard chain treats each depth as its own signal and
sets one limit per depth. **Depth-merging** instead sums the five samples of a given mass into a
single template, weighting each by the fraction of signal events that actually land in the radial
shell that sample stands for — so one merged signal replaces the fixed-depth assumption, with the
depth distribution folded in at the histogram level rather than in the limit script.

The shells are bounded by 8, 8.1, 9, 18, 108, 1008 and 4000 m, and the depth→shell map is
`DEPTH_SHELLS = {2: [0], 3: [1], 4: [2], 5: [3], 6: [4, 5]}`
([skimmed_ntuple_processing_script_mergeDepths.py:40](helper_scripts/skimmed_ntuple_processing_script_mergeDepths.py#L40)) —
each `eX` covers the shell ending 1eX mm past the front face, and `e6` additionally absorbs the
outermost shell, which sits beyond every generated depth.

`depth_weight(mass, depth)` looks the fractions up in `props_dict`, which is tabulated only on a
coarse mass grid (1–9, 10–90, 100–900 TeV). Intermediate masses (1500, 2500, …) are interpolated
shell-by-shell in log(mass) and then renormalised to unit sum; masses outside the grid are clipped to
its ends. `np.interp` is exact at the tabulated masses, so a mass that is itself a key reproduces
`props_dict` verbatim.

> **Units — `props_dict` is keyed by the DM mass, not `MinP`.** The filename token `MinP-<N>`
> (and hence `M<N>GeV`) is the per-muon pT, which is **half** the DM particle mass — see
> [Mass convention](#mass-convention-mn). `props_dict` is built from parquet files whose axis is the
> DM mass (`mDM_*`), so the lookup uses **2×`MinP`**: `depth_weight(int(number)*2, depth)`.
> `exp_lim/set_limit_alphaMax.py` keys the same dict the same way (its signal list carries 2×`MinP`
> as the mass, e.g. `2000` for `Signal_M1000GeV`), so the merge and the volume-mode limit weight the
> depths consistently. Keep the two in step if you touch either.

**Two log lines to check per mass:**
- `WARNING: M<mass>GeV depth weights sum to only <w>` — a depth sample doesn't exist for that mass
  (M1000 has no `e6`). The merged histograms are then normalised to `100*w` events instead of the
  100-event reference, so the limit from them is too weak by `1/w`.
- `M<mass>GeV cutflow closure: … ratio = …` — merged yield vs. the cutflow expectation of the samples
  it was built from (tolerance 1e-4). A warning here means the per-depth `100/n_generated` scaling,
  the props weights, or the histogram accumulation is wrong — **do not set a limit from those files**.

### Prerequisite: `props_dict.npy`

The shell fractions live in `helper_scripts/parquet_files/props_dict.npy` (committed; regenerate only
if the shell definition changes). It is produced by `helper_scripts/depthFractionCalcScript.py`, which
rebins the distance-at-detector parquet distributions onto the shell edges and writes
`props_dict[mass] = fraction per shell` (sums to 1).

That script has **hardcoded local `/Users/...` input paths** and runs under numpy ≥ 2 — run it
off-cluster on the parquet files (the same Google-Drive set as step 8) and copy the resulting `.npy`
into `helper_scripts/parquet_files/`. The consumer aliases `numpy._core` → `numpy.core` before
`np.load`, because numpy ≥ 2 pickles reference a module that CMSSW's numpy 1.24 still calls
`numpy.core`.

Pass it with `-p/--propsDict` (default `parquet_files/props_dict.npy`); it is only read when
`-s Signal`.

### Producing the merged histograms

Step 6, pass 2 — see **[6a. Depth-merge the Signal histograms](#6a-depth-merge-the-signal-histograms-step-6-pass-2)**.
Then run step 6c as usual to build `histograms_for_2DAlphabet_v29/`.

### Running the 2DA chain

The merged chain is a twin of the standard one, touching only `mergedDepth` files so the per-depth
chain (`input_2DA_SR.txt`, `step7_condor_2DA_SR.cfg`, `run_2DA_SR_batch.sh`) is left alone.

```bash
./submit_2DA_mergedDepths_SR.sh                 # rescan v29, then submit to condor
./submit_2DA_mergedDepths_SR.sh --no-generate   # submit the existing list as-is
./submit_2DA_mergedDepths_SR.sh --dry-run       # validate + parse, submit nothing
```

It regenerates `input_2DA_mergedDepths_SR.txt` by globbing
`histograms_for_2DAlphabet_v29/EaDM_Signal_M*GeV_mergedDepth_SR.root` (18 masses), then queues
`step7_condor_2DA_mergedDepths_SR.cfg` → `run_2DA_mergedDepths_SR_batch.sh`. Settings block at the top
of the submit script: `HISTO_DIR=histograms_for_2DAlphabet_v29`,
`TEMPLATE_CFG=config_Binningv13_Inputv29Template_SR_Blind.json`, `TF_TYPE=2x0`. Output area:
`rpf2x0_Binningv13_Inputv29_mergedDepths_SR_Blind`.

Local alternative (same per-signal work, no condor):
```bash
./run_all_mergedDepths_local.sh          # 6 signals at a time
./run_all_mergedDepths_local.sh 10       # 10 at a time
```
Signals with a `done` marker are skipped, so it resumes after an interrupt; per-signal logs go to
`logs_local/`.

### Limits

```bash
./run_limits_mergedDepths.sh                     # defaults
./run_limits_mergedDepths.sh -m 24.3             # different livetime
./run_limits_mergedDepths.sh --skip-input        # reuse the existing alpha_max.txt
./run_limits_mergedDepths.sh --no-plot           # stop after the limits, skip the 2D plot
```
Defaults: `-d rpf2x0_Binningv13_Inputv29_mergedDepths_SR_Blind`, `-m 20.7`. It needs `pyarrow`
(see the step 8 env notes) and checks for it up front.

This wrapper exists because the standard `partial_limit_pipeline.sh` cannot be used as-is — two
changes are needed (both handled internally, listed here so the workaround isn't mistaken for a bug):
1. `limitRateInputScript.py` has no `mergedDepth` path token, so the wrapper generates with `-d e3`
   (whose mass grid maps 1:1 onto the 18 merged masses) and then `sed`s `_e3_SR` → `_mergedDepth_SR`
   in the signal list. It verifies afterwards how many entries resolve to a real combine limit file.
2. `exp_lim/set_limit_alphaMax.py` runs with **`--single`** (each signal's own combine limit) instead
   of the default depth-weighted average over e3–e6 — that average is meaningless for a signal whose
   depths are already merged in.

Otherwise it is the same three steps as [Step 8: Run Limits](#8-run-limits): signal list →
`exclusion_limits.json` in `exp_lim/signal_<LIMITDIR>_livetime_<MONTHS>_limit/` → 2D exclusion plot
(step 3 runs `plotExcludedMassVsEp_2D.py --band68 --use-cache`).

> **`--use-cache` gotcha.** Step 3 draws straight from `band_edges_cache_<yaxis>.npz` next to the
> JSON. On a **first** run that cache doesn't exist yet and the script exits with
> `No band cache at … -- run once without --use-cache first`; use `--no-plot`, then draw once by hand
> without `--use-cache` (the "Expected-band overlay" recipe in [Step 8](#8-run-limits)) to create it,
> after which the wrapper works.
> Conversely the cache is **not** invalidated when the JSON is regenerated — delete the `.npz` after
> re-running step 2, or you will redraw the old bands.

## Conventions and gotchas

### Mass convention (`M<N>`)
The `M<N>GeV` in sample/signal names (e.g. `Signal_M3000GeV_e4_SR`) is the **muon pT**, which is
**half** of the DM particle mass: each DM particle decays to two muons that split its mass evenly.
So `M3000` means a **6000 GeV DM** particle producing two 3000 GeV muons. The fit/templates are
always in terms of the (per-muon) pT, hence the factor of two relative to the physical DM mass.

### Vendored frameworks vs. analysis code
`2DAlphabet/`, `CombineHarvester/`, and `HiggsAnalysis/` are vendored frameworks, not analysis code.
2DAlphabet is a local `setup.py develop` fork, so edits under `2DAlphabet/TwoDAlphabet/` take effect
live. Modified variants `twoDalphabetMod.py` / `alphawrapMod.py` / `binningMod.py` sit next to the
originals — the current run scripts import the **non-`Mod`** modules
(`from TwoDAlphabet.twoDalphabet import ...`); the `Mod` files are experimental. Check the imports
before assuming which is in use.

### Blinding flags (`blindedFitNA` inverts the meaning)
In the config `OPTIONS`, `blindedFit: ["pass"]` / `blindedPlots: ["pass"]` **blind** the pass region.
The `...NA` variant `blindedFitNA: ["pass"]` means the region is **UNblinded** (the `NA` suffix
inverts the meaning — it's an inert/unrecognized key, so `blindedFit` stays at its empty default).
Blinding logic lives in `2DAlphabet/TwoDAlphabet/twoDalphabet.py`. `blindedFit` masks channels from the
**likelihood** (the region is still built and plotted); `blindedPlots` blinds them in the **plots** only —
so `blindedFit` **without** `blindedPlots` = "exclude from the fit but still show it".

### Masking a single sub-region from the fit (`blindedFitSubregions`)
`blindedFit` masks the x-axis sub-regions listed in `blindedFitSubregions` (default `["SIG","HIGH"]`, i.e.
everything at/above `SIGSTART`). Set `blindedFitSubregions: ["HIGH"]` to mask **only** the HIGH sub-region
(bins at/above `SIGEND`). Combined with an `SIGEND` placed so `HIGH` is exactly the last bin, this
excludes just the overflow bin from the likelihood while keeping it plotted. **VR1 uses this** to drop the
~7000 clip-pile overflow bin from its fit/GoF without hiding it: `SIGEND = 6900` → `HIGH = [6900,7001]`,
`blindedFit: ["pass"]` + `blindedFitSubregions: ["HIGH"]`, `blindedPlotsNA` (plots shown). Implemented in
`twoDalphabet.py` (the mask-string sites in `_runMLfit` and the GoF, threaded from the new option; the
default preserves the old SIG+HIGH behavior, so SR is unaffected).

### Run-script arguments
Each `runWith1DVanilla_*.py` takes the **working-area directory name as `sys.argv[1]`**, but the
config JSON is **hardcoded inside the script** (`configJSON = ...` near the top), not passed on the
command line — despite the older "Example running" snippet above showing a second argument.

## Complete Analysis Pipeline

### 1. Generate Input Dataset List
Create the input list of raw ntuple directories for skimming.

```bash
cd helper_scripts
./make_input_list.sh matched_muon
# Or for other collections:
# ./make_input_list.sh muon
# ./make_input_list.sh track
# ./make_input_list.sh tuneP
```

**What it does:**
- Scans base directories for raw ntuples:
  - `/ceph/cms/store/user/tvami/EarthAsDM`
  - `/ceph/cms/store/user/tvami/EarthAsDM/ExpressCosmics`
  - `/ceph/cms/store/user/tvami/EarthAsDM/Cosmics`
- Creates entries for each region (sr, vr1, vr2) and each dataset directory
- Outputs: `input_cosmics_datasets_{collection}.txt`
- Format: `object region directory_path`

**Output example:**
```
matched_muon sr /ceph/cms/store/user/tvami/EarthAsDM/Dataset1
matched_muon vr1 /ceph/cms/store/user/tvami/EarthAsDM/Dataset1
matched_muon vr2 /ceph/cms/store/user/tvami/EarthAsDM/Dataset1
...
```

### 2. Skim Raw Ntuples
Creates skimmed ROOT files with preselection cuts applied.

**For local testing:**
```bash
cd helper_scripts
root -l -b -q 'skim_ntuples.C("matched_muon", "sr", "/path/to/raw/ntuples/")'
root -l -b -q 'skim_ntuples.C("matched_muon", "vr1", "/path/to/raw/ntuples/")'
root -l -b -q 'skim_ntuples.C("matched_muon", "vr2", "/path/to/raw/ntuples/")'
```

**For batch/condor submission:**
- Uses `run_skim_batch.sh` as the wrapper script
- Submit via condor with parameters: `object`, `region`, `base_dir`
```bash
condor_submit step2_condor_skim.cfg
```

**Output:** `skimmed_{collection}_{region}_{dataset}.root` files

### 4. Organize Skimmed Files (optional)
```bash
cd helper_scripts
./organizeNtuples.sh
```
This moves files from current directory into the proper directory structure:
```
/home/users/tvami/EarthAsDM/Ntuples_v4.0.9/
├── Data/
│   ├── sr/matched_muon/
│   ├── vr1/matched_muon/
│   └── vr2/matched_muon/
├── Signal/
│   ├── sr/matched_muon/
│   ├── vr1/matched_muon/
│   └── vr2/matched_muon/
└── BkgMC/...
```

### 5. Generate Input List for Processing
```bash
cd helper_scripts
python3 generate_input_ntuple_list.py \
    -d /ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v4.0.9 \
    -o input_ntuples_v4.0.9.txt \
    -c matched_muon \
    -T Both
```

**What it does:**
- Scans directory structure for ROOT files
- Creates entries for each region (sr, vr1, vr2)
- Output format: `file_path, version, sample_type, region, collection, run_type`

### 6. Process Skimmed Ntuples
Add RNN scores and create 2DAlphabet input histograms.

> **Which script actually runs on condor.** `run_ntuple_processing_batch.sh` calls
> `skimmed_ntuple_processing_script_mergeDepths.py` **unconditionally** — every condor step-6 job
> today uses the fork, not the base script shown below. The fork is a superset (same CLI plus
> `-p/--propsDict`), so the `Data`/`BkgMC` behaviour is unchanged; the depth-merging code only
> activates for `-s Signal`. The local-testing snippet below still uses the base script because
> that path is unaffected.

**For local testing:**
```bash
cd helper_scripts
python3 skimmed_ntuple_processing_script.py \
    -i /path/to/skimmed_file.root \
    -n 4.0.9 \
    -s Data \
    -r sr \
    -c matched_muon \
    -T Both
```

**For batch/condor submission:**
- Uses `run_ntuple_processing_batch.sh` as wrapper
- Input list: `input_ntuples_v4.0.9.txt`
- Submit jobs for each region (sr, vr1, vr2)
```bash
condor_submit step6_condor_ntuple_processing.cfg
```

**Output:**
- RNN-scored files: `./output/{sample_type}/{region}/{collection}/*.root`
- 2DAlphabet inputs: `./output/{sample_type}/{region}/{collection}/2DA/EaDM_*_{REGION}.root`

**Where the outputs physically end up (important — this tripped up the v27 build):**
`run_ntuple_processing_batch.sh` copies each job's `./output/.../2DA/*.root` **straight to ceph** at
`/ceph/.../Ntuples/Ntuples_v${ntuple_version}_wRNN/{sample}/{region}/{collection}/2DA/` if that path is
writable. Jobs whose output instead returned locally (into `helper_scripts/{Data,BkgMC,Signal}/...`) are
moved to the **same** ceph tree by `helper_scripts/organizeSkimmedNtuples.sh <version>` (rsync with
`--remove-source-files`, so the local copies are gone afterwards — this is why `helper_scripts/Data`
etc. look empty once you've organized). Net effect: after step 6 the per-era 2DA histograms live under
`Ntuples_vX.Y.Z_wRNN/`, **not** locally. The next step pulls them back into a local histogram dir.

Each per-era 2DA histogram (`hpass`/`hfail` and the `_pTsyst/_t0syst/_trigsyst/_RNNsyst_up/down`
shape variations) is a fine `TH2` spanning **0–12500 GeV in 1 GeV bins** on the x (pT) axis. 2DAlphabet
rebins these to the coarse analysis `BINS` at fit time, so any `BINS` edge you put in a config must be
≤ 12500 (e.g. the v12 overflow edge 10001 is in range).

### 6a. Depth-merge the Signal histograms (step 6, pass 2)

Only needed when you want `mergedDepth` signal templates (histogram version v29 and later). Background
and data need nothing here. See **[Depth-merged signals (mergedDepth)](#depth-merged-signals-mergeddepth)**
for what the merge does and why.

**Why two passes.** The merge discovers the depths to combine by globbing
`./output/<sample>/<region>/<collection>/*.root`, and a condor sandbox holds only the single file that
job produced — so it cannot run inside the step-6 jobs. Instead:

- **Pass 1 (condor):** the normal step-6 submission, but with the `Signal` lines set to run_type
  `Process` instead of `Both` (the `2DAInput` half is deferred). That list is
  `helper_scripts/input_ntuples_v5.0.0_mergeDepths.txt` — identical to `input_ntuples_v5.0.0.txt`
  except for those 267 `Signal` lines. It leaves the RNN-scored per-depth ntuples on ceph.
- **Pass 2 (login node):** gather the per-depth files for one mass into a single staging tree and run
  the merge over them.

```bash
cd helper_scripts
./run_2DAInput_signal_merge_local.sh -n 5.0.0 -r "sr vr1 vr2" \
    -b /ceph/cms/store/user/smasanam/EarthAsDMProject/Ntuples/Ntuples_v5.0.0_wRNN \
    -d /ceph/cms/store/user/smasanam/EarthAsDMProject/Ntuples/Ntuples_v5.0.0_wRNN
```

| Flag | Default | Meaning |
|---|---|---|
| `-n VERSION` | `5.0.0` | ntuple version (also picks the default `-b` path) |
| `-c COLLECTION` | `matched_muon` | collection |
| `-r "REGIONS"` | `"sr vr1 vr2"` | space-separated region list |
| `-w DIR` | `./mergeDepths_2DA` | staging work directory |
| `-b DIR` | `/ceph/.../Ntuples_v<VERSION>_wRNN` | source base holding the pass-1 output (`Signal/<region>/<collection>/`) |
| `-C` | off (symlink) | copy the inputs instead of symlinking them |
| `-P` | off | publish the merged output back to the `-b` base (overwrites) |
| `-d DIR` | — | publish under `DIR` instead of `-b`; **implies `-P`** and mirrors the `-b` layout |
| `-h` | — | help |

Merged output lands in `<workdir>/output/Signal/<region>/<collection>/2DA/` as
`EaDM_Signal_M<mass>GeV_mergedDepth_{SR,VR1,VR2}.root`, and with `-P`/`-d` is copied to
`<base>/Signal/<region>/<collection>/2DA/` — the same layout `collect_and_merge_histograms.py
--source-base` reads, so step 6c can pick it up directly.

> **Run this natively on the el8 login node.** It does its own `cmsenv` from the release area it
> lives in. Do **not** wrap it in `cmssw-el9`, which does not bind-mount `/ceph`.

Notes:
- The script stages inputs, prints a **depth-coverage table** per mass (which of `e2…e6` were found),
  runs the merge, and optionally publishes. It clears stale `*.root` from the staging dir first so an
  old version can't be silently merged in.
- `-i` is required by the python script's argparse but is effectively unused in `2DAInput` mode — the
  merge globs the staging dir. The wrapper passes a genuine member of the set anyway, since `-i` is
  read as a fallback when a globbed file has no `h_cutflow`.
- Watch the log for `WARNING: M<mass>GeV depth weights sum to only …` (a depth sample is missing) and
  the per-mass `cutflow closure` line (merged yield vs. cutflow expectation, tolerance 1e-4).
- Failures are collected per region: one bad region doesn't abort the others, and the script exits
  non-zero listing them.

### 6b. Preselection / cutflow plots (optional)

Overlay the preselection variables and the RNN score from the skimmed ntuples:
- `plot_presel_skimmedNtuples.py` — overlays samples (data vs. bkg vs. signal).
- `plot_presel_skimmedNtuples_perYear.py` — overlays **data split by year**: prompt-reco
  Cosmics (Run2022–2025) as solid lines and each Commissioning year (2021–2025) dashed in
  its own color. Reads `Ntuples_v5.0.1_wRNN/`. Env: `REGION=sr|vr1|vr2`, `ONLY_RNN=1`,
  `BASE_PATH=...`. Output under `figures/presel_perYear_skimmedNtuples/<collection>/`.
  ```bash
  cd helper_scripts
  for r in sr vr1 vr2; do REGION=$r python3 plot_presel_skimmedNtuples_perYear.py; done
  ```

> **Run these with plain `cmsenv` only — do NOT `source twoD-env/bin/activate` first.** The
> `twoD-env` venv shadows the `cmsstyle` (and `mplhep`) packages, so the import fails inside it;
> they are available from the bare CMSSW/scram Python.

### 6c. Build the 2DAlphabet histogram input directory
Collect the per-era ceph 2DA histograms into the local `histograms_for_2DAlphabet_<ver>/` directory that
the configs' `GLOBAL.path` points at. This is a separate, fast step (just copies + `hadd`), run from
`src/` with `cmsenv` active (needs `hadd`):
```bash
python3 collect_and_merge_histograms.py --version v27 \
    --source-base /ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.3_wRNN
```
- `--source-base` is the tree base holding `Data/`, `BkgMC/`, `Signal/` (each `<region>/matched_muon/2DA/`).
  Omit it to collect from the local `helper_scripts/` trees (the pre-ceph default).
- Per-era data files (`EaDM_Run3_Cosmics_Data_<era>_{SR,VR1,VR2}.root`) are `hadd`-merged into
  `EaDM_Run3_Cosmics_Data_All_{SR,VR1,VR2}.root`; the per-era inputs are tucked into `unmerged/`.
  The merge includes **all** eras — both `Run202*` prompt-reco and `Commissioning20XX`. (Earlier the
  glob was `Run202*` only, which silently dropped the commissioning eras; fixed so they are included.)
- `Signal` files are copied as-is; `BkgMC` files are copied with `EaDM_Signal_` → `EaDM_BkgMC_` renaming.

### 7. Run 2DAlphabet (statistical analysis)

```bash
cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
cmsenv
source twoD-env/bin/activate

# Submit for each region:
./submit_2DA_SR.sh
./submit_2DA_VR1.sh
./submit_2DA_VR2.sh
```

## Region-Specific Details

| Region | pT Cut | RNN Score Cut | Use Case |
|--------|--------|---------------|----------|
| **SR** | > 200 GeV | ≥ 0.9999 | Signal region for limit setting |
| **VR1** | > 200 GeV | 0.45 - 0.9999 | Validation region (intermediate scores) |
| **VR2** | < 200 GeV | ≥ 0.9999 | Validation region (low pT, signal-like) |

## Output Files Produced

1. **Skimmed ntuples:** `skimmed_matched_muon_{region}_*.root`
2. **RNN-scored ntuples:** Same filename structure with RNN branches added
3. **2DAlphabet inputs:**
   - Data: `EaDM_Run3_Cosmics_Data_All_{SR/VR1/VR2}.root`
   - Signal: `EaDM_Signal_M{mass}GeV_{SR/VR1/VR2}.root`
   - BkgMC: `EaDM_CosmicMC_Data_{SR/VR1/VR2}.root`, `EaDM_NeutrinoMC_Data_{SR/VR1/VR2}.root`

## Systematics and post-fit validation (GoF, pulls, correlation matrix, impacts)

These are the diagnostics produced/consulted after the fit (step 7) and before limits (step 8).
Most are generated automatically by `runWith1DVanilla_v25_*.py`; the impacts are a separate script.

### Systematics
Only the **signal** carries named nuisances; the background is data-driven (transfer function), so
its "nuisances" are the TF parameters and the free-floating fail-region bin yields, not unit-Gaussian
priors. The four signal systematics (defined in each `config_*.json`, prefixed `CMS_EXO26004_`):

| Nuisance | Type | Meaning |
|---|---|---|
| `CMS_EXO26004_livetime` | lnN (`CODE 0`, `VAL 1.012`) | 1.2% flat normalization (detector livetime) |
| `CMS_EXO26004_pT` | shape (up/down templates) | pT-scale, `pTsyst` |
| `CMS_EXO26004_t0` | shape | cosmic timing `t0syst` |
| `CMS_EXO26004_RNN` | shape | bootstrapping-based RNN-score syst (added in v24/v25) |

### Goodness-of-fit
Run inside step 7 (`--algo=saturated`, 5000 toys, on condor). Outputs in the `*_area` dir:
`gof_plot.{png,pdf}` and `gof_results.txt` (test statistic, toys, **p-value**). A low p-value
(≲0.05) means the background model describes the data poorly for that point. Re-plot from existing
toys with the `plot.plot_gof(...)` one-liner under "Re-plotting the GoF" above (fast, no proxy).

### Nuisance pulls and correlation matrix
`StdPlots` (the `plot_fit` step) reads `fitDiagnosticsTest.root` and writes:
- `nuisance_pulls.{pdf,root}` — post-fit pulls.
- `plots_fit_b/` and `plots_fit_s/` `correlation_matrix.{png,pdf,txt}` — b-only and s+b post-fit
  correlations. The bin-by-bin fail yields are dropped, leaving the TF params, the named systs, and
  the POI. The `.txt` lists every pair, e.g. `..._rpf_2x0_par1:..._rpf_2x0_par0 = -0.62`.

Regenerate the correlation matrix standalone (reads the existing fit, fast, no proxy):
```
python3 helper_scripts/run_corr_matrix.py rpfmult_Binningv10_Inputv25_SR_M3000GeV_e4 Signal_M3000GeV_e4_SR-2x0_area
```
After editing the config (e.g. renaming nuisances), `helper_scripts/refit_and_plots.py` re-runs the
fit on the regenerated card and remakes the pulls + correlation matrices (edit its hardcoded
`workingArea`/`signal` first).

### Impacts
Separate per-mass script: `runImpacts_v25_SR_<MASS>.py <workingArea> [--regen]`. Pass `--regen` to
rebuild `base.root`+`card.txt` from the JSON first (needed after editing the config); omit it to
re-run impacts on the existing card. Example:
```
  python3 runImpacts_v25_SR_M3000GeV_e4.py rpfmult_Binningv10_Inputv25_SR_M3000GeV_e4I
```
It runs three modes (the `__main__` selects which): `t1` = blinded Asimov with signal injected
(`-t -1 --expectSignal 1`), `t0` = blinded Asimov background-only (`--expectSignal 0`), and an
optional unblinded fit to data. Outputs `impacts_t{0,1}.{json,pdf}` in the `*_area` dir.

**Seeding:** the background TF parameters are seeded into the impact fits from
`rpf_params_*_<tf>_fitb.txt` (the b-only best fit) via `--setParameters`, so the Asimov is built at
the data-driven background rather than the parametric defaults. This seed must be passed to **both**
the `--doInitialFit` and `--doFits` steps of `TwoDAlphabet.Impacts` (each `-t -1` call regenerates
its own Asimov); a fix to add it to `--doFits` lives in `2DAlphabet/TwoDAlphabet/twoDalphabet.py`.

**Reading the plot:** rank by `impact_r`, not by the listed parameter value. The
`..._Background_fail_*_bin_*` entries show huge "pulls" (hundreds–hundreds-of-thousands) because they
are free-floating fail-region **yields in event units**, not σ pulls — only their `impact_r` is
meaningful. The signal sensitivity is typically driven by the TF parameters (`rpf_2x0_par0/1/2`) with
`pT` and `RNN` the leading experimental systematics. Note `rpf_2x0_par2` is bounded at its `0.0`
upper constraint, so its impact is one-sided. For a signal whose pT falls in the blinded `pass_SIG`/
`pass_HIGH` bins (very high mass), `r` is unconstrained and the impacts reflect only TF extrapolation.

### 8: Run Limits
This sections guides you on how to create 1D/2D limit plots from the 2DA computed limits. LIMITDIR is name of the 2DA directory where `higgsCombineTest.AsymptoticLimits.mH120.root` for each mass is located. MONTHS_OF_LIVETIME is self-explanatory.

You may need to run `pip/conda/whatever install pyarrow` for the following to work. 

You WILL need to download the files located [here](https://drive.google.com/drive/folders/1Pn10mJrzeFBAhp00yWmnPprDYWYmvgky?usp=share_link) and save them to `helper_scripts/parquet_files` for the below to work.

```
./helper_scripts/partial_limit_pipeline.sh -d LIMITDIR -m MONTHS_OF_LIVETIME [-M core|floating]
```
This will fill out the following three commands and run the first 2 as well.
```
python3 helper_scripts/limitRateInputScript.py -d e0 -l LIMITDIR -m core
python3 exp_lim/set_limit_alphaMax.py --outdir exp_lim/signal_LIMITDIR_livetime_MONTHS_OF_LIVETIME_limit -s exp_lim/signal_LIMITDIR_alpha_max.txt -l MONTHS_OF_LIVETIME
python3 helper_scripts/plotExcludedMassVsEp_2D.py -l LIMITDIR -L MONTHS_OF_LIVETIME
```
`-m/--model` is **required** on `limitRateInputScript.py` and selects the detector-volume model
(`core` or `floating`), i.e. which `volume_m3_<model>` / `frac_ecut10_<model>` columns are read.
`partial_limit_pipeline.sh` defaults to `core` and exposes it as `-M` (its own `-m` is the livetime).
`run_limits_mergedDepths.sh` also passes `core`.

#### What the rate input actually is (`limitRateInputScript.py`)
The per-mass numbers in `exp_lim/signal_<LIMITDIR>_alpha_max.txt` are **monthly** signal rates read
from the consolidated parquet
(`..._KAPPAS_10_1000000_varying_steps_coarse_grain_epsilon_and_mas_WITH_CALC_ACCEPTANCES-2.parquet`)
under a slice that is **hardcoded at the top of the script**: `MA = 0.23`, `ALPHA = 'MAX'`,
`FINAL_STATE = 'muons'`, and `depth_scale == 1.0`. Each entry is

```
rate = rate_1yr * (1/12) * volume_m3_<model> / 1000**3 * frac_ecut10_<model>
```

i.e. the parquet's per-km³ yearly rate converted to a monthly rate in the detector volume, times the
E > 10 GeV acceptance. Off-grid DM masses are log-interpolated between bracketing grid points
(linear fallback if either endpoint is 0), and templates above `TEMPLATE_MASS_CAP` = 90 TeV get the
`eff_func` efficiency correction for the frozen `M90000GeV` template.

Two consequences worth knowing:
- **`MA = 0.23` is the lowest ma at which the muon channel is open.** At `ma = 0.22` the parquet has
  `BR(a→µµ) = 0` exactly, so every rate would come out zero. The plot labels in
  `plotExcludedMassVsEp_2D.py` (`MA_TARGET`, the `$m_{A^\prime}$` annotations) are set to 0.23 to
  match; keep them in step if you change `MA`. `--heatmap` reads the **same** consolidated parquet
  with the same slice and the same rate formula (`MODEL = 'core'`), so 0.23 is an exact grid point
  there; it clips the displayed mass window to `MX_WINDOW_GEV` = 1–100 TeV.
- The epsilon grid is taken from the parquet (45 points) and printed at startup. `labels` in
  `exp_lim/set_limit_alphaMax.py:90` indexes the output lines **positionally**, so it must stay
  identical to that printed grid — they match today.
- The step-2→step-3 handoff is now automatic: `set_limit_alphaMax.py` writes the intersection arrays (`exp_lim`, `closed_exp_lim`, `exp_lim_lower`, `exp_lim_upper`, plus the `eps` grid) to `<outdir>/exclusion_limits.json`, and `plotExcludedMassVsEp_2D.py` loads them from `exp_lim/signal_LIMITDIR_livetime_MONTHS_OF_LIVETIME_limit/exclusion_limits.json`. No more copy-pasting the `Exp lim:` / `Closed Exp lim:` printouts into `max_exp_lim_Run3_e0` / `max_exp_lim_Run3_e0_closed`. Just keep `LIMITDIR` and `MONTHS_OF_LIVETIME` consistent between the two steps. You may still need to play with the x1/y1/x2/y2 bounds to get limits to appear.

#### The limit script `exp_lim/set_limit_alphaMax.py` (two modes)
`set_limit_alphaMax.py` is the **single** limit-setting script (it replaced the two near-duplicate
`set_limit_general_modified_alphaMax.py` / `..._volumeLimits.py`, which had drifted and caused
normalization/plot bugs). It builds the expected-limit curve, intersects it with the theory line at each
`eps`, and writes `exclusion_limits.json`. It has two modes selected by a flag:
- **default (volume mode)** — the expected median is the **depth-weighted average over depths e3–e6**
  (`props_dict` mass-dependent proportions). This is the nominal result. Used by `partial_limit_pipeline.sh`.
- **`--single`** — the median is each signal's **own** combine limit (`this_tree.limit`), i.e. one fixed
  depth. The depth is baked into the input paths (`limitRateInputScript.py -d e<N>` inserts the `_e<N>`
  token). Used by `run_fixedDepth_limits.sh` to produce one `exclusion_limits.json` per depth.
- **Normalization:** both modes divide the per-signal normalization (100) by the livetime in months
  (`this_xsec = 100/lumi`) so the y-axis is a **monthly** rate. (The old single-depth script was missing
  this `/lumi`, so its median was ~`lumi`× too high and the theory never crossed it → wrong/empty
  fixed-depth exclusions.)
- The crossing finder `Inter()` (in `exp_lim/header.py`) has a dormant `extrapolateBelow` option
  (default OFF, not used by the pipeline) that would extend the search below the lowest simulated mass;
  it is intentionally unused — see the note in `header.py` for why (the excluded region is `m < crossing`,
  off-plot and below the 200 GeV selection).

**Fixed-depth overlay** (one region per assumed decay length, 0 mm … 1e6 mm):
```
./helper_scripts/run_fixedDepth_limits.sh                       # runs set_limit_alphaMax.py --single per depth
python3 helper_scripts/plotExcludedMassVsEp_2D.py -l LIMITDIR -L MONTHS_OF_LIVETIME --fixedDepth
```
`--fixedDepth` loads the six per-depth JSONs and draws each region from its interpolated per-`eps` mass
window `[exp_lim, closed_exp_lim]` (`fill_betweenx`, smooth boundaries).

**Expected-band overlay** (`--band68`): a "second version" of the 2D plot that overlays the **68% and 95%
expected bands** on the median exclusion contour. For every `eps`, `set_limit_alphaMax.py` intersects the
theory line with not just the median but also the `±1σ` (`g_mcplus`/`g_mcminus`) and `±2σ`
(`g_mc2plus`/`g_mc2minus`) expected-limit curves, and writes all the mass-window edges to
`exclusion_limits.json`: `exp_lim_lower[/_closed]` (+1σ), `exp_lim_upper[/_closed]` (−1σ),
`exp_lim_lower95[/_closed]` (+2σ), `exp_lim_upper95[/_closed]` (−2σ). (The `_closed` upper-mass edges were
previously computed by `signed_window()` but discarded.) The windows **nest**: −2σ is the widest excluded
mass window and +2σ the narrowest (a smaller limit excludes more mass). Worked example at `eps=1.6e-8`
(matches the 1D `limits_combine_..._1.6e-08` plot): median `[3.50, 17.76]`, −1σ `[3.30, 27.67]`,
+1σ `[3.71, 11.33]`, −2σ `[3.15, 39.5]`, +2σ `[3.94, 7.36]` TeV.

`plotExcludedMassVsEp_2D.py --band68` draws the median contour (dashed black) + a solid **68%** gold
(`#FFDF7F`) reach region with a **95%** blue (`#85D1FB`) ring outside it, plus thin outlines marking the
inner ±σ crossings. Output filename gets a `_band68` suffix. Band mode **skips the (pyarrow-heavy) parquet
load** entirely. It needs the `±1σ`/`±2σ` arrays in the JSON, so **regenerate the JSON first** (this
re-runs `set_limit_alphaMax.py` in the el8 container — reads 168 combine ROOT files, ~2 min):

```
# (1) Regenerate exclusion_limits.json with the +-1sigma / +-2sigma band edges.
#     Run inside the el8 container with cmsenv + twoD-env, borrowing pyarrow (see step 8 env notes).
cmssw-el8 -- bash -c 'cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src && eval `scram runtime -sh` && source twoD-env/bin/activate && \
  PYA=/home/users/smasanam/EarthAsDMProject/CMSSW_14_1_0_pre5/src/twoD-env/lib/python3.9/site-packages; export PYTHONPATH=$PYA:$PYTHONPATH && \
  python3 exp_lim/set_limit_alphaMax.py -L "Run 3 Cosmics" \
    --outdir exp_lim/signal_rpf2x0_Binningv13_Inputv28_SR_Blind_livetime_20.7_limit \
    -s exp_lim/signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max.txt -l 20.7'

# (2) Draw the band plot (writes figures/..._band68.pdf/.png AND a band_edges_cache_<yaxis>.npz next to the JSON).
cmssw-el8 -- bash -c 'cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src && eval `scram runtime -sh` && source twoD-env/bin/activate && \
  python3 helper_scripts/plotExcludedMassVsEp_2D.py -l rpf2x0_Binningv13_Inputv28_SR_Blind -L 20.7 --band68'
```

**Fast recolor (`--use-cache`):** the band colors/line widths are top-of-file constants in
`plotExcludedMassVsEp_2D.py` (`MEDIAN_COLOR`, `BAND68_COLOR`, `BAND95_COLOR`, `BAND68_ALPHA`,
`BAND95_ALPHA`, `MEDIAN_LW`, `EDGE_LW`). The step-(2) run above caches the interpolated band-edge points to
`band_edges_cache_<yaxis>.npz`. Edit a color constant, then redraw **straight from the npz** — no
JSON/parquet/ROOT, so it's instant (`--use-cache` is band-only and per y-axis):

```
# After editing e.g. BAND95_COLOR at the top of plotExcludedMassVsEp_2D.py:
cmssw-el8 -- bash -c 'cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src && eval `scram runtime -sh` && source twoD-env/bin/activate && \
  python3 helper_scripts/plotExcludedMassVsEp_2D.py -l rpf2x0_Binningv13_Inputv28_SR_Blind -L 20.7 --band68 --use-cache'
```

The `--yaxis lifetime` variant works with `--band68` too (writes `band_edges_cache_lifetime.npz` and a
`_lifetime` filename suffix). `--band68` is mutually exclusive with `--fixedDepth`.
