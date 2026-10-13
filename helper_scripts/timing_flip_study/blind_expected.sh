#!/bin/bash
# Properly blinded a-posteriori expected limit for one 2DA area: b-only fit with the SIG/HIGH pass bins
# masked, then Asimov (-t -1 --toysFrequentist) from that snapshot with the masks lifted. The production
# Limit_command.txt runs AsymptoticLimits unmasked, so its "expected" is fitted to the blinded SR data.
# usage: blind_expected.sh <..._area dir>
set -e
cd "$1"
MASK=mask_pass_SIG=1,mask_pass_HIGH=1
text2workspace.py card.txt --channel-masks -o ws_blind.root > blind_t2w.log 2>&1
combine -M MultiDimFit ws_blind.root -n _bfitBlind --saveWorkspace --setParameters $MASK,r=0 \
    --freezeParameters r --cminDefaultMinimizerStrategy 0 > blind_fit.log 2>&1
combine -M AsymptoticLimits higgsCombine_bfitBlind.MultiDimFit.mH120.root -n _expBlind \
    --snapshotName MultiDimFit --bypassFrequentistFit -t -1 --toysFrequentist --run blind \
    --setParameters mask_pass_SIG=0,mask_pass_HIGH=0 --cminDefaultMinimizerStrategy 0 \
    --rRelAcc 0.000005 --rAbsAcc 0.000005 > blind_lim.log 2>&1
echo "OK $1"
