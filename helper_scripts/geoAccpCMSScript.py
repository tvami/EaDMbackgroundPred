#!/usr/bin/env python3
"""
Geometric acceptance study of the DT segments in the cosmic-muon ntuples.

Reads muon_dtSeg_globX/Y/Z, muon_dtSeg_eta/phi and muon_dtSeg_t0timing from
every ntuple in the input directory, keeps only the events firing the analysis trigger
(HLT_L1SingleMuCosmics), identifies the *entry* (earliest-t0) segment of each
event, and produces:

  1) XY / YZ / XZ scatter plots of the entry-hit positions, plus theta/phi/eta
     histograms of the entry hit (eta/phi read from muon_dtSeg_eta/phi,
     theta derived from eta),
  2) the number of events in which *every* reconstructed segment sits at
     z > 4 m, plus X/Y/Z histograms of the hits in those events.

Run inside a CMSSW environment (uproot + awkward + matplotlib):
    cd $CMSSW_BASE/src && cmsenv
    python3 helper_scripts/geoAccpCMSScript.py
"""

import argparse
import glob
import os

import awkward as ak
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
import mplhep as hep
import numpy as np
import uproot

plt.style.use(hep.style.CMS)

# The ntuplizer writes 9999 into every dtSeg branch when the segment was not
# found, and -999 / 9999 into t0timing when the t0 fit failed on a found
# segment.  Positions are only trustworthy for muon_dtSeg_found == 1.
SENTINEL_LO = -900.0
SENTINEL_HI = 9000.0

# CMS global coordinates are in cm; the "z > 4 m" requirement is z > 400 cm.
Z_CUT_CM = 400.0

DEFAULT_INPUT_DIR = (
    "/ceph/cms/store/user/tvami/EarthAsDM/CosmicToMu_Par-MinP-4000-MinTheta-91-MaxTheta-179_cosmuogen/crab_Ntuplizer-CosmicToMu_Par-MinP-4000-MinTheta-91-MaxTheta-179_v5a/260625_181927/0000"
)

TREE_NAME = "muonPhiAnalyzer/tree"

# Analysis trigger, applied as the preselection of every plot below (same
# requirement as the "Trigger" step of skim_ntuples.C).
TRIGGER_BRANCH = "HLT_L1SingleMuCosmics"

BRANCHES = [
    "muon_dtSeg_globX",
    "muon_dtSeg_globY",
    "muon_dtSeg_globZ",
    "muon_dtSeg_t0timing",
    "muon_dtSeg_found",
    "muon_dtSeg_eta",
    "muon_dtSeg_phi",
    TRIGGER_BRANCH,
]


def load_segments(input_dir, max_files=None):
    """Concatenate the DT-segment branches of every ntuple in ``input_dir``.

    Only events passing the ``TRIGGER_BRANCH`` preselection are kept.  Returns
    an awkward record array with one entry per triggered event, already
    stripped of the not-found placeholder segments.
    """
    files = sorted(
        glob.glob(os.path.join(input_dir, "*.root")),
        key=lambda p: int("".join(c for c in os.path.basename(p) if c.isdigit()) or 0),
    )
    if not files:
        raise RuntimeError("No .root files found under %s" % input_dir)
    if max_files:
        files = files[:max_files]

    print("Reading %d ntuple file(s) from %s" % (len(files), input_dir))

    chunks = []
    for path in files:
        with uproot.open(path) as handle:
            tree = handle[TREE_NAME]
            chunks.append(tree.arrays(BRANCHES))
        print("  %-40s %8d events" % (os.path.basename(path), len(chunks[-1])))

    events = ak.concatenate(chunks)
    n_read = len(events)
    print("Total events read: %d" % n_read)

    # Trigger preselection: everything downstream uses triggered events only.
    triggered = ak.values_astype(events[TRIGGER_BRANCH], bool)
    events = events[triggered]
    n_trig = len(events)
    print(
        "Events passing %s: %d / %d  (%.3f%%)"
        % (TRIGGER_BRANCH, n_trig, n_read, 100.0 * n_trig / n_read if n_read else 0.0)
    )
    if n_trig == 0:
        raise RuntimeError("No event passes the %s preselection" % TRIGGER_BRANCH)

    # Drop the not-found placeholders (X = Y = Z = t0 = 9999).
    found = events["muon_dtSeg_found"] == 1
    segments = ak.zip(
        {
            "x": events["muon_dtSeg_globX"][found],
            "y": events["muon_dtSeg_globY"][found],
            "z": events["muon_dtSeg_globZ"][found],
            "t0": events["muon_dtSeg_t0timing"][found],
            "eta": events["muon_dtSeg_eta"][found],
            "phi": events["muon_dtSeg_phi"][found],
        }
    )
    print(
        "Total DT segments: %d found / %d written"
        % (ak.sum(found), ak.sum(ak.num(found)))
    )
    return segments


def first_hits(segments):
    """Return the (x, y, z, t0) of the earliest-t0 segment of each event.

    Only segments carrying a successful t0 fit are considered; events without
    any such segment are skipped.
    """
    timed = (segments.t0 > SENTINEL_LO) & (segments.t0 < SENTINEL_HI)
    timed_segments = segments[timed]

    has_timing = ak.num(timed_segments) > 0
    timed_segments = timed_segments[has_timing]
    print(
        "Events with >=1 t0-timed segment: %d (%d skipped)"
        % (ak.sum(has_timing), ak.sum(~has_timing))
    )

    entry_index = ak.argmin(timed_segments.t0, axis=1, keepdims=True)
    entry = ak.firsts(timed_segments[entry_index])

    return {
        "x": ak.to_numpy(entry.x),
        "y": ak.to_numpy(entry.y),
        "z": ak.to_numpy(entry.z),
        "t0": ak.to_numpy(entry.t0),
        "eta": ak.to_numpy(entry.eta),
        "phi": ak.to_numpy(entry.phi),
    }


def plot_entry_projections(entry, outdir):
    """2D scatter plots of the entry-hit positions in the XY, YZ and XZ planes."""
    projections = [
        ("x", "y", "XY", r"Entry hit global $x$ [cm]", r"Entry hit global $y$ [cm]"),
        ("z", "y", "YZ", r"Entry hit global $z$ [cm]", r"Entry hit global $y$ [cm]"),
        ("z", "x", "XZ", r"Entry hit global $z$ [cm]", r"Entry hit global $x$ [cm]"),
    ]

    for hor, ver, tag, xlabel, ylabel in projections:
        fig, ax = plt.subplots(figsize=(8, 8))
        ax.scatter(entry[hor], entry[ver], s=2, alpha=0.25, edgecolors="none", color="#1f77b4")
        ax.set_xlabel(xlabel)
        ax.set_ylabel(ylabel)
        ax.set_aspect("equal", adjustable="datalim")
        ax.grid(alpha=0.3)
        hep.cms.label("", ax=ax, loc=0, rlabel="Signal MC")
        ax.text(0.03, 0.97, "Post-"+TRIGGER_BRANCH, transform=ax.transAxes, va="top", fontsize=12)

        path = os.path.join(outdir, "entryHit_%s.png" % tag)
        fig.savefig(path, dpi=200, bbox_inches="tight")
        plt.close(fig)
        print("Wrote %s" % path)


def entry_angles(entry):
    """Angles of the entry hit, taken directly from the ntuple's
    muon_dtSeg_eta / muon_dtSeg_phi branches; theta is derived from eta via
    the standard eta = -ln(tan(theta/2)) relation."""
    eta = entry["eta"]
    phi = entry["phi"]
    theta = 2.0 * np.arctan(np.exp(-eta))
    return {"theta": theta, "phi": phi, "eta": eta}


def plot_entry_angles(entry, outdir):
    """Histograms of the entry-hit theta, phi and eta."""
    angles = entry_angles(entry)
    specs = [
        ("theta", r"Entry hit $\theta$ [rad]"),
        ("phi", r"Entry hit $\phi$ [rad]"),
        ("eta", r"Entry hit $\eta$"),
    ]

    for tag, xlabel in specs:
        values = angles[tag]
        values = values[np.isfinite(values)]
        fig, ax = plt.subplots(figsize=(8, 6))
        ax.hist(values, bins=60, histtype="stepfilled", alpha=0.75,
                color="#2ca02c", edgecolor="black", linewidth=0.8)
        ax.set_xlabel(xlabel)
        ax.set_ylabel("Events")
        ax.grid(alpha=0.3)
        hep.cms.label("", ax=ax, loc=0, rlabel="Signal MC")
        ax.text(0.03, 0.97, "Post-"+TRIGGER_BRANCH, transform=ax.transAxes, va="top", fontsize=12)

        path = os.path.join(outdir, "entryHit_%s.png" % tag)
        fig.savefig(path, dpi=200, bbox_inches="tight")
        plt.close(fig)
        print("Wrote %s" % path)


def plot_forward_histograms(segments, outdir):
    """Select events whose segments all satisfy z > 4 m and histogram their hits."""
    non_empty = ak.num(segments) > 0
    all_forward = ak.all(segments.z > Z_CUT_CM, axis=1) & non_empty

    n_pass = int(ak.sum(all_forward))
    n_total = len(segments)
    print("")
    print("=" * 62)
    print("Mask: every DT segment in the event has z > %.0f cm (%.0f m)"
          % (Z_CUT_CM, Z_CUT_CM / 100.0))
    print("(denominator: events passing the %s preselection)" % TRIGGER_BRANCH)
    print("Events passing: %d / %d  (%.3f%%)"
          % (n_pass, n_total, 100.0 * n_pass / n_total if n_total else 0.0))
    print("=" * 62)
    print("")

    if n_pass == 0:
        print("No events pass the mask; skipping the histograms.")
        return

    passing = segments[all_forward]
    hits = {
        "x": ak.to_numpy(ak.flatten(passing.x)),
        "y": ak.to_numpy(ak.flatten(passing.y)),
        "z": ak.to_numpy(ak.flatten(passing.z)),
    }
    print("Segments in the passing events: %d" % len(hits["x"]))

    for axis in ("x", "y", "z"):
        values = hits[axis]
        fig, ax = plt.subplots(figsize=(8, 6))
        ax.hist(values, bins=60, histtype="stepfilled", alpha=0.75,
                color="#d62728", edgecolor="black", linewidth=0.8)
        ax.set_xlabel(r"Global $%s$ [cm]" % axis)
        ax.set_ylabel("DT segments")
        ax.grid(alpha=0.3)
        hep.cms.label("", ax=ax, loc=0, rlabel="Signal MC")
        ax.text(
            0.03, 0.95,
            "%s\nall hits $z > %.0f$ cm\n%d events, %d segments"
            % ("Post-"+TRIGGER_BRANCH, Z_CUT_CM, n_pass, len(values)),
            transform=ax.transAxes, va="top", fontsize=14,
        )

        path = os.path.join(outdir, "zGT400cm_hit%s.png" % axis.upper())
        fig.savefig(path, dpi=200, bbox_inches="tight")
        plt.close(fig)
        print("Wrote %s" % path)


def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("-i", "--input-dir", default=DEFAULT_INPUT_DIR,
                        help="directory holding the ntuple .root files")
    parser.add_argument("-o", "--outdir",
                        default=os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                             "figures", "geoAccp"),
                        help="directory for the output plots")
    parser.add_argument("-n", "--max-files", type=int, default=None,
                        help="only read the first N files (for quick tests)")
    args = parser.parse_args()

    os.makedirs(args.outdir, exist_ok=True)

    segments = load_segments(args.input_dir, args.max_files)

    entry = first_hits(segments)
    plot_entry_projections(entry, args.outdir)
    plot_entry_angles(entry, args.outdir)

    plot_forward_histograms(segments, args.outdir)


if __name__ == "__main__":
    main()
