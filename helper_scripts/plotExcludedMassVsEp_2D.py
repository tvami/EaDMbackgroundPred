"""
Plots CMS Run 3 cosmics exclusion limits in the (m_chi, epsilon) plane
for a dark photon mediator model (m_A' = 0.23 GeV).

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
parser.add_argument('--ma', type=float, default=0.23, dest='ma',
                    help="Dark photon mass in GeV for the on-plot annotation. Must match --ma "
                         "given to helper_scripts/limitRateInputScript.py. Default 0.23.")
parser.add_argument('--alpha-coeff', type=float, default=0.17, dest='alpha_coeff',
                    help='Coefficient of the alpha_X benchmark for the annotation. Must match '
                         '--alpha-coeff given to limitRateInputScript.py. Default 0.17.')
parser.add_argument('--alpha-exponent', type=float, default=1.61, dest='alpha_exponent',
                    help='Mass exponent of the alpha_X benchmark the RATES were built with, used '
                         'only for the on-plot annotation. Must match --alpha-exponent given to '
                         'helper_scripts/limitRateInputScript.py, otherwise the figure advertises '
                         'a coupling the limit was not computed at. Default 1.61 (alpha_X^max).')
parser.add_argument('--ribbon', action='store_true', dest='ribbon',
                    help='Band mode only: render the 68%%/95%% uncertainty as thin ribbons hugging the '
                         'exclusion contour (fill between adjacent +-sigma curves on each mass edge) '
                         'instead of solid nested filled windows. Makes the band WIDTH visible; the '
                         'default (no flag) keeps the original filled-blob look.')
args = parser.parse_args()

limit_directory = args.limit_directory
livetime = args.livetime
# Output FILENAMES spell the livetime with a 'p' for the decimal point (20.7 -> 20p7); the AN's
# \includegraphics paths use that spelling. Only the filenames -- the exp_lim/signal_..._limit
# INPUT directories on disk keep the literal '20.7', so `livetime` itself must not be rewritten.
livetime_tag = str(livetime).replace('.', 'p')
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

def alpha_annotation(exponent, coeff=0.17):
    """Benchmark line for the plot corner. The coefficient 0.17 is unchanged by a reweight in the
    exponent, so only the power moves; ^1 is written without an exponent for readability."""
    if abs(exponent - 1.0) < 1e-9:
        return rf"$\alpha_{{\chi}}={coeff:g}\;\mathrm{{m_{{\chi}}/TeV}}$"
    expo = f"{exponent:g}"
    return rf"$\alpha_{{\chi}}={coeff:g}\;(\mathrm{{m_{{\chi}}/TeV}})^{{" + expo + r"}$"


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
    MA_TARGET = 0.23                                     # m_A' shown on the panels [GeV]
    MODEL = 'core'                                       # detector-volume model, as in limitRateInputScript.py
    MX_WINDOW_GEV = (1000., 100000.)                     # displayed m_chi window [GeV]; the
                                                         # parquet grid runs 10 GeV - 1000 TeV
    PARQUET = ('helper_scripts/parquet_files/rates_muons_electrons_both_alphas_KAPPAS_10_1000000'
               '_varying_steps_coarse_grain_epsilon_and_mas_WITH_CALC_ACCEPTANCES-2.parquet')

    # Snap to the nearest simulated m_A' grid point (0.23 is on this grid, so this is
    # exact), then pull only muons at that mass, at nominal depth.
    ma_u = np.sort(pd.read_parquet(PARQUET, columns=['ma'])['ma'].unique())
    ma_val = ma_u[np.argmin(np.abs(ma_u - MA_TARGET))]
    dfh = pd.read_parquet(
        PARQUET,
        columns=['mx', 'epsilon', 'alpha_therm_or_max', 'rate_1yr',
                 f'volume_m3_{MODEL}', f'frac_ecut10_{MODEL}'],
        filters=[('final_state_particles', '==', 'muons'), ('ma', '==', ma_val),
                 ('depth_scale', '==', 1.0)],
    )
    # Same monthly rate as limitRateInputScript.py: the parquet's per-km^3 yearly rate
    # converted to the detector volume, times the E > 10 GeV acceptance.
    dfh['rate_1month'] = (dfh['rate_1yr'] / 12.
                          * dfh[f'volume_m3_{MODEL}'] / 1000. ** 3
                          * dfh[f'frac_ecut10_{MODEL}'])
    dfh = dfh[(dfh.mx >= MX_WINDOW_GEV[0]) & (dfh.mx <= MX_WINDOW_GEV[1])]

    def _grid(alpha):
        """(mx[GeV], eps, rate[eps,mx]) monthly-rate grid for one coupling scenario."""
        s = dfh[dfh.alpha_therm_or_max == alpha]
        mx = np.sort(s.mx.unique()); ep = np.sort(s.epsilon.unique())
        Z = (s.pivot_table(index='epsilon', columns='mx', values='rate_1month')
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
            lab = (rf"$m_{{A^\prime}} = {args.ma:g}\;\mathrm{{GeV}}$" "\n"
                   r"$\alpha_{\chi}^{\text{thermal}}=0.035\;\mathrm{m_{\chi}/TeV}$")
        else:
            lab = (rf"$m_{{A^\prime}} = {args.ma:g}\;\mathrm{{GeV}}$" "\n"
                   + alpha_annotation(args.alpha_exponent, args.alpha_coeff))
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
               f"_livetime_{livetime_tag}_heatmap")
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
    # Same path as limitRateInputScript.py and the --heatmap block below. This used to be a bare
    # filename, which meant --fixedDepth (the one mode that is neither band68 nor heatmap) died
    # with FileNotFoundError when run from src/, where every other entry point is run from.
    df = pd.read_parquet(
        'helper_scripts/parquet_files/rates_muons_electrons_both_alphas_KAPPAS_10_1000000'
        '_varying_steps_coarse_grain_epsilon_and_mas_WITH_CALC_ACCEPTANCES-2.parquet'
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
    # The bands come from the cache, but the y-axis grid is still needed for the reference
    # line and the axis range. The JSON is small, so reading just `eps` costs nothing next to
    # the parquet load this path exists to avoid.
    try:
        _lim_eps = _load_limits(f"signal_{limit_directory}_livetime_{livetime}_limit")["eps"]
    except (OSError, KeyError):
        _lim_eps = None
elif fixedDepth:
    # One JSON per fixed depth (produced by run_fixedDepth_limits.sh).
    depth_lims = {
        d: _load_limits(f"signal_{limit_directory}_livetime_{livetime}_{d}_fixedDepth_limit")
        for d in DEPTHS
    }
    # e0 also drives the single-region arrays used below for shape checks.
    max_exp_lim_Run3_e0_closed = depth_lims['e0']["closed_exp_lim"]
    max_exp_lim_Run3_e0        = depth_lims['e0']["exp_lim"]
    _lim_eps                   = depth_lims['e0'].get("eps")
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
# Take the grid from the JSON, i.e. from whatever `labels` exp_lim/set_limit_alphaMax.py used.
# It must NOT be duplicated here: the limit arrays and the y values are zipped positionally, so
# a local copy that drifts from `labels` silently pairs each limit with the wrong epsilon. That
# is exactly what happened -- this file carried the 78-point list below while `labels` was first
# a 168-point grid (the two agree only up to index 20, then 3.4e-08 here vs 2.5e-08 there) and
# then, from the Aug 2026 coarse-grain update, a 45-point grid, which additionally made the
# hardcoded window indices below run off the end of the array.
EPS_LEGACY = [4e-09, 5e-09, 6e-09, 7e-09, 8e-09, 9e-09, 1e-08, 1.1e-08, 1.2e-08, 1.3e-08, 1.4e-08, 1.5e-08, 1.6e-08, 1.7e-08, 1.8e-08, 1.9e-08, 2e-08, 2.1e-08, 2.2e-08, 2.3e-08, 2.4e-08, 3.4e-08, 4.4e-08, 5.4e-08, 6.4e-08, 7.4e-08, 8.4e-08, 9.4e-08, 1.04e-07, 1.14e-07, 1.24e-07, 1.34e-07, 1.44e-07, 1.54e-07, 1.64e-07, 1.74e-07, 1.84e-07, 1.94e-07, 2.04e-07, 2.14e-07, 2.24e-07, 2.34e-07, 2.44e-07, 2.54e-07, 2.64e-07, 2.74e-07, 2.84e-07, 2.94e-07, 3.04e-07, 3.28e-07, 3.52e-07, 3.76e-07, 4.00e-07, 4.24e-07, 4.48e-07, 4.72e-07, 4.96e-07, 5.20e-07, 5.44e-07, 5.68e-07, 5.92e-07, 6.16e-07, 6.40e-07, 6.64e-07, 6.88e-07, 7.12e-07, 7.36e-07, 7.60e-07, 7.84e-07, 8.08e-07, 8.32e-07, 8.56e-07, 8.80e-07, 9.04e-07, 9.28e-07, 9.52e-07, 9.76e-07, 1.00e-06]

if _lim_eps:
    eps = list(_lim_eps)
else:
    print("WARNING: no 'eps' in the limits JSON; falling back to the legacy hardcoded grid. "
          "Check that it matches `labels` in exp_lim/set_limit_alphaMax.py.")
    eps = list(EPS_LEGACY)

A = 1.6e-21 * 3e8
ctau = [A * e**(-2) for e in eps]

if y_axis == 'lifetime': yAxis = ctau
elif y_axis == 'epsilon': yAxis = eps

# ── AXIS RANGES AND "Excluded" PLACEMENT, DRIVEN BY THE DATA ──────────────────
# These used to be hardcoded (x 2-1000 TeV, eps 1e-9..1e-6, ctau 1e-1..1e5) and drifted badly
# out of step with the exclusion once the rates changed: the ctau panel spent six decades
# displaying two and a half decades of contour. Deriving them from the drawn windows keeps the
# panels tight automatically, and is the same lesson as the epsilon densify window in
# limitRateInputScript.py -- anything pinned to where the exclusion "currently" sits goes stale
# the moment the normalization moves.
X_HARD_MAX = 1e6      # GeV; the parquet mass grid stops at 1000 TeV, so windows open to here


def _windows_from(srcs):
    """[(y_value, mass_lo_GeV, mass_hi_GeV or None if open), ...] from (lo, hi, eps) triples."""
    out = []
    for lo_a, hi_a, eps_a in srcs:
        for lo, hi, e in zip(lo_a, hi_a, eps_a):
            if lo is None or lo <= 0:
                continue
            y = A * e ** -2 if y_axis == 'lifetime' else e
            out.append((y, lo * 1000., (hi * 1000.) if hi and hi > 0 else None))
    return out


def _median_windows():
    """The MEDIAN exclusion only -- this is the gray region, so it is what the label centers on."""
    if fixedDepth:
        return _windows_from([(d["exp_lim"], d["closed_exp_lim"], d.get("eps") or eps)
                              for d in depth_lims.values()])
    return _windows_from([(max_exp_lim_Run3_e0, max_exp_lim_Run3_e0_closed, eps)])


def _all_windows():
    """Every drawn curve, median AND the +-1/+-2 sigma band edges.

    The axis ranges have to come from this, not from the median: the 68%/95% bands reach further
    in both mass and y than the median contour does, so sizing to the median alone clips them at
    the frame (which is exactly what the first version of this did to the ctau panel).
    """
    out = _median_windows()
    if fixedDepth:
        return out
    for _name, k_open, k_closed in BAND_CURVES:
        lo_a = _lim.get(k_open) if not use_cache else None
        hi_a = _lim.get(k_closed) if not use_cache else None
        if lo_a and hi_a:
            out += _windows_from([(lo_a, hi_a, eps)])
    if use_cache and BAND_EDGES:
        # Cache path: the edges are already interpolated and already in y-axis units.
        for yy, lo_d, hi_d in BAND_EDGES.values():
            out += [(y, lo * 1000., hi * 1000.) for y, lo, hi in zip(yy, lo_d, hi_d) if lo > 0]
    return out


def _snap(v, up):
    """Round v outward to the nearest 1/2/5 x 10^k, so the axis still lands on readable ticks."""
    if v <= 0:
        return v
    k = np.floor(np.log10(v))
    m = v / 10 ** k
    steps = [1., 2., 5., 10.]
    if up:
        return next(s for s in steps if s >= m - 1e-12) * 10 ** k
    return next(s for s in reversed(steps) if s <= m + 1e-12) * 10 ** k


_WIN = _median_windows()          # gray region -> drives the "Excluded" label
_WIN_ALL = _all_windows()         # everything drawn -> drives the axis ranges
if _WIN_ALL:
    _ys = np.array([w[0] for w in _WIN_ALL])
    _xs = np.array([w[1] for w in _WIN_ALL])
    X_LO = _snap(_xs.min(), up=False)
    X_HI = X_HARD_MAX
    Y_LO = _snap(_ys.min(), up=False)
    Y_HI = _snap(_ys.max(), up=True)
else:                                   # nothing excluded: fall back to the historical ranges
    X_LO, X_HI = 2000., X_HARD_MAX
    Y_LO, Y_HI = (1e-9, 1e-6) if y_axis == 'epsilon' else (1e-1, 1e5)
print(f"axis ranges from data: x [{X_LO:.4g}, {X_HI:.4g}] GeV   y [{Y_LO:.4g}, {Y_HI:.4g}]")


def _excluded_label():
    """(xy in axes fractions, rotation in degrees) centering "Excluded" in the gray region.

    Position is the centroid of the excluded area weighted by each row's log-width, so it lands
    in the fat part of the wedge rather than at the thin turn-on tip. Tilt comes from a fit of
    the region's lower edge, converted through the axis ranges -- the panel is square, so axes
    fractions are visual proportions and the angle is the on-screen one.
    """
    if not _WIN:
        return (0.5, 0.5), 0.
    lx = np.log10(X_LO); ldx = np.log10(X_HI) - lx
    ly = np.log10(Y_LO); ldy = np.log10(Y_HI) - ly
    fy = np.array([(np.log10(w[0]) - ly) / ldy for w in _WIN])
    flo = np.array([(np.log10(w[1]) - lx) / ldx for w in _WIN])
    fhi = np.array([(np.log10(w[2] if w[2] else X_HI) - lx) / ldx for w in _WIN])
    fhi = np.clip(fhi, None, 1.0)
    # True AREA centroid: weight each row by its width TIMES its share of the y range.
    #
    # The row spacing matters and is badly non-uniform. limitRateInputScript.py densifies epsilon
    # only across the turn-on (1e-8..1e-7), so there are ~35 closely spaced rows in the lower half
    # of the region and ~9 sparse ones above it. Weighting per row, at any power, therefore counts
    # the bottom of the wedge several times over and drags the label down-left toward the thin
    # turn-on tip. Folding in d(log y) makes the result an integral over the region, so it is
    # independent of how finely the epsilon grid happens to be sampled.
    order = np.argsort(fy)
    fy, flo, fhi = fy[order], flo[order], fhi[order]
    width = np.clip(fhi - flo, 0, None)
    dy = np.abs(np.gradient(fy)) if len(fy) > 1 else np.ones_like(fy)
    dy = np.where(dy > 0, dy, np.median(dy[dy > 0]) if (dy > 0).any() else 1.0)
    wgt = width * dy
    if wgt.sum() <= 0:
        return (0.5, 0.5), 0.
    cx = float(np.sum(wgt * (flo + fhi) / 2) / wgt.sum())
    cy = float(np.sum(wgt * fy) / wgt.sum())
    # Tilt: slope of the lower edge in axes-fraction space.
    if len(fy) > 2 and np.ptp(flo) > 1e-6:
        slope = np.polyfit(flo, fy, 1)[0]
    else:
        slope = 0.
    return (cx, cy), float(np.degrees(np.arctan(slope)))


EXCLUDED_XY, EXCLUDED_ROT = _excluded_label()
print(f'"Excluded" label at axes fraction ({EXCLUDED_XY[0]:.3f}, {EXCLUDED_XY[1]:.3f}), '
      f'rotation {EXCLUDED_ROT:.1f} deg')

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
    # The two curves span fixed epsilon RANGES, not fixed array positions. They used to be
    # written as literal indices (6/27/70) into the 78-point grid above, which silently meant
    # something else as soon as the grid changed. Expressed as the epsilon values those indices
    # stood for, they survive a regrid; on the 45-point coarse grid they land on 27/35/44.
    WINDOW_EPS_START       = 1.0e-08    # was index 6
    WINDOW_EPS_CLOSED_LAST = 8.4e-08    # was index 26, i.e. stop=27
    WINDOW_EPS_OPEN_LAST   = 8.08e-07   # was index 69, i.e. stop=70

    def _eps_index(value):
        """Nearest index in the active grid to `value`."""
        return min(range(len(eps)), key=lambda i: abs(eps[i] - value))

    def _stop_after(value):
        """Exclusive stop that includes `value`; make_boundary also reads y_array[stop]."""
        return min(_eps_index(value) + 1, len(eps) - 1)

    _start      = _eps_index(WINDOW_EPS_START)
    _stop_close = _stop_after(WINDOW_EPS_CLOSED_LAST)
    _stop_open  = _stop_after(WINDOW_EPS_OPEN_LAST)
    print(f"boundary windows on a {len(eps)}-point grid: start={_start} "
          f"({eps[_start]:.3g}), closed stop={_stop_close}, open stop={_stop_open}")

    # closed/upper edge, with holes skipped
    x1, y1 = make_boundary(max_exp_lim_Run3_e0_closed, yAxis, start=_start, stop=_stop_close)
    # open/lower edge, with holes skipped
    x2, y2 = make_boundary(max_exp_lim_Run3_e0, yAxis, start=_start, stop=_stop_open)

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
    ax.set_xlim(X_LO, X_HI)
    ax.set_ylim(Y_LO, Y_HI)
    if y_axis == 'epsilon':
        ax.set_ylabel(r"$\varepsilon$", fontsize=46)
    elif y_axis == 'lifetime':
        ax.set_ylabel(r"$c\tau$ [m]", fontsize=46)
    ax.set_xlabel(r"$m_\chi\;\mathrm{[TeV]}$", fontsize=42)
    ax.tick_params(labelsize=28)

    # Panel annotation: model parameters shown in the upper-left corner
    if n == 0:
        label = (
            rf"$m_{{A^\prime}} = {args.ma:g}\;\mathrm{{GeV}}$"
            "\n"
            r"$\alpha_{\chi}^{\text{thermal}}=0.035\;\mathrm{m_{\chi}/TeV}$"
        )
    elif n == 1:
        label = (
            rf"$m_{{A^\prime}} = {args.ma:g}\;\mathrm{{GeV}}$"
            "\n"
            + alpha_annotation(args.alpha_exponent, args.alpha_coeff)
        )
    # zorder + backing box: with the axes now cropped to the data, the bands can reach the
    # top-left corner (they do on the ctau panel), and without these the model parameters are
    # painted over by the fill.
    ax.annotate(label, xy=(0.05, 0.975), xycoords="axes fraction", ha="left", va="top",
                fontsize=22, zorder=30,
                bbox=dict(boxstyle="round,pad=0.25", fc="white", ec="none", alpha=0.75))

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
                ax.annotate("Excluded", xy=EXCLUDED_XY, xycoords="axes fraction",
                            ha="center", va="center", fontsize=22, color='0.25',
                            rotation=EXCLUDED_ROT, zorder=25)
            # The band runs UP to the right in the epsilon plane and DOWN to the right in the
            # ctau plane (ctau ~ eps^-2), so the empty corner flips with it. Fixed at
            # 'lower right' the legend sat on top of the bands on the ctau panel.
            ax.legend(handles=band_legend, fontsize=18,
                      loc='lower left' if y_axis == 'lifetime' else 'lower right')

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
    outbase = f"figures/ExcludedMass_mX_ep_explim_Run3_fixedDepth_livetime_{livetime_tag}{ysuffix}"
elif band68:
    _ribtag = "_ribbon" if args.ribbon else ""
    outbase = f"figures/ExcludedMass_mX_ep_explim_signal_{limit_directory}_livetime_{livetime_tag}_band68{_ribtag}{ysuffix}"
else:
    outbase = f"figures/ExcludedMass_mX_ep_explim_signal_{limit_directory}_livetime_{livetime_tag}{ysuffix}"
fig.savefig(outbase + ".pdf", bbox_inches=bbox)
fig.savefig(outbase + ".png", bbox_inches=bbox, dpi=200)
print(f"Wrote {outbase}.pdf / .png")