#!/bin/bash
# submit one CRAB task per mass (skips masses that already have a crab project dir)
cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/hybridnew_v35
for M in $(cat masses.txt); do
  ls -d crab2_M$M/crab_eadm_v35_hn2_M$M >/dev/null 2>&1 && { echo "M$M already submitted"; continue; }
  ./submit_mass_v2.sh $M > submit2_M$M.log 2>&1 && echo "M$M submitted" || echo "M$M FAILED, see submit2_M$M.log"
done
