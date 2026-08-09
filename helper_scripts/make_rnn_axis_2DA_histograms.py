#!/usr/bin/env python3
"""
2DAlphabet input histograms for the RNN-axis background estimate.

The standard SR fit estimates the pT distribution in a pass region (RNNScore >= 0.9999) from a
fail region (RNNScore < 0.9999).  This script builds the inputs for the transposed fit: estimate
the *RNN score* distribution in a pass region (pT > 200 GeV) from a fail region (pT < 200 GeV).

  pass = 'sr'  skim, pT_max > 200 GeV
  fail = 'vr2' skim, pT_max < 200 GeV

The pT > / < 200 split already exists at skim time (skim_ntuples.C), but it is applied per muon
while the histogram axis uses pT_max over quality-masked muons, so a handful of vr2 events have
pT_max > 200 and would be double counted.  The pT_max cut below is applied explicitly on top of the
skim to keep pass and fail strictly disjoint.

X axis
------
RNNt100 = 100 * (-log10(1 - RNNScore)), filled into 700 bins over [0, 700].

The score piles up against 1, so the fit runs on -log10(1 - score) rather than the raw score.  The
factor of 100 makes every fine bin edge an integer: TwoDAlphabet's copy_hist_with_new_bins compares
input and output bin edges with exact float equality, and a (700, 0, 7) axis has bin width
7.0/700, which is not exactly 0.01 in binary -- a config edge at 0.2 would not match and rebinning
would raise.  This mirrors the (12500, 0, 12500) 1-GeV-per-bin pT axis used by the standard fit.
One fine bin is also exactly one step of the punzi_rnn_optimization.py threshold scan (XSTEP=0.01).

Y axis
------
n_Seg (DT segment count), 200 bins over [0, 200], unchanged from
skimmed_ntuple_processing_script.py.  The config collapses Y to a single bin, but keeping the full
range leaves a real 2D fit available later without reproducing the histograms.

Systematics
-----------
Only the nominal hpass/hfail are written; the RNN-axis fit uses a lumi-only (lnN) uncertainty for
now.  fill_region() is factored so the pT/t0/RNN shape variations can be added later by passing the
shifted column names and output histogram names.

BLINDING
--------
The pass region at RNNt100 >= 200 (RNNScore >= 0.99) is blinded.  This script writes the full range
because 2DAlphabet needs it -- the masking happens at fit time via mask_pass_SIG/mask_pass_HIGH --
but nothing here reads pass content back, and nothing downstream may either.
"""

import os
import glob
import ROOT

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
# Cap the thread count. The bare EnableImplicitMT() takes every core (256 on this machine); with a
# 20-file chain of ~28M events each thread carries its own TTree cache and the job gets OOM-killed.
ROOT.EnableImplicitMT(int(os.environ.get('N_THREADS', '8')))

# ---------------------------------------------------------------------------
# Configuration (env-overridable, matching the style of punzi_rnn_optimization.py)
# ---------------------------------------------------------------------------
base_path = os.environ.get('BASE_PATH', '/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.4_wRNN')
collection = os.environ.get('COLLECTION', 'matched_muon')
out_dir = os.environ.get('OUT_DIR', 'histograms_for_2DAlphabet_v26')

# Signal point: M_DM = 6 TeV -> per-muon MinP = 3000 (M_DM = 2 x MinP), surface depth e4
sig_minP = os.environ.get('SIG_MINP', '3000')
sig_depth = os.environ.get('SIG_DEPTH', 'e4')

pt_boundary = float(os.environ.get('PT_BOUNDARY', '200'))  # pass/fail split, GeV

# Region tag used in the output process names, i.e. EaDM_<process>_<REGION_TAG>.root
region_tag = 'RNNSR'

N_BINS_X = 700          # fine X bins, one per 0.01 in -log10(1 - score)
X_MAX = 700.0
RNN_T100_CLIP = 699.9   # keep saturated scores in the last visible bin rather than in overflow
N_SEG_CLIP = 199        # as in skimmed_ntuple_processing_script.py
MC_EMPTY_BIN = 1e-8     # floor for empty MC bins, avoids log(0) in Combine
SIG_NORM_EVENTS = 100.0  # signal templates are normalized to 100 produced events


def define_columns(df):
    """
    Quality selection, pT_max and the RNN axis variable.

    The chi2ndof / ptErrOverPt2 / quality_mask / pT_max / n_Seg block is copied verbatim from
    skimmed_ntuple_processing_script.py so the object selection is identical to the pT-axis fit.
    """
    return (
        df.Define("n_Seg", "nmuon_dtSeg_t0timing")                            # Total number of DT segments per event
        .Define("chi2ndof", "ROOT::VecOps::Where(muon_fromGenTrack_Ndof != 0, muon_fromGenTrack_Chi2/muon_fromGenTrack_Ndof, 999.)")  # Chi2/ndof, protect against division by zero
        .Define("ptErrOverPt2", "ROOT::VecOps::Where(muon_fromGenTrack_Pt > 0, muon_fromGenTrack_PtErr / (muon_fromGenTrack_Pt * muon_fromGenTrack_Pt), 999.)")  # ptErr/pT^2
        .Define("quality_mask", "chi2ndof < 35. && muon_fromGenTrack_NumValidHits > 7 && ptErrOverPt2 < 1e-3 && abs(muon_fromGenTrack_Eta) < 0.9")  # Select good-quality muon tracks
        .Define("pT_max", "ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])")        # Highest pT among quality muons
        .Define("n_Seg_clipped", f"std::min(n_Seg, {N_SEG_CLIP})")                        # Clip segment count to stay within histogram range
        # float32 RNNScore only resolves ~1e-7 from 1, so clamp just below 1 to keep log10 finite
        .Define("RNNt100", "100.0*(-log10(1.0 - (RNNScore < 0.9999999999 ? RNNScore : 0.9999999999)))")
        .Define("RNNt100_clipped", f"std::min(RNNt100, {RNN_T100_CLIP})")
    )


def fill_region(paths, hist_name, pt_filter, x_var="RNNt100_clipped", report_entries=True):
    """
    Book one TH2 (RNN axis vs n_Seg) over `paths` with `pt_filter` applied.

    Files are processed one at a time and the per-file histograms summed, rather than chained into
    a single RDataFrame.  Chaining all 20 era files was OOM-killed: with implicit MT every thread
    carries its own TTree cache for every file in the chain.  Per-file bounds the live set to one
    file regardless of how many eras there are, at the cost of one event loop each.  The summed
    result is identical to the per-era + hadd step that collect_and_merge_histograms.py performs
    for the standard inputs.

    `report_entries` is False for the data pass region, whose yields are blinded.

    Returns None if no input file exists.
    """
    existing = [p for p in paths if os.path.exists(p)]
    if not existing:
        print(f"  WARNING: no input files for {hist_name} - skipping")
        return None

    if report_entries:
        print(f"  {hist_name}: {len(existing)} file(s)")
    else:
        print(f"  {hist_name}: {len(existing)} file(s)  [yields not reported: blinded region]")

    total = None
    for i, p in enumerate(existing):
        df = define_columns(ROOT.RDataFrame("tree", p)).Filter(pt_filter)
        h = df.Histo2D(
            (f"{hist_name}_part{i}", f"{hist_name};100 #times (-log_{{10}}(1 - RNN score));# of Hits",
             N_BINS_X, 0, X_MAX, 200, 0, 200),
            x_var, "n_Seg_clipped"
        ).GetValue()
        h.SetDirectory(0)
        if total is None:
            total = h
            total.SetName(hist_name)
        else:
            total.Add(h)

    if report_entries:
        print(f"    -> {total.GetEntries():.0f} entries after {pt_filter}")
    return total


def total_generated(path):
    """h_cutflow bin 1 ('All events') -- the denominator for the 100-event signal normalization."""
    f = ROOT.TFile.Open(path)
    if not f or f.IsZombie():
        return 0.0
    h = f.Get("h_cutflow")
    if not h or not h.InheritsFrom("TH1"):
        print(f"  WARNING: h_cutflow not found in {path}")
        f.Close()
        return 0.0
    n = h.GetBinContent(1)
    f.Close()
    return n


def floor_empty_bins(h):
    """Set empty bins to MC_EMPTY_BIN, as skimmed_ntuple_processing_script.py does for MC."""
    for i in range(1, h.GetNbinsX() + 1):
        for j in range(1, h.GetNbinsY() + 1):
            if h.GetBinContent(i, j) == 0:
                h.SetBinContent(i, j, x)


def write(out_path, hists):
    """Write hpass/hfail to a 2DAlphabet input file."""
    f = ROOT.TFile(out_path, "RECREATE")
    for h in hists:
        h.Write()
    f.Close()
    print(f"  wrote {out_path}")


def data_paths(region):
    return sorted(glob.glob(f'{base_path}/Data/{region}/{collection}/skimmed_{collection}_{region}_*.root'))


def signal_paths(region):
    name = (f'skimmed_{collection}_{region}_CosmicToMu_Par-MinP-{sig_minP}-MinTheta-91-MaxTheta-179'
            f'-SurfaceDepth-{sig_depth}_cosmuogen_*.root')
    return sorted(glob.glob(f'{base_path}/Signal/{region}/{collection}/{name}'))


def main():
    os.makedirs(out_dir, exist_ok=True)

    print("=" * 74)
    print("RNN-AXIS 2DALPHABET INPUTS  (pass: pT > %g GeV, fail: pT < %g GeV)" % (pt_boundary, pt_boundary))
    print("=" * 74)
    print(f"Base path:  {base_path}")
    print(f"Collection: {collection}")
    print(f"Signal:     MinP-{sig_minP} SurfaceDepth-{sig_depth}  (M_DM = {2*int(sig_minP)/1000:g} TeV)")
    print(f"Output:     {out_dir}/")

    pass_cut = f"pT_max > {pt_boundary}"
    fail_cut = f"pT_max < {pt_boundary}"

    # ---- data ---------------------------------------------------------------------------
    print("\nData:")
    h_pass = fill_region(data_paths('sr'), "hpass", pass_cut, report_entries=False)
    h_fail = fill_region(data_paths('vr2'), "hfail", fail_cut)
    if h_pass is None or h_fail is None:
        raise RuntimeError("Could not build the data templates.")
    # Deliberately not reporting hpass integrals here: the pass region above RNNt100 = 200 is blinded.
    write(f'{out_dir}/EaDM_Run3_Cosmics_Data_All_{region_tag}.root', [h_pass, h_fail])

    # ---- signal -------------------------------------------------------------------------
    print("\nSignal:")
    sig_pass_paths = signal_paths('sr')
    sig_fail_paths = signal_paths('vr2')
    if not sig_pass_paths:
        raise RuntimeError(f"No signal files found for MinP-{sig_minP} SurfaceDepth-{sig_depth}")

    hs_pass = fill_region(sig_pass_paths, "hpass", pass_cut)
    hs_fail = fill_region(sig_fail_paths, "hfail", fail_cut)
    if hs_fail is None:
        # No pT < 200 signal file: an empty (floored) template is the correct input.
        hs_fail = hs_pass.Clone("hfail")
        hs_fail.SetDirectory(0)
        hs_fail.Reset()

    # The sr and vr2 skims come from the same generated sample, so h_cutflow bin 1 is identical in
    # both; use the pass file's value for both templates so the pass/fail ratio stays physical.
    n_gen = total_generated(sig_pass_paths[0])
    if n_gen <= 0:
        raise RuntimeError(f"No generated-event count in {sig_pass_paths[0]}")
    n_gen_fail = total_generated(sig_fail_paths[0]) if sig_fail_paths else n_gen
    if n_gen_fail > 0 and abs(n_gen_fail - n_gen) > 0.5:
        print(f"  WARNING: h_cutflow differs between sr ({n_gen:.0f}) and vr2 ({n_gen_fail:.0f}); "
              f"using the sr value for both templates.")

    scale = SIG_NORM_EVENTS / n_gen
    print(f"  generated events: {n_gen:.0f}  ->  scale = {scale:.6g} (templates in units of "
          f"{SIG_NORM_EVENTS:g} produced events)")
    for h in (hs_pass, hs_fail):
        h.Scale(scale)
        floor_empty_bins(h)
    print(f"  hpass + hfail = {hs_pass.Integral() + hs_fail.Integral():.4f} per "
          f"{SIG_NORM_EVENTS:g} produced events")

    write(f'{out_dir}/EaDM_Signal_M{sig_minP}GeV_{sig_depth}_{region_tag}.root', [hs_pass, hs_fail])

    print("\nDone!")


if __name__ == "__main__":
    main()
