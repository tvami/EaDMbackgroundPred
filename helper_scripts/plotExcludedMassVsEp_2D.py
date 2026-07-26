"""
Plots CMS Run 3 cosmics exclusion limits in the (m_chi, epsilon) plane
for a dark photon mediator model (m_A' = 0.245 GeV).

Two panels are produced:
  Left  (n=0): Thermal coupling scenario  — alpha_x = 0.035 * (m_chi / TeV)
  Right (n=1): Maximum coupling scenario  — alpha_x = 0.058 * (m_chi / TeV)

The right panel overlays six contour-filled exclusion regions corresponding
to different tracker timing resolutions (0 mm → 1e6 mm), colored and styled
distinctly. The left panel draws a simple thermal exclusion boundary.

Output: figures/ExcludedMass_mX_ep_explim_Run3VolLim.png
"""

import matplotlib.pyplot as plt
import mplhep as hep
import pandas as pd
import numpy as np
from matplotlib import cm
from matplotlib.colors import LogNorm
import matplotlib.ticker as mticker
from matplotlib import rcParams
from matplotlib.font_manager import FontProperties
from matplotlib.patches import Patch
from matplotlib.path import Path
import argparse

parser = argparse.ArgumentParser(description='')
parser.add_argument('-l','--limit_directory', action='store', dest='limit_directory', help='Limit directory')
parser.add_argument('-L','--livetime', action='store', dest='livetime', help='Livetime')
parser.add_argument('--fixedDepth', action='store_true', dest='fixedDepth',
                    help='Overlay the per-depth (e0..e6) fixed-depth exclusion regions '
                         'instead of the single volume-weighted region.')
parser.add_argument('--band68', action='store_true', dest='band68',
                    help='Second version of the plot: overlay the median contour plus the 68%% AND '
                         '95%% expected bands (the +-1sigma / +-2sigma expected limits crossing the '
                         'theory curve). Uses the exp_lim_lower/upper[95][_closed] JSON arrays.')
parser.add_argument('--use-cache', action='store_true', dest='use_cache',
                    help='Band mode only: skip the JSON/parquet and redraw straight from the cached '
                         'interpolated band-edge points (band_edges_cache_<yaxis>.npz, written on the '
                         'previous non-cache band run). Lets you re-run instantly after editing the '
                         'BAND_* colors at the top of this script -- no ROOT/el8/parquet needed.')
parser.add_argument('--yaxis', action='store', dest='y_axis', default='epsilon',
                    choices=['epsilon', 'lifetime'],
                    help="Vertical axis variable: 'epsilon' (default) or 'lifetime' (ctau).")
parser.add_argument('--heatmap', action='store_true', dest='heatmap',
                    help='Third version of the plot: a 2D heatmap of the expected signal strength '
                         'mu = predicted signal rate / median 95%% CL expected excluded rate, over the '
                         '(m_chi, epsilon) plane. mu>1 (red) is excluded and the mu=1 contour is the '
                         'exclusion boundary. Needs the parquet signal rates (el8 + borrowed pyarrow) '
                         'and the band-edge cache from a previous --band68 run.')
parser.add_argument('--ribbon', action='store_true', dest='ribbon',
                    help='Band mode only: render the 68%%/95%% uncertainty as thin ribbons hugging the '
                         'exclusion contour (fill between adjacent +-sigma curves on each mass edge) '
                         'instead of solid nested filled windows. Makes the band WIDTH visible; the '
                         'default (no flag) keeps the original filled-blob look.')
args = parser.parse_args()

limit_directory = args.limit_directory
livetime = args.livetime
fixedDepth = args.fixedDepth
band68 = args.band68
use_cache = args.use_cache

# ── BAND COLORS ─────────────────────────────────────────────────────────────
# Edit these, then re-run with --band68 --use-cache for an instant recolor
# (reads the cached edge points; no JSON/parquet/ROOT). CMS mplhep band colors.
MEDIAN_COLOR = 'black'
BAND68_COLOR = '#FFDF7F'   # gold  (68% expected)
BAND95_COLOR = '#85D1FB'   # blue  (95% expected)
BAND68_ALPHA = 1.0        # opaque: layers are nested, so no color-mixing at edges
BAND95_ALPHA = 1.0
MEDIAN_LW    = 2.4         # median contour line width
EDGE_LW      = 1.4         # band-edge outline width (marks the +-sigma crossings)

# ── GLOBAL PLOT SETTINGS ────────────────────────────────────────────────────
pd.set_option('display.max_columns', None)
plt.rcParams.update({'font.size': 22})
cms_fp = FontProperties(family="sans-serif", weight="bold")
y_axis = args.y_axis # Can be either lifetime or epsilon (set via --yaxis)

# ── HEATMAP MODE ─────────────────────────────────────────────────────────────
# Self-contained "third version": a 2D colour-map of the SIGNAL STRENGTH
#   mu(m_chi, eps) = predicted signal rate / median 95% CL expected excluded rate,
# so mu > 1 (red) is excluded, mu < 1 (blue) is not, and the mu = 1 contour IS the
# median expected exclusion boundary. It builds + saves its own figure and exits
# before the contour-plot machinery below.
#
# The excluded rate depends ONLY on the mass (the combine limit is set by the signal
# template shape, not the coupling), so we reconstruct limit_rate(m) once: the median
# exclusion contour is by definition the locus theory==limit, so at each contour point
# (m_c, eps_c) we have limit_rate(m_c) = theory_rate(m_c, eps_c). We read those theory
# rates off the parquet grid (interp), giving a coupling-independent limit_rate(m) that
# is then applied to BOTH panels -> mu = theory_panel / limit_rate(m).
if args.heatmap:
    import sys, os
    from matplotlib.colors import LogNorm
    from scipy.interpolate import RegularGridInterpolator

    if y_axis != 'epsilon':
        raise SystemExit("--heatmap currently supports only --yaxis epsilon.")

    months = float(livetime)
    MA_TARGET = 0.245                                    # m_A' shown on the panels [GeV]
    PARQUET = ('helper_scripts/parquet_files/rates_muons_electrons_both_alphas'
               '_MX_1TeV_to_100TeV_special_granularity_fewer_columns.parquet')

    # Snap to the nearest simulated m_A' grid point, then pull only muons at that
    # mass (push the cuts into the parquet reader so we never materialise 54M rows).
    ma_u = np.sort(pd.read_parquet(PARQUET, columns=['ma'])['ma'].unique())
    ma_val = ma_u[np.argmin(np.abs(ma_u - MA_TARGET))]
    dfh = pd.read_parquet(
        PARQUET,
        columns=['mx', 'epsilon', 'alpha_therm_or_max', 'rate_CMS_1month'],
        filters=[('final_state_particles', '==', 'muons'), ('ma', '==', ma_val)],
    )

    def _grid(alpha):
        """(mx[GeV], eps, rate[eps,mx]) monthly-rate grid for one coupling scenario."""
        s = dfh[dfh.alpha_therm_or_max == alpha]
        mx = np.sort(s.mx.unique()); ep = np.sort(s.epsilon.unique())
        Z = (s.pivot_table(index='epsilon', columns='mx', values='rate_CMS_1month')
              .reindex(index=ep, columns=mx).values)
        return mx, ep, Z

    # ---- reconstruct limit_rate(m) from the MAX median contour (theory==limit) ----
    _cache = os.path.join('exp_lim', f'signal_{limit_directory}_livetime_{livetime}_limit',
                          f'band_edges_cache_{y_axis}.npz')
    if not os.path.exists(_cache):
        raise SystemExit("--heatmap needs the band-edge cache (%s); run --band68 once first." % _cache)
    _c = np.load(_cache)
    med_lo, med_hi, med_yy = _c['med_lo'], _c['med_hi'], _c['med_yy']   # GeV, GeV, eps

    mxM, epM, ZM = _grid('MAX')
    _theoryI = RegularGridInterpolator(
        (np.log(epM), np.log(mxM)), np.log(np.where(ZM > 0, ZM, 1e-300)),
        bounds_error=False, fill_value=np.nan)
    pts = []
    for edge in (med_lo, med_hi):
        for m_c, e_c in zip(edge, med_yy):
            if not (mxM.min() <= m_c <= mxM.max() and epM.min() <= e_c <= epM.max()):
                continue
            lr = np.exp(_theoryI([[np.log(e_c), np.log(m_c)]])[0])
            if np.isfinite(lr) and lr > 0:
                pts.append((m_c, lr))
    pts = np.asarray(sorted(pts))
    _um = np.unique(pts[:, 0])
    _lr = np.array([np.exp(np.mean(np.log(pts[pts[:, 0] == u, 1]))) for u in _um])  # geo-mean dups

    def limit_rate(m_gev):
        """Median 95% CL expected excluded signal rate (events/month) at mass m [GeV]."""
        return np.exp(np.interp(np.log(m_gev), np.log(_um), np.log(_lr)))  # flat-extrapolates edges

    # cmsstyle 2D default: sequential, perceptually-uniform viridis on a log mu scale
    # (mu spans orders of magnitude). mu=1 is not a colour midpoint here, so the
    # exclusion boundary is marked explicitly by the dashed mu=1 contour below.
    norm = LogNorm(vmin=1e-2, vmax=1e2)                   # colour saturates at 100x either way

    fig, _axs = plt.subplots(nrows=1, ncols=2, figsize=(22, 10), constrained_layout=True)
    axs = _axs.flatten()
    mesh = None
    tev_fmt = mticker.FuncFormatter(lambda x, pos: f"{x*1e-3:g}")

    for n, ax in enumerate(axs):
        alpha = 'THERMAL' if n == 0 else 'MAX'
        mx, ep, Z = _grid(alpha)
        mu = Z / limit_rate(mx)[None, :]                 # limit depends on mass only
        mu_m = np.ma.masked_where(~(Z > 0), mu)
        mesh = ax.pcolormesh(mx, ep, mu_m, cmap='viridis', norm=norm, shading='auto')
        # mu = 1 contour == the median expected exclusion boundary; white halo + black
        # dashed for contrast against the mid-tone (greenish) viridis at mu~1.
        try:
            cs = np.where(Z > 0, mu, np.nan)
            ax.contour(mx, ep, cs, levels=[1.0], colors='w', linewidths=3.2)
            ax.contour(mx, ep, cs, levels=[1.0], colors='k', linewidths=1.6,
                       linestyles='--')
        except Exception:
            pass

        ax.set_xscale('log'); ax.set_yscale('log')
        ax.set_xlim(mx.min(), mx.max()); ax.set_ylim(1e-9, 1e-6)
        ax.set_xlabel(r"$m_\chi\;\mathrm{[TeV]}$", fontsize=42)
        ax.set_ylabel(r"$\varepsilon$", fontsize=46)
        ax.tick_params(labelsize=28)
        ax.xaxis.set_major_formatter(tev_fmt)

        if n == 0:
            lab = (r"$m_{A^\prime} = 0.245\;\mathrm{GeV}$" "\n"
                   r"$\alpha_{x}^{\text{thermal}}=0.035\;\mathrm{m_{\chi}/TeV}$")
        else:
            lab = (r"$m_{A^\prime} = 0.245\;\mathrm{GeV}$" "\n"
                   r"$\alpha_{x}^{\text{max}}=0.17\;(\mathrm{m_{\chi}/TeV})^{1.61}$")
        ax.annotate(lab, xy=(0.05, 0.975), xycoords="axes fraction", ha="left",
                    va="top", fontsize=22)

        hep.cms.label("Work in Progress", data=True, loc=0, ax=ax,
                      rlabel=f"Run 3 Cosmics ({livetime} month)", fontsize=24)

    # Colour axis = expected signal strength mu = predicted signal rate / median 95%
    # CL expected excluded rate; the mu=1 (log10 mu=0) contour is the exclusion edge.
    cbar = fig.colorbar(mesh, ax=axs.tolist(), pad=0.01, aspect=30,
                        ticks=[1e-2, 1e-1, 1, 1e1, 1e2])
    cbar.ax.set_yticklabels([r'$10^{-2}$', r'$10^{-1}$', r'$1$', r'$10$', r'$10^{2}$'])
    cbar.set_label(r"Signal strength $\mu$ (predicted / 95% CL excluded)", fontsize=26)
    cbar.ax.tick_params(labelsize=22)

    outbase = (f"figures/ExcludedMass_mX_ep_explim_signal_{limit_directory}"
               f"_livetime_{livetime}_heatmap")
    fig.savefig(outbase + ".pdf", bbox_inches='tight')
    fig.savefig(outbase + ".png", dpi=200, bbox_inches='tight')
    print(f"Wrote {outbase}.pdf / .png")
    sys.exit(0)

# ── LOAD DATA ────────────────────────────────────────────────────────────────
# Parquet file contains signal rates for muons, electrons, and combined,
# over a grid of (mx, epsilon, ma) with thermal and max coupling scenarios.
# Only the unique (mx, epsilon) scan points are used below (kept for potential
# rate overlays); band mode does not need them, so we skip the (pyarrow-heavy)
# parquet load entirely there to keep the fast recolor path dependency-free.
df = None
if not band68:
    df = pd.read_parquet(
        'helper_scripts/parquet_files/rates_muons_electrons_both_alphas_MX_1TeV_to_100TeV_special_granularity_fewer_columns.parquet'
    )

# ── EXCLUSION BOUNDARY ARRAYS ────────────────────────────────────────────────
# Values are m_chi in TeV; -1 means "no limit at this epsilon point."
# _closed = the upper/inner edge of the exclusion band (upper limit w.r.t mass).
# no suffix = the outer/lower edge of the exclusion band (lower limit w.r.t mass).
#
# These are read from the JSON that step 2 (set_limit_general_..._volumeLimits.py)
# writes into its --outdir, so they no longer have to be pasted in by hand.
import json, os
DEPTHS = ['e0', 'e2', 'e3', 'e4', 'e5', 'e6']

def _load_limits(subdir):
    p = os.path.join("exp_lim", subdir, "exclusion_limits.json")
    with open(p) as f:
        d = json.load(f)
    print(f"Loaded exclusion limits from {p}")
    return d

if band68 and fixedDepth:
    raise SystemExit("--band68 and --fixedDepth are mutually exclusive.")
if use_cache and not band68:
    raise SystemExit("--use-cache only applies to --band68.")

# Cache of the interpolated band-edge points, so a color-only re-run can skip the
# JSON + parquet + interpolation. y-axis specific (epsilon vs ctau change the grid).
_cache_dir = os.path.join("exp_lim", f"signal_{limit_directory}_livetime_{livetime}_limit")
BAND_CACHE_PATH = os.path.join(_cache_dir, f"band_edges_cache_{args.y_axis}.npz")

# The five nested band curves, outer->inner. Each maps a legend role to the
# (open_arr_key, closed_arr_key) pair in exclusion_limits.json.
BAND_CURVES = [
    ("out95", "exp_lim_upper95", "exp_lim_upper95_closed"),
    ("out68", "exp_lim_upper",   "exp_lim_upper_closed"),
    ("med",   "exp_lim",         "closed_exp_lim"),
    ("in68",  "exp_lim_lower",   "exp_lim_lower_closed"),
    ("in95",  "exp_lim_lower95", "exp_lim_lower95_closed"),
]

BAND_EDGES = None   # {name: (yy, lo_d, hi_d)} once built (fresh or from cache)

if use_cache:
    # Fast recolor path: everything needed is in the npz; no JSON/parquet.
    if not os.path.exists(BAND_CACHE_PATH):
        raise SystemExit("No band cache at %s -- run once without --use-cache first." % BAND_CACHE_PATH)
    _npz = np.load(BAND_CACHE_PATH)
    BAND_EDGES = {}
    for name, _, _ in BAND_CURVES:
        if f"{name}_yy" in _npz.files:
            BAND_EDGES[name] = (_npz[f"{name}_yy"], _npz[f"{name}_lo"], _npz[f"{name}_hi"])
    print(f"Loaded band edges from {BAND_CACHE_PATH}")
elif fixedDepth:
    # One JSON per fixed depth (produced by run_fixedDepth_limits.sh).
    depth_lims = {
        d: _load_limits(f"signal_{limit_directory}_livetime_{livetime}_{d}_fixedDepth_limit")
        for d in DEPTHS
    }
    # e0 also drives the single-region arrays used below for shape checks.
    max_exp_lim_Run3_e0_closed = depth_lims['e0']["closed_exp_lim"]
    max_exp_lim_Run3_e0        = depth_lims['e0']["exp_lim"]
else:
    _lim = _load_limits(f"signal_{limit_directory}_livetime_{livetime}_limit")
    max_exp_lim_Run3_e0_closed = _lim["closed_exp_lim"]
    max_exp_lim_Run3_e0        = _lim["exp_lim"]
    _lim_eps                   = _lim["eps"]
    if band68:
        _need = [k for _, o, c in BAND_CURVES for k in (o, c)]
        _missing = [k for k in _need if k not in _lim]
        if _missing:
            raise SystemExit(
                "--band68 needs the band arrays %s in exclusion_limits.json. "
                "Re-run exp_lim/set_limit_alphaMax.py to regenerate it." % _missing)

# ── EPSILON GRID ─────────────────────────────────────────────────────────────
eps = [4e-09, 5e-09, 6e-09, 7e-09, 8e-09, 9e-09, 1e-08, 1.1e-08, 1.2e-08, 1.3e-08, 1.4e-08, 1.5e-08, 1.6e-08, 1.7e-08, 1.8e-08, 1.9e-08, 2e-08, 2.1e-08, 2.2e-08, 2.3e-08, 2.4e-08, 3.4e-08, 4.4e-08, 5.4e-08, 6.4e-08, 7.4e-08, 8.4e-08, 9.4e-08, 1.04e-07, 1.14e-07, 1.24e-07, 1.34e-07, 1.44e-07, 1.54e-07, 1.64e-07, 1.74e-07, 1.84e-07, 1.94e-07, 2.04e-07, 2.14e-07, 2.24e-07, 2.34e-07, 2.44e-07, 2.54e-07, 2.64e-07, 2.74e-07, 2.84e-07, 2.94e-07, 3.04e-07, 3.28e-07, 3.52e-07, 3.76e-07, 4.00e-07, 4.24e-07, 4.48e-07, 4.72e-07, 4.96e-07, 5.20e-07, 5.44e-07, 5.68e-07, 5.92e-07, 6.16e-07, 6.40e-07, 6.64e-07, 6.88e-07, 7.12e-07, 7.36e-07, 7.60e-07, 7.84e-07, 8.08e-07, 8.32e-07, 8.56e-07, 8.80e-07, 9.04e-07, 9.28e-07, 9.52e-07, 9.76e-07, 1.00e-06]

A = 1.6e-21 * 3e8
ctau = [A * e**(-2) for e in eps]

if y_axis == 'lifetime': yAxis = ctau
elif y_axis == 'epsilon': yAxis = eps

# ── FLAT THERMAL LIMIT LINE ───────────────────────────────────────────────────
# A flat m_chi = 11 TeV limit across all epsilon values; used as a simple
# reference line on the thermal (left) panel.
thermal_exp_lim = [11] * len(yAxis)

if not use_cache:
    print(len(max_exp_lim_Run3_e0_closed), len(max_exp_lim_Run3_e0), len(yAxis))

# ── BUILD POLYGON BOUNDARY COORDINATES ───────────────────────────────────────
# Each exclusion region is defined by two boundary curves that together form a
# closed polygon in (m_chi [GeV], epsilon) space.
#
# Units: m_chi arrays are stored in TeV; multiply by 1000 to convert to GeV.
# The sentinel value 10000001 closes each curve at the right plot boundary.

def make_boundary(limit_array, y_array, start, stop, right_edge=10000001):
    """
    Build one boundary curve from limit_array[start:stop], skipping -1 entries.
    Appends one right-edge sentinel point at y_array[stop].
    """
    idx = np.arange(start, stop)
    vals = np.asarray(limit_array[start:stop], dtype=float)
    ys = np.asarray(y_array[start:stop], dtype=float)

    valid = vals > 0

    x = (vals[valid] * 1000).tolist()
    y = ys[valid].tolist()

    x.append(right_edge)
    y.append(y_array[stop])

    return x, y


# Volume-mode single region (fixedDepth mode builds masks directly from windows;
# band/use_cache modes draw straight from window_edges/BAND_EDGES, not these).
if not fixedDepth and not use_cache:
    # closed/upper edge: valid indices 6–26, with holes skipped
    x1, y1 = make_boundary(max_exp_lim_Run3_e0_closed, yAxis, start=6, stop=27)
    # open/lower edge: valid indices 6–69, with holes skipped
    x2, y2 = make_boundary(max_exp_lim_Run3_e0, yAxis, start=6, stop=70)

# ── CONTOUR GRID ─────────────────────────────────────────────────────────────
# A dense log-spaced 2-D grid for evaluating inside/outside of each exclusion
# polygon. Log spacing ensures uniform visual density on the log-log axes.
mx_grid  = np.logspace(np.log10(1000),  np.log10(1000000), 2000)   # m_chi in GeV
if y_axis == 'epsilon': y_grid = np.logspace(np.log10(1e-9),  np.log10(1e-6),   600)   # epsilon
elif y_axis == 'lifetime': y_grid = np.logspace(np.log10(1e-1),  np.log10(1e9),   6000)
MX, yVALS  = np.meshgrid(mx_grid, y_grid)


def window_edges(open_arr, closed_arr, eps, right_edge=2e6):
    """Interpolate a per-epsilon exclusion window [lo(eps), hi(eps)] onto the dense
    y-grid, returning (yy, lo_d, hi_d) in GeV (or None if <2 valid points). Used for
    BOTH the fixed-depth overlays and the single volume region so both draw smooth
    fill_betweenx boundaries directly from the JSON windows -- no rasterized-mask
    contour (stair-stepping) and no hardcoded epsilon indices (works at any grid
    length). open/closed are the JSON exp_lim/closed_exp_lim in TeV; closed<=0 means
    the window is open to the right plot edge. m_chi arrays are TeV -> *1000 for GeV."""
    y_dense = yVALS[:, 0]
    e, lo, hi = [], [], []
    for k, ev in enumerate(eps):
        o = open_arr[k]
        if o is None or o <= 0:
            continue
        c = closed_arr[k]
        e.append(ev)
        lo.append(o * 1000.0)
        hi.append(c * 1000.0 if (c is not None and c > 0) else right_edge)
    if len(e) < 2:
        return None
    e = np.asarray(e, dtype=float)
    lo = np.asarray(lo, dtype=float); hi = np.asarray(hi, dtype=float)
    # window_edges interpolates the mass window against the plotted y-axis variable,
    # but the limit arrays are indexed by epsilon. When the y-axis is ctau, convert
    # epsilon -> ctau (ctau = A*eps^-2) and re-sort ascending (ctau decreases with eps)
    # so np.interp sees a monotonically increasing abscissa. Epsilon mode is unchanged.
    if y_axis == 'lifetime':
        e = A * e**(-2.0)
    order = np.argsort(e)
    e = e[order]; lo = lo[order]; hi = hi[order]
    le = np.log(e)
    llo = np.log(lo); lhi = np.log(hi)
    sel = (y_dense >= e.min()) & (y_dense <= e.max())
    yy = y_dense[sel]
    lo_d = np.exp(np.interp(np.log(yy), le, llo))
    hi_d = np.exp(np.interp(np.log(yy), le, lhi))
    return yy, lo_d, hi_d

def mask_from_windows(open_arr, closed_arr, eps, MX, yVALS, right_edge=2e6):
    """
    Build an exclusion boolean mask directly from the per-epsilon mass windows.

    At each epsilon the excluded mass range is [open, closed], where open is the
    first theory<->median crossing (lower-mass edge) and closed is the second
    crossing (upper-mass edge); closed = -1 means a single crossing, so the region
    runs out to the right plot edge. The window edges are interpolated in log-log
    vs epsilon, which is robust to the -1 holes without any hand-tuned indices.
    m_chi arrays are in TeV -> multiply by 1000 for GeV.
    """
    e, lo, hi = [], [], []
    for k, ev in enumerate(eps):
        o = open_arr[k]
        if o is None or o <= 0:
            continue
        c = closed_arr[k]
        e.append(ev)
        lo.append(o * 1000.0)
        hi.append(c * 1000.0 if (c is not None and c > 0) else right_edge)
    mask = np.zeros_like(MX, dtype=bool)
    if len(e) < 2:
        return mask
    e = np.asarray(e); le = np.log(e)
    llo = np.log(np.asarray(lo)); lhi = np.log(np.asarray(hi))
    yv = yVALS[:, 0]
    for r, yy in enumerate(yv):
        if yy < e.min() or yy > e.max():
            continue
        lo_r = np.exp(np.interp(np.log(yy), le, llo))
        hi_r = np.exp(np.interp(np.log(yy), le, lhi))
        mask[r, :] = (MX[r, :] >= lo_r) & (MX[r, :] <= hi_r)
    return mask

# ── EXCLUSION REGION REGISTRY ────────────────────────────────────────────────
# Each entry is (outer_x, outer_y, inner_x, inner_y).
# The string sentinel "wow" signals that the inner pair already forms the full
# closed polygon (used for e6 whose geometry doesn't decompose neatly).
exclusion_regions_max = [(x1, y1, x2, y2)] if (not fixedDepth and not use_cache) else []  # e0: 0 mm (volume mode)

def build_exclusion_masks(regions, MX, yVALS):
    """
    Convert each exclusion region into a binary boolean mask on the (MX, yVALS) grid.

    For each region the two boundary curves are concatenated (inner reversed) to
    form a closed polygon in log10 space.  matplotlib.path.Path.contains_points
    is then used to test every grid cell.

    Parameters
    ----------
    regions : list of 4-tuples
        Each tuple is (outer_x, outer_y, inner_x, inner_y) in linear (GeV, -)
        coordinates, OR ("wow", "wow", poly_x, poly_y) for a pre-built polygon.
    MX, yVALS : 2-D np.ndarray
        Meshgrid of m_chi [GeV] and epsilon values.

    Returns
    -------
    masks : list of 2-D np.ndarray (float, 0 or 1)
        One mask per region; 1.0 inside the exclusion region, 0.0 outside.
    """
    masks = []
    for (rx1, ry1, rx2, ry2) in regions:
        # Use the pre-built polygon directly if flagged with "wow"
        if rx1 == "wow":
            poly_x = rx2
            poly_y = ry2
        else:
            # Concatenate outer edge forward + inner edge reversed to close polygon
            poly_x = np.array(rx1 + rx2[::-1])
            poly_y = np.array(ry1 + ry2[::-1])

        # Work in log10 space so the path matches the log-log plot axes
        path = Path(np.column_stack([np.log10(poly_x), np.log10(poly_y)]))
        pts  = np.column_stack([np.log10(MX.ravel()), np.log10(yVALS.ravel())])

        # contains_points returns a flat boolean array; reshape to grid dims
        mask = path.contains_points(pts).reshape(MX.shape).astype(float)
        masks.append(mask)
    return masks


# ── FIGURE SETUP ─────────────────────────────────────────────────────────────
fig, _axs = plt.subplots(nrows=1, ncols=2, figsize=(20, 10), constrained_layout=True)
fig.subplots_adjust(hspace=0.3)
axs = _axs.flatten()

# ── MAIN LOOP — draw each panel ───────────────────────────────────────────────
for n, ax in enumerate(axs):

    # Common log-log axes and physical axis labels
    ax.set_xscale('log')
    ax.set_yscale('log')
    ax.set_xlim(1000, 1000000)
    if y_axis == 'epsilon':
        ax.set_ylim(1e-9, 1e-6)
        ax.set_ylabel(r"$\varepsilon$", fontsize=46)
    elif y_axis == 'lifetime':
        ax.set_ylim(1e-1, 1e5)
        ax.set_ylabel(r"$c\tau$ [m]", fontsize=46)
    ax.set_xlabel(r"$m_\chi\;\mathrm{[TeV]}$", fontsize=42)
    ax.tick_params(labelsize=28)

    # Panel annotation: model parameters shown in the upper-left corner
    if n == 0:
        label = (
            r"$m_{A^\prime} = 0.245\;\mathrm{GeV}$"
            "\n"
            r"$\alpha_{x}^{\text{thermal}}=0.035\;\mathrm{m_{\chi}/TeV}$"
        )
    elif n == 1:
        label = (
            r"$m_{A^\prime} = 0.245\;\mathrm{GeV}$"
            "\n"
            r"$\alpha_{x}^{\text{max}}=0.17\;(\mathrm{m_{\chi}/TeV})^{1.61}$"
        )
    ax.annotate(label, xy=(0.05, 0.975), xycoords="axes fraction", ha="left", va="top", fontsize=22)

    # Retrieve unique scan points from the dataframe (not used for contouring here,
    # but kept for potential Z-matrix / rate-overlay extensions below). Skipped in
    # band mode, where df is None (parquet not loaded).
    if df is not None:
        mx_vals      = np.sort(df['mx'].unique())
        epsilon_vals = np.sort(df['epsilon'].unique())
        X, Y   = np.meshgrid(mx_vals, epsilon_vals)
        levels = np.logspace(np.log10(0.1), np.log10(1000), 100)
        norm   = LogNorm(vmin=levels[0], vmax=levels[-1])

    # Select the coupling scenario for this panel
    alpha = 'THERMAL' if n == 0 else 'MAX'

    if n == 1:
        # ── RIGHT PANEL: maximum coupling — draw exclusion region(s) ────
        colors     = ['crimson', 'blueviolet', 'gold', 'darkorange', 'blue', 'purple']
        linestyles = ['dashed', 'dotted', 'dashdot', (0,(5,1)), (0,(3,1,1,1)), 'solid']
        labels     = ['0 mm', '1e2 mm', '1e3 mm', '1e4 mm', '1e5 mm', '1e6 mm']

        if fixedDepth:
            # Draw each fixed-depth region from its interpolated per-epsilon mass
            # window [lo(eps), hi(eps)] directly (fill_betweenx), rather than
            # contouring a binary grid mask -- this gives smooth boundaries with no
            # stair-stepping. Larger decay lengths are drawn first (behind) so the
            # smaller (0 mm) region stays visible on top.
            edges = [window_edges(depth_lims[d]["exp_lim"],
                                  depth_lims[d]["closed_exp_lim"],
                                  depth_lims[d]["eps"])
                     for d in DEPTHS]

            # Light fills first (largest decay length in back), then all outlines on top.
            for i in reversed(range(len(edges))):
                if edges[i] is None:
                    continue
                yy, lo_d, hi_d = edges[i]
                ax.fill_betweenx(yy, lo_d, hi_d, color=colors[i], alpha=0.3,
                                 linewidth=0, zorder=2 + i)
            for i in range(len(edges)):
                if edges[i] is None:
                    continue
                yy, lo_d, hi_d = edges[i]
                ax.plot(lo_d, yy, color=colors[i], linestyle=linestyles[i],
                        linewidth=2.2, zorder=20 + i)
                ax.plot(hi_d, yy, color=colors[i], linestyle=linestyles[i],
                        linewidth=2.2, zorder=20 + i)
                # Close the region with horizontal caps at the lowest/highest
                # epsilon so the fill has a drawn boundary at top and bottom
                # (fill_betweenx only shades; ax.plot above only draws the sides).
                ax.plot([lo_d[0], hi_d[0]], [yy[0], yy[0]], color=colors[i],
                        linestyle=linestyles[i], linewidth=2.2, zorder=20 + i)
                ax.plot([lo_d[-1], hi_d[-1]], [yy[-1], yy[-1]], color=colors[i],
                        linestyle=linestyles[i], linewidth=2.2, zorder=20 + i)
        elif band68:
            # Second version: the median exclusion contour PLUS the 68% and 95%
            # expected bands, as five nested mass windows [lo(eps), hi(eps)] where a
            # given expected-limit curve crosses the theory line (same window_edges
            # machinery as the median / fixed-depth regions). Outer -> inner:
            #   out95 (-2sigma) > out68 (-1sigma) > med > in68 (+1sigma) > in95 (+2sigma)
            # A given curve excludes more the SMALLER its limit is, so -2sigma is the
            # widest window and +2sigma the narrowest -- the windows nest.
            #
            # Drawn as nested filled reach regions (matches the earlier filled 68%
            # look, extended outward with 95%): blue = excluded at -2sigma (95%
            # expected reach), gold = excluded at -1sigma (68%), covering the whole
            # interior; the +1/+2 sigma inner crossings are marked with thin outlines.
            # Because the windows nest and gold fully repaints the blue center, the
            # only VISIBLE blue is the outer ring (single opaque layer, no mixing).
            if BAND_EDGES is None:
                BAND_EDGES = {}
                for _name, _okey, _ckey in BAND_CURVES:
                    _e = window_edges(_lim.get(_okey), _lim.get(_ckey), _lim_eps)
                    if _e is not None:
                        BAND_EDGES[_name] = _e
                # Cache the interpolated edge points so a color-only re-run
                # (--use-cache) skips the JSON/parquet/interpolation entirely.
                _save = {}
                for _name, (_yy, _lo, _hi) in BAND_EDGES.items():
                    _save[f"{_name}_yy"] = _yy
                    _save[f"{_name}_lo"] = _lo
                    _save[f"{_name}_hi"] = _hi
                np.savez(BAND_CACHE_PATH, **_save)
                print(f"Wrote band edge cache to {BAND_CACHE_PATH}")

            def _fill(name, color, alpha, z):
                e = BAND_EDGES.get(name)
                if e is None:
                    return
                yy, lo_d, hi_d = e
                ax.fill_betweenx(yy, lo_d, hi_d, color=color, alpha=alpha,
                                 linewidth=0, zorder=z)

            def _outline(name, color, style, lw, z):
                e = BAND_EDGES.get(name)
                if e is None:
                    return
                yy, lo_d, hi_d = e
                ax.plot(lo_d, yy, color=color, linestyle=style, linewidth=lw, zorder=z)
                ax.plot(hi_d, yy, color=color, linestyle=style, linewidth=lw, zorder=z)
                # Horizontal caps so each contour closes at the lowest/highest epsilon.
                ax.plot([lo_d[0], hi_d[0]], [yy[0], yy[0]], color=color,
                        linestyle=style, linewidth=lw, zorder=z)
                ax.plot([lo_d[-1], hi_d[-1]], [yy[-1], yy[-1]], color=color,
                        linestyle=style, linewidth=lw, zorder=z)

            if args.ribbon:
                # Nested full-window fills (painter's algorithm). Each +-sigma expected
                # limit gives an excluded mass window [lo,hi]; they NEST
                #   out95 (-2s) ⊃ out68 (-1s) ⊃ med ⊃ in68 (+1s) ⊃ in95 (+2s).
                # Painting the widest first and successive windows on top yields the
                # symmetric Brazil-like structure  blue|gold|blue|GRAY-core|blue|gold|blue
                # (95% blue rings, 68% gold rings straddling the median line, gray = the
                # robustly-excluded +2s core). This is ROBUST at the low-eps nose: the
                # inner windows simply have a shorter eps-support (out95 down to 9e-9 but
                # med only to 1.1e-8, in95 to 1.6e-8), so where an inner window is absent
                # that layer is just skipped and the OUTER colour shows -- no NaN-fallback
                # gaps or stray fills like the earlier ribbon version had.
                _yall = np.unique(np.concatenate(
                    [BAND_EDGES[k][0] for k, _, _ in BAND_CURVES if k in BAND_EDGES]))

                def _win(name):
                    """(lo,hi) window edges of `name` interpolated onto _yall in log-log;
                    NaN outside that curve's eps-support (so it isn't filled there)."""
                    e = BAND_EDGES.get(name)
                    if e is None:
                        return None
                    yy, lo_d, hi_d = e
                    lo = np.exp(np.interp(np.log(_yall), np.log(yy), np.log(lo_d),
                                          left=np.nan, right=np.nan))
                    hi = np.exp(np.interp(np.log(_yall), np.log(yy), np.log(hi_d),
                                          left=np.nan, right=np.nan))
                    return lo, hi

                def _fillwin(name, color, z):
                    w = _win(name)
                    if w is None:
                        return
                    lo, hi = w
                    ok = np.isfinite(lo) & np.isfinite(hi)
                    ax.fill_betweenx(_yall, lo, hi, where=ok, color=color,
                                     linewidth=0, zorder=z)

                _fillwin("out95", BAND95_COLOR, 2)   # -2s : widest window, blue
                _fillwin("out68", BAND68_COLOR, 3)   # -1s : gold over blue centre
                _fillwin("in68",  BAND95_COLOR, 4)   # +1s : blue again -> gold = 68% ring
                _fillwin("in95",  '0.80',       5)   # +2s : gray robustly-excluded core
                # Median contour line (runs through the gold 68% band).
                _outline("med", MEDIAN_COLOR, 'dashed', MEDIAN_LW, 20)
            else:
                _fill("out95", BAND95_COLOR, BAND95_ALPHA, 2)   # 95% reach (blue), widest
                _fill("out68", BAND68_COLOR, BAND68_ALPHA, 3)   # 68% reach (gold) fills interior
                # Median contour line through the band.
                _outline("med", MEDIAN_COLOR, 'dashed', MEDIAN_LW, 20)
                # Thin band-edge outlines mark the +-1/+-2 sigma theory<->limit crossings.
                _outline("out95", BAND95_COLOR, 'solid', EDGE_LW, 15)
                _outline("out68", BAND68_COLOR, 'solid', EDGE_LW, 16)
                _outline("in68",  BAND68_COLOR, 'solid', EDGE_LW, 17)
                _outline("in95",  BAND95_COLOR, 'solid', EDGE_LW, 18)

            from matplotlib.lines import Line2D
            from matplotlib.patches import Patch
            band_legend = [
                Line2D([0], [0], color=MEDIAN_COLOR, linestyle='dashed',
                       linewidth=MEDIAN_LW, label='Median expected'),
                Patch(facecolor=BAND68_COLOR, edgecolor='none', label='68% expected'),
                Patch(facecolor=BAND95_COLOR, edgecolor='none', label='95% expected'),
            ]
            if args.ribbon:
                # The "Excluded" text in the gray region conveys it directly, so no
                # separate legend patch is needed for the fill. zorder must beat the
                # fills (gray core is zorder 5) or the fill paints over the text.
                # Placement/tilt follows the band: it slopes UP in the eps plane and
                # DOWN in the ctau plane (ctau ~ eps^-2), so flip for lifetime.
                _ex_xy, _ex_rot = ((0.52, 0.62), 38) if y_axis == 'epsilon' \
                    else ((0.50, 0.52), -33)
                ax.annotate("Excluded", xy=_ex_xy, xycoords="axes fraction",
                            ha="center", va="center", fontsize=22, color='0.25',
                            rotation=_ex_rot, zorder=25)
            ax.legend(handles=band_legend, loc='lower right', fontsize=18)

        else:
            # Single volume-weighted region, drawn the same smooth way as the
            # fixed-depth ones (window_edges + fill_betweenx) so it works at any eps
            # grid length -- no hardcoded make_boundary indices tied to a 78-pt grid.
            e = window_edges(max_exp_lim_Run3_e0, max_exp_lim_Run3_e0_closed, _lim_eps)
            if e is not None:
                yy, lo_d, hi_d = e
                ax.fill_betweenx(yy, lo_d, hi_d, color=colors[0], alpha=0.3, linewidth=0)
                ax.plot(lo_d, yy, color=colors[0], linestyle=linestyles[0], linewidth=2.2)
                ax.plot(hi_d, yy, color=colors[0], linestyle=linestyles[0], linewidth=2.2)
                # Horizontal caps at the lowest/highest epsilon so the region is
                # closed at top and bottom (see fixed-depth branch above).
                ax.plot([lo_d[0], hi_d[0]], [yy[0], yy[0]],
                        color=colors[0], linestyle=linestyles[0], linewidth=2.2)
                ax.plot([lo_d[-1], hi_d[-1]], [yy[-1], yy[-1]],
                        color=colors[0], linestyle=linestyles[0], linewidth=2.2)

        # Legend showing each depth scenario (only meaningful in fixedDepth mode)
        from matplotlib.lines import Line2D
        legend_elements = [
            Line2D([0], [0], color=colors[i], linestyle=linestyles[i],
                   linewidth=2.2, label=labels[i])
            for i in range(len(labels))
        ]
        if fixedDepth:
            ax.legend(handles=legend_elements, loc='lower right', ncols=2, fontsize=18)

    else:
        # ── LEFT PANEL: thermal coupling — draw simple flat reference line ────
        # The thermal limit is a vertical line at m_chi = 11 TeV, constant in epsilon.
        ax.plot([x * 1000 for x in thermal_exp_lim], yAxis,
                color='black', linestyle='dashed')

    # Remove default top/right spines, then re-enable all four (cosmetic clean-up)
    ax.spines[['top', 'right']].set_visible(False)

# Re-enable all spines on both axes after the loop
for side in ("left", "right", "top", "bottom"):
    axs[0].spines[side].set_visible(True)
    axs[1].spines[side].set_visible(True)

# ── AXIS TICK FORMATTER ───────────────────────────────────────────────────────
# The x-axis stores m_chi in GeV internally; reformat tick labels to show TeV.
tev_formatter = mticker.FuncFormatter(lambda x, pos: f"{x*1e-3:g}")

for ax in axs.flat:
    # Official CMS label via mplhep: "CMS Work in Progress" (upper-left) and
    # the dataset/livetime label (upper-right), laid out and spaced by mplhep.
    hep.cms.label("Work in Progress", data=True, loc=0, ax=ax,
                  rlabel=f"Run 3 Cosmics ({livetime} month)", fontsize=24)
    ax.xaxis.set_major_formatter(tev_formatter)

# ── SAVE ─────────────────────────────────────────────────────────────────────
fig.canvas.draw()

bbox = axs[1].get_tightbbox(fig.canvas.get_renderer())
bbox = bbox.transformed(fig.dpi_scale_trans.inverted())
# Asymmetric margins (inches): keep the left tight, enlarge top/right/bottom.
from matplotlib.transforms import Bbox
pad_left, pad_right, pad_top, pad_bottom = 0.15, 0.4, 0.4, 0.4
bbox = Bbox.from_extents(bbox.x0 - pad_left, bbox.y0 - pad_bottom,
                         bbox.x1 + pad_right, bbox.y1 + pad_top)
ysuffix = '_lifetime' if y_axis == 'lifetime' else ''
if fixedDepth:
    outbase = f"figures/ExcludedMass_mX_ep_explim_Run3_fixedDepth_livetime_{livetime}{ysuffix}"
elif band68:
    _ribtag = "_ribbon" if args.ribbon else ""
    outbase = f"figures/ExcludedMass_mX_ep_explim_signal_{limit_directory}_livetime_{livetime}_band68{_ribtag}{ysuffix}"
else:
    outbase = f"figures/ExcludedMass_mX_ep_explim_signal_{limit_directory}_livetime_{livetime}{ysuffix}"
fig.savefig(outbase + ".pdf", bbox_inches=bbox)
fig.savefig(outbase + ".png", bbox_inches=bbox, dpi=200)
print(f"Wrote {outbase}.pdf / .png")