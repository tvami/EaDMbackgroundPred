#!/usr/bin/env python3
"""
Data-vs-MC distributions of the per-DT-segment variables that are the RNN inputs
(see rnn_retrain.py): muon_dtSeg_t0timing, _globX, _globY, _globZ.

Each is a per-segment (jagged) branch; histograms are filled per segment, after
masking the sentinel fill values (-999, 9999) used for empty segments.

Overlays (normalized to unit area): Run-3 Cosmics data (All, incl. commissioning),
the Cosmic Bkg MC (downward, the RNN training background), and one signal
(upward) for reference.

Env: REGION=sr|vr1|vr2 (default sr), BASE_PATH and OUTDIR overrides.
If the merged Cosmics_All file is absent (v5.0.4 on), the per-era data files are chained.
Output: figures/rnn_inputs_dataVsMC/<collection>/<region>_<var>.{png,pdf}
"""
import os, glob
import ROOT, cmsstyle as CMS

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
CMS.SetExtraText("Work in Progress")

base_path = os.environ.get(
    'BASE_PATH',
    '/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.1_wRNN')
collection = 'matched_muon'
region = os.environ.get('REGION', 'sr')

# (label, sample_dir, filename, color, drawopt)  drawopt: 'data' | 'line'
samples = [
    ("Run-3 Cosmics", "Data",   "Ntuplizer-Cosmics_All_v5a_v5.0.0.root",                                              ROOT.kBlack,    'data'),
    ("Cosmic Bkg",    "BkgMC",  "CosmicToMu_Par-MinP-4-MaxP-3000-MinTheta-0-MaxTheta-75_cosmuogen_v5.0.0.root",        ROOT.kAzure + 1, 'line'),
    ("M_{DM} = 20 TeV", "Signal", "CosmicToMu_Par-MinP-10000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen_v5.0.0.root", ROOT.kRed + 1, 'line'),
]

# var key -> (nbins, xmin, xmax, x-axis title)
variables = {
    "t0timing": (120, -300.0, 300.0, "DT segment t_{0} [ns]"),
    "globX":    (100, -800.0, 800.0, "DT segment global X [cm]"),
    "globY":    (100, -800.0, 800.0, "DT segment global Y [cm]"),
    "globZ":    (100, -700.0, 700.0, "DT segment global Z [cm]"),
}

SENTINEL_LO, SENTINEL_HI = -998.0, 9998.0  # drop -999 / 9999 fill values
keep = []  # protect ROOT objects from GC


def fold_overflow(h):
    nb = h.GetNbinsX()
    h.SetBinContent(1, h.GetBinContent(0) + h.GetBinContent(1))
    h.SetBinContent(nb, h.GetBinContent(nb) + h.GetBinContent(nb + 1))
    h.SetBinContent(0, 0)
    h.SetBinContent(nb + 1, 0)


outdir = os.environ.get('OUTDIR', f"figures/rnn_inputs_dataVsMC/{collection}")
os.makedirs(outdir, exist_ok=True)

for vkey, (nbins, xlo, xhi, xtitle) in variables.items():
    branch = f"muon_dtSeg_{vkey}"

    c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
    c.SetLeftMargin(0.16)
    c.SetRightMargin(0.04)
    c.SetLogy(True)

    hframe = ROOT.TH1F("hframe", "", nbins, xlo, xhi)
    hframe.SetStats(False)
    hframe.GetXaxis().SetTitle(xtitle)
    hframe.GetYaxis().SetTitle("Fraction of segments")
    hframe.GetXaxis().SetLabelSize(0.04)
    hframe.GetYaxis().SetLabelSize(0.04)
    hframe.GetXaxis().SetMaxDigits(3)
    hframe.SetMinimum(1e-5)
    hframe.SetMaximum(1.0)
    hframe.Draw()

    leg = ROOT.TLegend(0.62, 0.72, 0.93, 0.90)
    leg.SetBorderSize(0)
    leg.SetFillStyle(0)
    leg.SetTextFont(42)
    leg.SetTextSize(0.032)

    for label, sdir, fname, color, opt in samples:
        full_path = (f"{base_path}/{sdir}/{region}/{collection}/"
                     f"skimmed_{collection}_{region}_{fname}")
        files = [full_path] if os.path.exists(full_path) else []
        if not files and opt == 'data':  # no merged All file: chain the eras, skip any All
            files = sorted(f for f in glob.glob(full_path.replace("_All_", "_*_")) if "_All_" not in f)
        if not files:
            print(f"  WARNING: missing {full_path} - skipping {label}")
            continue
        df = ROOT.RDataFrame("tree", files)
        # element-wise mask of the sentinel fill values
        df = df.Define("v_good", f"{branch}[{branch} > {SENTINEL_LO} && {branch} < {SENTINEL_HI}]")
        h = df.Histo1D((f"h_{vkey}_{label}".replace(' ', '_').replace('{', '').replace('}', ''),
                        "", nbins, xlo, xhi), "v_good")
        histo = h.GetValue().Clone()
        histo.SetDirectory(0)
        fold_overflow(histo)
        if histo.Integral() > 0:
            histo.Scale(1.0 / histo.Integral())
        histo.SetLineColor(color)
        histo.SetMarkerColor(color)
        histo.SetLineWidth(2)
        if opt == 'data':
            histo.SetMarkerStyle(20)
            histo.SetMarkerSize(0.6)
            histo.Draw("P SAME")
            leg.AddEntry(histo, label, "p")
        else:
            histo.Draw("HIST SAME")
            leg.AddEntry(histo, label, "l")
        keep.append(histo)

    pave = ROOT.TPaveText(0.18, 0.82, 0.40, 0.90, "NDC")
    pave.SetFillColor(0)
    pave.SetBorderSize(0)
    pave.SetTextAlign(12)
    pave.SetTextSize(0.030)
    pave.AddText(f"Collection = {collection}")
    pave.AddText(f"Region = {region}")
    pave.Draw()
    leg.Draw()

    CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
    c.SaveAs(f"{outdir}/{region}_dtSeg_{vkey}.png")
    c.SaveAs(f"{outdir}/{region}_dtSeg_{vkey}.pdf")
    del c, hframe

print("Done.")
