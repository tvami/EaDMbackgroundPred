#!/usr/bin/env python3
# One mass of the unblinded SR with the positivity-safe linear TF, 0.1*par0*(1+par1*x), par1 >= -1:
# workspace, ML fit and limit, as run_single_signal_2DA.py but without plots. usage: posTF_single.py <signal>
import os, sys
P = "rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all"
SIG = sys.argv[1]
os.makedirs(P, exist_ok=True)
cfg = f"{P}/config_{SIG}.json"
open(cfg, "w").write(open("config_Binningv13_Inputv35mergedDepthsTemplate_SR_Unblind.json").read().replace("SIGNAME_PLACEHOLDER", SIG))
area = f"{P}/rpf2x0_{SIG}"
sys.argv = ["x", area, cfg, SIG, "1x0"]
import run_single_signal_2DA as R  # noqa: E402

R._rpf_options["1x0"] = {"form": "0.1*@0*(1+@1*x)",
                         "constraints": {0: {"MIN": 0.0, "MAX": 0.002, "NOM": 1e-4, "ERROR": 1e-5},
                                         1: {"MIN": -1.0, "MAX": 50.0, "NOM": 3.0, "ERROR": 0.5}}}
R.make_workspace()
R.perform_fit(SIG, "1x0", 50, extra="--robustHesse 1")
R.run_limits(SIG, "1x0")
open(f"{area}/{SIG}-1x0_area/done", "w").close()
print("POS DONE", SIG)
