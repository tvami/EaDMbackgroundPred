#!/bin/bash
# Run the Signal 2DAInput (depth-merging) pass for sr/vr1/vr2 on the login node.
#
# This is step 6, pass 2. Pass 1 is the condor job that runs the script with -T Process, one
# file per job; it leaves the RNN-scored per-depth ntuples on ceph. The merge cannot run in
# those jobs because skimmed_ntuple_processing_script_mergeDepths.py discovers the depths to
# merge by globbing ./output/<sample>/<region>/<collection>/*.root, and each condor sandbox
# holds only the single file that job produced. So the depths have to be gathered into one
# directory first, which is what this script does.
#
# The login node is el8 and the CMSSW_14_1_0_pre5 area is el8_amd64_gcc12, so this runs
# natively -- do NOT wrap it in cmssw-el9, which does not bind-mount /ceph.

set -euo pipefail

ntuple_version="5.0.0"
collection="matched_muon"
regions="sr vr1 vr2"
workdir="$(pwd)/mergeDepths_2DA"
stage_mode="symlink"
publish="no"
ceph_base_override=""
dest_dir=""

usage() {
    cat <<'EOF'
Usage: ./run_2DAInput_signal_merge.sh [options]

  -n VERSION     ntuple version                (default: 5.0.0)
  -c COLLECTION  collection                    (default: matched_muon)
  -r "REGIONS"   space-separated region list   (default: "sr vr1 vr2")
  -w DIR         staging work directory        (default: ./mergeDepths_2DA)
  -b DIR         source base holding the -T Process output
                 (default: /ceph/cms/store/user/smasanam/EarthAsDMProject/
                           Ntuples/Ntuples_v<VERSION>_wRNN)
  -C             copy the inputs instead of symlinking them
  -P             publish merged 2DA output back to ceph (overwrites)
  -d DIR         publish base to write under instead of the -b source
                 (implies -P; mirrors the -b layout, so each region lands in
                 DIR/Signal/<region>/<collection>/2DA/)
  -h             show this help

Merged output is written to DIR/output/Signal/<region>/<collection>/2DA/.
EOF
}

while getopts "n:c:r:w:b:d:CPh" opt; do
    case $opt in
        n) ntuple_version="$OPTARG" ;;
        c) collection="$OPTARG" ;;
        r) regions="$OPTARG" ;;
        w) workdir="$OPTARG" ;;
        b) ceph_base_override="$OPTARG" ;;
        d) dest_dir="$OPTARG" ;;
        C) stage_mode="copy" ;;
        P) publish="yes" ;;
        h) usage; exit 0 ;;
        *) usage; exit 1 ;;
    esac
done

# Naming a destination is only meaningful if we are publishing, so -d turns publishing on
# rather than silently doing nothing when given without -P.
[ -n "$dest_dir" ] && publish="yes"

script_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
py_script="$script_dir/skimmed_ntuple_processing_script_mergeDepths.py"
props_dict="$script_dir/parquet_files/props_dict.npy"
ceph_base="${ceph_base_override:-/ceph/cms/store/user/smasanam/EarthAsDMProject/Ntuples/Ntuples_v${ntuple_version}_wRNN}"

for f in "$py_script" "$props_dict"; do
    [ -f "$f" ] || { echo "ERROR: missing $f"; exit 1; }
done

# Create the -d base now rather than in the publish block, which is only reached after a
# region has finished merging -- several minutes of work to discover a typo'd or unwritable
# path. Only -d is created; the -P default lives on ceph and is expected to exist already.
if [ -n "$dest_dir" ]; then
    mkdir -p "$dest_dir" || { echo "ERROR: cannot create destination base: $dest_dir"; exit 1; }
    [ -w "$dest_dir" ] || { echo "ERROR: destination base is not writable: $dest_dir"; exit 1; }
fi

echo "------------------- START --------------------"
printf "Start time: "; TZ=CET /bin/date
echo "Ntuple version : $ntuple_version"
echo "Collection     : $collection"
echo "Regions        : $regions"
echo "Work directory : $workdir"
echo "Ceph source    : $ceph_base"
echo "Stage mode     : $stage_mode"
if [ "$publish" = "yes" ]; then
    echo "Publish base   : ${dest_dir:-$ceph_base}"
    echo "  (per region) : ${dest_dir:-$ceph_base}/Signal/<region>/$collection/2DA"
else
    echo "Publish base   : (not publishing)"
fi

echo
echo "---------------- Environment ----------------"
source /cvmfs/cms.cern.ch/cmsset_default.sh
export SCRAM_ARCH=el8_amd64_gcc12
# cmsenv from the release area this script lives in (helper_scripts is CMSSW_14_1_0_pre5/src/)
pushd "$script_dir/.." > /dev/null
eval `scramv1 runtime -sh`
popd > /dev/null
echo "python3: $(which python3)"

failed_regions=""

for region in $regions; do
    echo
    echo "================ Signal / $region / $collection ================"

    src_dir="$ceph_base/Signal/$region/$collection"
    # output_dir in the python script is hardcoded relative to the cwd, so the staging tree has
    # to mirror ./output/<sample>/<region>/<collection> exactly and we run from $workdir.
    stage_dir="$workdir/output/Signal/$region/$collection"

    if [ ! -d "$src_dir" ]; then
        echo "ERROR: no such directory: $src_dir"
        echo "       has the -T Process condor pass finished and copied its output to ceph?"
        failed_regions="$failed_regions $region"
        continue
    fi

    # Start each region from a clean staging directory. A stale file from an earlier version
    # would silently be picked up by the glob and merged into the result. Only the staged
    # inputs are removed; the 2DA subdirectory holding previous merged output is left alone.
    mkdir -p "$stage_dir"
    find "$stage_dir" -maxdepth 1 -name '*.root' -delete

    n_src=$(find "$src_dir" -maxdepth 1 -name '*.root' | wc -l)
    if [ "$n_src" -eq 0 ]; then
        echo "ERROR: no .root files in $src_dir"
        failed_regions="$failed_regions $region"
        continue
    fi

    echo "[1] Staging $n_src file(s) ($stage_mode) into $stage_dir"
    if [ "$stage_mode" = "copy" ]; then
        find "$src_dir" -maxdepth 1 -name '*.root' -exec cp {} "$stage_dir/" \;
    else
        find "$src_dir" -maxdepth 1 -name '*.root' -exec ln -sf {} "$stage_dir/" \;
    fi

    # Report depth coverage per mass point. Some masses genuinely lack a depth (M1000 has no
    # e6), which lowers that mass's total merge weight -- expected, but worth seeing.
    echo "[2] Depth coverage (mass: number of SurfaceDepth samples found)"
    find "$stage_dir" -maxdepth 1 -name '*SurfaceDepth*.root' -printf '%f\n' \
        | sed -E 's/.*MinP-([0-9]+).*SurfaceDepth-e([0-9]+).*/\1 e\2/' \
        | sort -n -k1 \
        | awk '{c[$1]=c[$1]" "$2} END {for (m in c) printf "    M%-8s %s\n", m, c[m]}' \
        | sort -V

    # -i is required by argparse but unused in 2DAInput mode: the merge globs $stage_dir
    # instead. It is only read as a fallback if a globbed file has no h_cutflow histogram, so
    # pass a genuine member of the set rather than an arbitrary path.
    any_input=$(find "$stage_dir" -maxdepth 1 -name '*.root' | sort | head -1)

    echo "[3] Running 2DAInput merge"
    if ( cd "$workdir" && python3 -u "$py_script" \
            -i "$any_input" \
            -n "$ntuple_version" \
            -s Signal \
            -r "$region" \
            -c "$collection" \
            -T 2DAInput \
            -p "$props_dict" ); then
        echo "[4] Merged output in $stage_dir/2DA"
        find "$stage_dir/2DA" -maxdepth 1 -name '*mergedDepth*.root' -printf '    %f\n' | sort -V
    else
        echo "ERROR: merge failed for region $region"
        failed_regions="$failed_regions $region"
        continue
    fi

    if [ "$publish" = "yes" ]; then
        # -d is the output-side mirror of -b: both name a base holding
        # Signal/<region>/<collection>, so the published tree has the same shape as the source
        # and collect_and_merge_histograms.py --source-base can read either one.
        publish_base="${dest_dir:-$ceph_base}"
        publish_dir="$publish_base/Signal/$region/$collection/2DA"
        echo "[5] Publishing merged output to $publish_dir"
        # Report a publish failure against this region and carry on, instead of letting set -e
        # abort the run and throw away the regions that have not been merged yet.
        if ! mkdir -p "$publish_dir" || ! cp -v "$stage_dir"/2DA/*.root "$publish_dir/"; then
            echo "ERROR: could not publish region $region to $publish_dir"
            failed_regions="$failed_regions $region"
        fi
    fi
done

echo
if [ -n "$failed_regions" ]; then
    echo "FAILED regions:$failed_regions"
    echo "-------------------- END ---------------------"
    exit 1
fi

echo "All regions merged successfully."
if [ "$publish" = "no" ]; then
    echo "Output was NOT published. Re-run with -P (to ceph) or -d BASE (under BASE), or copy by hand."
fi
echo "-------------------- END ---------------------"
