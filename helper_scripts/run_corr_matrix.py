import sys
from TwoDAlphabet.twoDalphabet import TwoDAlphabet
from TwoDAlphabet import plot
from TwoDAlphabet.helpers import cd

# Usage: python run_corr_matrix.py [workingArea] [subtag]
wa = sys.argv[1] if len(sys.argv) > 1 else 'rpfmult_Binningv10_Inputv25_SR_M3000GeV_e4'
subtag = sys.argv[2] if len(sys.argv) > 2 else 'Signal_M3000GeV_e4_SR-2x0_area'

twoD = TwoDAlphabet(wa, wa + '/runConfig.json', loadPrevious=True)

# Mirror StdPlots: ignore the bin-by-bin nuisances so the matrix shows the TF params + named systs
varsToIgnore = twoD.ledger.alphaParams.name[
    twoD.ledger.alphaParams.name.str.contains(r'_bin_\d+_\d+')
].to_list()
print('Ignoring %d bin-by-bin params' % len(varsToIgnore))

with cd(wa + '/' + subtag):
    plot.plot_correlation_matrix(varsToIgnore=varsToIgnore, threshold=0, corrText=False)

print('DONE')
