#!/bin/bash
echo "Run script starting"
echo "Input file: $1"
echo "Ntuple version: $2"
echo "Sample type: $3"
echo "Region: $4"
echo "Collection: $5"
echo "Run type: $6"

arch=el9_amd64_gcc12
rel=CMSSW_14_1_0_pre4

echo -e "------------------- START --------------------"
printf "Start time: "; TZ=CET /bin/date
printf "Job is running on node: "; /bin/hostname
printf "Job running as user: "; /usr/bin/id
printf "Job is running in directory: "; /bin/pwd -P

echo
echo -e "---------------- Environments ----------------"

echo -e "\n[0] source /cvmfs/cms.cern.ch/cmsset_default.sh"
source /cvmfs/cms.cern.ch/cmsset_default.sh

baseDir=`/bin/pwd -P`

echo -e "\n[1] export SCRAM_ARCH= $arch"
export SCRAM_ARCH=$arch

echo -e "\n[2] scramv1 project CMSSW $rel"
scramv1 project CMSSW $rel

# cd into CMSSW and do cmsenv
echo -e "\n[3] cd $rel/src/"
cd $rel/src/

echo -e "\n[4] cmsenv"
eval `scramv1 runtime -sh`

# go back to the base directory
cd ../../

########CMSSW has been set up and is now running############

echo -e "\n------------------ Process Ntuples ------------------"

input_file=$1
ntuple_version=${2:-"4.0.9"}
sample_type=${3:-"Data"}
region=${4:-"sr"}
collection=${5:-"matched_muon"}
run_type=${6:-"Both"}

# Run the Python script with arguments
echo -e "\n[1] Running Python script"
python3 skimmed_ntuple_processing_script_mergeDepths.py \
    -i "$input_file" \
    -n "$ntuple_version" \
    -s "$sample_type" \
    -r "$region" \
    -c "$collection" \
    -T "$run_type" \
    -p props_dict.npy

# Copy output to final destination if accessible
echo -e "\n[2] Transferring output files"
if [ -d "./output" ]; then
    dest_base="/ceph/cms/store/user/smasanam/EarthAsDMProject/Ntuples/Ntuples_v${ntuple_version}_wRNN"
    dest_full="${dest_base}/${sample_type}/${region}/${collection}"

    # Create the destination only if it is missing, then test writability separately.
    # mkdir -p is not atomic across processes: when many jobs start at once and race to
    # create the same intermediate directories, a loser can exit non-zero on EEXIST even
    # though the directory exists and is perfectly writable. Testing mkdir's exit status
    # therefore sends jobs down the fallback path for no reason.
    if [ ! -d "$dest_full" ]; then
        mkdir -p "$dest_full" 2>/dev/null
    fi

    if [ -d "$dest_full" ] && [ -w "$dest_full" ]; then
        echo "Copying output to $dest_full"
        cp -v ./output/${sample_type}/${region}/${collection}/*.root "$dest_full/" 2>/dev/null

        # Also copy 2DA directory if it exists
        if [ -d "./output/${sample_type}/${region}/${collection}/2DA" ]; then
            mkdir -p "$dest_full/2DA" 2>/dev/null
            cp -v ./output/${sample_type}/${region}/${collection}/2DA/*.root "$dest_full/2DA/" 2>/dev/null
        fi

        echo "Transfer complete"
    else
        echo "Warning: Cannot write to $dest_full"
        echo "Output files remain in ./output/ and will be transferred by condor"
    fi
else
    echo "No output directory found"
fi

echo -e "-------------------- END ---------------------\n"
echo   "UnixTime-JobEnd: "$(date +%s)
