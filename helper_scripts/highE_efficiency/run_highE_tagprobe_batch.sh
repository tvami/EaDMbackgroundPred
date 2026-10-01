#!/bin/bash
# Condor wrapper for highE_tagprobe.C: $1 = file list, $2 = output name
mkdir -p output
# some glideins are slc7 despite REQUIRED_OS: re-exec inside el8
if ! grep -q "release 8" /etc/redhat-release 2>/dev/null && [ -z "$IN_EL8" ]; then
    echo "not el8 ($(cat /etc/redhat-release)), re-exec in cmssw-el8"
    export IN_EL8=1
    B=""; [ -d /ceph ] && B="-B /ceph"
    exec /cvmfs/cms.cern.ch/common/cmssw-el8 $B -- bash $0 "$@"
fi
echo "Start: $(date)  node: $(hostname)  $(cat /etc/redhat-release)"
source /cvmfs/cms.cern.ch/cmsset_default.sh
export SCRAM_ARCH=el8_amd64_gcc12
scramv1 project CMSSW CMSSW_14_1_0_pre4 > /dev/null
cd CMSSW_14_1_0_pre4/src && eval `scramv1 runtime -sh` && cd ../..
# off-site: read the ceph files through AAA
list=$1
if [ ! -r "$(head -1 $1)" ]; then
    sed 's#^/ceph/cms/store/#root://cms-xrd-global.cern.ch//store/#' $1 > list_xrd.txt; list=list_xrd.txt
fi
root -l -b -q "highE_tagprobe.C(\"$list\",\"output/$2\")"
ls -l output/*.root || exit 1  # fail loudly on broken nodes
echo "End: $(date)"
