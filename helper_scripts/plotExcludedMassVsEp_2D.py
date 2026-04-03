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

# -- GLOBAL PLOT SETTINGS ----------------------------------------------------
pd.set_option('display.max_columns', None)
plt.rcParams.update({'font.size': 15})
cms_fp = FontProperties(family="sans-serif", weight="bold")

# -- LOAD DATA ----------------------------------------------------------------
# Parquet file contains signal rates for muons, electrons, and combined,
# over a grid of (mx, epsilon, ma) with thermal and max coupling scenarios.
df = pd.read_parquet(
    '/Users/sanjitmasanam/Documents/CodingProjects/CMS/t0timing_chamber_study/'
    'rates_muons_electrons_both_alphas_MX_1TeV_to_100TeV_special_granularity_fewer_columns.parquet'
)

# -- EXCLUSION BOUNDARY ARRAYS ------------------------------------------------
# Each list has 49 entries corresponding to the epsilon grid defined below.
# Values are m_chi in TeV; -1 means "no limit at this epsilon point."
# Suffix _closed = the upper/inner edge of the exclusion band (smaller decay lengths).
# No suffix    = the outer/lower edge of the exclusion band (larger decay lengths).
#
# e0 → timing resolution 0 mm (perfect timing)
# e2 → 1e2 mm, e3 → 1e3 mm, e4 → 1e4 mm, e5 → 1e5 mm, e6 → 1e6 mm

max_exp_lim_Run3_e0_closed = [-1, -1, 0.999, 2.34559059642749, 8.047060084018923, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 101.77645199514355, 159.26655602770015, 180.001, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1]
max_exp_lim_Run3_e0 = [-1, -1, 0.999, 1.989289420013921, 3.8352868545849286, 10.607163548656244, 12.642830082117744, 14.48666484383164, 16.174593693248795, 17.734163216970458, 19.18704246109213, 21.212916547194745, 24.046520977646697, 27.101008717405225, 30.250049424324708, 33.997989075178005, 37.57845869699402, 41.35250820758033, 45.64600381978391, 49.233136789853624, 53.97098633050491, 2.1273624869454992, 3.2604898119779397, 4.509109056523756, 5.827560694702743, 7.3748872652234905, 9.326054477956657, 13.544483705155772, 17.002094754301766, 19.306295175268072, 22.4831792983639, 26.071097193293436, 29.945999238635718, 35.05657390245155, 39.120743361795085, 43.7155308153027, 49.00099318899491, 54.32163897168411, 60.368098387089134, 66.77036572008726, 72.91179143733001, 80.41165777126075, 87.58597462578318, 94.98138407333643, 102.58393681909311, 110.84321056353025, 119.72620160788034, 128.4310009583431, 138.1526134796885]
max_exp_lim_Run3_e2_closed = [-1, -1, -1, -1, -1, -1, 8.089644190700314, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 102.3996146305828, 157.86770831792688, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1]
max_exp_lim_Run3_e2 = [-1, -1, -1, -1, -1, 0.999, 3.5275498393788705, 10.359429191282258, 13.20544744496411, 15.857177531312887, 18.353166643672413, 21.21266374969884, 24.96517963743312, 28.511737313390828, 31.881041190732397, 35.097564887099956, 38.18245676986376, 41.69516441539717, 45.88497881223097, 49.90592823785964, 53.77540276568576, 2.643844382192244, 3.8869415187221708, 5.289169481698655, 6.544850184511433, 8.259643758487204, 10.982717034251491, 14.84989079928836, 17.497828322802306, 19.427581999875446, 24.38646439680257, 29.68155598135177, 33.69698505043069, 36.8511886102015, 39.39563466175128, 45.33431081748444, 51.346756058859135, 56.25009705316504, 60.7247817271862, 68.22448398769595, 74.52006614601581, 79.88389165477324, 88.13877129521323, 95.29600808100231, 102.66082884296, 112.0898350374693, 120.23210256722201, 129.47422638570816, 137.66948193211465]
max_exp_lim_Run3_e3_closed = [-1, -1, -1, -1, -1, -1, 7.820911538524731, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 101.30138686381873, 158.5598361457716, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1]
max_exp_lim_Run3_e3 = [-1, -1, -1, -1, -1, 0.999, 3.5759535278517642, 10.36349116891762, 13.242130275788133, 15.925139366810937, 18.45156892163578, 21.396738566429207, 25.113569193841926, 28.62601619743652, 31.96248431165744, 35.14718411574942, 38.20102860824601, 41.73464293756911, 46.022776158422346, 50.13919928157194, 54.101738410521726, 2.642678795996045, 3.8777171377100084, 5.03199195672519, 6.540670840780755, 8.28850192883864, 10.978693430279469, 14.835178022754112, 17.48017115014316, 19.409768047698673, 24.326731744712554, 29.649638134035765, 33.680822234945914, 36.84436497597065, 39.39451076492431, 45.28896012357065, 51.263866466657234, 56.14674646881763, 60.48948548664475, 68.19212197450732, 74.62019412611092, 80.12805998331977, 88.50330192424038, 95.6711291114311, 103.04583272565647, 111.76332149697282, 119.35540021911136, 128.77403621446112, 137.32721751545625]
max_exp_lim_Run3_e4_closed = [-1, -1, -1, -1, -1, -1, 7.91057315273018, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 100.2285545281017, 154.90238419206685, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1]
max_exp_lim_Run3_e4 = [-1, -1, -1, -1, -1, 0.999, 3.448503341724659, 10.432776327655265, 13.291327531509074, 15.955214139442878, 18.463170307085335, 21.37876470068076, 25.047288749226137, 28.513339590674615, 31.80492664828329, 34.94591239667529, 37.95689722469347, 41.40265901788826, 45.96747183941218, 50.35262334788652, 54.5771854987152, 2.6598502060345193, 3.8938862626815838, 5.0527933123066395, 6.560356261175963, 8.275535727723943, 10.954961817402532, 14.825118132906, 17.476362748818286, 19.409052499372134, 24.34886824488088, 29.689517081035575, 33.727659047414576, 36.89307293338162, 39.44261726844736, 45.32330871904162, 51.18187620294927, 55.99559938706413, 60.05501190449436, 67.8908214260096, 74.41179350419864, 79.92888335236866, 88.50656059567935, 95.85305434717444, 103.20295363112665, 111.31609820114973, 118.47670119019085, 128.4296018070985, 138.0067675659882]
max_exp_lim_Run3_e5_closed = [-1, -1, -1, -1, -1, -1, 9.088219093230125, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 110.47365154724709, 172.10495620869037, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1]
max_exp_lim_Run3_e5 = [-1, -1, -1, -1, -1, 0.999, 2.226154206887296, 12.197356576574581, 15.095651487218133, 17.80114153251218, 20.582815280554094, 24.55123631200942, 28.283639925029313, 31.813824583306637, 35.17021353278606, 38.377051538639556, 42.1672472149645, 46.55381824347668, 50.75376552693521, 54.78678704416412, 58.670249284147324, 2.6632535595310802, 3.7845780059529446, 5.146460961426375, 6.526856383410521, 8.1688946732699, 10.313478295767155, 14.343592645982543, 17.099244508727175, 19.10452434332152, 23.093865652422043, 28.656340194834947, 32.85960597933634, 36.15183541273201, 38.80123769343546, 43.499523179097686, 49.77960235967441, 54.89230916701394, 59.13893669204287, 66.1015442779564, 72.8096292873927, 78.48460696072236, 85.912917557387, 93.28511306311977, 99.67523035676923, 108.67480251102043, 116.66690408793848, 125.2156031450249, 133.99395786405205]
max_exp_lim_Run3_e6_closed = [-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 33.18737174735802, 44.17988593491728, 52.00877931747468, 59.4443293962191, 67.7852508272029, 75.83433519415404, 84.10036138048511, 92.65660438212838, 101.01863218202055, 110.34982984029651, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1]
max_exp_lim_Run3_e6 = [-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 6.549843150991099, 4.837273970125009, 4.674796236603654, 4.538296971331664, 4.425161206515229, 4.333051657143699, 4.259863851936106, 4.203692671609961, 4.162806864514583, 4.135629182238835, 4.355557037932917, 4.9522163214872, 6.474773523192998, 8.299412324669378, 9.850596198222693, 13.070490355875874, 15.67091130328132, 17.697004036741475, 19.308153214862216, 22.681131344878985, 27.273557166170605, 31.006546846268233, 34.092229740120246, 36.678781008667706, 38.87286326513878, 42.64464390967647, 48.20770000128767, 52.90489542258691, 56.92079532931362, 60.85796515308156, 67.43275216899208, 73.11508664596438, 78.07313337325341, 84.36395318036716, 91.22107837379001, 97.26657407265895, 104.16309978604103, 111.69520375221175]

# -- EPSILON GRID -------------------------------------------------------------
# Kinetic-mixing parameter epsilon sampled at 49 points.
# Two sub-ranges: fine-grained near 4–24e-9, then coarser from 34e-9 to 314e-9.
eps = [4e-09, 5e-09, 6e-09, 7e-09, 8e-09, 9e-09, 1e-08, 1.1e-08, 1.2e-08, 1.3e-08, 1.4e-08, 1.5e-08, 1.6e-08, 1.7e-08, 1.8e-08, 1.9e-08, 2.0e-08, 2.1e-08, 2.2e-08, 2.3e-08, 2.40e-08, 3.40e-08, 4.40e-08, 5.40e-08, 6.40e-08, 7.40e-08, 8.40e-08, 9.40e-08, 1.04e-07, 1.14e-07, 1.24e-07, 1.34e-07, 1.44e-07, 1.54e-07, 1.64e-07, 1.74e-07, 1.84e-07, 1.94e-07, 2.04e-07, 2.14e-07, 2.24e-07, 2.34e-07, 2.44e-07, 2.54e-07, 2.64e-07, 2.74e-07, 2.84e-07, 2.94e-07, 3.04e-07, 3.14e-07]

# -- FLAT THERMAL LIMIT LINE ---------------------------------------------------
# A flat m_chi = 11 TeV limit across all epsilon values; used as a simple
# reference line on the thermal (left) panel.
thermal_exp_lim = [11] * len(eps)

print(len(max_exp_lim_Run3_e0_closed), len(max_exp_lim_Run3_e0), len(eps))

# -- BUILD POLYGON BOUNDARY COORDINATES ---------------------------------------
# Each exclusion region is defined by two boundary curves that together form a
# closed polygon in (m_chi [GeV], epsilon) space.
#
# The polygon is assembled as:
#   outer edge (indices 2-20)  → bottom-right sweep at low epsilon
#   inner edge (indices 21-48) → top-left sweep at high epsilon
# Then the two curves are concatenated (second reversed) to close the polygon.
#
# Units: m_chi arrays are stored in TeV; multiply by 1000 to convert to GeV.
# The sentinel value 180001 closes each curve at the right plot boundary.

# -- e0 (0 mm timing resolution) ---------------------------------------------
x1 = [x * 1000 for x in max_exp_lim_Run3_e0[2:21]] + [180001]   # outer edge
y1 = eps[2:22]
x2 = [999] + [x * 1000 for x in max_exp_lim_Run3_e0[21:]] + [180001]  # inner edge
y2 = eps[20:50]

# -- e2 (1e2 mm) --------------------------------------------------------------
x3 = [x * 1000 for x in max_exp_lim_Run3_e2[2:21]] + [180001]
y3 = eps[2:22]
x4 = [999] + [x * 1000 for x in max_exp_lim_Run3_e2[21:]] + [180001]
y4 = eps[20:50]

# -- e3 (1e3 mm) --------------------------------------------------------------
x5 = [x * 1000 for x in max_exp_lim_Run3_e3[2:21]] + [180001]
y5 = eps[2:22]
x6 = [999] + [x * 1000 for x in max_exp_lim_Run3_e3[21:]] + [180001]
y6 = eps[20:50]

# -- e4 (1e4 mm) --------------------------------------------------------------
x7 = [x * 1000 for x in max_exp_lim_Run3_e4[2:21]] + [180001]
y7 = eps[2:22]
x8 = [999] + [x * 1000 for x in max_exp_lim_Run3_e4[21:]] + [180001]
y8 = eps[20:50]

# -- e5 (1e5 mm) --------------------------------------------------------------
x9  = [x * 1000 for x in max_exp_lim_Run3_e5[2:21]] + [180001]
y9  = eps[2:22]
x10 = [999] + [x * 1000 for x in max_exp_lim_Run3_e5[21:]] + [180001]
y10 = eps[20:50]

# -- e6 (1e6 mm) — special shape ----------------------------------------------
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

# -- CONTOUR GRID -------------------------------------------------------------
# A dense log-spaced 2-D grid for evaluating inside/outside of each exclusion
# polygon. Log spacing ensures uniform visual density on the log-log axes.
mx_grid  = np.logspace(np.log10(1000),  np.log10(180000), 600)   # m_chi in GeV
eps_grid = np.logspace(np.log10(1e-9),  np.log10(1e-6),   600)   # epsilon
MX, EPS  = np.meshgrid(mx_grid, eps_grid)

# -- EXCLUSION REGION REGISTRY ------------------------------------------------
# Each entry is (outer_x, outer_y, inner_x, inner_y).
# The string sentinel "wow" signals that the inner pair already forms the full
# closed polygon (used for e6 whose geometry doesn't decompose neatly).
exclusion_regions_max = [
    (x1,    y1,    x2,    y2),    # e0: 0 mm
    (x3,    y3,    x4,    y4),    # e2: 1e2 mm
    (x5,    y5,    x6,    y6),    # e3: 1e3 mm
    (x7,    y7,    x8,    y8),    # e4: 1e4 mm
    (x9,    y9,    x10,   y10),   # e5: 1e5 mm
    ("wow", "wow", poly_x, poly_y),  # e6: 1e6 mm (pre-built polygon)
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


# -- FIGURE SETUP -------------------------------------------------------------
fig, _axs = plt.subplots(nrows=1, ncols=2, figsize=(10, 5), constrained_layout=True)
fig.subplots_adjust(hspace=0.3)
axs = _axs.flatten()

# -- MAIN LOOP — draw each panel -----------------------------------------------
for n, ax in enumerate(axs):

    # Common log-log axes and physical axis labels
    ax.set_xscale('log')
    ax.set_yscale('log')
    ax.set_xlim(1000, 180000)
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
            r"$\alpha_{x}^{\text{max}}=0.058\;\mathrm{m_{\chi}/TeV}$"
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
        # -- RIGHT PANEL: maximum coupling — draw all six exclusion regions ----
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
        ax.legend(handles=legend_elements, loc='lower right', ncols=2)

    else:
        # -- LEFT PANEL: thermal coupling — draw simple flat reference line ----
        # The thermal limit is a vertical line at m_chi = 11 TeV, constant in epsilon.
        ax.plot([x * 1000 for x in thermal_exp_lim], eps,
                color='black', linestyle='dashed')

    # Remove default top/right spines, then re-enable all four (cosmetic clean-up)
    ax.spines[['top', 'right']].set_visible(False)

# Re-enable all spines on both axes after the loop
for side in ("left", "right", "top", "bottom"):
    axs[0].spines[side].set_visible(True)
    axs[1].spines[side].set_visible(True)

# -- AXIS TICK FORMATTER -------------------------------------------------------
# The x-axis stores m_chi in GeV internally; reformat tick labels to show TeV.
tev_formatter = mticker.FuncFormatter(lambda x, pos: f"{x*1e-3:g}")

for ax in axs.flat:
    # "Run 3 Cosmics" watermark in the upper-right corner of each panel
    ax.text(0.98, 1.04, r"Run 3 Cosmics",
            transform=ax.transAxes, ha='right', va='top',
            fontsize=15, clip_on=False, zorder=10)
    ax.xaxis.set_major_formatter(tev_formatter)

# -- SAVE ---------------------------------------------------------------------
plt.savefig("figures/ExcludedMass_mX_ep_explim_Run3_APS.png")