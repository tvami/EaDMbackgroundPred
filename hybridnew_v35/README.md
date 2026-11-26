# EaDM v35 full-CLs (HybridNew) limits on CRAB

Adapted from dazhang's BH `set_limit_hybridnew` (CMSSW_14_1_0_pre4, combine v10.0.1).

- `ws/M<N>.root`: text2workspace of the production v35 cards (rpf1x0pos ... Inputv35 mergedDepths SR Unblind), 26 masses (`masses.txt`, M = muon pT label, m_chi = 2M).
- `grids.txt` (`make_grids.py`): 100 linear r points per mass, [0.7 x exp2.5%, 1.25 x max(exp97.5%, obs)] of the asymptotic (tolerance-rerun) limits; r range [0, 3 x grid end].
- `submit_mass.sh <M>`: one CRAB task per mass, one job per (r point, seed), seeds 1 and 2,
  `-T 10000 --fullBToys` (10k s+b + 10k b toys per job, ~5 min), `--LHCmode LHC-limits --clsAcc 0`,
  `--cminDefaultMinimizerStrategy 0`. `submit_all.sh` loops over all masses.
  Output: /store/user/tvami/EarthAsDM/HybridNew_v35/Combine/eadm_v35_hn_M<N>/<date>/0000/combine_output_*.tar
- `get_limits.sh <M> <dir>`: hadd + `--readHybridResults --grid`, observed and 5 expected quantiles,
  for both seeds merged and for each seed alone (toy-stability check: seed1 vs seed2 vs merged).
- Needs a valid CRAB myproxy (`crab createmyproxy`, interactive passphrase). The combineTool crab3 code
  writes to `$CMSSW_BASE/src/HiggsAnalysis.CombinedLimit/scripts/` (typo upstream), so that dir exists.
- `local_M3000/`: the M3000 task run locally (same 200 commands) to validate the chain.

## Round 2 (final) and extraction
- Round 1 (`crab_M*`, `results/`) is superseded: at high mass the data fit at the r = 0 boundary sometimes
  converged to a false minimum (q_obs jumps). Round 2 (`submit_mass_v2.sh`, `crab2_M*`, `results_v2/`) adds
  `--cminFallbackAlgo Minuit2,Migrad,1:0.1 --cminFallbackAlgo Minuit2,Simplex,0:0.1 --X-rtd MINIMIZER_freezeDisassociatedParams`,
  120 points over [0.7 x -2sigma, 1.5 x +2sigma], seeds 1-4 (40k S+B + 40k B per point); halves = seeds 1+2 vs 3+4.
- `combine --readHybridResults` gives unstable OBSERVED limits on this grid (M20000: 1.19 at default verbosity,
  0.745 at -v 2, same file). Use `limits_from_grid.py` instead: CLs from the stored toys, log-linear fit around
  the 0.05 crossing; agrees with combine to ~1% where combine is sane (M3000; all expected quantiles).
- `grids_v3.txt` / `submit_mass_v3.sh`: +2sigma top-up for M200/250/300/80000/90000; `refresh_topup.sh` merges it.
- `make_csv.py` -> `hn_v2_limits_own.csv` (HybridNew + asymptotic per mass), input of the limit chain.
