#!/usr/bin/env python3
"""
Driver for the v5.0.0 trigger study: background MC vs data, SR only.

The v5.0.0 ROOT files live *flat* in this directory as
    trigger_study_matched_muon_{sr,vr1,vr2}_{dataset}_v5.0.0.root
rather than in the Data/Signal/BkgMC/{region}/{object} tree that the __main__ of
plot_trigger_study.py expects, so this driver wires the existing plotting
functions directly to the flat files.

Scope (per request):
  - Region:   SR only
  - Object:   matched_muon (the only object produced in v5.0.0)
  - Samples:  data = all Cosmics_Run* eras; bkg MC = MinP-4 and MinP-10, kept SEPARATE
  - Plots:    (a) per-era 1D + 2D TEfficiency overlays (data eras + both MCs)
              (b) L1 DT efficiency Data/MC two-pad ratio, one MC sample at a time

Run from .../CMSSW_14_1_0_pre4/src/helper_scripts with ROOT available (cmsenv).
"""

import os
import glob

import math
import json
import re

import ROOT

from plot_trigger_study import (
    setCMSStyle,
    plot_all_trigger_studies,
    plot_l1dt_data_mc_ratio,
    plot_l1dt_efficiency_overlay,
    build_l1dt_teff,
    l1dt_axis_props,
    _sum_l1dt_h2,
)

REGION = "sr"
OBJ_TYPE = "Matched Muon"
VERSION = "v5.0.1"

# This directory holds the flat v5.0.0 files.
INPUT_DIR = os.path.dirname(os.path.abspath(__file__))
OUTPUT_BASE = os.path.join(INPUT_DIR, "figures", "trigger_study_v5")

# Background MC samples, kept separate. Key -> filename substring that selects it.
MC_SAMPLES = {
    "MinP-4": "CosmicToMu_Par-MinP-4-MaxP-3000-MinTheta-0-MaxTheta-75",
    "MinP-10": "CosmicToMu_Par-MinP-10-MaxP-10000-MinTheta-91-MaxTheta-179",
}

# L1 DT (probe pT vs fired) histograms for the Data/MC ratio plots.
# Only the probe=upper (tag=lower) histograms are kept: that leg assignment is the one
# used in the reference DT trigger paper (2010 JINST 5 T03002, Fig. 12), with _acc =
# their acceptance/crack-cut series. comb and probeLower use the opposite/averaged
# convention and are no longer plotted.
L1DT_RATIO_HISTS = [
    # "h2_l1dt_eff_comb", "h2_l1dt_eff_comb_acc",
    "h2_l1dt_eff_probeUpper",
    # "h2_l1dt_eff_probeLower",
    "h2_l1dt_eff_probeUpper_acc",
    # "h2_l1dt_eff_probeLower_acc",
    # same probe=upper leg, now vs probe-leg phi and eta
    "h2_l1dt_eff_probeUpper_phi",
    "h2_l1dt_eff_probeUpper_phi_acc",
    "h2_l1dt_eff_probeUpper_eta",
    "h2_l1dt_eff_probeUpper_eta_acc",
]


def sr_files():
    return sorted(glob.glob(os.path.join(
        INPUT_DIR, f"trigger_study_matched_muon_{REGION}_*_{VERSION}.root")))


def _era_pass_total(h2, fold_overflow=True):
    """Per-x-bin (passed, total) arrays from a 2D (x vs fired 0/1) histogram. With
    fold_overflow the x under/overflow is folded into the first/last bin (matches
    build_l1dt_teff, fold_overflow=True), as used for the pT histos."""
    h = h2.Clone(h2.GetName() + "_pt_clone")
    h.SetDirectory(0)
    total = h.ProjectionX(h.GetName() + "_tot", 1, 2)
    passed = h.ProjectionX(h.GetName() + "_pas", 2, 2)
    n = total.GetNbinsX()
    if fold_overflow:
        for hh in (total, passed):
            hh.SetBinContent(1, hh.GetBinContent(1) + hh.GetBinContent(0))
            hh.SetBinContent(n, hh.GetBinContent(n) + hh.GetBinContent(n + 1))
    tot = [total.GetBinContent(i) for i in range(1, n + 1)]
    pas = [min(passed.GetBinContent(i), total.GetBinContent(i)) for i in range(1, n + 1)]
    return pas, tot


def plot_l1dt_data_mc_ratio_eraspread(data_files, mc_files, hist_name, output_dir,
                                      rightlabel="Cosmics", region="", obj_type=""):
    """Like plot_l1dt_data_mc_ratio, but the DATA error bars are the era-to-era spread,
    not Clopper-Pearson stat errors.

    Per pT bin: central = combined (summed-over-eras) efficiency = stats-weighted mean of
    the per-era efficiencies; error = stats-weighted std dev of the per-era efficiencies
    (sigma = sqrt( sum_e N_e (eff_e - mu)^2 / sum_e N_e )). MC keeps Clopper-Pearson errors.
    """
    hd = _sum_l1dt_h2(data_files, hist_name)
    hm = _sum_l1dt_h2(mc_files, hist_name)
    if not hd or not hm or hd.GetEntries() == 0 or hm.GetEntries() == 0:
        print(f"  era-spread Data/MC: missing/empty histograms for {hist_name}")
        return

    x_title, logx, fold = l1dt_axis_props(hist_name)
    eff_mc = build_l1dt_teff(hm, hist_name + "_mc_es", fold_overflow=fold)
    htot = eff_mc.GetTotalHistogram()       # same x binning as data
    nb = htot.GetNbinsX()

    # combined data totals/passes (central value) and per-era contributions (spread)
    eff_data_comb = build_l1dt_teff(hd, hist_name + "_data_es", fold_overflow=fold)
    era_pt = []
    for f in data_files:
        tf = ROOT.TFile.Open(f)
        if not tf or tf.IsZombie():
            continue
        h2 = tf.Get(hist_name)
        if h2 and h2.GetEntries() > 0:
            era_pt.append(_era_pass_total(h2, fold_overflow=fold))
        tf.Close()

    # data eras' year range (for the legend label)
    years = sorted({int(m.group(1)) for f in data_files
                    for m in [re.search(r'(?:Run|Commissioning)(20\d\d)', os.path.basename(f))] if m})
    year_label = (f"{years[0]}#minus{years[-1]}" if len(years) > 1
                  else (str(years[0]) if years else ""))

    # build the data graph: x = bin centre, y = combined eff (mu), ey = weighted spread
    xs, ys, exl, exh, eys = [], [], [], [], []
    mu_bin, sig_bin, ndat_bin = {}, {}, {}
    for i in range(1, nb + 1):
        N = sum(pt[1][i - 1] for pt in era_pt)
        if N <= 0:
            continue
        mu = sum(pt[0][i - 1] for pt in era_pt) / N            # = combined efficiency
        var = sum(pt[1][i - 1] * (((pt[0][i - 1] / pt[1][i - 1]) if pt[1][i - 1] > 0 else mu) - mu) ** 2
                  for pt in era_pt) / N
        sig = math.sqrt(max(var, 0.0))
        xc = htot.GetBinCenter(i)
        xs.append(xc); ys.append(mu)
        exl.append(xc - htot.GetBinLowEdge(i)); exh.append(htot.GetBinLowEdge(i + 1) - xc)
        eys.append(sig)
        mu_bin[i] = mu; sig_bin[i] = sig; ndat_bin[i] = N

    if not xs:
        print(f"  era-spread Data/MC: no populated bins for {hist_name}")
        return

    import array
    g_data = ROOT.TGraphAsymmErrors(len(xs),
                                    array.array('d', xs), array.array('d', ys),
                                    array.array('d', exl), array.array('d', exh),
                                    array.array('d', eys), array.array('d', eys))

    xmin = hd.GetXaxis().GetBinLowEdge(1)
    xmax = hd.GetXaxis().GetBinUpEdge(hd.GetNbinsX())

    c = ROOT.TCanvas("c_es_" + hist_name, "c", 700, 700)
    p1 = ROOT.TPad("p1_es_" + hist_name, "p1", 0, 0.31, 1, 1.0)
    p1.SetBottomMargin(0.02); p1.SetLeftMargin(0.13); p1.SetRightMargin(0.04)
    p1.SetTopMargin(0.07); p1.SetTicks(1, 1); p1.SetLogx(logx); p1.Draw()
    p2 = ROOT.TPad("p2_es_" + hist_name, "p2", 0, 0.0, 1, 0.31)
    p2.SetTopMargin(0.03); p2.SetBottomMargin(0.37); p2.SetLeftMargin(0.13); p2.SetRightMargin(0.04)
    p2.SetTicks(1, 1); p2.SetLogx(logx); p2.Draw()

    # ---- top pad: data (black, spread band) vs MC (red, stat) ----
    p1.cd()
    g_data.SetMarkerStyle(20); g_data.SetMarkerColor(ROOT.kBlack)
    g_data.SetLineColor(ROOT.kBlack); g_data.SetMarkerSize(1.0); g_data.SetFillStyle(0)
    eff_mc.SetLineColor(ROOT.kRed); eff_mc.SetMarkerColor(ROOT.kRed)
    eff_mc.SetMarkerStyle(24); eff_mc.SetMarkerSize(1.0)
    g_data.SetTitle("")
    g_data.Draw("AP"); ROOT.gPad.Update()
    ax = g_data.GetXaxis(); ay = g_data.GetYaxis()
    ax.SetLimits(xmin, xmax); ax.SetLabelSize(0.0); ax.SetTitleSize(0.0)  # decade-only log labels
    ay.SetRangeUser(0.0, 1.08); ay.SetTitle("L1 DT efficiency")
    ay.SetTitleSize(0.055); ay.SetTitleOffset(1.10); ay.SetLabelSize(0.048)
    eff_mc.Draw("P SAME"); ROOT.gPad.Update()

    legd = ROOT.TLegend(0.50, 0.16, 0.92, 0.44)
    legd.SetBorderSize(0); legd.SetFillStyle(0); legd.SetTextSize(0.045)
    if obj_type:
        legd.SetHeader(f"Collection: {obj_type}")
    legd.AddEntry(g_data, f"Data ({year_label})" if year_label else "Data", "lp")
    legd.AddEntry(eff_mc, "MC", "lp")
    legd.Draw()

    t = p1.GetTopMargin(); l = p1.GetLeftMargin(); r = p1.GetRightMargin()
    lat = ROOT.TLatex(); lat.SetNDC(); lat.SetTextAngle(0)
    lat.SetTextFont(61); lat.SetTextSize(0.75 * t); lat.SetTextAlign(11)
    lat.DrawLatex(l, 1 - 0.8 * t, "CMS")
    lat.SetTextFont(52); lat.SetTextSize(0.6 * t)
    lat.DrawLatex(l + 0.10, 1 - 0.8 * t, "Work in Progress")
    lat.SetTextFont(42); lat.SetTextSize(0.6 * t); lat.SetTextAlign(31)
    lat.DrawLatex(1 - r, 1 - 0.8 * t, rightlabel)

    # ---- bottom pad: Data/MC ratio (data spread propagated) ----
    p2.cd()
    rat = ROOT.TGraphAsymmErrors(); k = 0
    sf_bins = []
    for i in range(1, nb + 1):
        if i not in mu_bin:
            continue
        mu = mu_bin[i]; em = eff_mc.GetEfficiency(i)
        tm = eff_mc.GetTotalHistogram().GetBinContent(i)
        if mu == 0 or em == 0 or tm == 0:
            continue
        rr = mu / em
        rel_d = sig_bin[i] / mu
        rel_m_hi = eff_mc.GetEfficiencyErrorUp(i) / em
        rel_m_lo = eff_mc.GetEfficiencyErrorLow(i) / em
        x = htot.GetBinCenter(i)
        xl = x - htot.GetBinLowEdge(i); xh = htot.GetBinLowEdge(i + 1) - x
        sf_err_lo = rr * math.hypot(rel_d, rel_m_lo)
        sf_err_hi = rr * math.hypot(rel_d, rel_m_hi)
        rat.SetPoint(k, x, rr)
        rat.SetPointError(k, xl, xh, sf_err_lo, sf_err_hi)
        k += 1
        sf_bins.append({
            "bin_low": htot.GetBinLowEdge(i),
            "bin_high": htot.GetBinLowEdge(i + 1),
            "bin_center": x,
            "sf": rr,
            "sf_err_low": sf_err_lo,
            "sf_err_high": sf_err_hi,
            "data_eff": mu,
            "data_eff_err_spread": sig_bin[i],
            "mc_eff": em,
            "mc_eff_err_low": eff_mc.GetEfficiencyErrorLow(i),
            "mc_eff_err_high": eff_mc.GetEfficiencyErrorUp(i),
            "n_data": ndat_bin[i],
            "n_mc": tm,
        })
    rat.SetMarkerStyle(20); rat.SetMarkerColor(ROOT.kBlack); rat.SetLineColor(ROOT.kBlack)
    rat.SetTitle(""); rat.Draw("AP"); ROOT.gPad.Update()
    ax2 = rat.GetXaxis(); ay2 = rat.GetYaxis()
    ax2.SetLimits(xmin, xmax); ax2.SetTitle(x_title)
    ax2.SetTitleSize(0.13); ax2.SetLabelSize(0.11); ax2.SetTitleOffset(1.15)  # decade-only log labels
    ay2.SetRangeUser(0.9, 1.1); ay2.SetTitle("Data / MC"); ay2.SetNdivisions(505)
    ay2.SetTitleSize(0.12); ay2.SetLabelSize(0.10); ay2.SetTitleOffset(0.45)
    line = ROOT.TLine(xmin, 1.0, xmax, 1.0)
    line.SetLineStyle(2); line.SetLineColor(ROOT.kRed); line.Draw()
    rat.Draw("P SAME")

    output_path = os.path.join(output_dir, f"trig_study_{hist_name}_dataMC_ratio_eraspread")
    c.SaveAs(output_path + ".png")
    c.SaveAs(output_path + ".pdf")
    c.Close()
    del c

    # ---- JSON of Data/MC scale factors + uncertainties ----
    # x_variable identifies the probe binning variable; bins use generic bin_low/high/center.
    x_var_name = {"probe muon #phi": "probe muon phi",
                  "probe muon #eta": "probe muon eta"}.get(x_title, "probe muon pT [GeV]")
    mcm = re.search(r'(MinP-\d+)', os.path.basename(mc_files[0])) if mc_files else None
    sf_doc = {
        "histogram": hist_name,
        "probe_leg": ("upper" if "probeUpper" in hist_name
                      else "lower" if "probeLower" in hist_name else "combined"),
        "acceptance_cuts": hist_name.endswith("_acc"),
        "mc_sample": mcm.group(1) if mcm else "MC",
        "region": region,
        "collection": obj_type,
        "data_years": [years[0], years[-1]] if years else [],
        "n_data_eras": len(era_pt),
        "x_variable": x_var_name,
        "overflow_note": ("last pT bin is overflow-inclusive (probes above the top edge folded in)"
                          if fold else "uniform bins, no overflow folding"),
        "sf_definition": ("SF = data_eff / mc_eff;  data_eff_err_spread = statistics-weighted "
                          "era-to-era std dev;  sf_err = quadrature(data spread, MC Clopper-Pearson)"),
        "bins": sf_bins,
    }
    with open(output_path + "_SF.json", "w") as fh:
        json.dump(sf_doc, fh, indent=2)


def datamc_eraspread(include_commissioning=False):
    """Era-spread version of the L1 DT Data/MC ratio plots, per MC sample (kept separate).

    include_commissioning=False -> data = the 41 Cosmics_Run physics eras (default).
    include_commissioning=True  -> data also includes the Cosmics_Commissioning eras;
                                   written to a separate 'DataMC_eraspread_withCommissioning' dir.
    """
    ROOT.gROOT.SetBatch(True)
    setCMSStyle()
    all_sr = sr_files()
    if include_commissioning:
        # all Cosmics data eras (Run + Commissioning), but exclude the 2026 era
        data_files = [f for f in all_sr
                      if "Cosmics_" in os.path.basename(f)
                      and "CosmicToMu" not in os.path.basename(f)
                      and "2026" not in os.path.basename(f)]
        top = "DataMC_eraspread_withCommissioning"
    else:
        data_files = [f for f in all_sr if "Cosmics_Run" in os.path.basename(f)]
        top = "DataMC_eraspread"
    print(f"era-spread Data/MC ({'with' if include_commissioning else 'no'} Commissioning): "
          f"{len(data_files)} data eras")
    for mc_key, mc_sub in MC_SAMPLES.items():
        mc_files = [f for f in all_sr if mc_sub in os.path.basename(f)]
        if not mc_files:
            continue
        outdir = os.path.join(OUTPUT_BASE, top, REGION, mc_key)
        os.makedirs(outdir, exist_ok=True)
        print(f"  data vs {mc_key} -> {outdir}")
        for hist_name in L1DT_RATIO_HISTS:
            rlabel = "Cosmics (acc.)" if hist_name.endswith("_acc") else "Cosmics"
            plot_l1dt_data_mc_ratio_eraspread(
                data_files, mc_files, hist_name, outdir,
                rightlabel=rlabel, region=REGION, obj_type=OBJ_TYPE)


def l1dt_overlay_per_year(hist_name="h2_l1dt_eff_probeUpper"):
    """Overlay the L1 DT efficiency for `hist_name` split per year, so the
    Commissioning eras can be compared against the Run eras of the same year.
    One plot per year (Run + Commissioning of that year together)."""
    import re
    ROOT.gROOT.SetBatch(True)
    setCMSStyle()

    all_sr = sr_files()
    data_files = sorted(f for f in all_sr
                        if "Cosmics_" in os.path.basename(f)
                        and "CosmicToMu" not in os.path.basename(f))

    by_year = {}
    for f in data_files:
        m = re.search(r'(?:Run|Commissioning)(20\d\d)', os.path.basename(f))
        if not m:
            continue
        by_year.setdefault(m.group(1), []).append(f)

    for year in sorted(by_year):
        files = sorted(by_year[year])
        n_comm = sum("Commissioning" in os.path.basename(f) for f in files)
        print(f"  {year}: {len(files)} eras ({n_comm} Commissioning)")
        outdir = os.path.join(OUTPUT_BASE, REGION, "matched_muon",
                              "l1dt_per_year", year)
        os.makedirs(outdir, exist_ok=True)
        plot_l1dt_efficiency_overlay(
            files, hist_name, outdir, region=REGION, obj_type=OBJ_TYPE)


def l1dt_data_overlay():
    """Overlay the L1 DT efficiency across ALL data eras (Run + Commissioning),
    one plot per h2_l1dt_eff_* histogram. Data only, no MC."""
    ROOT.gROOT.SetBatch(True)
    setCMSStyle()

    all_sr = sr_files()
    # all data eras: Cosmics_* but not the CosmicToMu MC
    data_files = sorted(f for f in all_sr
                        if "Cosmics_" in os.path.basename(f)
                        and "CosmicToMu" not in os.path.basename(f))
    print(f"L1 DT data overlay: {len(data_files)} data eras")

    outdir = os.path.join(OUTPUT_BASE, REGION, "matched_muon", "l1dt_data_overlay")
    os.makedirs(outdir, exist_ok=True)
    for hist_name in L1DT_RATIO_HISTS:
        plot_l1dt_efficiency_overlay(
            data_files, hist_name, outdir, region=REGION, obj_type=OBJ_TYPE)
    print(f"  -> {outdir}")


def main():
    ROOT.gROOT.SetBatch(True)
    setCMSStyle()

    all_sr = sr_files()
    data_files = [f for f in all_sr if "Cosmics_Run" in os.path.basename(f)]
    if not all_sr:
        print(f"No {VERSION} SR files found in {INPUT_DIR}")
        return
    print(f"SR files: {len(all_sr)} total ({len(data_files)} data eras)")

    # (a) Overlays: every data era + both MC samples as separate curves.
    overlay_pattern = os.path.join(
        INPUT_DIR, f"trigger_study_matched_muon_{REGION}_*_{VERSION}.root")
    overlay_outdir = os.path.join(OUTPUT_BASE, REGION, "matched_muon")
    os.makedirs(overlay_outdir, exist_ok=True)
    print(f"\n[overlays] -> {overlay_outdir}")
    plot_all_trigger_studies(
        overlay_pattern, overlay_outdir,
        region=REGION, obj_type=OBJ_TYPE, sample_label="DataMC")

    # (b) L1 DT Data/MC ratio, one MC sample at a time (kept separate).
    for mc_key, mc_sub in MC_SAMPLES.items():
        mc_files = [f for f in all_sr if mc_sub in os.path.basename(f)]
        if not mc_files:
            print(f"\n[L1 DT ratio] {mc_key}: no MC file found, skipping")
            continue
        ratio_outdir = os.path.join(OUTPUT_BASE, "DataMC", REGION, mc_key)
        os.makedirs(ratio_outdir, exist_ok=True)
        print(f"\n[L1 DT ratio] data vs {mc_key} -> {ratio_outdir}")
        for hist_name in L1DT_RATIO_HISTS:
            rlabel = "Cosmics (acc.)" if hist_name.endswith("_acc") else "Cosmics"
            plot_l1dt_data_mc_ratio(
                data_files, mc_files, hist_name, ratio_outdir,
                rightlabel=rlabel, region=REGION, obj_type=OBJ_TYPE)

    print("\nDone.")


if __name__ == "__main__":
    main()
