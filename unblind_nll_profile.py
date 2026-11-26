#!/usr/bin/env python3
# Profile NLL vs r on data with one RooFit NLL object (values comparable across r), fresh start per point.
# usage: unblind_nll_profile.py [freeze]   freeze = signal nuisances fixed at 0
import sys, os
import ROOT
ROOT.gROOT.SetBatch(True)
ROOT.gSystem.Load("libHiggsAnalysisCombinedLimit")
ROOT.RooMsgService.instance().setGlobalKillBelow(ROOT.RooFit.ERROR)
AREA = os.environ.get("AREA", "rpf1x0_Binningv13_Inputv34_mergedDepths_SR_M3000GeV_Unblind/Signal_M3000GeV_mergedDepth_SR-1x0_area")
tf = ROOT.TFile.Open(f"{AREA}/card.root")  # keep the file alive
w = tf.Get("w")
mc = w.genobj("ModelConfig")
mc.SetWorkspace(w)
data = w.data("data_obs")
cons = ROOT.RooArgSet(mc.GetNuisanceParameters())
nll = mc.GetPdf().createNLL(data, ROOT.RooFit.Constrain(cons), ROOT.RooFit.Offset(False))
r = w.var("r")
pars = ROOT.RooArgList(mc.GetNuisanceParameters())
init = {pars.at(i).GetName(): pars.at(i).getVal() for i in range(pars.getSize())}
freeze = len(sys.argv) > 1
SIGN = [n for n in init if not n.startswith("CMS_EXO26004_Background")]
for n in SIGN:
    w.var(n).setConstant(freeze)


def prof(rv):
    for n, v in init.items():
        w.var(n).setVal(v)
    r.setVal(rv); r.setConstant(True)
    best = None
    for strat in (0, 1, 2):
        m = ROOT.RooMinimizer(nll)
        m.setPrintLevel(-1); m.setStrategy(strat); m.setEps(0.01)
        m.minimize("Minuit2", "Migrad")
        val = nll.getVal()
        best = val if best is None else min(best, val)
    return best


import os
rs = [float(x) for x in os.environ.get("RS", "0,0.05,0.1,0.2,0.4,0.7,1.0,1.3,1.65,2.0,2.5,3.0").split(",")]
v = [prof(x) for x in rs]
m0 = min(v)
print("freeze" if freeze else "float", "signal nuisances")
for x, y in zip(rs, v):
    print(f"r {x:5.2f}  2dNLL {2 * (y - m0):8.3f}")
