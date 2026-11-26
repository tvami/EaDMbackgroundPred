cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh` && source twoD-env/bin/activate
export PYTHONPATH=$PYTHONPATH:/home/users/tvami/EarthAsDM/pylibs/twoD-env-py39-site-packages
O=hybridnew_v35/figures_HN_tau0/fig6_effpowerlaw
python3 exp_lim/set_limit_alphaMax.py --single -L "2021-2026" --outdir $O \
    -s exp_lim/signal_rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all_HN_alpha_max.txt -l 14.9 \
    --cmsLabel Preliminary --unblind -o "" --noCrossingLines --extraTextPosX 0.335 --lumiUnit months \
    --xTitle "m_{#chi} [TeV]" --thLegend "Predicted rate" --paveTextSize 0.0375 --paveBox 0.17,0.70,0.40,0.86 \
    --legendFont 42 --legendTextSize 0.037 --legendBox 0.52,0.5175,0.93,0.89 --legendMargin 0.17 \
    --tau0 7.53e-22 --thDashAbove 14.478 --alphaSup CMB \
    --thBand 0.9,1.1 --thBandAlpha 0.35 --thBandLegend "Theory uncertainty" \
    --cmsTextSize 0.53 --extraOverCmsTextSize 0.80 --lumiTextSize 0.43 --xTitleSize 0.051 --yTitleSize 0.05 --axisLabelSize 0.043 --effOnLimit --effPowerLaw
echo rc=$?
