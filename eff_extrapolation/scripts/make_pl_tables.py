# Power-law variants of the paper rate tables: above the heaviest template (m_chi = 180 TeV) swap
# the baked-in plateau factor eff(m)/eff(cap) for the power law (m/cap)^-0.4126.
import math, shutil
A = 'exp_lim/signal_rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all'
CAP = 90000.
eff = lambda m: 0.06758539099355372 * math.exp(-3.9610274911588674e-05 * m) + 0.016782590921269932
for src, dst in [('_HN_alpha_max', '_HN_effPL_alpha_max'),
                 ('_HN_tracker_core_lowmass_alpha_max', '_HN_effPL_tracker_core_lowmass_alpha_max')]:
    lines = open(A + src + '.txt').read().splitlines()
    masses = [float(x) / 2 for x in lines[1].split(',')]  # template = m_chi / 2
    fac = [((m / CAP) ** -0.4126) / (eff(m) / eff(CAP)) if m > CAP else 1.0 for m in masses]
    out = lines[:3] + [','.join(repr(float(x) * f) for x, f in zip(l.split(','), fac)) for l in lines[3:] if l.strip()]
    open(A + dst + '.txt', 'w').write('\n'.join(out) + '\n')
    shutil.copy(A + src + '.eps.txt', A + dst + '.eps.txt')
    print(dst, 'factor at 1 PeV-ish', round(fac[-1], 3), 'rows', len(out) - 3)
