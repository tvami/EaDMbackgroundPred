#!/bin/bash
#
# EarthAsDM: "super" merge — combine the per-era Data files (produced by
# hadd_data.sh) into one combined file per region/object.
#
#   ${BASEDIR}/Data/<region>/<object>/${PREFIX}_<object>_<region>_<era>.root
#       -> ${PREFIX}_<object>_<region>_Ntuplizer-Cosmics_All_<version>.root
#
# Per-era inputs are kept in place (handy for per-era / livetime studies); the
# combined _All_ file is overwritten on every run, so re-running is safe.

BASEDIR="/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.0"
#BASEDIR="/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.0_trigger_study"
#PREFIX="trigger_study"
PREFIX="skimmed"
SAMPLE_ID="Ntuplizer-Cosmics"

BATCH_SIZE=50

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Mirror all output (stdout+stderr) to a timestamped log next to this script,
# so a run launched under `screen` stays inspectable afterwards.
LOGFILE="${SCRIPT_DIR}/superhadd_data_$(date +%Y%m%d_%H%M%S).log"
exec > >(tee -a "$LOGFILE") 2>&1
echo "Logging to ${LOGFILE}"

# Ntuple version for the merged filename, read from skim_ntuples.C (fallback v5.0.0)
NTUPLE_VERSION=$(grep -oP 'NTUPLE_VERSION\s*=\s*"\K[^"]+' "$SCRIPT_DIR/skim_ntuples.C" 2>/dev/null | head -1)
NTUPLE_VERSION=${NTUPLE_VERSION:-v5.0.0}
echo "Using NTUPLE_VERSION=${NTUPLE_VERSION} for merged _All_ filenames"

mctype="Data"

for region in sr vr1 vr2; do
    for object in matched_muon muon track tuneP; do
        inputdir="${BASEDIR}/${mctype}/${region}/${object}"
        [ -d "${inputdir}" ] || continue

        output="${inputdir}/${PREFIX}_${object}_${region}_${SAMPLE_ID}_All_${NTUPLE_VERSION}.root"

        # Per-era inputs: every merged file in the dir except the _All_ output
        # itself and any leftover _job chunks (run hadd_data.sh first).
        mapfile -t files < <(ls "${inputdir}"/${PREFIX}_${object}_${region}_*.root 2>/dev/null | \
            grep -v '_All_' | grep -v '_job')

        nfiles=${#files[@]}
        if [ "$nfiles" -eq 0 ]; then
            echo "No per-era files in ${inputdir}, skipping."
            continue
        fi

        echo "Merging ${nfiles} per-era files for ${object} ${region} -> $(basename "${output}")"

        if [ "$nfiles" -le "$BATCH_SIZE" ]; then
            hadd -f "${output}" "${files[@]}"
        else
            tmpdir=$(mktemp -d "${inputdir}/superhadd_tmp_XXXX")
            batch=0
            failed=0
            for ((i=0; i<nfiles; i+=BATCH_SIZE)); do
                batch_files=("${files[@]:i:BATCH_SIZE}")
                batch_out="${tmpdir}/batch_${batch}.root"
                echo "  Batch ${batch}: merging ${#batch_files[@]} files"
                hadd -f "${batch_out}" "${batch_files[@]}"
                if [ $? -ne 0 ]; then
                    echo "ERROR: hadd failed on batch ${batch} for ${object} ${region}"
                    failed=1
                    break
                fi
                ((batch++))
            done

            if [ "$failed" -eq 0 ]; then
                echo "  Final merge of ${batch} batches"
                hadd -f "${output}" "${tmpdir}"/batch_*.root
                if [ $? -ne 0 ]; then
                    failed=1
                    echo "ERROR: final hadd merge failed for ${object} ${region}"
                fi
            fi

            rm -rf "${tmpdir}"
        fi

        if [ $? -eq 0 ] && [ -f "${output}" ]; then
            echo "Successfully created ${output}"
        else
            echo "ERROR: hadd failed for ${object} ${region}, no _All_ file written."
        fi
        echo ""
    done
done
