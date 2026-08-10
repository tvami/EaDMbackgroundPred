#!/usr/bin/env python3
"""Depth-merge (props-reweight) the Signal 2DAlphabet histograms of one input version.

This is the histogram-level twin of the merge inside
`skimmed_ntuple_processing_script_mergeDepths.py`. That script accumulates
`merged_hists[name].Add(hist, weight)` over the very histograms it then writes as the per-depth
`EaDM_Signal_M<mass>GeV_e<d>_<REGION>.root` files, so summing those files with the same weights
reproduces its output exactly -- verified against the v29 merged files, which are recovered from
the v29 per-depth files by least squares with a residual rms of 6e-9 (the empty-bin sentinel).

Working off the histograms rather than the ntuples is what makes this usable for v30:
  * the fork still hardcodes the **0.9999** RNN working point, while v30 is built at 0.99999
    (`--rnnCut` was added to the base script only, in the CMS_EXO26004_RNN_scale commit), and
  * it knows nothing about `h{pass,fail}_RNNscale_{up,down}`, so it would write 18 histograms
    where a v30 config expects 22.
Both come along for free when the already-produced per-depth files are the input.

Usage (from .../CMSSW_14_1_0_pre4/src, with cmsenv):
    python3 helper_scripts/merge_depths_2DA_hists.py -H histograms_for_2DAlphabet_v30
    python3 helper_scripts/merge_depths_2DA_hists.py -H histograms_for_2DAlphabet_v30 -r SR VR1 VR2
"""

import argparse
import re
import sys
from pathlib import Path

import numpy as np
import ROOT

ROOT.gROOT.SetBatch(True)

parser = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
parser.add_argument("-H", "--histDir", required=True,
                    help="histograms_for_2DAlphabet_v<N> directory holding the per-depth files")
parser.add_argument("-r", "--regions", nargs="+", default=["SR"],
                    help="regions to merge (default: SR -- the only one anything consumes)")
parser.add_argument("-o", "--outDir", default=None,
                    help="where to write the merged files (default: the --histDir itself)")
parser.add_argument("-p", "--propsDict",
                    default=str(Path(__file__).parent / "parquet_files" / "props_dict.npy"),
                    help="shell fractions from depthFractionCalcScript.py")
parser.add_argument("-n", "--dryRun", action="store_true",
                    help="print the weight table and the closure numbers, write nothing")
args = parser.parse_args()

# Same shell map and units convention as skimmed_ntuple_processing_script_mergeDepths.py:
# a SurfaceDepth-eX sample stands for the shell ending 1eX mm past the front face of the volume
# at 8 m, and e6 additionally absorbs the outermost shell beyond every generated depth.
DEPTH_SHELLS = {2: [0], 3: [1], 4: [2], 5: [3], 6: [4, 5]}

# The sentinel the per-depth files already carry, so 2DAlphabet never sees log(0). Summing
# sentinelled inputs leaves no exact zero, so this only ever matters if an input changes.
EMPTY_BIN_VALUE = 1e-8

# A missing depth sample means one of two very different things, and the difference decides
# whether the merged template is wrong or right:
#
#   (a) the sample was never produced, but the signal WOULD have been selected there. The merged
#       template then really is missing that share of the signal.
#   (b) the depth is past the muon range at this momentum, so the sample would have been empty
#       anyway. Because the weights are deliberately NOT renormalised, dropping the depth is
#       identical to including it with zero acceptance -- the merged template is already correct.
#
# Case (b) is the M1000/e6 situation: 1e6 mm of rock is ~2.6 km w.e., which a 2 TeV muon survives
# and a 1.5 TeV one does not. The measured turn-on in the v30 SR histograms, as Int(hpass+hfail)
# per 100 generated events, is e6 = 0.055 at M1500 against 7.99 at M2000 and 15.0 at M3000, versus
# ~14 at e5 for all three. Efficiency rises with mass, so the nearest mass ABOVE the one with the
# hole bounds its acceptance from above -- which is what makes the check below a bound and not a
# guess. Below this fraction of that neighbour's best depth, the missing sample is called empty.
ZERO_ACCEPTANCE_FRAC = 0.01

# depthFractionCalcScript.py runs under numpy>=2, whose pickles refer to numpy._core; CMSSW ships
# numpy 1.24, where that module is still numpy.core, so alias it before np.load.
if not hasattr(np, "_core"):
    import numpy.core
    sys.modules["numpy._core"] = numpy.core
    sys.modules["numpy._core.multiarray"] = numpy.core.multiarray

props_dict = np.load(args.propsDict, allow_pickle=True).item()
props_masses = np.array(sorted(props_dict), dtype=float)
props_table = np.array([props_dict[m] for m in sorted(props_dict)])
print(f"Loaded depth fractions for {len(props_masses)} masses from {args.propsDict}")


def depth_weight(dm_mass, depth):
    """Fraction of events at `dm_mass` that the SurfaceDepth-e{depth} sample stands in for.

    `dm_mass` is the DM particle mass, i.e. **2 x** the MinP-<N> / M<N>GeV token of the filename:
    each DM particle decays to two muons that split its mass evenly, and props_dict is keyed by
    the DM mass. exp_lim/set_limit_alphaMax.py keys the same dict the same way, so the merge and
    the limit weight the depths consistently.

    props_dict is tabulated on a coarse grid (1-9, 10-90, 100-900 TeV), so masses in between are
    interpolated shell by shell in log(mass) and renormalised; masses outside are clipped to the
    ends. np.interp is exact at the tabulated masses.
    """
    if depth not in DEPTH_SHELLS:
        raise ValueError(f"SurfaceDepth-e{depth} has no shell assignment in DEPTH_SHELLS "
                         f"(known depths: {sorted(DEPTH_SHELLS)})")

    x = np.clip(np.log(dm_mass), np.log(props_masses[0]), np.log(props_masses[-1]))
    props = np.array([np.interp(x, np.log(props_masses), props_table[:, i])
                      for i in range(props_table.shape[1])])
    props /= props.sum()

    return sum(props[i] for i in DEPTH_SHELLS[depth])


def fill_empty_bins(hist, value=EMPTY_BIN_VALUE):
    """Replace the empty bins of a TH2 with `value` so 2DAlphabet never sees log(0).

    Writes straight into the contents buffer; under/overflow cells and bin errors are left alone,
    exactly as in the fork's version of this function.
    """
    if hist.GetDimension() != 2:
        return
    if not hist.ClassName().endswith("D"):
        raise TypeError(f"fill_empty_bins expects a double-precision TH2, got {hist.ClassName()}")

    n_x, n_y = hist.GetNbinsX(), hist.GetNbinsY()
    contents = np.frombuffer(hist.GetArray(), dtype=np.float64, count=hist.GetSize())

    if contents.flags.writeable:
        core = contents.reshape(n_y + 2, n_x + 2)[1:n_y + 1, 1:n_x + 1]
        core[core == 0.] = value
    else:
        core = contents.reshape(n_y + 2, n_x + 2)[1:n_y + 1, 1:n_x + 1]
        for y_bin, x_bin in zip(*np.nonzero(core == 0.)):
            hist.SetBinContent(int(x_bin) + 1, int(y_bin) + 1, value)


def discover(hist_dir, region):
    """Map mass -> {depth: path} from the per-depth signal files of one region."""
    pattern = re.compile(rf"^EaDM_Signal_M(\d+)GeV_e(\d+)_{region}\.root$")
    found = {}
    for path in sorted(hist_dir.glob(f"EaDM_Signal_M*GeV_e*_{region}.root")):
        match = pattern.match(path.name)
        if match:
            found.setdefault(int(match.group(1)), {})[int(match.group(2))] = path
    return dict(sorted(found.items()))


def probe_missing_depth(mass, depth, by_mass):
    """Measure what a missing depth would have contributed, from the nearest mass that has it.

    Returns `(neighbour_mass, yield_at_depth, best_yield, is_above)` in Int(hpass+hfail) per 100
    generated events, or None if no other mass carries this depth. `best_yield` is that
    neighbour's largest per-depth yield, i.e. the scale a live depth sample has.

    Prefers the nearest mass ABOVE `mass`: acceptance at a fixed depth rises with momentum, so a
    heavier neighbour bounds the missing sample from above rather than merely estimating it.
    """
    have = sorted(m for m in by_mass if depth in by_mass[m] and m != mass)
    if not have:
        return None

    above = [m for m in have if m > mass]
    neighbour = min(above) if above else max(have)

    def total(path):
        src = ROOT.TFile.Open(str(path))
        if not src or src.IsZombie():
            return None
        value = src.Get("hpass").Integral() + src.Get("hfail").Integral()
        src.Close()
        return value

    at_depth = total(by_mass[neighbour][depth])
    if at_depth is None:
        return None
    best = max(filter(None, (total(p) for p in by_mass[neighbour].values())), default=0.)

    return neighbour, at_depth, best, bool(above)


def merge_mass(mass, depth_files, region, out_dir, dry_run, by_mass):
    """Write the props-weighted sum over depths of one mass point. Returns True on success."""
    weights = {d: depth_weight(mass * 2, d) for d in sorted(depth_files)}
    total_weight = sum(weights.values())

    print(f"\nM{mass}GeV (DM mass {2 * mass} GeV), {len(weights)} depths, "
          f"total weight {total_weight:.6f}")

    merged = {}
    per_depth_yield = 0.
    for depth in sorted(depth_files):
        weight = weights[depth]
        src = ROOT.TFile.Open(str(depth_files[depth]))
        if not src or src.IsZombie():
            print(f"  ERROR: cannot open {depth_files[depth]}")
            return False

        names = sorted(k.GetName() for k in src.GetListOfKeys())
        if merged and set(names) != set(merged):
            print(f"  ERROR: e{depth} has histograms {sorted(set(names) ^ set(merged))} that the "
                  f"other depths of this mass do not -- refusing to merge a ragged set")
            src.Close()
            return False

        for name in names:
            hist = src.Get(name)
            if name not in merged:
                merged[name] = hist.Clone(name)
                merged[name].SetDirectory(0)
                merged[name].Reset()
            merged[name].Add(hist, weight)

        yield_here = src.Get("hpass").Integral() + src.Get("hfail").Integral()
        per_depth_yield += weight * yield_here
        print(f"  e{depth}: weight {weight:.6f}, Int(hpass+hfail) {yield_here:.6f}  "
              f"[{depth_files[depth].name}]")
        src.Close()

    # A depth with no sample is folded in as a depth with zero acceptance, because the weights are
    # not renormalised. Whether that is a defect or the right answer depends on why the sample is
    # absent -- see the ZERO_ACCEPTANCE_FRAC note at the top -- so measure it rather than assume.
    if total_weight < 0.99:
        merged_yield = per_depth_yield
        for depth in sorted(set(DEPTH_SHELLS) - set(weights)):
            share = depth_weight(mass * 2, depth)
            probe = probe_missing_depth(mass, depth, by_mass)

            if probe is None:
                print(f"  WARNING: M{mass}GeV has no e{depth} sample and no other mass has one "
                      f"either, so its acceptance is unmeasured. If it is not zero, the merged "
                      f"template is missing a weight-{share:.6f} share of the signal.")
                continue

            neighbour, at_depth, best, is_above = probe
            frac = at_depth / best if best else 0.
            # The neighbour bounds the missing sample only when it is the heavier one
            bound = "at most" if is_above else "roughly"
            adds = share * at_depth
            pct = 100 * adds / merged_yield if merged_yield else float("nan")
            bounds_note = " (heavier, so it bounds this one from above)" if is_above else ""

            if frac < ZERO_ACCEPTANCE_FRAC:
                print(f"  NOTE: M{mass}GeV has no e{depth} sample, and it would be empty. "
                      f"M{neighbour}GeV, the nearest mass that has one{bounds_note}, selects "
                      f"{at_depth:.4f} events per 100 generated at e{depth} against {best:.4f} at "
                      f"its best depth ({100 * frac:.2f}%): e{depth} is past the muon range at "
                      f"this momentum, so the sample is treated as ZERO ACCEPTANCE. The weights "
                      f"are not renormalised, so that is exactly what this merge already does -- "
                      f"the histograms are correct as written and no 1/sum(w) penalty applies "
                      f"(weights sum to {total_weight:.6f}). Generating e{depth} would add "
                      f"{bound} {adds:.4f} events to the merged {merged_yield:.4f} ({pct:+.2f}%).")
            else:
                shortfall = f"{1 / total_weight:.3f}" if total_weight > 0 else "inf"
                print(f"  WARNING: M{mass}GeV has no e{depth} sample and it would NOT be empty: "
                      f"M{neighbour}GeV{bounds_note} selects {at_depth:.4f} events per 100 "
                      f"generated there, {100 * frac:.2f}% of its best depth. The merged template "
                      f"is therefore missing a weight-{share:.6f} share of the signal ({bound} "
                      f"{adds:.4f} events, {pct:+.2f}%); with the weights summing to "
                      f"{total_weight:.6f} the limit derived from it is too weak by up to a "
                      f"factor {shortfall}. Generate e{depth} for this mass before using it.")

    # Closure: the merged yield must equal the weighted sum of the per-depth yields it was built
    # from. This is the arithmetic the merge is, so anything but agreement at rounding level means
    # a histogram was dropped or double-counted.
    observed = merged["hpass"].Integral() + merged["hfail"].Integral()
    ratio = observed / per_depth_yield if per_depth_yield else float("nan")
    print(f"  closure: merged Int(hpass+hfail) = {observed:.6f}, weighted per-depth sum = "
          f"{per_depth_yield:.6f}, ratio = {ratio:.9f}")
    if not np.isfinite(ratio) or abs(ratio - 1.) > 1e-9:
        print(f"  WARNING: M{mass}GeV merged yield disagrees with the weighted per-depth sum by "
              f"{100 * (ratio - 1):+.6f}% -- do not use these histograms for a limit.")
        return False

    for hist in merged.values():
        fill_empty_bins(hist)

    # The per-depth RNN score distributions are unit-normalised, so renormalise after summing
    if "hist_RNNScore" in merged:
        integral = merged["hist_RNNScore"].Integral()
        if integral > 0:
            merged["hist_RNNScore"].Scale(1 / integral)
        else:
            print(f"  WARNING: merged hist_RNNScore for M{mass}GeV is empty, leaving it "
                  "unnormalised")

    out_path = out_dir / f"EaDM_Signal_M{mass}GeV_mergedDepth_{region}.root"
    if dry_run:
        print(f"  [dry run] would write {len(merged)} histograms to {out_path}")
        return True

    out_file = ROOT.TFile(str(out_path), "RECREATE")
    for hist in merged.values():
        hist.Write()
    out_file.Close()
    print(f"  wrote {len(merged)} histograms to {out_path}")
    return True


def main():
    hist_dir = Path(args.histDir)
    if not hist_dir.is_dir():
        raise SystemExit(f"ERROR: no such histogram directory: {hist_dir}")
    out_dir = Path(args.outDir) if args.outDir else hist_dir
    out_dir.mkdir(parents=True, exist_ok=True)

    failures = []
    for region in args.regions:
        region = region.upper()
        by_mass = discover(hist_dir, region)
        print(f"\n{'=' * 78}\n{region}: {len(by_mass)} mass points with depth samples in "
              f"{hist_dir}\n{'=' * 78}")
        if not by_mass:
            print(f"WARNING: no EaDM_Signal_M*GeV_e*_{region}.root in {hist_dir}")
            continue

        for mass, depth_files in by_mass.items():
            if not merge_mass(mass, depth_files, region, out_dir, args.dryRun, by_mass):
                failures.append(f"{region} M{mass}GeV")

    if failures:
        raise SystemExit(f"\nFAILED: {len(failures)} mass points did not merge cleanly: "
                         + ", ".join(failures))
    print("\nAll mass points merged cleanly.")


if __name__ == "__main__":
    main()
