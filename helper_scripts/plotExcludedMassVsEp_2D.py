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
y_axis = 'lifetime' # Can be either lifetime or epsilon

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

max_exp_lim_Run3_e0_closed = [-1, -1, -1, -1, -1, -1, -1, -1, 6.924391665054693, 10.124944014543727, 13.570668894842978, 16.797999814022926, 19.842984928482345, 22.736043353900126, 25.503389253343443, 28.16807663007822, 30.75081967426698, 33.27068383182138, 35.74561272759944, 38.19292441076089, 40.9467676243157, 75.70740894444864, 119.09295111172712, 167.15377255407702, 224.10138597491175, 344.43776506803, 498.8756181838581, 722.1171566956488, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1]
max_exp_lim_Run3_e0 = [-1, -1, -1, -1, -1, -1, -1, -1, 3.9839680946435196, 3.919900665533535, 3.864564541066366, 3.8170107390531713, 3.7764565061416673, 3.742244463919242, 3.7138133291985524, 3.690676158883672, 3.672405053338485, 3.658619299092049, 3.648976775335615, 3.6431669622185705, 3.640906046500938, 3.764007453400987, 4.234064633522015, 5.635643255693138, 7.290007827541081, 10.595600738047432, 20.474082137290022, 26.327442688335335, 30.258110408645067, 33.100044087740436, 35.25714674872506, 36.95181852743722, 38.317949587272665, 39.441582847728846, 43.4286068239164, 50.159896987093354, 55.52425613973532, 59.909308618009874, 68.22517121402764, 75.11064639408757, 81.6205305628775, 90.73929063890353, 98.35244865416057, 115.01453037427422, 131.58300367921612, 145.4016927552277, 157.13208104367985, 167.23465391465038, 176.04050050392834, 193.22618336010765, 219.72339622367028, 251.74134643168264, 277.73768426088526, 299.2846616022484, 336.54189298614125, 368.655050532336, 396.125841875143, 435.75829782978934, 472.51116023545467, 506.7820346182345, 549.5144740847568, 587.1503097009091, 628.9617782185678, 670.9699257725044, 712.8660208008652, 762.7981705209223, 809.3775663903112, 860.4079776585296, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1]

# ── EPSILON GRID ─────────────────────────────────────────────────────────────
# Kinetic-mixing parameter epsilon sampled at 49 points.
# Two sub-ranges: fine-grained near 4–24e-9, then coarser from 34e-9 to 314e-9.
eps = [4e-09, 5e-09, 6e-09, 7e-09, 8e-09, 9e-09, 1e-08, 1.1e-08, 1.2e-08, 1.3e-08, 1.4e-08, 1.5e-08, 1.6e-08, 1.7e-08, 1.8e-08, 1.9e-08, 2e-08, 2.1e-08, 2.2e-08, 2.3e-08, 2.4e-08, 3.4e-08, 4.4e-08, 5.4e-08, 6.4e-08, 7.4e-08, 8.4e-08, 9.4e-08, 1.04e-07, 1.14e-07, 1.24e-07, 1.34e-07, 1.44e-07, 1.54e-07, 1.64e-07, 1.74e-07, 1.84e-07, 1.94e-07, 2.04e-07, 2.14e-07, 2.24e-07, 2.34e-07, 2.44e-07, 2.54e-07, 2.64e-07, 2.74e-07, 2.84e-07, 2.94e-07, 3.04e-07, 3.28e-07, 3.52e-07, 3.76e-07, 4.00e-07, 4.24e-07, 4.48e-07, 4.72e-07, 4.96e-07, 5.20e-07, 5.44e-07, 5.68e-07, 5.92e-07, 6.16e-07, 6.40e-07, 6.64e-07, 6.88e-07, 7.12e-07, 7.36e-07, 7.60e-07, 7.84e-07, 8.08e-07, 8.32e-07, 8.56e-07, 8.80e-07, 9.04e-07, 9.28e-07, 9.52e-07, 9.76e-07, 1.00e-06]

A = 1.6e-21
tau = [A * e**(-2) for e in eps]

if y_axis == 'lifetime': yAxis = tau
elif y_axis == 'epsilon': yAxis = eps

# ── FLAT THERMAL LIMIT LINE ───────────────────────────────────────────────────
# A flat m_chi = 11 TeV limit across all epsilon values; used as a simple
# reference line on the thermal (left) panel.
thermal_exp_lim = [11] * len(yAxis)

print(len(max_exp_lim_Run3_e0_closed), len(max_exp_lim_Run3_e0), len(yAxis))

# ── BUILD POLYGON BOUNDARY COORDINATES ───────────────────────────────────────
# Each exclusion region is defined by two boundary curves that together form a
# closed polygon in (m_chi [GeV], epsilon) space.
#
# Units: m_chi arrays are stored in TeV; multiply by 1000 to convert to GeV.
# The sentinel value 10000001 closes each curve at the right plot boundary.

x1 = [x * 1000 for x in max_exp_lim_Run3_e0_closed[8:27]] + [10000001]  # outer edge, indices 6-25
y1 = yAxis[8:28]                                                            # match length: 20 values + sentinel

x2 = [x * 1000 for x in max_exp_lim_Run3_e0[8:67]] + [10000001]         # inner edge, indices 6-25
y2 = yAxis[8:68]

# ── CONTOUR GRID ─────────────────────────────────────────────────────────────
# A dense log-spaced 2-D grid for evaluating inside/outside of each exclusion
# polygon. Log spacing ensures uniform visual density on the log-log axes.
mx_grid  = np.logspace(np.log10(1000),  np.log10(1000000), 2000)   # m_chi in GeV
if y_axis == 'epsilon': y_grid = np.logspace(np.log10(1e-9),  np.log10(1e-6),   600)   # epsilon
elif y_axis == 'lifetime': y_grid = np.logspace(np.log10(1e-9),  np.log10(1e-4),   6000)
MX, yVALS  = np.meshgrid(mx_grid, y_grid)

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
fig, _axs = plt.subplots(nrows=1, ncols=2, figsize=(10, 5), constrained_layout=True)
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
        ax.set_ylabel(r"$\varepsilon$")
    elif y_axis == 'lifetime': 
        ax.set_ylim(1e-9, 1e-4)
        ax.set_ylabel(r"$\tau$")
    ax.set_xlabel(r"$m_\chi\;\mathrm{[TeV]}$")

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
        masks      = build_exclusion_masks(exclusion_regions_max, MX, yVALS)
        colors     = ['crimson', 'blueviolet', 'gold', 'darkorange', 'blue', 'purple']
        linestyles = ['dashed', 'dotted', 'dashdot', (0,(5,1)), (0,(3,1,1,1)), 'solid']
        labels     = ['0 mm', '1e2 mm', '1e3 mm', '1e4 mm', '1e5 mm', '1e6 mm']

        for i, mask in enumerate(masks):
            color = colors[i % len(colors)]

            # Solid contour line at the exclusion boundary (mask = 0.5 threshold)
            ax.contour(MX, yVALS, mask,
                       levels=[0.5],
                       colors=[colors[i]],
                       linestyles=[linestyles[i]],
                       linewidths=2.0)

            # Semi-transparent fill inside the excluded region
            ax.contourf(MX, yVALS, mask,
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
    # "Run 3 Cosmics" watermark in the upper-right corner of each panel
    ax.text(0.98, 1.04, r"Run 3 Cosmics",
            transform=ax.transAxes, ha='right', va='top',
            fontsize=15, clip_on=False, zorder=10)
    ax.xaxis.set_major_formatter(tev_formatter)

# ── SAVE ─────────────────────────────────────────────────────────────────────
fig.canvas.draw()

bbox = axs[1].get_tightbbox(fig.canvas.get_renderer())
bbox = bbox.transformed(fig.dpi_scale_trans.inverted())

fig.savefig(
    "figures/ExcludedMass_mX_ep_explim_Run3VolLim.pdf",
    bbox_inches=bbox
)
