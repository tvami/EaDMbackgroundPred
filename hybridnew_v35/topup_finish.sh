#!/bin/bash
# run the M90000 top-up locally, then merge all top-ups and rerun the HN limit chain
cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src && source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh`
cd hybridnew_v35/local3_M90000
cat cmds.txt | xargs -P 8 -I CMD bash -c 'CMD > /dev/null 2>&1 || echo "FAIL: CMD"' > fails.txt
echo "local M90000 done: $(ls higgsCombine*.root | wc -l) files, $(wc -l < fails.txt) fails $(date)"
cd .. && ./refresh_topup.sh > refresh_topup.log 2>&1 && echo "refresh done $(date)"
./run_hn_chain.sh HN > run_hn_chain_topup.log 2>&1 && echo "chain done $(date)"
