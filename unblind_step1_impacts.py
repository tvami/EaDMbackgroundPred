#!/usr/bin/env python3
# Staged unblinding step 1: impacts on data (strategy 0, no robustFit, r >= 0; r < 0 gives negative yields)
import sys
AREA, SIG, TF = "rpf1x0_Binningv13_Inputv34_mergedDepths_SR_M3000GeV_Unblind", "Signal_M3000GeV_mergedDepth_SR", "1x0"
sys.argv = ["x", AREA]
import runImpacts_v34_SR_M3000GeV_mergedDepth as I  # noqa: E402
from TwoDAlphabet.helpers import cd, execute_cmd  # noqa: E402
I.workingArea = AREA
I.run_impacts(SIG, TF, blind=False, name="unblind2", rMin=0, extra="--cminDefaultMinimizerStrategy 0")
with cd(f"{AREA}/{SIG}-{TF}_area"):
    execute_cmd("plotImpacts.py -i impacts_unblind2.json -o impacts_unblind2_rhidden --blind")  # r-hat hidden
print("STEP1 IMPACTS DONE")
