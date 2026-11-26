#!/bin/bash
# Build a parallel limit area <A>_<TAG> next to the production one: a tree of symlinks to
# $SRC/<A>, except each <sig>-1x0_area/higgsCombineTest.AsymptoticLimits.mH120.root, which is a
# NEW file (write_limit_trees.py) with the HybridNew limits (TAG=HN) or the production
# asymptotic values passed through the same writer (TAG=ASV, validation).
# Production files are never written. Rerun after the CSV is refreshed.
#   ./make_hn_area.sh [HN|ASV] [CSV]
set -eu
TAG=${1:-HN}
HERE=$(cd "$(dirname "$0")" && pwd)
CSV=${2:-$HERE/hn_v2_limits_own.csv}
SRC=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
A=rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all
TF=1x0
FN=higgsCombineTest.AsymptoticLimits.mH120.root
case $TAG in HN) MODE=hn ;; ASV) MODE=asym ;; *) echo "TAG must be HN or ASV"; exit 1 ;; esac
P=$SRC/$A; D=$SRC/${A}_$TAG

rm -rf "$D"  # only symlinks + our own files live here
mkdir -p "$D"
for e in "$P"/*; do
  b=$(basename "$e")
  if [ -d "$e" ] && [[ $b == rpf2x0_Signal_* ]]; then
    mkdir "$D/$b"
    for f in "$e"/*; do
      fb=$(basename "$f")
      if [ -d "$f" ] && [[ $fb == *-${TF}_area ]]; then
        mkdir "$D/$b/$fb"
        for g in "$f"/*; do
          [ "$(basename "$g")" = "$FN" ] && continue
          ln -s "$g" "$D/$b/$fb/"
        done
      else
        ln -s "$f" "$D/$b/"
      fi
    done
  else
    ln -s "$e" "$D/"
  fi
done

cd "$SRC"
python3 "$HERE/write_limit_trees.py" --src "$P" --dst "$D" --csv "$CSV" --mode $MODE --tf $TF
n=$(ls "$D"/rpf2x0_*/*-${TF}_area/$FN | wc -l)
nl=$(find "$D" -name "$FN" -type l | wc -l)
echo "area $D: $n limit files, $nl of them symlinks (must be 0)"
[ "$nl" -eq 0 ] || exit 1
