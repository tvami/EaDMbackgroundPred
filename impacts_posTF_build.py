#!/usr/bin/env python3
# Impacts only: unblinded SR workspace with a positivity-safe linear TF, 0.1*par0*(1+par1*x) with
# par1 >= -1. The nominal 0.1*(par0+par1*x) can go negative and is clamped, which lets the S+B fit
# switch the pass background off. Production areas are untouched. usage: impacts_posTF_build.py <muon pT mass>
import os, sys
m = sys.argv[1]
P = "rpf1x0pos_Binningv13_Inputv34_mergedDepths_SR_Unblind_impacts"
SIG = f"Signal_M{m}GeV_mergedDepth_SR"
os.makedirs(P, exist_ok=True)
cfg = f"{P}/config_{SIG}.json"
open(cfg, "w").write(open("config_Binningv13_Inputv34mergedDepthsTemplate_SR_Unblind.json").read().replace("SIGNAME_PLACEHOLDER", SIG))
sys.argv = ["x", f"{P}/rpfpos_{SIG}", cfg, SIG, "1x0"]
import run_single_signal_2DA as R  # noqa: E402

R._rpf_options["1x0"] = {"form": "0.1*@0*(1+@1*x)",
                         "constraints": {0: {"MIN": 0.0, "MAX": 0.002, "NOM": 1e-4, "ERROR": 1e-5},
                                         1: {"MIN": -1.0, "MAX": 50.0, "NOM": 3.0, "ERROR": 0.5}}}
R.make_workspace()
R.perform_fit(SIG, "1x0", 50, extra="--robustHesse 1")
print("BUILD DONE", SIG)
