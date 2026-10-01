#!/usr/bin/env python3
"""The t0 distribution actually fed to the four RNN training arms.

Reads the cached raw training tensors (built by cache_raw.py with exactly the
training file list: /vr1/ skipped because it duplicates the sr skim, and the four
held-out signal masses excluded), then applies each arm's t0 transform so the
figures show what each network really saw.

Three figures:
  training_t0_segment_perlabel  valid-segment t0 by training input group, with data
                                overlaid -- this is where the data/MC offset lives
  training_t0_segment_perarm    the same segments under each arm's transform
                                (arm 2 nominal, arm 3 +8 ns, arm 4 smeared 12 ns,
                                arm 1 per-event median-centered)
  training_t0_eventmedian       per-event median t0, the single variable centering
                                removes (0.577 standalone AUC, per the handover)

Env: CACHE   dir holding raw_g{0,1,2}_c*.npy   (default: session scratchpad)
     MAXEV   data events read per region for the overlay (default 300000)
Run with plain cmsenv (NOT twoD-env, which shadows cmsstyle).
"""
import os, sys, glob
import numpy as np
import ROOT, cmsstyle as CMS

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kError
CMS.SetExtraText('Work in Progress')

sys.path.insert(0, '/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/helper_scripts')
from rnn_input_prep import SENTINEL_LO, SENTINEL_HI

CACHE = os.environ.get('CACHE', '/tmp/claude-81951/-home-users-tvami/'
                       '0399c8b7-f959-4963-b6d9-80c3514e103e/scratchpad/cache')
OUT = ('/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/helper_scripts/figures/'
       'rnn_4arm_dataVsMC')
os.makedirs(OUT, exist_ok=True)
B = '/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.4_wRNN'
MAXEV = int(os.environ.get('MAXEV', '300000'))
SMEAR_SEED = 20260728          # must match smear_t0() in rnn_input_prep
keep = []

# (group, label, legend, color) in the order rnn_retrain_centeredT0.py concatenates.
#
# NB the middle sample is the NEUTRINO MC (the t0shift study calls it NU: upward,
# MinP-10-MaxP-10000, theta 91-179). It sits under BkgMC/ on disk and is an
# irreducible BACKGROUND in the analysis, but the training gives it label 1 --
# signal-like -- because the RNN only discriminates direction, and neutrino-induced
# and EaDM muons are both upward-going. It is NOT background to this network.
GROUPS = [(0, 0, 'label 0: cosmic MC, downward',        ROOT.kAzure + 1),
          (1, 1, 'label 1: neutrino MC, upward',        ROOT.kOrange + 7),
          (2, 1, 'label 1: EaDM signal MC',             ROOT.kGreen + 2)]


def load_group(g):
    fs = sorted(glob.glob(f'{CACHE}/raw_g{g}_c*.npy'))
    if not fs:
        raise SystemExit(f'no cached tensors for group {g} in {CACHE}\n'
                         f'  rebuild with: python3 cache_raw.py <g> <chunk> <nchunk> {CACHE}')
    return np.concatenate([np.load(f)[..., 0] for f in fs])   # t0 plane only


t0 = {g: load_group(g) for g, *_ in GROUPS}
valid = {g: (t0[g] > SENTINEL_LO) & (t0[g] < SENTINEL_HI) for g in t0}
for g, lab, leg, _c in GROUPS:
    print(f'group {g} (label {lab}): {t0[g].shape[0]} events, '
          f'{valid[g].sum()} valid segments, '
          f'median t0 = {np.median(t0[g][valid[g]]):.2f} ns')


def event_median(g):
    """Per-event median over valid segments -- the centering reference."""
    x = np.where(valid[g], t0[g], np.nan)
    with np.errstate(all='ignore'):
        m = np.nanmedian(x, axis=1)
    return m[np.isfinite(m)]


# ------------------------------------------------------------------ arm transforms
def arm_segments(kind):
    """Valid-segment t0 across the whole training mixture, under one arm's transform.

    Reproduces rnn_input_prep exactly: shift and smear touch valid segments only,
    and the smear is drawn per EVENT with one RNG stream per input group, because
    build_rnn_tensor was called once per group.
    """
    out = []
    for g, *_ in GROUPS:
        t, v = t0[g].copy(), valid[g]
        if kind == 'shift8':
            t[v] += 8.0
        elif kind == 'smear12':
            d = np.random.default_rng(SMEAR_SEED).normal(0.0, 12.0, t.shape[0])
            t = np.where(v, t + d[:, None], t)
        elif kind == 'centered':
            x = np.where(v, t, np.nan)
            with np.errstate(all='ignore'):
                ref = np.nanmedian(x, axis=1)
            ref = np.nan_to_num(ref, nan=0.0)
            t = np.where(v, t - ref[:, None], t)
        out.append(t[v])
    return np.concatenate(out)


# ------------------------------------------------------------------------ data t0
def data_t0():
    """Valid-segment t0 and per-event median for data, sr + vr2 (the training mix
    spans both: the glob skips only /vr1/, which duplicates sr)."""
    segs, meds = [], []
    for reg in ('sr', 'vr2'):
        ch = ROOT.TChain('tree')
        n = 0
        for f in sorted(glob.glob(f'{B}/Data/{reg}/matched_muon/'
                                  f'skimmed_matched_muon_{reg}_Ntuplizer-Cosmics_*.root')):
            if '_All_' in f:
                continue
            ch.Add(f)
            n += 1
        df = ROOT.RDataFrame(ch)
        if MAXEV:
            df = df.Range(MAXEV)
        raw = df.AsNumpy(['muon_dtSeg_t0timing'])['muon_dtSeg_t0timing']
        print(f'  data {reg}: {n} files, {len(raw)} events read')
        for v in raw:
            a = np.asarray(v, dtype=np.float64)
            a = a[(a > SENTINEL_LO) & (a < SENTINEL_HI)]
            if a.size:
                segs.append(a)
                meds.append(np.median(a))
    return np.concatenate(segs) if segs else np.array([]), np.asarray(meds)


print('reading data for the overlay...')
d_seg, d_med = data_t0()
print(f'  data: {d_seg.size} valid segments, median t0 = {np.median(d_seg):.2f} ns, '
      f'per-event median of medians = {np.median(d_med):.2f} ns')


# --------------------------------------------------------------------- histograms
def mk(vals, name, nb, lo, hi):
    h = ROOT.TH1D(name, '', nb, lo, hi)
    h.SetDirectory(0)
    cnt, _ = np.histogram(np.asarray(vals, float), bins=nb, range=(lo, hi))
    for i in range(nb):
        h.SetBinContent(i + 1, float(cnt[i]))
    if h.Integral() > 0:
        h.Scale(1.0 / h.Integral())
    keep.append(h)
    return h


def canvas(name):
    c = ROOT.TCanvas(name, '', 900, 900)      # square, per the plotting convention
    keep.append(c)
    c.SetLeftMargin(.15)
    c.SetRightMargin(.05)
    c.SetTopMargin(.08)
    c.SetBottomMargin(.13)
    c.SetLogy(True)
    return c


def frame(nb, lo, hi, xt, ymin, ymax):
    fr = ROOT.TH1F('fr' + str(len(keep)), '', nb, lo, hi)
    keep.append(fr)
    fr.SetStats(False)
    fr.SetMinimum(ymin)
    fr.SetMaximum(ymax)
    fr.GetXaxis().SetTitle(xt)
    fr.GetYaxis().SetTitle('Fraction of segments')
    fr.GetXaxis().SetTitleSize(.045)
    fr.GetYaxis().SetTitleSize(.045)
    fr.GetYaxis().SetTitleOffset(1.45)
    fr.GetXaxis().SetLabelSize(.038)
    fr.GetYaxis().SetLabelSize(.038)
    fr.Draw()
    return fr


def legend(x1, y1, x2, y2, ts=.027):
    lg = ROOT.TLegend(x1, y1, x2, y2)
    keep.append(lg)
    lg.SetBorderSize(0)
    lg.SetFillStyle(0)
    lg.SetTextFont(42)
    lg.SetTextSize(ts)
    return lg


def zero_line(lo, hi, ymin, ymax, x=0.0, col=ROOT.kGray + 2):
    ln = ROOT.TLine(x, ymin, x, ymax)
    keep.append(ln)
    ln.SetLineStyle(2)
    ln.SetLineColor(col)
    ln.Draw()


NB, LO, HI = 140, -150., 150.

# ---- figure 1: segment t0 per training input group, with data ------------------
c = canvas('c1')
frame(NB, LO, HI, 'DT segment t_{0} [ns]  (valid segments)', 2e-6, 0.5)
lg = legend(.17, .66, .93, .89)
lg.SetHeader('t_{0} as fed to the training (no transform = arm 2)')
for g, lab, leg, col in GROUPS:
    h = mk(t0[g][valid[g]], f'h1_{g}', NB, LO, HI)
    h.SetLineColor(col)
    h.SetLineWidth(3)
    h.Draw('HIST SAME')
    lg.AddEntry(h, f'{leg}  (med {np.median(t0[g][valid[g]]):+.1f} ns)', 'l')
hd = mk(d_seg, 'h1_data', NB, LO, HI)
hd.SetLineColor(ROOT.kBlack)
hd.SetLineWidth(2)
hd.SetLineStyle(2)
hd.Draw('HIST SAME')
lg.AddEntry(hd, f'Run-3 Cosmics data, NOT in training  '
                f'(med {np.median(d_seg):+.1f} ns)', 'l')
lg.Draw()
zero_line(LO, HI, 2e-6, 0.5)
CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
for e in ('png', 'pdf'):
    c.SaveAs(f'{OUT}/training_t0_segment_perlabel.{e}')
print(f'wrote {OUT}/training_t0_segment_perlabel.{{png,pdf}}')

# ---- figure 2: post-transform t0 PER LABEL, one figure per arm -----------------
# This is the distribution each network is actually asked to separate. Summing the
# whole mixture into one curve hides the only thing that matters -- how far apart
# the two classes sit -- so the two labels are kept separate here. Data is overlaid
# UNTRANSFORMED, because that is how it is presented at inference: the training
# shift/smear applies to the MC samples only (all training samples are MC), and the
# arms are being evaluated with no inference-time shift.
# MATCH_* are arm 5: shift and per-event smear derived by derive_match_params.py to
# bring the label-0 per-event t0 offset onto data in both location and width. Trained
# as cluster 371516, TAG matchL0toData_shift12p2_smear7p2 -- so these defaults are no
# longer a proposal, they are what the checkpoint saw. Changing them here makes this
# figure stop describing that network.
MATCH_SHIFT = float(os.environ.get('MATCH_SHIFT', '12.2'))
MATCH_SMEAR = float(os.environ.get('MATCH_SMEAR', '7.2'))

ARMS = [('nominal',  'arm 2  absoluteT0_control',   'no transform'),
        ('shift8',   'arm 3  shift8ns_absolute',    't_{0} + 8 ns (all training samples)'),
        ('smear12',  'arm 4  smear12ns_absolute',   '#sigma = 12 ns per event'),
        ('centered', 'arm 1  centeredT0_median',    't_{0} #minus per-event median'),
        ('match',    'arm 5  matchL0toData',
         f't_{{0}} + {MATCH_SHIFT:g} ns, #sigma = {MATCH_SMEAR:g} ns per event')]


def arm_by_label(kind):
    """Post-transform valid-segment t0, split into the two training classes."""
    per_g = {}
    for g, *_ in GROUPS:
        t, v = t0[g].copy(), valid[g]
        if kind == 'shift8':
            t[v] += 8.0
        elif kind == 'smear12':
            d = np.random.default_rng(SMEAR_SEED).normal(0.0, 12.0, t.shape[0])
            t = np.where(v, t + d[:, None], t)
        elif kind == 'centered':
            x = np.where(v, t, np.nan)
            with np.errstate(all='ignore'):
                ref = np.nanmedian(x, axis=1)
            t = np.where(v, t - np.nan_to_num(ref, nan=0.0)[:, None], t)
        elif kind == 'match':
            # shift AND per-event smear, in that order, exactly as build_rnn_tensor
            # would apply them (shift_t0 then smear_t0, both valid-segments-only)
            t[v] += MATCH_SHIFT
            d = np.random.default_rng(SMEAR_SEED).normal(0.0, MATCH_SMEAR, t.shape[0])
            t = np.where(v, t + d[:, None], t)
        per_g[g] = t[v]
    lab0 = per_g[0]
    # the network sees neutrino and signal as ONE class (both upward-going)
    lab1 = np.concatenate([per_g[1], per_g[2]])
    return lab0, lab1


print('\n=== post-transform class separation (what each network must separate) ===')
print(f'{"arm":10s} {"med label0":>11s} {"med label1":>11s} {"separation":>11s} '
      f'{"RMS l0":>8s} {"RMS l1":>8s}')
for kind, name, desc in ARMS:
    lab0, lab1 = arm_by_label(kind)
    c = canvas('c2_' + kind)
    frame(NB, LO, HI, 'DT segment t_{0} as seen by the network [ns]', 2e-6, 0.5)
    lg = legend(.17, .68, .95, .89)
    lg.SetHeader(f'{name}:  {desc}')
    h0 = mk(lab0, f'h2_{kind}_0', NB, LO, HI)
    h0.SetLineColor(ROOT.kAzure + 1)
    h0.SetLineWidth(3)
    h0.Draw('HIST SAME')
    lg.AddEntry(h0, f'label 0: cosmic MC, downward  (med {np.median(lab0):+.1f} ns)', 'l')
    h1 = mk(lab1, f'h2_{kind}_1', NB, LO, HI)
    h1.SetLineColor(ROOT.kOrange + 7)
    h1.SetLineWidth(3)
    h1.Draw('HIST SAME')
    lg.AddEntry(h1, f'label 1: neutrino + EaDM signal MC  (med {np.median(lab1):+.1f} ns)', 'l')
    hd2 = mk(d_seg, f'h2_{kind}_d', NB, LO, HI)
    hd2.SetLineColor(ROOT.kBlack)
    hd2.SetLineWidth(2)
    hd2.SetLineStyle(2)
    hd2.Draw('HIST SAME')
    lg.AddEntry(hd2, f'data, as scored at inference  (med {np.median(d_seg):+.1f} ns)', 'l')
    lg.Draw()
    zero_line(LO, HI, 2e-6, 0.5)
    pv = ROOT.TPaveText(.17, .14, .60, .22, 'NDC')
    keep.append(pv)
    pv.SetFillColor(0)
    pv.SetBorderSize(0)
    pv.SetTextAlign(12)
    pv.SetTextSize(.030)
    pv.AddText(f'class separation = {np.median(lab1) - np.median(lab0):+.1f} ns')
    pv.Draw()
    CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
    for e in ('png', 'pdf'):
        c.SaveAs(f'{OUT}/training_t0_perarm_{kind}.{e}')
    print(f'{kind:10s} {np.median(lab0):+11.2f} {np.median(lab1):+11.2f} '
          f'{np.median(lab1) - np.median(lab0):+11.2f} {lab0.std():8.1f} {lab1.std():8.1f}')
print(f'wrote {OUT}/training_t0_perarm_{{nominal,shift8,smear12,centered}}.{{png,pdf}}')

# ---- figure 3: per-event median t0 --------------------------------------------
NB3, LO3, HI3 = 120, -60., 60.
c = canvas('c3')
fr = frame(NB3, LO3, HI3, 'per-event median t_{0} [ns]', 2e-5, 0.5)
fr.GetYaxis().SetTitle('Fraction of events')
lg = legend(.17, .66, .93, .89)
lg.SetHeader('the piece centering removes (standalone AUC 0.577)')
for g, lab, leg, col in GROUPS:
    m = event_median(g)
    h = mk(m, f'h3_{g}', NB3, LO3, HI3)
    h.SetLineColor(col)
    h.SetLineWidth(3)
    h.Draw('HIST SAME')
    lg.AddEntry(h, f'{leg}  (med {np.median(m):+.1f} ns)', 'l')
    print(f'  group {g} per-event median t0: median {np.median(m):+.2f} ns')
h = mk(d_med, 'h3_data', NB3, LO3, HI3)
h.SetLineColor(ROOT.kBlack)
h.SetLineWidth(2)
h.SetLineStyle(2)
h.Draw('HIST SAME')
lg.AddEntry(h, f'Run-3 Cosmics data  (med {np.median(d_med):+.1f} ns)', 'l')
lg.Draw()
zero_line(LO3, HI3, 2e-5, 0.5)
CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
for e in ('png', 'pdf'):
    c.SaveAs(f'{OUT}/training_t0_eventmedian.{e}')
print(f'wrote {OUT}/training_t0_eventmedian.{{png,pdf}}')

# ------------------------------------------------------------------------ summary
print('\n=== label separation in absolute t0 (this is what the network keys on) ===')
m0 = event_median(0)
m1 = np.concatenate([event_median(1), event_median(2)])
print(f'  label 0 per-event median t0 : {np.median(m0):+.2f} ns')
print(f'  label 1 per-event median t0 : {np.median(m1):+.2f} ns')
print(f'  separation                  : {np.median(m1) - np.median(m0):+.2f} ns')
print(f'  data per-event median t0    : {np.median(d_med):+.2f} ns')
print(f'  data - label0               : {np.median(d_med) - np.median(m0):+.2f} ns')
print(f'  data - label1               : {np.median(d_med) - np.median(m1):+.2f} ns')
