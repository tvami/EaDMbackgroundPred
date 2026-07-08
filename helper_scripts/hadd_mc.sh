#!/bin/bash
#
# EarthAsDM: merge per-job MC ntuple chunks into one file per sample.
#
# Tree layout (produced by organizeNtuples.sh):
#   ${BASEDIR}/<mctype>/<region>/<object>/${PREFIX}_<object>_<region>_<sample>_job<N>.root
# Output (one per sample):
#   ${BASEDIR}/<mctype>/<region>/<object>/${PREFIX}_<object>_<region>_<sample>.root
# Job chunks are moved to ${UNMERGEDBASE}/ after a successful merge.

BASEDIR="/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.0"
#BASEDIR="/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.0_trigger_study"
UNMERGEDBASE="${BASEDIR}/unmerged"
#PREFIX="trigger_study"
PREFIX="skimmed"

BATCH_SIZE=50

# Mirror all output (stdout+stderr) to a timestamped log next to this script,
# so a run launched under `screen` stays inspectable afterwards.
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
LOGFILE="${SCRIPT_DIR}/hadd_mc_$(date +%Y%m%d_%H%M%S).log"
exec > >(tee -a "$LOGFILE") 2>&1
echo "Logging to ${LOGFILE}"

# for mctype in BkgMC; do
# for mctype in Signal; do
for mctype in BkgMC Signal; do

    for region in sr vr1 vr2; do
        for object in matched_muon muon track tuneP; do
            inputdir="${BASEDIR}/${mctype}/${region}/${object}"
            [ -d "${inputdir}" ] || continue

            # Discover unique sample names from the job files:
            #   ${PREFIX}_${object}_${region}_<sample>_job<N>.root  ->  <sample>
            mapfile -t samples < <(ls "${inputdir}"/${PREFIX}_${object}_${region}_*_job*.root 2>/dev/null | \
                sed -E "s|.*/${PREFIX}_${object}_${region}_(.*)_job[0-9]+\.root|\1|" | sort -u)

            if [ ${#samples[@]} -eq 0 ]; then
                echo "No MC job files found in ${inputdir}, skipping."
                continue
            fi

            for sample in "${samples[@]}"; do
                output="${inputdir}/${PREFIX}_${object}_${region}_${sample}.root"
                mapfile -t files < <(ls "${inputdir}"/${PREFIX}_${object}_${region}_${sample}_job*.root 2>/dev/null)

                nfiles=${#files[@]}
                if [ "$nfiles" -eq 0 ]; then
                    echo "No files found for ${object} ${region} ${sample}, skipping."
                    continue
                fi

                UNMERGED="${UNMERGEDBASE}/${mctype}_${region}_${object}"
                mkdir -p "${UNMERGED}"

                echo "Merging ${nfiles} files for ${mctype} ${object} ${region} ${sample} -> ${output}"

                if [ "$nfiles" -le "$BATCH_SIZE" ]; then
                    hadd -f "${output}" "${files[@]}"
                else
                    tmpdir=$(mktemp -d "${inputdir}/hadd_tmp_XXXX")
                    batch=0
                    failed=0
                    for ((i=0; i<nfiles; i+=BATCH_SIZE)); do
                        batch_files=("${files[@]:i:BATCH_SIZE}")
                        batch_out="${tmpdir}/batch_${batch}.root"
                        echo "  Batch ${batch}: merging ${#batch_files[@]} files"
                        hadd -f "${batch_out}" "${batch_files[@]}"
                        if [ $? -ne 0 ]; then
                            echo "ERROR: hadd failed on batch ${batch} for ${object} ${region} ${sample}"
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
                            echo "ERROR: final hadd merge failed for ${object} ${region} ${sample}"
                        fi
                    fi

                    rm -rf "${tmpdir}"
                fi

                if [ $? -eq 0 ] && [ -f "${output}" ]; then
                    echo "Successfully created ${output}"
                    echo "Moving ${nfiles} input files to ${UNMERGED}/"
                    mv "${files[@]}" "${UNMERGED}/"
                else
                    echo "ERROR: hadd failed for ${object} ${region} ${sample}, keeping original files in place."
                fi
                echo ""
            done
        done
    done
done
