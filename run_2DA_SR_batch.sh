#!/bin/bash
echo "Run script starting"
echo "Template Config: $1"
echo "Signal: $2"
echo "TF Type: $3"

arch=el8_amd64_gcc12
rel=CMSSW_14_1_0_pre4

echo -e "------------------- START --------------------"
printf "Start time: "; TZ=CET /bin/date
printf "Job is running on node: "; /bin/hostname
printf "Job running as user: "; /usr/bin/id
printf "Job is running in directory: "; /bin/pwd -P

echo
echo -e "---------------- Environments ----------------"

baseDir=`/bin/pwd -P`
echo "Base directory: $baseDir"

echo -e "\n[0] export SCRAM_ARCH= $arch (BEFORE sourcing cmsset)"
export SCRAM_ARCH=$arch

echo -e "\n[1] source /cvmfs/cms.cern.ch/cmsset_default.sh"
source /cvmfs/cms.cern.ch/cmsset_default.sh

echo -e "\n[2] Verify SCRAM_ARCH"
echo "SCRAM_ARCH is: $SCRAM_ARCH"

echo -e "\n[3] scramv1 project CMSSW $rel"
scramv1 project CMSSW $rel

# Move analysis directories into CMSSW src
echo -e "\n[4] Moving HiggsAnalysis, CombineHarvester, and 2DAlphabet to CMSSW/src"
mv HiggsAnalysis $rel/src/
mv CombineHarvester $rel/src/
mv 2DAlphabet $rel/src/

# Also move the scripts we'll need later
echo -e "\n[4b] Moving scripts, config, and histogram files to CMSSW/src"
mv run_single_signal_2DA.py $rel/src/
mv config_Binningv6_InputTemplate_SR_Blind.json $rel/src/

# Move histogram directory
echo -e "\n[4c] Moving histogram directory to CMSSW/src"
mv histograms_for_2DAlphabet_v21 $rel/src/
echo "Histogram directory contents:"
ls -lh $rel/src/histograms_for_2DAlphabet_v21/ | head -10

# cd into CMSSW and do cmsenv
echo -e "\n[5] cd $rel/src/"
cd $rel/src/

echo -e "\n[6] cmsenv and verify architecture"
eval `scramv1 runtime -sh`
echo "After cmsenv, SCRAM_ARCH is: $SCRAM_ARCH"
echo "GCC version: $(gcc --version | head -1)"

########CMSSW environment is now active with ROOT############

# Show directory structure
echo -e "\n[DEBUG] CMSSW src directory:"
echo "Current directory: $(pwd)"
ls -lah

echo -e "\n[7] Compile with scram b"
echo "Attempting compilation..."
scram b -j 4
COMPILE_STATUS=$?
if [ $COMPILE_STATUS -ne 0 ]; then
    echo "WARNING: Compilation failed with status $COMPILE_STATUS"
    echo "Checking if RooParametricHist2D is available anyway..."
    python3 -c "from ROOT import RooParametricHist2D; print('RooParametricHist2D is available!')" 2>&1
fi

echo -e "\n[8] Create and activate virtual environment"
python3 -m virtualenv twoD-env
source twoD-env/bin/activate

echo -e "\n[9] Install TwoDAlphabet in development mode"
cd 2DAlphabet
python3 setup.py develop
cd ..

echo "Virtual environment ready: $(which python3)"
echo "Python version: $(python3 --version)"

echo -e "\n------------------ Process Signal ------------------"

template_config=$1
signal=$2
tf_type=$3

# Create working area name based on signal
workingArea="rpf2x0_${signal}"

# Histogram directory should already be here from earlier move
echo -e "\n[1] Checking histogram directory"
if [ ! -d "histograms_for_2DAlphabet_v21" ]; then
    echo "ERROR: histogram directory not found!"
    ls -la
    exit 1
fi
echo "Histogram files:"
ls -lh histograms_for_2DAlphabet_v21/ | grep -E "(${signal}|Data_SR)" || echo "WARNING: Expected files not found"

# Create job-specific config by replacing SIGNAME_PLACEHOLDER
echo -e "\n[2] Creating job-specific config for $signal"
config_file="config_${signal}.json"
sed "s/SIGNAME_PLACEHOLDER/$signal/g" "$template_config" > "$config_file"

echo "Created config file: $config_file"

# Run the Python script (transferred to local directory)
echo -e "\n[3] Running analysis for $signal"
python3 run_single_signal_2DA.py "$workingArea" "$config_file" "$signal" "$tf_type"

# Copy workspace back to initial directory for Condor to transfer
echo -e "\n[4] Preparing output for transfer"
if [ -d "$workingArea" ]; then
    echo "Workspace created: $workingArea"
    echo "Workspace size: $(du -sh $workingArea | cut -f1)"

    # Create parent directory structure for organized output
    parent_dir="rpf2x0_Binningv6_Inputv21_SR_Blind"
    echo "Creating parent directory: $baseDir/$parent_dir"
    mkdir -p "$baseDir/$parent_dir"

    # Copy workspace to parent directory so Condor can transfer it back
    echo "Copying workspace to $baseDir/$parent_dir/$workingArea"
    cp -r "$workingArea" "$baseDir/$parent_dir/"

    echo "Workspace copied successfully"
    echo "Condor will transfer this back on job completion."
else
    echo "WARNING: Workspace directory not found!"
fi

echo -e "-------------------- END ---------------------\n"
echo "UnixTime-JobEnd: "$(date +%s)
