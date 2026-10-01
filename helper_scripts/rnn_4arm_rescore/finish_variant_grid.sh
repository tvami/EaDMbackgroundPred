#!/bin/bash
# =============================================================================
# finish_variant_grid.sh -- run under screen; takes the RNN variant grid from
# "6 of 8 trained, 12-network re-score in flight" to "all 8 trained, 14-network
# re-score done, decision table printed".
#
#   screen -S vgrid
#   bash /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/helper_scripts/rnn_4arm_rescore/finish_variant_grid.sh
#   (detach: ctrl-a d      reattach: screen -r vgrid)
#
# Phases, in order. Each is idempotent -- a phase that has already happened is
# detected and skipped, so the script is safe to restart after a crash or a
# disconnect.
#
#   A  wait for the 12-network re-score (371972 + 371974) to drain
#   B  verify out/ is complete, then run the 12-network analysis   <- tonight's answer
#   C  wait for Sp (371730) and Wp (371731) to finish training
#   D  back Sp/Wp checkpoints up to ceph and md5-verify them
#   E  wire Sp/Wp into the 5 scripts + 3 cfgs, byte-compile, smoke-test
#   F  archive out/, resubmit the 90+36 job re-score at 14 networks
#   G  wait for it, verify out/ again, run the 14-network analysis
#
# Phase B is deliberately BEFORE the Sp/Wp wait: the 12-network result is a
# complete answer on its own and there is no reason to hold it hostage to two
# jobs that were evicted and restarted from scratch. If Sp/Wp never land, you
# still have B.
#
# NOTHING in here is destructive. out/ is COPIED to an archive, never moved --
# a move would take the 21 *_shift8.npz with it, and those are never re-scored.
# =============================================================================
set -u
set -o pipefail

SRC=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
PKG=$SRC/helper_scripts/rnn_4arm_rescore
HELP=$SRC/helper_scripts
CEPH=/ceph/cms/store/user/tvami/EarthAsDM/RNNtrainings
RES=/tmp/sr_study
STAMP=$(date +%Y%m%d)
LOG=$RES/finish_variant_grid_${STAMP}_$(date +%H%M).log

RESCORE_CLUSTERS="371972 371974"      # the 12-network round, in flight
TRAIN_SP=371730
TRAIN_WP=371731
CK_SP=rnn_retrain_weights_matchL0toData_shift13p0_smear7p7.ckpt
CK_WP=rnn_retrain_weights_matchL0toData_shift11p0_smear11p0.ckpt
TAG_SP=matchL0toData_shift13p0_smear7p7
TAG_WP=matchL0toData_shift11p0_smear11p0

POLL=180                  # s between condor_q polls
# Generous on purpose. These are only a guard against sitting in screen forever if a
# job wedges; they are NOT an estimate of how long the work takes. Wp has now been
# evicted twice (NumJobStarts=3) and each eviction restarts a 60-epoch training from
# scratch with no resume, so a 14 h budget nearly tripped on a run that was 2 epochs
# from finishing. Budget for the eviction, not the training.
MAX_WAIT_TRAIN=$((30*3600))
MAX_WAIT_RESCORE=$((12*3600))

ARMS12="arm2_control,arm3_shift8,arm4_smear12,arm5_match,arm1_center,arm5b_match,E1_match,J_jitter2p8,Jo_jitter1p5,N_noNeutrino,NJ_noNu_E1,old_v5"

mkdir -p "$RES"
exec > >(tee -a "$LOG") 2>&1

say()  { echo -e "\n[$(date '+%m-%d %H:%M:%S')] $*"; }
die()  { echo -e "\n[$(date '+%m-%d %H:%M:%S')] FATAL: $*\n"; exit 1; }
rule() { echo "============================================================================"; }

rule; say "finish_variant_grid.sh starting.  log -> $LOG"; rule

# --------------------------------------------------------------- environment
# Plain cmsenv. NOT the twoD-env: it shadows cmsstyle and every plot script dies
# on the import, ~40 min into a run, after the re-score has already finished.
say "PHASE 0  environment"
source /cvmfs/cms.cern.ch/cmsset_default.sh || die "cmsset_default.sh"
cd "$SRC" || die "cannot cd $SRC"
eval "$(scramv1 runtime -sh)" || die "cmsenv failed"
cd "$PKG" || die "cannot cd $PKG"
python3 -c "import cmsstyle, numpy, ROOT" \
    || die "cmsstyle/ROOT not importable -- are you inside twoD-env? use a clean shell"
echo "  cmsenv OK, cmsstyle OK, cwd=$PWD"

# ------------------------------------------------------------------ helpers
# Block until every listed cluster has left the queue. Reports held jobs as it
# goes: a job that goes on hold sits there forever and would otherwise turn this
# into an infinite wait.
wait_for_clusters() {
    local label="$1"; shift
    local maxwait="$1"; shift
    local ids="$*"
    local t0=$SECONDS
    say "waiting on $label (clusters: $ids)"
    while true; do
        local n held
        n=$(condor_q $ids -af ClusterId 2>/dev/null | wc -l)
        [ "$n" -eq 0 ] && { echo "  $label: queue empty after $(( (SECONDS-t0)/60 )) min"; return 0; }
        held=$(condor_q $ids -constraint 'JobStatus==5' -af ClusterId 2>/dev/null | wc -l)
        printf '  %s  %s: %s in queue (%s running, %s held)\n' \
            "$(date '+%H:%M')" "$label" "$n" \
            "$(condor_q $ids -constraint 'JobStatus==2' -af ClusterId 2>/dev/null | wc -l)" \
            "$held"
        if [ "$held" -gt 0 ]; then
            echo "  !! $held HELD job(s) -- they will never finish on their own:"
            condor_q $ids -constraint 'JobStatus==5' -af ClusterId ProcId HoldReason 2>/dev/null | head -5
        fi
        if [ $((SECONDS-t0)) -gt "$maxwait" ]; then
            die "$label still in the queue after $((maxwait/3600)) h -- giving up so this
     does not sit in screen forever. Investigate, then restart this script; it
     will pick up where it left off."
        fi
        sleep $POLL
    done
}

# The npz completeness gate. Nothing plots unless this passes.
gate_out() {
    local arms="$1"
    say "PHASE ${2}  verifying out/ is complete and consistent"
    echo "  out/ holds $(ls "$PKG"/out/*.npz 2>/dev/null | wc -l) npz"
    python3 "$PKG/check_out.py" "$arms" \
        || die "out/ is incomplete or inconsistent (see above). NOT plotting.
     A partial out/ does not raise -- every script globs data_vr2_*.npz and
     concatenates whatever it finds, so the figures would look normal and be
     built on a fraction of the data. Resubmit the missing shards, then rerun."
}

run_analysis() {
    local tag="$1"
    local o=$RES/analysis_${tag}_${STAMP}
    say "running the analysis chain  (tag=$tag) -> $o.*"
    # patched_v5_baseline.py FIRST: it is the decision table, and if anything is
    # going to fail on a missing column it fails here in 30 s rather than after
    # four plot scripts.
    python3 "$PKG/patched_v5_baseline.py"     | tee "$o.decision.txt" || die "patched_v5_baseline.py"
    python3 "$PKG/plot_arms_dataVsMC.py" vr2  | tee "$o.vr2.txt"      || die "plot_arms_dataVsMC vr2"
    python3 "$PKG/plot_arms_dataVsMC.py" vr1  | tee "$o.vr1.txt"      || die "plot_arms_dataVsMC vr1"
    python3 "$PKG/plot_arms_signal_eff.py" e4 | tee "$o.sigeff.txt"   || die "plot_arms_signal_eff e4"
    python3 "$PKG/iso_background_eff.py" e4   | tee "$o.iso_e4.txt"   || die "iso_background_eff e4"
    python3 "$PKG/iso_background_eff.py" e2   | tee "$o.iso_e2.txt"   || die "iso_background_eff e2"
    say "analysis $tag DONE"
    echo "  text   : $o.*.txt"
    echo "  figures: $HELP/figures/rnn_4arm_dataVsMC/"
    echo
    echo "  ---- THE DECISION NUMBERS ($tag) ----"
    sed -n '/THE DECISION NUMBERS/,$p' "$o.decision.txt"
}

# =========================================================== A  12-net re-score
rule
say "PHASE A  the 12-network re-score"
wait_for_clusters "12-net re-score" $MAX_WAIT_RESCORE $RESCORE_CLUSTERS

# =========================================================== B  12-net analysis
rule
if [ -f "$RES/analysis_12net_${STAMP}.decision.txt" ]; then
    say "PHASE B  already done today, skipping (rm $RES/analysis_12net_${STAMP}.decision.txt to redo)"
else
    gate_out "$ARMS12" B
    run_analysis 12net
fi

# =========================================================== C  Sp/Wp training
rule
say "PHASE C  Sp (13.0/7.7) and Wp (11.0/11.0) training"
if [ -f "$HELP/$CK_SP.index" ] && [ -f "$HELP/$CK_WP.index" ] \
   && [ "$(condor_q $TRAIN_SP $TRAIN_WP -af ClusterId 2>/dev/null | wc -l)" -eq 0 ]; then
    echo "  both checkpoints already on disk and the jobs are gone -- skipping the wait"
else
    wait_for_clusters "Sp/Wp training" $MAX_WAIT_TRAIN $TRAIN_SP $TRAIN_WP
fi

# Both were evicted once already (code 1007) and restarted from scratch. An
# eviction leaves the queue looking exactly like a clean finish, so check the
# exit code, and then check the file, and do not trust either one alone.
for c in $TRAIN_SP $TRAIN_WP; do
    ec=$(condor_history "$c" -limit 1 -af ExitCode 2>/dev/null | tr -d ' ')
    echo "  cluster $c exit code: ${ec:-<not in history>}"
    if [ -n "$ec" ] && [ "$ec" != "0" ] && [ "$ec" != "undefined" ]; then
        die "cluster $c exited $ec -- it did NOT finish cleanly. If it was evicted
     again (1007) it must be resubmitted from scratch; there is no resume."
    fi
done
for f in "$HELP/$CK_SP.index" "$HELP/$CK_SP.data-00000-of-00001" \
         "$HELP/$CK_WP.index" "$HELP/$CK_WP.data-00000-of-00001"; do
    [ -s "$f" ] || die "checkpoint missing or empty: $f"
    printf '  %10s  %s\n' "$(stat -c%s "$f")" "$(basename "$f")"
done
say "PHASE C  both checkpoints present"

# =========================================================== D  ceph backup
rule
say "PHASE D  ceph backup + md5 verify"
# The condor job cannot write these dirs -- it runs as `cuser`. Last round all six
# backups silently "succeeded" into empty directories. So copy from /home by hand
# and verify, and treat a mismatch as fatal rather than cosmetic.
nbad=0
for pair in "$TAG_SP:$CK_SP" "$TAG_WP:$CK_WP"; do
    tag=${pair%%:*}; ck=${pair##*:}
    mkdir -p "$CEPH/$tag" || die "cannot mkdir $CEPH/$tag"
    for ext in index data-00000-of-00001; do
        cp -f "$HELP/$ck.$ext" "$CEPH/$tag/" || die "cp failed: $ck.$ext"
        a=$(md5sum "$HELP/$ck.$ext"     | awk '{print $1}')
        b=$(md5sum "$CEPH/$tag/$ck.$ext" | awk '{print $1}')
        if [ "$a" = "$b" ]; then printf '  ok    %s  %s\n' "$a" "$ck.$ext"
        else printf '  BAD   %s != %s  %s\n' "$a" "$b" "$ck.$ext"; nbad=$((nbad+1)); fi
    done
done
[ "$nbad" -eq 0 ] || die "$nbad ceph copy/copies do not match the local md5"
say "PHASE D  4/4 files md5-verified on ceph"

# =========================================================== E  wire in Sp/Wp
rule
say "PHASE E  wiring Sp/Wp into the 5 scripts + 3 cfgs"
python3 "$PKG/add_sp_wp.py" || die "add_sp_wp.py failed -- see the anchor it could not find"
python3 "$PKG/add_sp_wp.py" --check || die "add_sp_wp reports the patch is still incomplete"

for f in rescore_arms.py plot_arms_dataVsMC.py plot_arms_signal_eff.py \
         iso_background_eff.py patched_v5_baseline.py check_out.py; do
    python3 -m py_compile "$PKG/$f" || die "py_compile failed: $f"
done
echo "  py_compile clean on all 6"

say "PHASE E  smoke test: 3000 events through all 14 networks"
SMOKE_IN=$(head -1 "$PKG/joblist.txt" | awk -F', *' '{print $4}')
[ -f "$SMOKE_IN" ] || die "smoke-test input not visible: $SMOKE_IN"
rm -f /tmp/sr_study/smoke14.npz
( cd "$PKG" && ISTART=0 ISTOP=3000 CKPTDIR="$HELP" SELFTEST=1 \
    python3 rescore_arms.py "$SMOKE_IN" /tmp/sr_study/smoke14.npz ) \
    || die "smoke test failed -- do NOT submit 126 jobs on this"
python3 - <<'PY' || die "smoke-test npz is missing the Sp/Wp columns"
import numpy as np, sys
z = np.load('/tmp/sr_study/smoke14.npz')
need = {'Sp_shift13', 'Wp_smear11', 'E1_match', 'J_jitter2p8', 'old_v5', 'RNNScore'}
miss = need - set(z.files)
print('  smoke npz columns:', ', '.join(z.files))
print('  events:', len(z['RNNScore']))
if miss:
    print('  MISSING:', sorted(miss)); sys.exit(1)
for k in ('Sp_shift13', 'Wp_smear11'):
    s = z[k]
    print(f'  {k}: mean={s.mean():.4f} min={s.min():.4f} max={s.max():.4f}')
    if not np.isfinite(s).all() or s.std() == 0:
        print(f'  {k} is degenerate -- checkpoint probably did not load'); sys.exit(1)
PY
say "PHASE E  smoke test passed"

# =========================================================== F  resubmit
rule
say "PHASE F  archiving out/ and resubmitting at 14 networks"
ARCH=$PKG/out_12net_${STAMP}
if [ -d "$ARCH" ]; then
    echo "  archive $ARCH already exists, leaving it alone"
else
    # COPY, not move: the 21 *_shift8.npz in out/ are never re-scored and must
    # stay where patched_v5_baseline.py reads them.
    mkdir -p "$ARCH" && cp -p "$PKG"/out/*.npz "$ARCH"/ || die "archive copy failed"
    echo "  archived $(ls "$ARCH"/*.npz | wc -l) npz -> $ARCH"
fi

cd "$PKG" || die "cd $PKG"
SUB_MAIN=$(condor_submit step9_condor_rnn_rescore.cfg 2>&1 | tee /dev/stderr \
           | grep -oP 'submitted to cluster \K[0-9]+')
SUB_E2=$(condor_submit step9_condor_rnn_rescore_e2.cfg 2>&1 | tee /dev/stderr \
         | grep -oP 'submitted to cluster \K[0-9]+')
[ -n "${SUB_MAIN:-}" ] && [ -n "${SUB_E2:-}" ] || die "could not parse the new cluster ids"
say "PHASE F  submitted: main=$SUB_MAIN (90 jobs), e2=$SUB_E2 (36 jobs)"
echo "  the 21 *_shift8 jobs are deliberately NOT resubmitted: they supply only"
echo "  old_v5 and arm3_shift8, neither of which changed. Patch cost 0.869 and the"
echo "  deployed VR2 band 1.136 stand."
echo "$SUB_MAIN $SUB_E2" > "$RES/vgrid_round3_clusters.txt"

# =========================================================== G  14-net analysis
rule
say "PHASE G  the 14-network re-score"
wait_for_clusters "14-net re-score" $MAX_WAIT_RESCORE "$SUB_MAIN" "$SUB_E2"
gate_out "--arms-from-rescore" G
run_analysis 14net

rule
say "ALL PHASES DONE"
cat <<EOF

  12-network answer : $RES/analysis_12net_${STAMP}.*.txt
  14-network answer : $RES/analysis_14net_${STAMP}.*.txt
  figures           : $HELP/figures/rnn_4arm_dataVsMC/
  archived npz      : $PKG/out_12net_${STAMP}/
  this log          : $LOG

  Read VR2 first. The bar is the deployed v5 + its 8 ns patch: VR2 band 1.136,
  VR1 1.276, matched efficiency 0.4648. A candidate has to beat the band AND at
  least match the efficiency. Band 1.000 is ideal.

  Honor the pre-commitment: if no (shift, smear) point reaches VR2 1.136 without
  wrecking efficiency, shift/smear is not the fix and the answer is in J or N.
  Do not pick the best band post hoc -- that is what arm 3 did, and rejecting it
  was the whole premise of arm 5.

  If N moved the band, rerun it at CLASS_W0=57 before concluding anything: N is
  not weight-matched, so composition and weighting are still degenerate in it.
EOF
rule
