import sys
from TwoDAlphabet.twoDalphabet import TwoDAlphabet
from TwoDAlphabet import plot
from TwoDAlphabet.helpers import cd

# Restored 2026-08-05 from helper_scripts/__pycache__/run_corr_matrix.cpython-36.pyc.
# The source had been deleted (2026-07-07, when refit_and_plots.py landed) while CLAUDE.md
# went on documenting this invocation. Unlike refit_and_plots.py this does NOT refit -- it
# only re-plots the correlation matrix from existing output, which is what the "Re-plotting
# (fast, reads existing output, no proxy)" section wants.
#
# Usage: python3 helper_scripts/run_corr_matrix.py <area> <signal>-2x0_area
wa = sys.argv[1] if len(sys.argv) > 1 else 'rpfmult_Binningv10_Inputv25_SR_M3000GeV_e4'
subtag = sys.argv[2] if len(sys.argv) > 2 else 'Signal_M3000GeV_e4_SR-2x0_area'

twoD = TwoDAlphabet(wa, wa+'/runConfig.json', loadPrevious=True)

# The free-floating fail-region yields are per-bin params in event units; they swamp the
# matrix and carry no physics.
varsToIgnore = twoD.ledger.alphaParams.name[
    twoD.ledger.alphaParams.name.str.contains(r'_bin_\d+_\d+')].to_list()

print('Ignoring %d bin-by-bin params' % len(varsToIgnore))

with cd(wa+'/'+subtag):
    plot.plot_correlation_matrix(varsToIgnore=varsToIgnore, threshold=0, corrText=False)

print('DONE')
