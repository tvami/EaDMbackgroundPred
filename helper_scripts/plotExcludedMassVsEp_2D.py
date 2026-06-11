"""
Plots CMS Run 3 cosmics exclusion limits in the (m_chi, epsilon) plane
for a dark photon mediator model (m_A' = 0.245 GeV).

Two panels are produced:
  Left  (n=0): Thermal coupling scenario  — alpha_x = 0.035 * (m_chi / TeV)
  Right (n=1): Maximum coupling scenario  — alpha_x = 0.058 * (m_chi / TeV)

The right panel overlays six contour-filled exclusion regions corresponding
to different tracker timing resolutions (0 mm → 1e6 mm), colored and styled
distinctly. The left panel draws a simple thermal exclusion boundary.

Output: figures/ExcludedMass_mX_ep_explim_Run3_APS.png
"""

import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
from matplotlib import cm
from matplotlib.colors import LogNorm
import matplotlib.ticker as mticker
from matplotlib import rcParams
from matplotlib.font_manager import FontProperties
from matplotlib.patches import Patch
from matplotlib.path import Path

# ── GLOBAL PLOT SETTINGS ────────────────────────────────────────────────────
pd.set_option('display.max_columns', None)
plt.rcParams.update({'font.size': 15})
cms_fp = FontProperties(family="sans-serif", weight="bold")

# ── LOAD DATA ────────────────────────────────────────────────────────────────
# Parquet file contains signal rates for muons, electrons, and combined,
# over a grid of (mx, epsilon, ma) with thermal and max coupling scenarios.
df = pd.read_parquet(
    '/Users/sanjitmasanam/Documents/CodingProjects/CMS/t0timing_chamber_study/'
    'rates_muons_electrons_both_alphas_MX_1TeV_to_100TeV_special_granularity_fewer_columns.parquet'
)

# ── EXCLUSION BOUNDARY ARRAYS ────────────────────────────────────────────────
# Each list has 49 entries corresponding to the epsilon grid defined below.
# Values are m_chi in TeV; -1 means "no limit at this epsilon point."
# Suffix _closed = the upper/inner edge of the exclusion band (upper limit w.r.t mass).
# No suffix    = the outer/lower edge of the exclusion band (lower limit w.r.t mass).

max_exp_lim_Run3_e0_closed = [-1, -1, -1, -1, -1, -1, -1, -1, 6.390118658802888, 8.249748784515702, 10.991681622012011, 13.998831294762706, 16.82624966503901, 19.50206516300301, 22.05032894299055, 24.49198130008609, 26.845608715111496, 29.128067879161744, 31.354950364166065, 33.54100393154571, 35.7005081373103, 64.71520289450326, 98.13151954498144, 143.81721245761173, 183.74557329913668, 255.77499402245505, 376.70160716874136, 524.8669621562898, 731.1194797412135, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1]
max_exp_lim_Run3_e0 = [-1, -1, -1, -1, -1, -1, -1, -1, 3.9781508868507403, 3.918508683984649, 3.866947255962201, 3.8225891334031155, 3.784711673632542, 3.7527090282667985, 3.7260648714532647, 3.7043321084129914, 3.687118590123266, 3.6740760329528466, 3.664891966384927, 3.6592831736579923, 3.656991098219637, 3.771457932892746, 4.221369910871736, 5.676153339806469, 7.429134169594552, 12.549313511118493, 22.04039107754671, 27.576492745722415, 31.27242213787334, 33.9395468179377, 35.963663016852976, 37.55492463934678, 38.83904364343433, 39.89650710910531, 47.01686766336138, 53.19863764412005, 58.13923118782731, 65.1655276271236, 72.87401761453081, 79.17973941140585, 88.48922792980899, 96.76123502402422, 111.91623629730546, 130.03477667543706, 144.85034533136167, 157.23593475707384, 167.7750121117951, 176.87333992554917, 184.8225155308739, 201.20532353876027, 237.91893069157848, 267.10351084793643, 290.91267346524796, 322.64475058653875, 357.6264412545303, 387.2475802350227, 422.9648295601225, 462.3742783301129, 496.3192803434011, 539.5794995189143, 579.159562389402, 619.9131011313849, 663.7479251232674, 704.3692262745441, 756.4759274404706, 803.4910545411283, 856.2489193618117, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1]

# ── EPSILON GRID ─────────────────────────────────────────────────────────────
# Kinetic-mixing parameter epsilon sampled at 49 points.
# Two sub-ranges: fine-grained near 4–24e-9, then coarser from 34e-9 to 314e-9.
eps = [4e-09, 5e-09, 6e-09, 7e-09, 8e-09, 9e-09, 1e-08, 1.1e-08, 1.2e-08, 1.3e-08, 1.4e-08, 1.5e-08, 1.6e-08, 1.7e-08, 1.8e-08, 1.9e-08, 2e-08, 2.1e-08, 2.2e-08, 2.3e-08, 2.4e-08, 3.4e-08, 4.4e-08, 5.4e-08, 6.4e-08, 7.4e-08, 8.4e-08, 9.4e-08, 1.04e-07, 1.14e-07, 1.24e-07, 1.34e-07, 1.44e-07, 1.54e-07, 1.64e-07, 1.74e-07, 1.84e-07, 1.94e-07, 2.04e-07, 2.14e-07, 2.24e-07, 2.34e-07, 2.44e-07, 2.54e-07, 2.64e-07, 2.74e-07, 2.84e-07, 2.94e-07, 3.04e-07, 3.28e-07, 3.52e-07, 3.76e-07, 4.00e-07, 4.24e-07, 4.48e-07, 4.72e-07, 4.96e-07, 5.20e-07, 5.44e-07, 5.68e-07, 5.92e-07, 6.16e-07, 6.40e-07, 6.64e-07, 6.88e-07, 7.12e-07, 7.36e-07, 7.60e-07, 7.84e-07, 8.08e-07, 8.32e-07, 8.56e-07, 8.80e-07, 9.04e-07, 9.28e-07, 9.52e-07, 9.76e-07, 1.00e-06]

# ── FLAT THERMAL LIMIT LINE ───────────────────────────────────────────────────
# A flat m_chi = 11 TeV limit across all epsilon values; used as a simple
# reference line on the thermal (left) panel.
thermal_exp_lim = [11] * len(eps)

print(len(max_exp_lim_Run3_e0_closed), len(max_exp_lim_Run3_e0), len(eps))

# ── BUILD POLYGON BOUNDARY COORDINATES ───────────────────────────────────────
# Each exclusion region is defined by two boundary curves that together form a
# closed polygon in (m_chi [GeV], epsilon) space.
#
# Units: m_chi arrays are stored in TeV; multiply by 1000 to convert to GeV.
# The sentinel value 10000001 closes each curve at the right plot boundary.

x1 = [x * 1000 for x in max_exp_lim_Run3_e0_closed[8:29]] + [10000001]  # outer edge, indices 6-25
y1 = eps[8:30]                                                            # match length: 20 values + sentinel

x2 = [x * 1000 for x in max_exp_lim_Run3_e0[8:67]] + [10000001]         # inner edge, indices 6-25
y2 = eps[8:68]

# ── e6 (1e6 mm) — special shape ──────────────────────────────────────────────
# The e6 region starts at index 11 (epsilon ~ 1.5e-8) rather than index 2,
# because the detector only becomes sensitive at higher epsilon for this resolution.
# It also lacks a simple two-band structure, so the closed polygon is built
# directly from the _closed and open boundary arrays.
x11 = [x * 1000 for x in max_exp_lim_Run3_e6[11:]] + [180001]       # open (outer) boundary
y11 = eps[11:50]
x12 = [x * 1000 for x in max_exp_lim_Run3_e6_closed[11:21]] + [180001]  # closed (inner) boundary
y12 = eps[11:22]

# Combine outer + reversed inner to close the polygon
poly_x = x11 + x12[::-1]
poly_y = y11 + y12[::-1]

# ── CONTOUR GRID ─────────────────────────────────────────────────────────────
# A dense log-spaced 2-D grid for evaluating inside/outside of each exclusion
# polygon. Log spacing ensures uniform visual density on the log-log axes.
mx_grid  = np.logspace(np.log10(1000),  np.log10(1000000), 2000)   # m_chi in GeV
eps_grid = np.logspace(np.log10(1e-9),  np.log10(1e-6),   600)   # epsilon
MX, EPS  = np.meshgrid(mx_grid, eps_grid)

# ── EXCLUSION REGION REGISTRY ────────────────────────────────────────────────
# Each entry is (outer_x, outer_y, inner_x, inner_y).
# The string sentinel "wow" signals that the inner pair already forms the full
# closed polygon (used for e6 whose geometry doesn't decompose neatly).
exclusion_regions_max = [
    (x1,    y1,    x2,    y2),    # e0: 0 mm
    # (x3,    y3,    x4,    y4),    # e2: 1e2 mm
    # (x5,    y5,    x6,    y6),    # e3: 1e3 mm
    # (x7,    y7,    x8,    y8),    # e4: 1e4 mm
    # (x9,    y9,    x10,   y10),   # e5: 1e5 mm
    # ("wow", "wow", poly_x, poly_y),  # e6: 1e6 mm (pre-built polygon)
]


def build_exclusion_masks(regions, MX, EPS):
    """
    Convert each exclusion region into a binary boolean mask on the (MX, EPS) grid.

    For each region the two boundary curves are concatenated (inner reversed) to
    form a closed polygon in log10 space.  matplotlib.path.Path.contains_points
    is then used to test every grid cell.

    Parameters
    ----------
    regions : list of 4-tuples
        Each tuple is (outer_x, outer_y, inner_x, inner_y) in linear (GeV, -)
        coordinates, OR ("wow", "wow", poly_x, poly_y) for a pre-built polygon.
    MX, EPS : 2-D np.ndarray
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
        pts  = np.column_stack([np.log10(MX.ravel()), np.log10(EPS.ravel())])

        # contains_points returns a flat boolean array; reshape to grid dims
        mask = path.contains_points(pts).reshape(MX.shape).astype(float)
        masks.append(mask)
    return masks


# ── FIGURE SETUP ─────────────────────────────────────────────────────────────
fig, _axs = plt.subplots(nrows=1, ncols=2, figsize=(10, 5), constrained_layout=True)
fig.subplots_adjust(hspace=0.3)
axs = _axs.flatten()

# ── MAIN LOOP — draw each panel ───────────────────────────────────────────────
for n, ax in enumerate(axs):

    # Common log-log axes and physical axis labels
    ax.set_xscale('log')
    ax.set_yscale('log')
    ax.set_xlim(1000, 1000000)
    ax.set_ylim(1e-9, 1e-6)
    ax.set_xlabel(r"$m_\chi\;\mathrm{[TeV]}$")
    ax.set_ylabel(r"$\varepsilon$")

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
    ax.annotate(label, xy=(0.05, 0.975), xycoords="axes fraction", ha="left", va="top")

    # Retrieve unique scan points from the dataframe (not used for contouring here,
    # but kept for potential Z-matrix / rate-overlay extensions below)
    mx_vals      = np.sort(df['mx'].unique())
    epsilon_vals = np.sort(df['epsilon'].unique())

    # Select the coupling scenario for this panel
    alpha = 'THERMAL' if n == 0 else 'MAX'

    X, Y   = np.meshgrid(mx_vals, epsilon_vals)
    levels = np.logspace(np.log10(0.1), np.log10(1000), 100)
    norm   = LogNorm(vmin=levels[0], vmax=levels[-1])

    if n == 1:
        # ── RIGHT PANEL: maximum coupling — draw all six exclusion regions ────
        masks      = build_exclusion_masks(exclusion_regions_max, MX, EPS)
        colors     = ['crimson', 'blueviolet', 'gold', 'darkorange', 'blue', 'purple']
        linestyles = ['dashed', 'dotted', 'dashdot', (0,(5,1)), (0,(3,1,1,1)), 'solid']
        labels     = ['0 mm', '1e2 mm', '1e3 mm', '1e4 mm', '1e5 mm', '1e6 mm']

        for i, mask in enumerate(masks):
            color = colors[i % len(colors)]

            # Solid contour line at the exclusion boundary (mask = 0.5 threshold)
            ax.contour(MX, EPS, mask,
                       levels=[0.5],
                       colors=[colors[i]],
                       linestyles=[linestyles[i]],
                       linewidths=2.0)

            # Semi-transparent fill inside the excluded region
            ax.contourf(MX, EPS, mask,
                        levels=[0.5, 1.5],
                        colors=[color],
                        alpha=0.3)

        # Legend showing each timing-resolution scenario
        from matplotlib.lines import Line2D
        legend_elements = [
            Line2D([0], [0], color=colors[i], linestyle=linestyles[i],
                   linewidth=2.0, label=labels[i])
            for i in range(6)
        ]
        #ax.legend(handles=legend_elements, loc='lower right', ncols=2)

    else:
        # ── LEFT PANEL: thermal coupling — draw simple flat reference line ────
        # The thermal limit is a vertical line at m_chi = 11 TeV, constant in epsilon.
        ax.plot([x * 1000 for x in thermal_exp_lim], eps,
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
    # "Run 3 Cosmics" watermark in the upper-right corner of each panel
    ax.text(0.98, 1.04, r"Run 3 Cosmics",
            transform=ax.transAxes, ha='right', va='top',
            fontsize=15, clip_on=False, zorder=10)
    ax.xaxis.set_major_formatter(tev_formatter)

# ── SAVE ─────────────────────────────────────────────────────────────────────
plt.savefig("figures/ExcludedMass_mX_ep_explim_Run3VolLim.png")