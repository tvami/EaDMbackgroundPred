import ROOT, numpy as np, pandas as pd, cmsstyle as CMS
from array import array

# ── Load data ────────────────────────────────────────────────────────────────

file = ROOT.TFile.Open(
    '/Users/sanjitmasanam/Documents/CodingProjects/CMS/t0timing_chamber_study/pT_Comp_hpf.root'
)
df = pd.read_parquet(
    '/Users/sanjitmasanam/Downloads/'
    'generated_data_depth_-8_diskR_459_mDM_1600-10000_mA_0.22_'
    'dmModel_momentum_constrained_HIT_DETECTOR_ave_eloss_COMBINED.parquet'
)

# Extract relevant columns
m_dm = df['M_DM'].to_numpy()
m_a  = df['M_A'].to_numpy()
pt1  = df['pt1_detector_acceptance'].to_numpy()

print(np.unique(m_dm))

# ── Histogram setup ──────────────────────────────────────────────────────────

# DM masses for both reco (CMSCGEN) and theory (EarthShine) histograms
dm_masses   = [1600, 3000, 6000, 10000]
labels_reco = ["1500GeV", "3000GeV", "5000GeV"]  # Tree labels (3 of 4 masses)
hist_labels = ["1.6 TeV", "3 TeV", "6 TeV", "10 TeV"]
colors      = [ROOT.kBlack, ROOT.kRed, ROOT.kGreen, ROOT.kBlue]

# Create reco and theory histograms for each DM mass
reco_hists   = [ROOT.TH1F(f"pT_reco_{m}",   "; p_{{T}} (GeV);A.U.", 250, 0, 7500) for m in dm_masses]
theory_hists = [ROOT.TH1F(f"pT_theory_{m}", "; p_{{T}} (GeV);A.U.", 250, 0, 7500) for m in dm_masses]

theory_hists[0].SetStats(False)
theory_hists[0].GetXaxis().SetTitleSize(0.04)

# ── Fill theory histograms from parquet data ─────────────────────────────────

for i, dm_mass in enumerate(dm_masses):
    mask = np.isclose(m_dm, dm_mass) & np.isclose(m_a, 0.22)
    for pT in pt1[mask]:
        theory_hists[i].Fill(pT)

# ── Fill reco histograms from ROOT trees ─────────────────────────────────────

for i, label in enumerate(labels_reco):
    tree = file.Get(label)
    print(tree.GetEntries())

    pT_data, nHits_data, rnn_data, nTracks_data = [], [], [], []
    eta_data, energy_data, rnn_t0_data = [], [], []

    for j in range(tree.GetEntries()):
        tree.GetEntry(j)
        if getattr(tree, "validpTPass") == 0:
            continue
        pT_data.append(getattr(tree, "gen_pt"))
        nHits_data.append(getattr(tree, "nHits"))
        rnn_data.append(getattr(tree, "RNNscore"))
        rnn_t0_data.append(getattr(tree, "RNNscore_t0"))
        nTracks_data.append(getattr(tree, "nTracks"))
        eta_data.append(getattr(tree, "eta"))
        energy_data.append(getattr(tree, "energy"))

    for pT in np.array(pT_data):
        reco_hists[i].Fill(pT)

# ── Normalize all histograms to unit area ────────────────────────────────────

for _ in reco_hists[:2]:
    for h in reco_hists + theory_hists:
        h.Scale(1 / (h.Integral()))

# ── Styling ──────────────────────────────────────────────────────────────────

for reco, theory, color in zip(reco_hists, theory_hists, colors):
    reco.SetLineColor(color);   reco.SetLineWidth(5)
    theory.SetLineColor(color-1); theory.SetLineWidth(5)
    theory.SetLineStyle(7)      # Dashed for theory

# ── Canvas and legend ────────────────────────────────────────────────────────

CMS.SetExtraText("Simulation Internal")
CMS.SetLumi("")
CMS.SetEnergy(" Cosmic Dataset", unit='')

canvas = CMS.cmsCanvas('', 0, 1, 0, 1, '', '', square=CMS.kSquare, extraSpace=0.01, iPos=0)
canvas.SetLogy()

legend = ROOT.TLegend(0.43, 0.66, 0.7, 0.9)

# Draw and register legend entries
theory_hists[1].GetYaxis().SetRangeUser(1e-3, 100)
for i, (reco, theory, lbl) in enumerate(zip(reco_hists, theory_hists, hist_labels)):
    draw_opt = "HIST" if i == 0 else "HIST SAME"
    theory.Draw(draw_opt)
    reco.Draw("HIST SAME")
    legend.AddEntry(reco,   f"CMSCGEN, m_{{DM}} = {lbl}", "l")

# Draw theory entries separately so they appear grouped in legend
for theory, lbl in zip(theory_hists, hist_labels):
    legend.AddEntry(theory, f"EarthShine, m_{{DM}} = {lbl}", "l")

legend.Draw()
CMS.CMS_lumi(canvas, iPosX=0, scaleLumi=0)

# ── Save ─────────────────────────────────────────────────────────────────────

canvas.SaveAs(
    '/Users/sanjitmasanam/Documents/CodingProjects/CMS/'
    't0timing_chamber_study/figures/pTCompTheoryReco.png'
)
