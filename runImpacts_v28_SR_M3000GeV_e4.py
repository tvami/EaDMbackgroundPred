import os, sys, glob
from TwoDAlphabet.twoDalphabet import TwoDAlphabet

# Usage: python runImpacts_v28_SR_M3000GeV_e4.py <workingArea> [--regen]
# e.g.   python runImpacts_v28_SR_M3000GeV_e4.py rpfmult_Binningv13_Inputv28_SR_M3000GeV_e4 --regen
# Pass --regen to rebuild base.root + card.txt from the JSON first (needed after editing
# the config, e.g. renaming nuisances). Omit it to just re-run impacts on the existing card.
workingArea = sys.argv[1]
configJSON = "config_Binningv13_Inputv28_SR_M3000GeV_e4.json"  # same JSON as runWith1DVanilla_v28_SR_M3000GeV_e4.py


def _read_rpf_seed(area_dir, tf):
    '''Parse the background-only best-fit rpf parameters from rpf_params_*_<tf>_fitb.txt
    so the impacts initial fit can be seeded via --setParameters.'''
    seed = {}
    for f in glob.glob(os.path.join(area_dir, 'rpf_params_*_{}_fitb.txt'.format(tf))):
        with open(f) as fh:
            for line in fh:
                if ':' in line:
                    pname, rest = line.split(':', 1)
                    seed[pname.strip()] = float(rest.split('+/-')[0].strip())
    return seed


def regenerate(signal, tf):
    '''Rebuild base.root (make_workspace) and the 2x0 card.txt (MakeCard) so edits to the
    JSON config -- e.g. the CMS_EXO26004_* nuisance renames -- propagate into the workspace
    and datacard. Reuses the v28 workspace builder so the rpf setup stays identical.
    make_workspace() overwrites base.root + the ledger but leaves the existing fit/GoF
    outputs in the *_area directory untouched.'''
    import runWith1DVanilla_v28_SR_M3000GeV_e4 as ref
    print('Regenerating workspace + card with current JSON ...')
    ref.make_workspace()
    twoD = TwoDAlphabet(workingArea, '{}/runConfig.json'.format(workingArea), loadPrevious=True)
    subset = twoD.ledger.select(ref._select_signal, signal, tf)
    twoD.MakeCard(subset, '{}-{}_area'.format(signal, tf))


def run_impacts(signal, tf, blind=True, expectSignal=1, name=None, rMin=None, extra='', initialExtra=''):
    working_area = workingArea
    area_dir = os.path.join(working_area, '{}-{}_area'.format(signal, tf))
    setParams = _read_rpf_seed(area_dir, tf)
    print('Seeding rpf params for impacts: %s' % setParams)

    twoD = TwoDAlphabet(working_area, '{}/runConfig.json'.format(working_area), loadPrevious=True)
    twoD.Impacts(
        subtag='{}-{}_area'.format(signal, tf),
        cardOrW='card.txt',
        blind=blind,
        expectSignal=expectSignal,
        name=name,
        rMin=rMin,
        setParams=setParams,
        extra=extra,
        initialExtra=initialExtra,
    )


if __name__ == "__main__":
    signal = "Signal_M3000GeV_e4_SR"
    tf_type = '2x0'

    if '--regen' in sys.argv:
        regenerate(signal, tf_type)

    # Blinded Asimov, signal injected (-t -1 --expectSignal 1) -> impacts_t1
    # --robustFit 1 ONLY on the initial POI fit: stabilises the headline r uncertainty
    # (avoids the Minos low-side flooring to rMin) while keeping the per-parameter fits on plain
    # Minos, so no nuisance (e.g. RNN) is dropped from the collected json.
    run_impacts(signal, tf_type, blind=True, expectSignal=1, name='t1', initialExtra='--robustFit 1')

    # Blinded Asimov, background-only (-t -1 --expectSignal 0) -> impacts_t0
    # Let r float negative (default rMin=-10) so the best-fit r~0 isn't pinned at a boundary
    # (which makes every nuisance impact one-sided), and use --robustFit 1 on the initial fit
    # only to avoid the Minos low-side flooring to rMin.
    run_impacts(signal, tf_type, blind=True, expectSignal=0, name='t0', initialExtra='--robustFit 1')

    # Unblinded fit to data -> impacts_unblind1 (run later)
    # run_impacts(signal, tf_type, blind=False, name='unblind1')
