#!/usr/bin/env python3
# Staged unblinding, step 1 only: GoF, impacts and pulls on the unblinded SR (v34, linear TF).
# Deliberately makes no post-fit shape plots and no limits (steps 2 and 3).
import os, sys
AREA = "rpf1x0_Binningv13_Inputv34_mergedDepths_SR_M3000GeV_Unblind"
CFG = "config_Binningv13_Inputv34mergedDepths_SR_M3000GeV_Unblind.json"
SIG, TF = "Signal_M3000GeV_mergedDepth_SR", "1x0"
sys.argv = ["x", AREA, CFG, SIG, TF]
import run_single_signal_2DA as R  # noqa: E402
from TwoDAlphabet import plot  # noqa: E402
from TwoDAlphabet.twoDalphabet import TwoDAlphabet  # noqa: E402
from TwoDAlphabet.helpers import cd, execute_cmd  # noqa: E402

R.make_workspace()
rmax = 50
while True:  # same rMax backoff as the production runner
    R.perform_fit(SIG, TF, rmax, extra='--robustHesse 1')
    if "Fit failed" not in open(f"{AREA}/{SIG}-{TF}_area/FitDiagnostics.log").read() or rmax < 2:
        break
    rmax /= 2.
print("STEP1 fit done")

with cd(f"{AREA}/{SIG}-{TF}_area"):
    plot.nuis_pulls()  # nuisance_pulls.pdf
print("STEP1 pulls done")

twoD = TwoDAlphabet(AREA, f"{AREA}/runConfig.json", loadPrevious=True)
twoD.GoodnessOfFit(f"{SIG}-{TF}_area", ntoys=5000, freezeSignal=0, condor=False, extra="--cminDefaultMinimizerStrategy 0")
plot.plot_gof(AREA, f"{SIG}-{TF}_area", condor=False)
print("STEP1 gof done")

sys.argv = ["x", AREA]
import runImpacts_v34_SR_M3000GeV_mergedDepth as I  # noqa: E402
I.workingArea = AREA
I.run_impacts(SIG, TF, blind=False, name="unblind1", initialExtra="--robustFit 1")
with cd(f"{AREA}/{SIG}-{TF}_area"):
    execute_cmd("plotImpacts.py -i impacts_unblind1.json -o impacts_unblind1_rhidden --blind")  # r-hat hidden
print("STEP1 impacts done")
