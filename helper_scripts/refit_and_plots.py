import sys
# runWith1DVanilla_v25 reads the working area from sys.argv[1] at import time
sys.argv = ['x', 'rpfmult_Binningv10_Inputv25_SR_M3000GeV_e4']
import runWith1DVanilla_v25_SR_M3000GeV_e4 as ref
from TwoDAlphabet.twoDalphabet import TwoDAlphabet
from TwoDAlphabet import plot
from TwoDAlphabet.helpers import cd

signal = 'Signal_M3000GeV_e4_SR'
tf = '2x0'
wa = ref.workingArea
subtag = '{}-{}_area'.format(signal, tf)

# Re-run the fit on the regenerated (renamed) card, with the same rMax tuning as the main script
fitPassed = False
rMax = 50
while not fitPassed:
    print('\n\n=== perform_fit with rMax = %s ===' % rMax)
    ref.perform_fit(signal, tf, rMax, extra='--robustHesse 1')
    with open('{}/{}/FitDiagnostics.log'.format(wa, subtag)) as f:
        content = f.read()
    if 'Fit failed' not in content:
        fitPassed = True
    rMax = rMax / 2.

# Regenerate the pull plot and the (CMS-styled) correlation matrices with the new names
twoD = TwoDAlphabet(wa, '{}/runConfig.json'.format(wa), loadPrevious=True)
varsToIgnore = twoD.ledger.alphaParams.name[
    twoD.ledger.alphaParams.name.str.contains(r'_bin_\d+-\d+')
].to_list()
with cd('{}/{}'.format(wa, subtag)):
    plot.nuis_pulls()
    plot.plot_correlation_matrix(varsToIgnore=varsToIgnore, threshold=0, corrText=False)

print('ALL DONE')
