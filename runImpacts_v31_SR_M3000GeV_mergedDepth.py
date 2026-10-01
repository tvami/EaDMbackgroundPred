import os, sys, glob
from TwoDAlphabet.twoDalphabet import TwoDAlphabet

# Usage: python runImpacts_v31_SR_M3000GeV_mergedDepth.py <workingArea>
# e.g.   python runImpacts_v31_SR_M3000GeV_mergedDepth.py rpf2x0_Binningv13_Inputv31_mergedDepths_SR_Blind/rpf2x0_Signal_M3000GeV_mergedDepth_SR
# Merged-depth (continuous) template, so CMS_EXO26004_depthBin is in the card; no --regen (card built by the v31 condor fit)
# Pass --regen to rebuild base.root + card.txt from the JSON first (needed after editing
# the config, e.g. renaming nuisances). Omit it to just re-run impacts on the existing card.
workingArea = sys.argv[1]
configJSON = "config_Binningv13_Inputv31mergedDepthsTemplate_SR_Blind.json"  # template the v31 merged fits were built from


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
    and datacard. Reuses the v30 workspace builder so the rpf setup stays identical.
    make_workspace() overwrites base.root + the ledger but leaves the existing fit/GoF
    outputs in the *_area directory untouched.'''
    import runWith1DVanilla_v30_SR_M3000GeV_e4 as ref
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
    # optional 2nd arg = another merged mass in the same v31 area, e.g. Signal_M50000GeV_mergedDepth_SR
    signal = sys.argv[2] if len(sys.argv) > 2 and not sys.argv[2].startswith('--') else "Signal_M3000GeV_mergedDepth_SR"
    tf_type = '2x0'

    if '--regen' in sys.argv:
        sys.exit('--regen is not supported for the v31 merged area')

    # Blinded Asimov, signal injected (-t -1 --expectSignal 1) -> impacts_t1
    # --robustFit 1 ONLY on the initial POI fit: stabilises the headline r uncertainty
    # (avoids the Minos low-side flooring to rMin) while keeping the per-parameter fits on plain
    # Minos, so no nuisance (e.g. RNN) is dropped from the collected json.
    run_impacts(signal, tf_type, blind=True, expectSignal=1, name='t1', initialExtra='--robustFit 1')

    # In v31 the plain-Minos per-parameter fit of CMS_EXO26004_t0 fails in the r=1 Asimov and t0 is
    # dropped from impacts_t1. --robustFit on every fit recovers it (0.27) but flattens the rpf
    # impacts to ~0, so rerun as t1r and copy only the signal nuisances missing from t1 into t1m.
    # The signal nuisances present in both agree to <0.01 (RNN 0.771/0.764, depthBin 0.117/0.117).
    run_impacts(signal, tf_type, blind=True, expectSignal=1, name='t1r', extra='--robustFit 1')
    import json
    area_dir = os.path.join(workingArea, '{}-{}_area'.format(signal, tf_type))
    t1 = json.load(open(os.path.join(area_dir, 'impacts_t1.json')))
    t1r = json.load(open(os.path.join(area_dir, 'impacts_t1r.json')))
    have = {p['name'] for p in t1['params']}
    added = [p for p in t1r['params']
             if p['name'] not in have and not p['name'].startswith('CMS_EXO26004_Background')]
    print('impacts_t1m: added from t1r %s' % [p['name'] for p in added])
    t1['params'] += added
    json.dump(t1, open(os.path.join(area_dir, 'impacts_t1m.json'), 'w'), indent=1)
    os.system('cd {} && plotImpacts.py -i impacts_t1m.json -o impacts_t1m'.format(area_dir))

    # Blinded Asimov, background-only (-t -1 --expectSignal 0) -> impacts_t0
    # Let r float negative (default rMin=-10) so the best-fit r~0 isn't pinned at a boundary
    # (which makes every nuisance impact one-sided), and use --robustFit 1 on the initial fit
    # only to avoid the Minos low-side flooring to rMin.
    run_impacts(signal, tf_type, blind=True, expectSignal=0, name='t0', initialExtra='--robustFit 1')

    # Unblinded fit to data -> impacts_unblind1 (run later)
    # run_impacts(signal, tf_type, blind=False, name='unblind1')
