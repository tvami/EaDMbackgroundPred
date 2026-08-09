#!/bin/bash
echo "Run script starting"
echo "Input file: $1"
echo "Ntuple version: $2"
echo "Sample type: $3"
echo "Region: $4"
echo "Collection: $5"
echo "Run type: $6"
# $7 = RNN checkpoint basename, $8 = MC-only t0 shift in ns. Both optional; the
# defaults reproduce the v5.0.2-v5.0.4 productions exactly. $7 lets several RNN
# versions be produced in parallel without editing the python script, which is
# what the "RNN choice is set in two places" note in the README used to require.
# $9, $10 = the CMS_EXO26004_RNN_scale +/-4% working-point cuts. Optional; when
# omitted the python script falls back to its own defaults, which are the E1 pair --
# WRONG for any non-E1 checkpoint. Pass them explicitly whenever $7 is not E1.
echo "Checkpoint: ${7:-./rnn_v5_188k_final_weights.ckpt}"
echo "t0 shift (MC only): ${8:-0}"
echo "RNN_scale up/down: ${9:-<script default>} / ${10:-<script default>}"
echo "Nominal RNN cut: ${11:-<script default 0.9999>}"

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
checkpoint=${7:-"./rnn_v5_188k_final_weights.ckpt"}
t0_shift_mc=${8:-0}
rnn_scale_up=${9:-}
rnn_scale_down=${10:-}
rnn_cut=${11:-}

# Only forward the scale cuts when both are given, so existing submissions that pass
# eight arguments keep the python defaults and stay byte-identical.
scale_args=()
if [ -n "$rnn_scale_up" ] && [ -n "$rnn_scale_down" ]; then
    scale_args=(--rnnScaleUp "$rnn_scale_up" --rnnScaleDown "$rnn_scale_down")
elif [ -n "$rnn_scale_up" ] || [ -n "$rnn_scale_down" ]; then
    echo "FATAL: pass BOTH RNN_scale cuts (\$9 and \$10) or neither; got up='$rnn_scale_up' down='$rnn_scale_down'"
    exit 1
fi
# $11 = the nominal working point. The python script asserts that the scale cuts
# straddle it, so a moved working point with stale scale cuts fails loudly here rather
# than producing a one-sided systematic.
[ -n "$rnn_cut" ] && scale_args+=(--rnnCut "$rnn_cut")

if [ ! -f "${checkpoint}.index" ]; then
    echo "FATAL: checkpoint not transferred: ${checkpoint}.index not in $(pwd)"
    echo "  (add it to transfer_input_files in the submit file)"
    exit 1
fi

# Run the Python script with arguments
echo -e "\n[1] Running Python script"
python3 skimmed_ntuple_processing_script.py \
    -i "$input_file" \
    -n "$ntuple_version" \
    -s "$sample_type" \
    -r "$region" \
    -c "$collection" \
    -T "$run_type" \
    -k "$checkpoint" \
    -S "$t0_shift_mc" \
    "${scale_args[@]}"

# Copy output to final destination if accessible
echo -e "\n[2] Transferring output files"
if [ -d "./output" ]; then
    dest_base="/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v${ntuple_version}_wRNN"
    dest_full="${dest_base}/${sample_type}/${region}/${collection}"

    # Check if destination is writable by trying to create the full path
    if mkdir -p "$dest_full" 2>/dev/null; then
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
