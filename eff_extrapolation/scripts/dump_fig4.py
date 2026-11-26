# Fig. 4 curves (observed and median expected sigma_chi_p envelopes) for the paper and power-law tables.
import sys, json; sys.path.insert(0, 'helper_scripts')
import numpy as np
from plotExcludedAlphaVsMass import best_over_epsilon, best_observed_over_epsilon
A = 'exp_lim/signal_rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all'
out = {}
for t in ['HN', 'HN_effPL']:
    s = f'{A}_{t}_tracker_core_lowmass_alpha_max.txt'
    m, o, _ = best_observed_over_epsilon(s, 14.9, 0.23)
    me, med, *_ = best_over_epsilon(s, 14.9, 0.23)
    out[t] = dict(m_obs=list(map(float, m)), obs=list(map(float, o)), m_exp=list(map(float, me)), exp=list(map(float, med)))
json.dump(out, open('/ceph/cms/store/user/tvami/EarthAsDM/work/cwr_eff_1pev/out/fig4_curves.json', 'w'))
print('ok', {k: len(v['obs']) for k, v in out.items()})
