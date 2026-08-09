# Script Purpose: merge the fine log-spaced bins of the distance-at-detector distribution
# into coarse shells whose boundaries sit 1e2, 1e3, 1e4, 1e5, 1e6 mm from the start of the
# volume (START = 8 m), plus a final shell running out to the outer edge of the disk.
# The parquet x-axis is in METRES (it spans 1 to 4000, matching depth -8..-4000 m and
# diskR 4000 m in the filename), so the mm offsets are divided by 1000 to get edges
# 8, 8.1, 9, 18, 108, 1008, 4000 m.
# Output: props_dict[mass] = fraction of events landing in each shell (sums to 1).
import os
import pandas as pd, matplotlib.pyplot as plt, numpy as np

parquet_dir = '/home/users/smasanam/EarthAsDMProject/CMSSW_14_1_0_pre5/src/helper_scripts/parquet_files'

infilename1 = f'{parquet_dir}/dist_from_depths_at_detector_masses_1000_9000_depth_-8.0--4000.0_diskR_4000.0_mDM_1000.0-9000.0_mA_0.22_dmModel_mom_con_ave_eloss__DETYCON_20.0.parquet'
infilename2 = f'{parquet_dir}/dist_from_depths_at_detector_masses_10000_90000_depth_-8.0--4000.0_diskR_4000.0_mDM_10000.0-90000.0_mA_0.22_dmModel_mom_con_ave_eloss__DETYCON_20.0.parquet'
infilename3 = f'{parquet_dir}/dist_from_depths_at_detector_masses_100000_900000_depth_-8.0--4000.0_diskR_4000.0_mDM_100000.0-900000.0_mA_0.22_dmModel_mom_con_ave_eloss__DETYCON_20.0.parquet'

outdir = os.path.dirname(os.path.abspath(__file__))

# The parquet files only carry one column per decade step, so the low block steps by 1000
# (not 500) -- there is no '1500 bin_start' column.
mass_list = np.concatenate([
    np.arange(1000, 10000, 1000),
    np.arange(10000, 100000, 10000),
    np.arange(100000, 1000000, 100000)
])

print(mass_list)

# Read each file once instead of re-reading it inside the mass loop.
dfhist1 = pd.read_parquet(infilename1)
dfhist2 = pd.read_parquet(infilename2)
dfhist3 = pd.read_parquet(infilename3)

START = 8.0  # m, front face of the volume (|depth| = 8.0 in the filename)
# Shell boundaries, quoted in mm from START, converted to the metre axis of the data.
OFFSETS_MM = np.array([0.0, 1e2, 1e3, 1e4, 1e5, 1e6])
OFFSETS = OFFSETS_MM / 1000.0  # -> edges 8, 8.1, 9, 18, 108, 1008 m (+ outer edge 4000 m)


def get_hist(mass):
    """Return (bin_edges, density) for one mass.

    'count' in these files is a probability *density*: sum(count * bin_width) == 1.
    'bin_start' holds the 33 left edges of a geometric binning (constant ratio
    r = 1.285741), so the missing right-most edge is bin_start[-1] * r = 4000.0 --
    a linear extrapolation would give 3802.4 and break the unit normalisation.
    """
    dfhist = dfhist1 if mass < 10000 else dfhist2 if mass < 100000 else dfhist3

    bin_start = dfhist[f'{mass} bin_start'].values
    density   = dfhist[f'{mass} count'].values

    ratios = bin_start[1:] / bin_start[:-1]
    if not np.allclose(ratios, ratios[0]):
        raise ValueError(f'mass {mass}: bin_start is not geometrically spaced')
    bin_edges = np.append(bin_start, bin_start[-1] * ratios[0])

    return bin_edges, density


def rebin_loglinear(bin_edges, density, new_bin_edges):
    """Fraction of the distribution inside each new bin.

    Builds the exact cumulative distribution at the original edges, then interpolates
    it linearly in log(x) to split the original bins that straddle a new edge. Linear
    in log(x) matches the geometric binning: within an original bin it assumes the
    density falls as 1/x rather than being flat. The interpolant is exact at every
    original edge either way; the choice only affects the straddling bins.
    """
    bin_widths = np.diff(bin_edges)
    cdf = np.concatenate([[0.0], np.cumsum(density * bin_widths)])

    x = np.clip(new_bin_edges, bin_edges[0], bin_edges[-1])
    F = np.interp(np.log(x), np.log(bin_edges), cdf)

    return np.diff(F)


props_dict = {}
captured = {}

for mass in mass_list:
    bin_edges, density = get_hist(mass)

    new_bin_edges = np.append(START + OFFSETS, bin_edges[-1])

    # Probability mass per shell -- NOT divided by the shell width. Dividing by the
    # width turns it back into a density, and normalising densities is meaningless
    # when the shells span 0.1 m to ~3000 m.
    new_counts = rebin_loglinear(bin_edges, density, new_bin_edges)

    # Anything outside [START, outer edge] is dropped, so renormalise over the window.
    total = np.sum(new_counts)
    props = new_counts / total
    captured[int(mass)] = total
    print(f'{mass:>7d}  props={np.array2string(props, precision=5)}  captured={total:.5f}')

    props_dict[int(mass)] = props

print("--------------------------------------------------")
print(props_dict)

np.save(os.path.join(outdir, 'parquet_files/props_dict.npy'), props_dict, allow_pickle=True)


# ----------------------------------------------------------------------------------
# Validation: does the log-linear interpolation reproduce the binned distribution?
# ----------------------------------------------------------------------------------
def rebin_linear(bin_edges, density, new_bin_edges):
    """Same as rebin_loglinear but interpolating the CDF linearly in x (flat density)."""
    cdf = np.concatenate([[0.0], np.cumsum(density * np.diff(bin_edges))])
    x = np.clip(new_bin_edges, bin_edges[0], bin_edges[-1])
    return np.diff(np.interp(x, bin_edges, cdf))


def to_mm(x):
    """Metre axis of the data -> mm measured from the bottom of the detector (START)."""
    return (np.asarray(x, dtype=float) - START) * 1000.0


def sci(v):
    """Scientific-notation label, e.g. 0, $10^{2}$, $4\\times10^{6}$."""
    if v == 0:
        return '0'
    e = int(np.floor(np.log10(abs(v))))
    m = v / 10.0 ** e
    if np.isclose(m, 1, rtol=5e-2):
        return rf'${{10^{{{e}}}}}$'
    return rf'${m:.1f}\times10^{{{e}}}$'


def merge_last_two(p):
    """The plots show one fewer shell: the outermost two are drawn merged."""
    p = np.asarray(p)
    return np.append(p[:-2], p[-2:].sum())


XLABEL = 'Distance from bottom of detector [mm]'

show_masses = [1000, 9000, 90000, 900000]

fig = plt.figure(figsize=(17, 12))
gs = fig.add_gridspec(3, len(show_masses), height_ratios=[1, 1, 1.15], hspace=0.32, wspace=0.26)

for j, mass in enumerate(show_masses):
    bin_edges, density = get_hist(mass)
    bin_widths = np.diff(bin_edges)
    cdf = np.concatenate([[0.0], np.cumsum(density * bin_widths)])
    new_bin_edges = np.append(START + OFFSETS, bin_edges[-1])
    # Plotted shells: the outermost two are drawn as one, i.e. the 1e6 mm edge is dropped.
    plot_bin_edges = np.append(START + OFFSETS[:-1], bin_edges[-1])

    # The plots live on a log axis of distance from START, so only the part of the
    # original binning above START can be shown (everything below it is dropped anyway).
    i0 = int(np.searchsorted(bin_edges, START, side='right'))
    dmax_mm = to_mm(bin_edges[-1])

    # --- Row 0: CDF. The interpolant passes through every original edge exactly; the
    # only question is what it does in between, i.e. at the dotted new-bin edges.
    ax = fig.add_subplot(gs[0, j])
    ds = np.geomspace(1.0, dmax_mm, 2000)
    xs = START + ds / 1000.0
    ax.plot(ds, np.interp(np.log(xs), np.log(bin_edges), cdf), '-', lw=1.8,
            color='C0', label='log-linear interp (used)')
    ax.plot(ds, np.interp(xs, bin_edges, cdf), '--', lw=1.2,
            color='C3', label='linear-in-x interp')
    ax.plot(to_mm(bin_edges[i0:]), cdf[i0:], 'o', ms=3.5, color='k', zorder=5,
            label='binned CDF (exact)')
    for e in plot_bin_edges[1:-1]:
        ax.axvline(to_mm(e), color='0.7', lw=0.8, ls=':', zorder=0)
    ax.set_xscale('log')
    ax.set_xlim(1.0, dmax_mm)
    ax.set_title(f'$m_{{DM}}$ = {int(mass/1000)} TeV')
    ax.set_xlabel(XLABEL)
    if j == 0:
        ax.set_ylabel('Cumulative fraction')
        ax.legend(fontsize=8, loc='upper left')

    # --- Row 1: density. Black step = the actual binned density. Blue = the density
    # the log-linear CDF implies inside each bin, m_i / (x ln r): same area per bin,
    # different shape. Orange = the coarse result converted back to a density.
    # Densities are per mm here: d = (x - START) * 1000, so dP/dd = (dP/dx) / 1000.
    ax = fig.add_subplot(gs[1, j])
    dens_mm = density / 1000.0
    # START sits inside original bin i0-1, so that bin is clipped to it rather than
    # dropped: the histogram then starts at 0 mm, the bottom of the detector. The
    # density is constant across the original bin, so clipping only cuts the x-range.
    # 0 mm has no place on a log axis, so the first edge is drawn at the left of the view.
    hist_dens = dens_mm[i0 - 1:]
    hist_edges = to_mm(np.concatenate([[START], bin_edges[i0:]]))
    hist_edges[0] = 1.0
    ax.stairs(hist_dens, hist_edges, color='k', lw=1.4, label='binned density')
    lnr = np.log(bin_edges[1] / bin_edges[0])
    nz = [i for i in np.nonzero(density)[0] if i >= i0 - 1]
    for i in nz:
        # Same clipping for the straddling bin, at 1 mm rather than 0 (log axis again).
        xi = np.geomspace(max(bin_edges[i], START + 1e-3), bin_edges[i + 1], 20)
        ax.plot(to_mm(xi), density[i] * bin_widths[i] / (xi * lnr) / 1000.0, '-', lw=1.4,
                color='C0', label='log-linear implied density' if i == nz[0] else None)
    coarse = (merge_last_two(props_dict[int(mass)]) * captured[int(mass)]
              / np.diff(to_mm(plot_bin_edges)))
    # The innermost shell starts at 0 mm, which has no place on a log axis: draw it from
    # the left edge of the view instead (the height still uses the true 0-100 mm width).
    draw_edges = to_mm(plot_bin_edges)
    draw_edges[0] = 1.0
    ax.stairs(coarse, draw_edges, color='C1', lw=1.8, ls='--',
              label='rebinned result (as density)')
    for e in plot_bin_edges[1:-1]:
        ax.axvline(to_mm(e), color='0.7', lw=0.8, ls=':', zorder=0)
    ax.set_xscale('log')
    ax.set_yscale('log')
    ax.set_xlim(1.0, dmax_mm)
    ax.set_ylim(max(hist_dens[hist_dens > 0].min(), coarse[coarse > 0].min()) / 20,
                hist_dens.max() * 3)
    ax.set_xlabel(XLABEL)
    if j == 0:
        ax.set_ylabel('Probability density [1/mm]')
        ax.legend(fontsize=8, loc='lower left')

# --- Row 2: how much the splitting choice actually moves the final answer.
ax = fig.add_subplot(gs[2, :])
outer = get_hist(mass_list[0])[0][-1]
# Shell edges as distance from the bottom of the detector, in mm, with the outermost
# two shells merged for display (props_dict itself still carries them separately).
plot_edges_mm = np.append(OFFSETS_MM[:-1], to_mm(outer))
labels = [f'[{sci(lo)}, {sci(hi)}) mm'
          for lo, hi in zip(plot_edges_mm[:-1], plot_edges_mm[1:])]
xpos = np.arange(len(mass_list))
schemes = [(rebin_loglinear, 'log-linear CDF', '-', 'o'),
           (rebin_linear, 'linear-in-x CDF', '--', 's')]
for fn, name, ls, mk in schemes:
    vals = []
    for mass in mass_list:
        bin_edges, density = get_hist(mass)
        p = fn(bin_edges, density, np.append(START + OFFSETS, bin_edges[-1]))
        vals.append(merge_last_two(p / p.sum()))
    vals = np.array(vals)
    for b in range(vals.shape[1]):
        ax.plot(xpos, vals[:, b], marker=mk, ms=3.5, lw=1.1, ls=ls, color=f'C{b}',
                alpha=0.9, label=labels[b] if ls == '-' else None)
    ax.plot([], [], color='k', marker=mk, ls=ls, label=name)
ax.set_xticks(xpos)
ax.set_xticklabels([f'{m/1000:g}' for m in mass_list], rotation=90, fontsize=7)
ax.set_xlabel(r'$m_{DM}$ [TeV]')
ax.set_ylabel('Fraction of events')
ax.set_yscale('log')
ax.set_title('Depth fraction under two interpolation methods  '
             '(colour = bin, line style = method)')
ax.legend(fontsize=7, ncol=4, loc='lower left')
ax.grid(alpha=0.3)

outpng = os.path.join(outdir, 'figures/volumeRateCheck_validation.png')
fig.savefig(outpng, dpi=140, bbox_inches='tight')
print('wrote', outpng)

# Quantitative version of the same comparison.
print("--------------------------------------------------")
print('max |props| deviation from log-linear, over all masses and shells:')
for fn, name, _, _ in schemes[1:]:
    worst = 0.0
    for mass in mass_list:
        bin_edges, density = get_hist(mass)
        nbe = np.append(START + OFFSETS, bin_edges[-1])
        a = rebin_loglinear(bin_edges, density, nbe); a = a / a.sum()
        b = fn(bin_edges, density, nbe); b = b / b.sum()
        worst = max(worst, np.max(np.abs(a - b)))
    print(f'  {name:>20s}: {worst:.4f}')
