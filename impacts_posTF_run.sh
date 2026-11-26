#!/bin/bash
# Impacts (data + Asimov r=1/r=0) on the positivity-safe TF areas. usage: impacts_posTF_run.sh <muon pT mass>
m=$1
cd ~/EarthAsDM/CMSSW_14_1_0_pre4/src && eval $(scramv1 runtime -sh 2>/dev/null) && source twoD-env/bin/activate
SRC=$PWD
A=rpf1x0pos_Binningv13_Inputv34_mergedDepths_SR_Unblind_impacts/rpfpos_Signal_M${m}GeV_mergedDepth_SR/Signal_M${m}GeV_mergedDepth_SR-1x0_area
mkdir -p $A/impacts && (cd $A && text2workspace.py card.txt -o impacts/card.root > impacts/t2w.log 2>&1)
# B-only TF values (Asimov seed) and the physical lower bound on r for the r=0 Asimov
read P0 P1 RMIN < <(python3 - $A <<'PY' 2>/dev/null | tail -1
import sys, ROOT
ROOT.gSystem.Load("libHiggsAnalysisCombinedLimit")
A = sys.argv[1]
fb = ROOT.TFile.Open(f"{A}/fitDiagnosticsTest.root").Get("fit_b").floatParsFinal()
tf = ROOT.TFile.Open(f"{A}/impacts/card.root"); w = tf.Get("w")
for p in fb: w.var(p.GetName()).setVal(p.getVal())
w.var("r").setVal(1.0)
bound = 1e9
for reg, nb in (("LOW", 4), ("SIG", 3), ("HIGH", 7)):
    for i in range(nb):
        b = w.function(f"CMS_EXO26004_Background_pass_1x0_{reg}_bin_{i+1}_1_pass_{reg}").getVal()
        s = w.function(f"n_exp_binpass_{reg}_proc_" + [n for n in [f.GetName() for f in w.allFunctions()] if n.startswith(f"n_exp_binpass_{reg}_proc_Signal")][0].split("_proc_")[1]).getVal()
        h = ROOT.TFile.Open(f"{A}/../base.root").Get("w").data([d.GetName() for d in ROOT.TFile.Open(f"{A}/../base.root").Get("w").allData() if d.GetName().endswith(f"_pass_{reg}") and d.GetName().startswith("Signal")][0])
        h.get(i); sv = h.weight()
        if sv > 0: bound = min(bound, b / sv)
p0 = fb.find("CMS_EXO26004_Background_rpf_1x0_par0").getVal(); p1 = fb.find("CMS_EXO26004_Background_rpf_1x0_par1").getVal()
print(p0, p1, -0.8 * bound)
PY
)
echo "M$m seed par0 $P0 par1 $P1 rMin(r=0) $RMIN"
# data impacts: multi-start RooFit, then the r interval from a profile scan
AREA=$A/impacts python3 -u unblind_impacts_roofit.py $A/impacts/impacts_data.json > $A/impacts/rf_data.log 2>&1
AREA=$A/impacts python3 -u impacts_posTF_rscan.py $A/impacts/impacts_data.json > $A/impacts/rscan.log 2>&1
grep -E "r_hat" $A/impacts/rscan.log
python3 helper_scripts/plotImpacts_maxImpact.py -i $A/impacts/impacts_data.json -o $A/impacts/impacts_data --value-text-size 0.013 > /dev/null 2>&1
# Asimov r=1 and r=0, combineTool, TF seeded at the B-only data fit
cd $A/impacts
SEED="--setParameters CMS_EXO26004_Background_rpf_1x0_par0=$P0,CMS_EXO26004_Background_rpf_1x0_par1=$P1"
for c in "t1u 1 -10" "t0n 0 $RMIN"; do set -- $c
  X="-M Impacts -d card.root -m 1 -n $1 -t -1 --expectSignal $2 --cminDefaultMinimizerStrategy 0 --rMin $3 --rMax 50 $SEED"
  combineTool.py $X --doInitialFit --allPars --robustFit 1 > initial_$1.log 2>&1
  combineTool.py $X --doFits > fits_$1.log 2>&1
  combineTool.py -M Impacts -d card.root -m 1 -n $1 -o impacts_$1.json > collect_$1.log 2>&1
  python3 $SRC/helper_scripts/plotImpacts_maxImpact.py -i impacts_$1.json -o impacts_$1 --value-text-size 0.013 > plot_$1.log 2>&1
  echo "M$m $1 $(grep -E '^ *r :' initial_$1.log) params $(python3 -c "import json;print(len(json.load(open('impacts_$1.json'))['params']))" 2>/dev/null)"
done
echo "POSRUN DONE $m"
