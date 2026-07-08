#!/usr/bin/env bash
set -euo pipefail

# ------------------------------------------------------------------
# organizeSkimmedNtuples.sh
#
# Moves the locally-returned condor output trees (Data/ BkgMC/ Signal/
# ExpressData/) that step6 (run_ntuple_processing_batch.sh) dumps into this
# helper_scripts directory up to the corresponding /ceph destination.
#
# The trees are already in the final <sample>/<region>/<object>[/2DA]/ layout,
# so this script just MERGES each sample tree into the /ceph base (it does NOT
# hadd/merge ROOT files).
#
# Destination: $CEPH_BASE/Ntuples_v<VERSION>_wRNN/
# Bump <VERSION> each time the RNN is re-run (v5.0.1 -> v5.0.2 -> ...).
# ------------------------------------------------------------------

DEFAULT_VERSION="5.0.4"
CEPH_BASE="/ceph/cms/store/user/tvami/EarthAsDM/Ntuples"
DRY_RUN=false

usage() {
  cat <<EOF
Usage: organizeSkimmedNtuples.sh [options] [VERSION]

Moves the local Data/ BkgMC/ Signal/ ExpressData/ trees (in this script's
directory) into:
    $CEPH_BASE/Ntuples_v<VERSION>_wRNN/

VERSION   Ntuple subversion, without leading 'v' (default: $DEFAULT_VERSION).
          The '_wRNN' suffix is added automatically.

Options:
  -n, --dry-run   Show what would be moved without moving anything.
  -h, --help      Show this help and exit.

Examples:
  organizeSkimmedNtuples.sh              # -> Ntuples_v${DEFAULT_VERSION}_wRNN
  organizeSkimmedNtuples.sh 5.0.2        # -> Ntuples_v5.0.2_wRNN
  organizeSkimmedNtuples.sh -n 5.0.2     # dry run
EOF
}

VERSION=""
while [[ $# -gt 0 ]]; do
  case "$1" in
    -h|--help)    usage; exit 0 ;;
    -n|--dry-run) DRY_RUN=true; shift ;;
    -*)           echo "Unknown option: $1" >&2; usage >&2; exit 1 ;;
    *)            VERSION="$1"; shift ;;
  esac
done
VERSION="${VERSION:-$DEFAULT_VERSION}"
VERSION="${VERSION#v}"   # tolerate a leading 'v'

DEST="$CEPH_BASE/Ntuples_v${VERSION}_wRNN"

# Operate on the trees sitting next to this script
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

# Skip files modified within the last 2 minutes (may still be arriving)
MIN_AGE_MIN=2

echo "=== organizeSkimmedNtuples ==="
echo "Source : $SCRIPT_DIR"
echo "Dest   : $DEST"
$DRY_RUN && echo "(dry run — nothing will be moved)"
echo

RSYNC_OPTS=(-a --remove-source-files)
$DRY_RUN && RSYNC_OPTS=(-a --dry-run)

moved_any=false
for sample in Data BkgMC Signal ExpressData; do
  src="$SCRIPT_DIR/$sample"
  [[ -d "$src" ]] || continue

  # Build list of ROOT files old enough to move (paths relative to $src)
  mapfile -t files < <(find "$src" -type f -name '*.root' -mmin +"$MIN_AGE_MIN" -printf '%P\n')
  nfiles=${#files[@]}
  if (( nfiles == 0 )); then
    echo "[$sample] no settled .root files to move — skipping"
    continue
  fi

  echo "[$sample] moving $nfiles file(s) -> $DEST/$sample/"
  $DRY_RUN || mkdir -p "$DEST/$sample"
  printf '%s\n' "${files[@]}" | rsync "${RSYNC_OPTS[@]}" --files-from=- "$src/" "$DEST/$sample/"

  # Drop now-empty source subdirs (keep nothing behind but the top sample dir
  # if files were skipped for being too recent)
  $DRY_RUN || find "$src" -type d -empty -delete
  moved_any=true
done

echo
if $DRY_RUN; then
  echo "=== Dry run complete ==="
elif $moved_any; then
  echo "=== Organization complete -> $DEST ==="
else
  echo "=== Nothing to move ==="
fi
