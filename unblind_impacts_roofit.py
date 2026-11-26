#!/usr/bin/env python3
# Impacts on data with a plain RooFit NLL and multi-start fits (combine's minimizer falls into a false
# r ~ 1.4 minimum in this model). Writes a combineTool-format json for plotImpacts.py.
# usage: unblind_impacts_roofit.py <out json>   (cmsenv, from CMSSW_14_1_0_pre4/src)
import os, sys, json, math
from multiprocessing import Pool

AREA = os.environ.get("AREA", "rpf1x0_Binningv13_Inputv34_mergedDepths_SR_M3000GeV_Unblind/Signal_M3000GeV_mergedDepth_SR-1x0_area")
G = {}


def load():
    import ROOT
    ROOT.gROOT.SetBatch(True)
    ROOT.gSystem.Load("libHiggsAnalysisCombinedLimit")
    ROOT.RooMsgService.instance().setGlobalKillBelow(ROOT.RooFit.FATAL)
    G["ROOT"] = ROOT
    G["tf"] = ROOT.TFile.Open(f"{AREA}/card.root")  # keep the file alive
    w = G["w"] = G["tf"].Get("w")
    mc = w.genobj("ModelConfig"); mc.SetWorkspace(w)
    G["cons"] = ROOT.RooArgSet(mc.GetNuisanceParameters())
    G["nll"] = mc.GetPdf().createNLL(w.data("data_obs"), ROOT.RooFit.Constrain(G["cons"]), ROOT.RooFit.Offset(True))  # NLL ~ -1e7 without offset: Minuit derivatives lose precision
    pars = mc.GetPdf().getParameters(w.data("data_obs"))  # nuisances + unconstrained bkg params
    G["init"] = {p.GetName(): p.getVal() for p in pars if not p.isConstant() and p.GetName() != "r"}
    G["glob"] = fitmin({})


def fitmin(fixed, hesse=False):
    ROOT, w, nll = G["ROOT"], G["w"], G["nll"]
    r = w.var("r"); r.setRange(0, 50)
    best = None
    starts = [(fixed["r"], True)] if "r" in fixed else [(0.0, True), (0.0, False), (1.5, False)]  # r=0 fixed, free from 0 and 1.5
    for r0, rfix in starts:
        for n, v in G["init"].items():
            w.var(n).setVal(v); w.var(n).setConstant(False)
        for n, v in fixed.items():
            if n != "r":
                w.var(n).setVal(v); w.var(n).setConstant(True)
        r.setVal(r0); r.setConstant(rfix)
        for strat in (0, 1):
            m = ROOT.RooMinimizer(nll); m.setPrintLevel(-1); m.setStrategy(strat); m.setEps(0.01)
            m.minimize("Minuit2", "Migrad")
        if hesse:
            m.hesse()
        v = nll.getVal()
        if best is None or v < best[0]:
            best = (v, r.getVal(), {n: (w.var(n).getVal(), w.var(n).getError()) for n in G["init"]})
    for n in fixed:
        w.var(n).setConstant(False)
    r.setConstant(False)
    return best


def crossing(name, c, s, sign):
    nll0 = G["glob"][0]
    t = 1.0
    for _ in range(6):  # 2dNLL ~ t^2: rescale t toward 2dNLL = 1
        v, rv, _ = fitmin({name: c + sign * t * s})
        q = 2 * (v - nll0)
        if abs(q - 1) < 0.02 or q <= 0:
            break
        t *= math.sqrt(1 / q)
    return c + sign * t * s, rv, q


def impact(name):
    if not G:
        load()
    c, s = G["glob"][2][name]
    gauss = not name.startswith("CMS_EXO26004_Background")
    if gauss:
        s = 1.0 if s <= 0 or s > 1.5 else s
    elif s <= 0:
        s = max(abs(c) * 0.1, 1e-6)
    lo, rlo, qlo = crossing(name, c, s, -1)
    hi, rhi, qhi = crossing(name, c, s, +1)
    r0 = G["glob"][1]
    return {"name": name, "fit": [lo, c, hi], "prefit": [-1.0, 0.0, 1.0] if gauss else [c, c, c],
            "groups": [], "type": "Gaussian" if gauss else "Unconstrained",
            "r": [rlo, r0, rhi], "impact_r": max(abs(rlo - r0), abs(rhi - r0)), "q": [qlo, qhi]}


if __name__ == "__main__":
    load()
    v0, r0, pv = fitmin({}, hesse=True)
    print(f"global min r_hat {r0:.4f}", flush=True)
    names = list(G["init"])
    with Pool(7) as p:
        res = p.map(impact, names)
    # r +1 sigma from the profile: 2dNLL(r) = 1
    rr = G["w"].var("r")
    a, b = 0.0, 1.0
    for _ in range(20):
        mid = 0.5 * (a + b)
        q = 2 * (fitmin({"r": mid})[0] - v0)
        a, b = (mid, b) if q < 1 else (a, mid)
    out = {"POIs": [{"name": "r", "fit": [max(0.0, r0), r0, 0.5 * (a + b)]}], "method": "roofit_multistart", "params": res}
    json.dump(out, open(sys.argv[1], "w"), indent=1)
    for d in sorted(res, key=lambda d: -d["impact_r"]):
        print(f'{d["name"]:45s} fit {d["fit"][1]:+.4g} (-{d["fit"][1] - d["fit"][0]:.3g}/+{d["fit"][2] - d["fit"][1]:.3g})  '
              f'impact {d["impact_r"]:.4f}  2dNLL at crossings {d["q"][0]:.2f}/{d["q"][1]:.2f}', flush=True)
    print(f"r = {r0:.3f} +{0.5 * (a + b) - r0:.3f}")
