#!/bin/bash
#
# EarthAsDM: merge per-job Data ntuple chunks into one file per era.
#
# Tree layout (produced by organizeNtuples.sh):
#   ${BASEDIR}/Data/<region>/<object>/${PREFIX}_<object>_<region>_<era>_job<N>.root
# Output (one per era):
#   ${BASEDIR}/Data/<region>/<object>/${PREFIX}_<object>_<region>_<era>.root
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
LOGFILE="${SCRIPT_DIR}/hadd_data_$(date +%Y%m%d_%H%M%S).log"
exec > >(tee -a "$LOGFILE") 2>&1
echo "Logging to ${LOGFILE}"

mctype="Data"

for region in sr vr1 vr2; do
    for object in matched_muon muon track tuneP; do
        inputdir="${BASEDIR}/${mctype}/${region}/${object}"
        [ -d "${inputdir}" ] || continue

        # Discover unique era/sample names from the job files:
        #   ${PREFIX}_${object}_${region}_<era>_job<N>.root  ->  <era>
        mapfile -t samples < <(ls "${inputdir}"/${PREFIX}_${object}_${region}_*_job*.root 2>/dev/null | \
            sed -E "s|.*/${PREFIX}_${object}_${region}_(.*)_job[0-9]+\.root|\1|" | sort -u)

        if [ ${#samples[@]} -eq 0 ]; then
            echo "No job files found in ${inputdir}, skipping."
            continue
        fi

        for sample in "${samples[@]}"; do
            output="${inputdir}/${PREFIX}_${object}_${region}_${sample}.root"
            mapfile -t files < <(ls "${inputdir}"/${PREFIX}_${object}_${region}_${sample}_job*.root 2>/dev/null)
            tmp_existing=""

            # Filter out corrupt ROOT files (only if ROOT is available in python3)
            if ! python3 -c "import ROOT" 2>/dev/null; then
                echo "WARNING: ROOT not available in python3 (did you run cmsenv?). Skipping corruption check — all files will be passed to hadd as-is."
                good_files=("${files[@]}")
            else
                good_files=()
                for f in "${files[@]}"; do
                    if python3 -c "import ROOT; f=ROOT.TFile.Open('${f}'); exit(0 if f and not f.IsZombie() and f.GetListOfKeys() else 1)" 2>/dev/null; then
                        good_files+=("$f")
                    else
                        echo "WARNING: Skipping corrupt file: $f"
                    fi
                done
            fi
            files=("${good_files[@]}")

            nfiles=${#files[@]}
            if [ "$nfiles" -eq 0 ]; then
                echo "No files found for ${object} ${region} ${sample}, skipping."
                continue
            fi

            UNMERGED="${UNMERGEDBASE}/${mctype}_${region}_${object}"
            mkdir -p "${UNMERGED}"

            # If a merged file already exists, fold it into this round so newly
            # arrived job chunks are added to it instead of overwriting it.
            if [ -f "${output}" ]; then
                echo "Existing merged file found, will merge ${nfiles} new files into it."
                tmp_existing="${output%.root}_old.root"
                mv "${output}" "${tmp_existing}"
                files=("${tmp_existing}" "${files[@]}")
                nfiles=${#files[@]}
            fi

            echo "Merging ${nfiles} files for ${object} ${region} ${sample} -> ${output}"

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
                [ -n "${tmp_existing}" ] && [ -f "${tmp_existing}" ] && rm "${tmp_existing}"
                mapfile -t job_files < <(printf '%s\n' "${files[@]}" | grep '_job')
                if [ ${#job_files[@]} -gt 0 ]; then
                    echo "Moving ${#job_files[@]} input job files to ${UNMERGED}/"
                    mv "${job_files[@]}" "${UNMERGED}/"
                fi
            else
                echo "ERROR: hadd failed for ${object} ${region} ${sample}, keeping original files in place."
                [ -n "${tmp_existing}" ] && [ -f "${tmp_existing}" ] && mv "${tmp_existing}" "${output}"
            fi
            echo ""
        done
    done
done
