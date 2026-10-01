#!/usr/bin/env python3
"""Continuous decay-depth weights for the Signal depth merge.

Replaces the shell-assignment weighting of `depthFractionCalcScript.py` +
`DEPTH_SHELLS` in `merge_depths_2DA_hists.py`, which assigns each shell of the
decay-depth distribution wholesale to one generated SurfaceDepth sample and so
misplaces every event by up to a full decade of rock.

What it computes instead, per mass point:

    N = Integral_0^4km  f(z) eps(z) dz

with f(z) the decay-depth distribution of muons that reach the detector (the same
`dist_from_depths_at_detector` parquets `depthFractionCalcScript.py` reads) and
eps(z) the conditional SR selection efficiency, log-log interpolated in z between
the generated depths.  It then returns per-depth weights

    w_d = Integral_{z nearest d} f(z) * [eps(z)/eps(z_d)] dz

so that sum_d w_d eps(z_d) == the integral EXACTLY, while each region of z keeps
the template shape of its nearest generated depth.  That makes the output a
drop-in for `merge_depths_2DA_hists.py`: only `depth_weight()` changes.

Two things this does NOT fix, both measured and reported by --validate:

  * eps(z) is NOT a function of arriving momentum alone.  At equal P_arr the e6
    samples sit 1.8-3.2x above e2-e4, because 1 km of rock also hardens the
    ANGULAR mix (large-theta_y muons traverse more slant rock and are absorbed),
    and vertical muons reconstruct better.  So the depth axis cannot be folded
    into the momentum axis; the interpolation is in z, and it needs real samples.
  * leave-one-out over the generated depths shows the log-z interpolation closes
    to 3% at e3 but only ~27% (median) at e5, i.e. exactly in the decade that
    carries most of the weight.  That residual is the systematic to quote.  It
    goes away only by generating depths inside [1e5, 1e6] mm.

Usage (from .../CMSSW_14_1_0_pre4/src, with cmsenv, and a pandas on PYTHONPATH):
    python3 helper_scripts/depthWeightsContinuous.py -H histograms_for_2DAlphabet_v30
    python3 helper_scripts/depthWeightsContinuous.py -H histograms_for_2DAlphabet_v30 --validate
"""

import argparse
import json
import re
from pathlib import Path

import numpy as np
import pandas as pd
import ROOT

ROOT.gROOT.SetBatch(True)

# --- muon transport in standard rock, dE/dX = a + bE ---------------------------
# Used ONLY to extrapolate past the deepest generated sample (1e6 mm), where the
# measured e6 turn-on in arriving momentum supplies the shape.
# RHO matches RhoRock in the CosMuoGenProducer fragments the samples were made with
# (EXO-MCsampleRequests genFragments/.../CosmicToMu_*_cosmuogen.py), NOT the 2.65 of
# generic standard rock.
A_ROCK, B_ROCK, RHO = 2.0e-3, 4.0e-6, 2.50      # GeV cm^2/g, cm^2/g, g/cm^3
E_CRIT = A_ROCK / B_ROCK                         # ~500 GeV


def P_arrive(P0, z_mm):
    """Momentum [GeV] on arrival after z mm of standard rock (mean loss)."""
    X = np.asarray(z_mm, float) * 0.1 * RHO      # mm -> cm -> g/cm^2
    return np.maximum((np.asarray(P0, float) + E_CRIT) * np.exp(-B_ROCK * X) - E_CRIT, 0.0)


# --- the generated depth grid --------------------------------------------------
# Depth samples are keyed by their DEPTH IN MM, not by the exponent, because the grid
# is no longer one sample per decade: the 20260817 request adds 2e5, 3e5 and 5e5 mm
# inside the [1e5, 1e6] decade.  Keying by mm keeps sorted()/max() in physical order,
# which an 'e5'/'2e5' string key would not ('2e5' < 'e0' lexically).
#
# DEPTH_TAG_RE matches the token as it appears in both the dataset name
# (SurfaceDepth-2e5) and the histogram file name (..._2e5_SR.root).
DEPTH_TAG_RE = r'(?:\d+)?e\d+'


def depth_mm(tag):
    """'e5' -> 100000.0, '2e5' -> 200000.0, 'e0' -> 1.0."""
    return float(tag if tag[0].isdigit() else '1' + tag)


DEPTH_TAGS = ('e0', 'e2', 'e3', 'e4', 'e5', '2e5', '3e5', '5e5', 'e6')
TAG_OF_DEPTH = {int(depth_mm(x)): x for x in DEPTH_TAGS}
Z_OF_DEPTH = {mm: float(mm) for mm in TAG_OF_DEPTH}

DEEPEST = int(depth_mm('e6'))
Z_MAX = 4e6                     # outer edge of the generation volume, 4 km
START = 8.0                     # m, front face of the volume in the parquet axis

PARQUET_DIR = ('/home/users/smasanam/EarthAsDMProject/CMSSW_14_1_0_pre5/src/'
               'helper_scripts/parquet_files')
PARQUET_TPL = ('dist_from_depths_at_detector_masses_{a}_{b}_depth_-8.0--4000.0_'
               'diskR_4000.0_mDM_{a}.0-{b}.0_mA_0.22_dmModel_mom_con_ave_eloss__'
               'DETYCON_20.0.parquet')
PARQUET_BLOCKS = [(1000, 9000), (10000, 90000), (100000, 900000)]

# The coarse DM-mass grid the parquets are tabulated on.
TAB_MASSES = np.array(sorted(set(list(range(1000, 10000, 1000))
                                 + list(range(10000, 100000, 10000))
                                 + list(range(100000, 1000000, 100000)))))


def load_parquets(parquet_dir):
    return [pd.read_parquet(Path(parquet_dir) / PARQUET_TPL.format(a=a, b=b))
            for a, b in PARQUET_BLOCKS]


def _decay_pdf_tabulated(frames, dm_mass):
    """(lo_mm, hi_mm, prob) of the decay-depth distribution at a TABULATED mass.

    'count' is a probability density on a geometric binning whose right-most edge
    is missing, so it is recovered from the constant bin ratio -- the same
    reconstruction depthFractionCalcScript.py does.
    """
    df = frames[0] if dm_mass < 10000 else frames[1] if dm_mass < 100000 else frames[2]
    bin_start = df[f'{dm_mass} bin_start'].values
    density = df[f'{dm_mass} count'].values

    ratios = bin_start[1:] / bin_start[:-1]
    if not np.allclose(ratios, ratios[0]):
        raise ValueError(f'mass {dm_mass}: bin_start is not geometrically spaced')
    edges = np.append(bin_start, bin_start[-1] * ratios[0])

    prob = density * np.diff(edges)
    mm = (edges - START) * 1000.0                # metre axis -> mm past the detector
    keep = mm[1:] > 0                            # drop everything above the front face
    return np.maximum(mm[:-1], 0.)[keep], mm[1:][keep], prob[keep] / prob[keep].sum()


def decay_pdf(frames, dm_mass):
    """Same, at ANY mass: interpolated in log(mass) between bracketing tabulated
    masses, matching how merge_depths_2DA_hists.py interpolates the props."""
    dm_mass = float(np.clip(dm_mass, TAB_MASSES[0], TAB_MASSES[-1]))
    if dm_mass in TAB_MASSES:
        return _decay_pdf_tabulated(frames, int(dm_mass))

    j = int(np.searchsorted(TAB_MASSES, dm_mass))
    lo_m, hi_m = int(TAB_MASSES[j - 1]), int(TAB_MASSES[j])
    lo, hi, p_lo = _decay_pdf_tabulated(frames, lo_m)
    _, _, p_hi = _decay_pdf_tabulated(frames, hi_m)
    t = (np.log(dm_mass) - np.log(lo_m)) / (np.log(hi_m) - np.log(lo_m))
    p = (1 - t) * p_lo + t * p_hi
    return lo, hi, p / p.sum()


# --- the measured efficiency grid ----------------------------------------------
def read_eff_grid(hist_dir, region='SR'):
    """{MinP: {depth: Int(hpass+hfail)}} from the per-depth signal histograms.

    These are normalized per 100 events passing cosmicInTracker, i.e. they are
    CONDITIONAL selection efficiencies; the absolute depth-dependent acceptance is
    already carried by f(z), which is the depth distribution of muons that reach
    the detector.  Multiplying the two is therefore the correct decomposition.
    """
    pattern = re.compile(rf'^EaDM_Signal_M(\d+)GeV_({DEPTH_TAG_RE})_{region}\.root$')
    grid = {}
    for path in sorted(Path(hist_dir).glob(f'EaDM_Signal_M*GeV_*e*_{region}.root')):
        m = pattern.match(path.name)
        if not m:
            continue
        src = ROOT.TFile.Open(str(path))
        if not src or src.IsZombie():
            print(f'  ERROR: cannot open {path}')
            continue
        grid.setdefault(int(m.group(1)), {})[int(depth_mm(m.group(2)))] = (
            src.Get('hpass').Integral() + src.Get('hfail').Integral())
        src.Close()
    return dict(sorted(grid.items()))


def make_turnon(grid):
    """The measured e6 efficiency as a function of arriving momentum, normalized to
    its plateau.  This is what extrapolates eps past the deepest sample: beyond
    1e6 mm the only thing still changing fast is whether the muon clears the
    200 GeV pT cut, and the e6 samples measure exactly that curve."""
    pts = sorted((float(P_arrive(mp, Z_OF_DEPTH[DEEPEST])), grid[mp][DEEPEST])
                 for mp in grid if np.isfinite(grid[mp].get(DEEPEST, np.nan)))
    pa = np.array([p for p, _ in pts])
    ev = np.array([e for _, e in pts])
    plateau = ev.max()

    def turnon(p_arr):
        return np.clip(np.interp(p_arr, pa, ev / plateau), 0.0, 1.0)
    return turnon


def eps_of_z(grid, turnon, min_p, z_mm):
    """Conditional SR efficiency at arbitrary depth for one MinP point."""
    have = {d: grid[min_p][d] for d in sorted(grid[min_p])
            if np.isfinite(grid[min_p].get(d, np.nan)) and grid[min_p][d] > 0}
    lz = np.log([Z_OF_DEPTH[d] for d in have])
    le = np.log(list(have.values()))
    order = np.argsort(lz)

    z = np.atleast_1d(np.asarray(z_mm, float))
    out = np.exp(np.interp(np.log(np.maximum(z, 1.0)), lz[order], le[order]))

    deepest = max(have)
    beyond = z > Z_OF_DEPTH[deepest]
    if beyond.any():
        base = have[deepest]
        t0 = float(turnon(float(P_arrive(min_p, Z_OF_DEPTH[deepest]))))
        out[beyond] = base * (turnon(P_arrive(min_p, z[beyond])) / t0 if t0 > 0 else 0.0)
    return out


def weights_for(grid, frames, turnon, min_p, n_z=4000):
    """(integral, {depth: weight}) for one MinP point."""
    lo, hi, prob = decay_pdf(frames, 2 * min_p)
    have = {d: grid[min_p][d] for d in Z_OF_DEPTH
            if np.isfinite(grid[min_p].get(d, np.nan)) and grid[min_p][d] > 0}

    z = np.geomspace(1.0, Z_MAX, n_z)
    eps = eps_of_z(grid, turnon, min_p, z)
    cdf = np.interp(z, np.concatenate([lo[:1], hi]),
                    np.concatenate([[0.0], np.cumsum(prob)]))
    f = np.gradient(cdf, z)

    integral = float(np.trapz(eps * f, z))

    depths = sorted(have)
    if not depths:
        return integral, {}
    log_dz = np.array([np.log(Z_OF_DEPTH[d]) for d in depths])
    nearest = np.argmin(np.abs(np.log(z)[:, None] - log_dz[None, :]), axis=1)

    w = {}
    for i, d in enumerate(depths):
        w[d] = float(np.trapz(np.where(nearest == i, eps / have[d], 0.0) * f, z))
    return integral, w


def decay_cdf(frames, dm_mass, z_mm):
    """Fraction of decays shallower than z_mm (mm past the front face)."""
    lo, hi, prob = decay_pdf(frames, dm_mass)
    return np.interp(z_mm, np.concatenate([lo[:1], hi]),
                     np.concatenate([[0.0], np.cumsum(prob)]))


def shell_weights(frames, min_p, depths, mode):
    """Whole-shell weights on the generated grid, for the depth-binning systematic.

    'less':    sample d stands for (d_prev, d]; the deepest also takes (d_max, Z_MAX].
    'greater': sample d stands for [d, d_next); the shallowest also takes [0, d_min).
    `depths` is the full generated grid, so a mass lacking a sample loses that shell
    (zero acceptance, same convention as the legacy merge).
    """
    edges = sorted(depths)
    F = decay_cdf(frames, 2 * min_p, np.array([Z_OF_DEPTH[d] for d in edges], float))
    F_out = np.append(F, 1.0)
    w = {}
    for i, d in enumerate(edges):
        if mode == 'less':
            w[d] = float(F[i] - (F[i - 1] if i else 0.0))
        elif mode == 'greater':
            w[d] = float(F_out[i + 1] - F[i])
        else:
            raise ValueError(mode)
    if mode == 'less':
        w[edges[-1]] += float(1.0 - F[-1])
    else:
        w[edges[0]] += float(F[0])
    return w


# --- validation ----------------------------------------------------------------
def leave_one_out(grid):
    """Predict each interior generated depth from the others by log-log interpolation.
    The spread of pred/true IS the depth-interpolation systematic."""
    report = {}
    all_depths = sorted({d for mp in grid for d in grid[mp]})
    for d in all_depths[1:-1]:   # interior depths only, keyed by mm
        ratios = []
        for min_p in sorted(grid):
            have = {k: v for k, v in grid[min_p].items() if np.isfinite(v) and v > 0}
            others = [k for k in have if k != d]
            if d not in have or len(others) < 2:
                continue
            lz = np.log([Z_OF_DEPTH[k] for k in others])
            le = np.log([have[k] for k in others])
            o = np.argsort(lz)
            ratios.append(float(np.exp(np.interp(np.log(Z_OF_DEPTH[d]), lz[o], le[o]))) / have[d])
        report[d] = np.array(ratios)
    return report


def momentum_collapse(grid):
    """Is eps a function of arriving momentum alone?  Mean eps in P_arr bands,
    split by generated depth.  If the depth columns agree the collapse holds."""
    pts = [(float(P_arrive(mp, Z_OF_DEPTH[d])), grid[mp][d], d)
           for mp in grid for d in grid[mp] if np.isfinite(grid[mp][d])]
    bands = [(180, 400), (400, 800), (800, 1600), (1600, 3200),
             (3200, 7000), (7000, 2e4), (2e4, 1e5)]
    rows = []
    for lo, hi in bands:
        cols = []
        for sel in ((100, 1000, 10000), (100000,), (1000000,)):   # mm
            v = [e for pa, e, d in pts if lo <= pa < hi and d in sel]
            cols.append(np.mean(v) if v else float('nan'))
        rows.append(((lo, hi), cols))
    return rows


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('-H', '--histDir', required=True,
                    help='histograms_for_2DAlphabet_v<N> holding the per-depth signal files')
    ap.add_argument('-r', '--region', default='SR')
    ap.add_argument('-p', '--parquetDir', default=PARQUET_DIR)
    ap.add_argument('-o', '--out',
                    default=str(Path(__file__).parent / 'parquet_files'
                                / 'depth_weights_continuous.npy'))
    ap.add_argument('--validate', action='store_true',
                    help='also print the momentum collapse and leave-one-out closure')
    args = ap.parse_args()

    grid = read_eff_grid(args.histDir, args.region)
    if not grid:
        raise SystemExit(f'ERROR: no per-depth {args.region} signal files in {args.histDir}')
    frames = load_parquets(args.parquetDir)
    turnon = make_turnon(grid)
    print(f'Loaded {len(grid)} mass points from {args.histDir} ({args.region})')

    if args.validate:
        print('\n=== does eps collapse onto one curve in arriving momentum? ===')
        print(f"{'P_arr band [GeV]':>18} {'e2-e4':>9} {'e5':>9} {'e6':>9}")
        for (lo, hi), cols in momentum_collapse(grid):
            print(f"{f'[{lo:.0f}, {hi:.0f})':>18} "
                  + ' '.join('     --  ' if np.isnan(c) else f'{c:9.3f}' for c in cols))
        print('  -> e6 sits well above e2-e4 at equal P_arr: depth also hardens the')
        print('     angular mix, so momentum alone does NOT parametrize the efficiency.')

        print('\n=== leave-one-out closure of the log-z interpolation ===')
        for d, r in leave_one_out(grid).items():
            if len(r) == 0:
                continue
            print(f'  {TAG_OF_DEPTH.get(d, d):>4}: n={len(r):3d}  median pred/true = '
                  f'{np.median(r):.4f}   max |dev| = {100 * np.max(np.abs(r - 1)):5.1f}%')
        print('  -> quote the worst interior depth as the depth-interpolation systematic.')

    grid_depths = sorted({d for mp in grid for d in grid[mp]})
    tags = '/'.join(TAG_OF_DEPTH.get(d, str(d)) for d in grid_depths)
    print(f"\n{'MinP':>7} {'m_DM':>8} {'integral':>10}   weights {tags}")
    out = {}
    for min_p in sorted(grid):
        integral, w = weights_for(grid, frames, turnon, min_p)
        out[min_p] = {'integral': integral, 'weights': w,
                      'lessThan': shell_weights(frames, min_p, grid_depths, 'less'),
                      'greaterThan': shell_weights(frames, min_p, grid_depths, 'greater')}
        flag = ''
        if w and max(w.values()) > 1.5:
            flag = '   <-- no generated depth can represent the deep shell; generate one'
        print(f'{min_p:>7} {2 * min_p:>8} {integral:10.4f}   '
              + ' '.join(f'{w.get(d, 0.0):.4f}' for d in grid_depths) + flag)

    Path(args.out).parent.mkdir(parents=True, exist_ok=True)
    np.save(args.out, out, allow_pickle=True)
    print(f'\nwrote {args.out}')
    print('Pass it to merge_depths_2DA_hists.py -w: nominal = weights, '
          'depthBin up/down = greaterThan/lessThan (keyed by MinP).')


if __name__ == '__main__':
    main()
