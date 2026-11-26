#!/usr/bin/env python3
# Staged unblinding: FitDiagnostics pulls and impacts on data with the TF parameters in ranges that
# match their size. With par0 ~1e-4 in [0,50] Minuit stalls and finds a false r ~ 1.4 minimum.
import os, sys
sys.argv = ["x", "rpf1x0_Binningv13_Inputv34_mergedDepths_SR_M3000GeV_Unblind"]  # the impacts module reads argv[1]
from TwoDAlphabet import plot
from TwoDAlphabet.helpers import cd, execute_cmd
import runImpacts_v34_SR_M3000GeV_mergedDepth as I

AREA, SIG, TF = "rpf1x0_Binningv13_Inputv34_mergedDepths_SR_M3000GeV_Unblind", "Signal_M3000GeV_mergedDepth_SR", "1x0"
RANGES = "--setParameterRanges CMS_EXO26004_Background_rpf_1x0_par0=0,0.002:CMS_EXO26004_Background_rpf_1x0_par1=-0.005,0.005"
D = f"{AREA}/{SIG}-{TF}_area"
os.makedirs(f"{D}/ranged", exist_ok=True)
with cd(f"{D}/ranged"):
    execute_cmd(f"combine -M FitDiagnostics -d ../card.root --cminDefaultMinimizerStrategy 0 --rMin 0 --rMax 50 {RANGES} --setParameters CMS_EXO26004_Background_rpf_1x0_par0=0.0001,CMS_EXO26004_Background_rpf_1x0_par1=0 > FitDiagnostics.log 2>&1")
    plot.nuis_pulls()  # same 2DA plotting as nuisance_pulls.pdf
    execute_cmd("cp nuisance_pulls.pdf ../nuisance_pulls_unblind1.pdf")
print("RANGED PULLS DONE")
I.workingArea = AREA
I.run_impacts(SIG, TF, blind=False, name="unblind3", rMin=0, extra=f"--cminDefaultMinimizerStrategy 0 {RANGES}")
print("RANGED IMPACTS DONE")
