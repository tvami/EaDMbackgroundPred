#!/bin/bash
echo "Run script starting"; printf "Node: "; /bin/hostname
arch=el8_amd64_gcc12
rel=CMSSW_14_1_0_pre4
export SCRAM_ARCH=$arch
source /cvmfs/cms.cern.ch/cmsset_default.sh
baseDir=`/bin/pwd -P`
echo "Base directory: $baseDir"
scramv1 project CMSSW $rel

mkdir tardir; cp rpfmult_Binningv10_Inputv25_VR1_M3000GeV_e4_Signal_M3000GeV_e4_VR1-0x0_area_gof_toys_input.tgz tardir/; cd tardir
tar -xzf rpfmult_Binningv10_Inputv25_VR1_M3000GeV_e4_Signal_M3000GeV_e4_VR1-0x0_area_gof_toys_input.tgz
rm rpfmult_Binningv10_Inputv25_VR1_M3000GeV_e4_Signal_M3000GeV_e4_VR1-0x0_area_gof_toys_input.tgz
cp -r * ../CMSSW_14_1_0_pre4/src/
cd ../

cd CMSSW_14_1_0_pre4/src/
eval `scramv1 runtime -sh`
echo "Compiling with scram b..."
scram b -j 4
cd $CMSSW_BASE/src/rpfmult_Binningv10_Inputv25_VR1_M3000GeV_e4/Signal_M3000GeV_e4_VR1-0x0_area
echo "Running: $*"
$*
cd $CMSSW_BASE/src
tar -czvf $baseDir/rpfmult_Binningv10_Inputv25_VR1_M3000GeV_e4_Signal_M3000GeV_e4_VR1-0x0_area_gof_toys_output_${CONDOR_ID}.tgz rpfmult_Binningv10_Inputv25_VR1_M3000GeV_e4/Signal_M3000GeV_e4_VR1-0x0_area/higgsCombine_gof_toys.GoodnessOfFit.mH120.*.root
