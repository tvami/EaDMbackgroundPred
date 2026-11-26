#!/usr/bin/env python3
# Staged unblinding step 2: post-fit PASS/FAIL plots and TF on the unblinded SR (no limits = step 3).
# Same chain as runUnblinding.sh, but the 1x0 TF ranges match the parameter size: with par0 ~1e-4
# in [0,50] Minuit stalls in false minima.
import sys
AREA = "rpf1x0_Binningv13_Inputv34_mergedDepths_SR_M3000GeV_Unblind"
CFG = "config_Binningv13_Inputv34mergedDepths_SR_M3000GeV_Unblind.json"
SIG, TF = "Signal_M3000GeV_mergedDepth_SR", "1x0"
sys.argv = ["x", AREA, CFG, SIG, TF]
import run_single_signal_2DA as R  # noqa: E402
from TwoDAlphabet import plot  # noqa: E402

R._rpf_options["1x0"]["constraints"] = {0: {"MIN": 0.0, "MAX": 0.002, "NOM": 1e-4, "ERROR": 1e-5},
                                        1: {"MIN": -0.005, "MAX": 0.005, "NOM": 0.0, "ERROR": 1e-4}}
R.make_workspace()
rmax = 50
while True:  # same rMax backoff as the production runner
    R.perform_fit(SIG, TF, rmax, extra="--robustHesse 1")
    if "Fit failed" not in open(f"{AREA}/{SIG}-{TF}_area/FitDiagnostics.log").read() or rmax < 2:
        break
    rmax /= 2.
print("STEP2 fit done")
R.plot_fit(SIG, TF)
plot.plot_transfer_funcs(AREA, f"{SIG}-{TF}_area")
print("STEP2 DONE")
