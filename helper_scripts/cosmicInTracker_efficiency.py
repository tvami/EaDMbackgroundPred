#!/usr/bin/env python3
"""Tabulate the generation-step (cosmicInTracker) filter efficiency of the signal EDM samples.

The `generation_step` of the RunIII2024Summer24DR chain holds two acceptance requirements, and the
RAWSIM output keeps only events that pass the path, so nothing downstream can see what was thrown
away:

  1. `generator` = CosMuoGenProducer, RadiusOfTarget = 8000 mm / ZDistOfTarget = 15000 mm -- the 8 m
     x 15 m CMS cylinder the AN describes. Its rejections are internal retries, so they never enter
     the path counters.
  2. `cosmicInTracker` = CosmicGenFilterHelix, radius = 80 cm, |z| < 212 cm -- the muon, propagated
     as a helix in the B field, must reach the silicon tracker. The AN does not mention this one.

`GenFilterInfo` (label `genFilterEfficiencyProducer`, in the **Lumis** tree) counts the path: its
numEventsTried is the number of events the generator handed to the path and numEventsPassed the
number surviving it, so the ratio isolates requirement 2. Known values it reproduces: 1.32% for
MinP-10-MaxP-10000 up-going, ~1.8% for M3000 signal.

Reads only the Lumis tree, so it is cheap per file even over xrootd, and it never touches Events.

Usage (from .../CMSSW_14_1_0_pre4/src, cmsenv only -- no twoD-env, FWLite comes from CMSSW):
    python3 helper_scripts/cosmicInTracker_efficiency.py -o cosmicInTracker_efficiency.csv
    python3 helper_scripts/cosmicInTracker_efficiency.py --all-files -j 12      # exhaustive
    python3 helper_scripts/cosmicInTracker_efficiency.py -d my_datasets.txt     # explicit list

Needs a grid proxy for both DAS and xrootd (`voms-proxy-init -voms cms`).
Re-running appends: datasets already in the CSV are skipped unless --force.
"""

import argparse
import csv
import json
import math
import os
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor

DASGOCLIENT = "/cvmfs/cms.cern.ch/common/dasgoclient"
# Every signal sample is up-going: MinTheta-91-MaxTheta-179. The 0-75 cone samples are the
# downward-going cosmic background and are deliberately not matched here.
DEFAULT_PATTERN = "/CosmicToMu_Par*MinTheta-91-MaxTheta-179*/*/GEN-SIM-RECO"
DEFAULT_REDIRECTOR = "root://cms-xrd-global.cern.ch/"

FIELDS = ["dataset", "primary_dataset", "minp_gev", "maxp_gev", "depth", "nfiles_total",
          "nfiles_read", "nlumis", "events_tried", "events_passed", "events_stored",
          "efficiency", "efficiency_err", "only_filter_is_cosmicInTracker", "status"]

NAME_RE = re.compile(
    r"CosmicToMu_Par-MinP-(?P<minp>\d+)(?:-MaxP-(?P<maxp>\d+))?"
    r"-MinTheta-\d+-MaxTheta-\d+"
    r"(?:-SurfaceDepth-e(?P<depth>\d+))?_cosmuogen")


# ---------------------------------------------------------------- worker mode
def read_one_file(url):
    """Sum GenFilterInfo over one EDM file. Returns (nlumis, tried, passed, stored).

    `stored` is the Events tree entry count, which is the check that cosmicInTracker really is the
    only filter: the SIM RAWSIM output takes SelectEvents = {'generation_step'} while the HLT and
    RECO outputs take SelectEvents = {}, so nothing downstream may drop an event and stored must
    equal numEventsPassed. It costs nothing to read -- GetEntries touches tree metadata only.
    """
    import ROOT
    from DataFormats.FWLite import Lumis, Handle

    handle = Handle("GenFilterInfo")
    nlumis = tried = passed = 0
    for lumi in Lumis([url]):
        lumi.getByLabel("genFilterEfficiencyProducer", handle)
        if not handle.isValid():
            continue
        info = handle.product()
        tried += info.numEventsTried()
        passed += info.numEventsPassed()
        nlumis += 1

    handle_file = ROOT.TFile.Open(url)
    events = handle_file.Get("Events") if handle_file and not handle_file.IsZombie() else None
    stored = int(events.GetEntries()) if events else -1
    if handle_file:
        handle_file.Close()

    return nlumis, tried, passed, stored


# ---------------------------------------------------------------- driver mode
def das(query):
    out = subprocess.run([DASGOCLIENT, "-query", query], capture_output=True, text=True,
                         timeout=600)
    if out.returncode != 0:
        raise RuntimeError(f"dasgoclient failed for {query!r}: {out.stderr.strip()}")
    return [line.strip() for line in out.stdout.splitlines() if line.strip()]


def scan_file(args, lfn):
    """Run read_one_file in a subprocess, so one unreadable file cannot take the scan down."""
    cmd = [sys.executable, os.path.abspath(__file__), "--one-file", args.redirector + lfn]
    try:
        out = subprocess.run(cmd, capture_output=True, text=True, timeout=args.timeout)
    except subprocess.TimeoutExpired:
        return None, f"timeout after {args.timeout}s"
    if out.returncode != 0:
        tail = (out.stderr.strip().splitlines() or ["no stderr"])[-1]
        return None, f"exit {out.returncode}: {tail[:160]}"
    try:
        return json.loads(out.stdout.strip().splitlines()[-1]), None
    except (ValueError, IndexError):
        return None, "unparseable worker output"


def scan_dataset(args, dataset):
    row = dict.fromkeys(FIELDS, "")
    row["dataset"] = dataset
    primary = dataset.split("/")[1]
    row["primary_dataset"] = primary

    match = NAME_RE.search(primary)
    if match:
        row["minp_gev"] = match.group("minp")
        row["maxp_gev"] = match.group("maxp") or ""
        row["depth"] = f"e{match.group('depth')}" if match.group("depth") else "none"

    try:
        lfns = sorted(das(f"file dataset={dataset}"))
    except Exception as exc:                                    # noqa: BLE001 - reported per row
        row["status"] = f"das error: {exc}"[:200]
        return row

    row["nfiles_total"] = len(lfns)
    if not lfns:
        row["status"] = "no files in DAS"
        return row

    # Sampling is safe: the efficiency is a per-dataset property, and a few files already give
    # thousands of passed events. The row records how much was read so the precision is auditable.
    use = lfns if args.all_files else lfns[:args.max_files]
    nlumis = tried = passed = stored = 0
    nread = 0
    errors = []
    for lfn in use:
        result, err = scan_file(args, lfn)
        if err:
            errors.append(err)
            continue
        nread += 1
        nlumis += result["nlumis"]
        tried += result["tried"]
        passed += result["passed"]
        stored += result["stored"]

    row.update(nfiles_read=nread, nlumis=nlumis, events_tried=tried, events_passed=passed,
               events_stored=stored)
    # Equality means the generation-step gate accounts for every event that left the chain, i.e.
    # nothing in HLT or RECO filtered. A mismatch would mean a second filter somewhere.
    row["only_filter_is_cosmicInTracker"] = "yes" if (nread and stored == passed) else \
        ("no" if nread else "")
    if tried > 0:
        eff = passed / tried
        row["efficiency"] = f"{eff:.8f}"
        row["efficiency_err"] = f"{math.sqrt(eff * (1 - eff) / tried):.8f}"
        row["status"] = "ok" if not errors else f"ok ({len(errors)} file(s) failed)"
    elif nread:
        row["status"] = "no GenFilterInfo in the files read"
    else:
        row["status"] = f"all {len(use)} file(s) failed: {errors[0] if errors else 'unknown'}"[:200]
    return row


def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--one-file", help=argparse.SUPPRESS)   # internal worker mode
    parser.add_argument("-o", "--output", default="cosmicInTracker_efficiency.csv")
    parser.add_argument("-p", "--pattern", default=DEFAULT_PATTERN,
                        help=f"DAS dataset pattern (default: {DEFAULT_PATTERN})")
    parser.add_argument("-d", "--datasets", help="file with one dataset per line, instead of a DAS query")
    parser.add_argument("-n", "--max-files", type=int, default=5,
                        help="files to read per dataset (default: 5)")
    parser.add_argument("--all-files", action="store_true", help="read every file of every dataset")
    parser.add_argument("-j", "--jobs", type=int, default=8, help="datasets in parallel (default: 8)")
    parser.add_argument("-r", "--redirector", default=DEFAULT_REDIRECTOR)
    parser.add_argument("-t", "--timeout", type=int, default=600, help="per-file timeout in seconds")
    parser.add_argument("--force", action="store_true", help="rescan datasets already in the CSV")
    args = parser.parse_args()

    if args.one_file:
        nlumis, tried, passed, stored = read_one_file(args.one_file)
        print(json.dumps({"nlumis": nlumis, "tried": tried, "passed": passed, "stored": stored}))
        return

    if args.datasets:
        with open(args.datasets) as handle:
            datasets = [l.strip() for l in handle if l.strip() and not l.startswith("#")]
    else:
        print(f"Querying DAS: {args.pattern}", flush=True)
        datasets = sorted(das(f"dataset={args.pattern}"))
    print(f"{len(datasets)} dataset(s)", flush=True)

    done = set()
    if os.path.exists(args.output) and not args.force:
        with open(args.output) as handle:
            done = {r["dataset"] for r in csv.DictReader(handle) if r.get("status", "").startswith("ok")}
        print(f"{len(done)} already done in {args.output}, skipping them", flush=True)
    todo = [d for d in datasets if d not in done]
    if not todo:
        print("Nothing to do.")
        return

    new_file = not os.path.exists(args.output) or args.force
    with open(args.output, "w" if new_file else "a", newline="") as handle:
        writer = csv.DictWriter(handle, fieldnames=FIELDS)
        if new_file:
            writer.writeheader()
            handle.flush()

        ndone = 0
        with ThreadPoolExecutor(max_workers=args.jobs) as pool:
            for row in pool.map(lambda d: scan_dataset(args, d), todo):
                writer.writerow(row)
                handle.flush()                                  # so a long scan is inspectable live
                ndone += 1
                eff = f"{float(row['efficiency']):.4%}" if row["efficiency"] else "--"
                print(f"[{ndone}/{len(todo)}] {row['primary_dataset']}  "
                      f"eff={eff}  ({row['events_passed']}/{row['events_tried']})  {row['status']}",
                      flush=True)

    print(f"\nWrote {args.output}")


if __name__ == "__main__":
    main()
