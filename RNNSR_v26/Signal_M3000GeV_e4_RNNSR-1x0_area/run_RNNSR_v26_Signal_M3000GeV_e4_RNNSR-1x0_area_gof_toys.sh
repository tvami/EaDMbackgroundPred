#!/bin/bash
echo "Run script starting"; printf "Node: "; /bin/hostname
arch=el8_amd64_gcc12
rel=CMSSW_14_1_0_pre5
export SCRAM_ARCH=$arch
source /cvmfs/cms.cern.ch/cmsset_default.sh
baseDir=`/bin/pwd -P`
echo "Base directory: $baseDir"
scramv1 project CMSSW $rel

mkdir tardir; cp RNNSR_v26_Signal_M3000GeV_e4_RNNSR-1x0_area_gof_toys_input.tgz tardir/; cd tardir
tar -xzf RNNSR_v26_Signal_M3000GeV_e4_RNNSR-1x0_area_gof_toys_input.tgz
rm RNNSR_v26_Signal_M3000GeV_e4_RNNSR-1x0_area_gof_toys_input.tgz
cp -r * ../CMSSW_14_1_0_pre5/src/
cd ../

cd CMSSW_14_1_0_pre5/src/
eval `scramv1 runtime -sh`
echo "Compiling with scram b..."
scram b -j 4
cd $CMSSW_BASE/src/RNNSR_v26/Signal_M3000GeV_e4_RNNSR-1x0_area
echo "Running: $*"
$*
cd $CMSSW_BASE/src
tar -czvf $baseDir/RNNSR_v26_Signal_M3000GeV_e4_RNNSR-1x0_area_gof_toys_output_${CONDOR_ID}.tgz RNNSR_v26/Signal_M3000GeV_e4_RNNSR-1x0_area/higgsCombine_gof_toys.GoodnessOfFit.mH120.*.root
