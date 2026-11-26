# arc4_appB_hn: App. B flux limit with HybridNew CLs (same method as the main result)

Inputs identical to arc3_flux (Bayesian, previously published): v35 unblinded B-only post-fit background per bin with
lnN kappa = 1 + sb/b (bins independent), 5-bin merging (4 LOW + >1027 summed linearly) for the momentum scan, per-cos-bin
n, b = 18.995 x FAIL fraction, sb = 6.706 x same for the angular scan (p = 1 TeV, pT > 200 GeV), E(p), AOmega = 3.98e5
cm2 sr, T = 10,916 h. No signal systematics. Signal rate = eps shape normalized to 1 event, so r95 = N95.

## Method
- `scripts/make_cards.py` -> cards/*.txt|root, cards/cases.json (17 momenta drawn in the paper figure: 250-5000 + 10000; 6 cos bins with eps > 1%; unit_n0).
- `scripts/make_tasks.py`, `run_point.sh`, `run_all.sh` / `run_rest.sh` (screen appB_hn): combine -M HybridNew --LHCmode LHC-limits --clsAcc 0
  --fullBToys --saveHybridResult, main-result minimizer options; 50 geometric r points in [0.6 x Bayes exp 2.5%, 1.4 x Bayes exp 97.5%],
  seeds 1,2 x 2500 toys (5000 s+b and 5000 b per point).
- Top-ups: `make_topup.py 1.0 4` (seeds 3-6, +10k toys, +-2 points around the 2.5% and 16% crossings of every card, `run_topup.sh`),
  round 2 `TOPUP_SEED0=7 TOPUP_ALWAYS= TOPUP_HALF=4 make_topup.py 1.0 8` (seeds 7-14, +20k, +-4 points, quantiles failing the main-result
  half-split criterion: P400, P500, P900, cos-0.5, cos-0.6, cos-0.9; `run_topup_s7.sh`).
- `scripts/collect.py`: CLs from the stored toys (logic of hybridnew_v35/limits_from_grid.py, log-linear fit around CLs = 0.05). Two changes
  needed for Poisson counts: CLb at the expected quantile q* is computed, not set to p; q values within 0.002 count as ties (minimizer noise ~1e-4).
  -> out/hn_limits.json, out/expected_bands_iso_hn.json, out/limit_vs_angle_P1000_cos_hn.json (arc3_flux schema).
- Plots: `plot_limit_bands_hn.py`, `plot_limit_vs_angle_hn.py` (copies of arc3_flux ones, only the input changed) -> plots/.
- `compare.py` -> out/compare.txt. `xcheck_readhybrid.sh` -> logs/xcheck_readhybrid.log.

## Checks
- Unit test n = 0, b = 1e-4: N95 = 3.010 (exact 2.996); halves 2.978 / 3.047.
- combine --readHybridResults observed from the same toys (cross-check only): unit 3.012, P250 9.777 (9.796), P1000 5.625 (5.630),
  P3000 3.047 (3.024), cos-1.0 4.065 (4.060), cos-0.8 5.111 (5.081): within 1%.
- Half-split (odd vs even seeds), relative difference: obs <= 3.8%, median <= 4.5%, +1 sigma <= 4.0%, +2 sigma <= 5.4%,
  -1 sigma <= 4.8% (momenta) / 11.8% (cos-0.5, where 2.5% and 16% are both in the n = 0 cluster), -2 sigma <= 20.3% (P400).

## Results (N95; flux = N95 x conv)
```
case             x | N95 obs HN  Bayes ratio | exp50 HN  Bayes ratio | ratios 2.5/16/84/97.5 | Phi95 obs HN
mom_P250       230 |      9.796 10.814 0.906 |   10.098 10.738 0.940 | 1.31 1.00 0.84 0.73 | 8.95e-12
mom_P300       268 |      9.811 10.839 0.905 |   10.154 10.766 0.943 | 1.30 0.99 0.84 0.73 | 7.04e-12
mom_P400       357 |      9.600 10.429 0.920 |    9.315  9.803 0.950 | 1.07 0.99 0.89 0.88 | 7.11e-12
mom_P500       447 |      6.393  6.967 0.918 |    6.048  6.662 0.908 | 1.13 0.93 0.91 0.85 | 4.81e-12
mom_P600       538 |      6.010  6.480 0.928 |    5.813  6.369 0.913 | 1.00 0.96 0.91 0.91 | 4.58e-12
mom_P750       672 |      5.908  6.501 0.909 |    4.490  5.028 0.893 | 0.98 1.03 0.94 0.95 | 4.70e-12
mom_P900       809 |      5.961  6.471 0.921 |    4.233  4.295 0.985 | 1.05 1.05 0.96 0.94 | 4.92e-12
mom_P1000      898 |      5.630  6.127 0.919 |    3.929  4.220 0.931 | 1.04 1.02 0.91 0.94 | 4.70e-12
mom_P1500     1349 |      3.152  3.520 0.896 |    3.109  3.296 0.943 | 0.99 1.00 0.87 0.78 | 2.89e-12
mom_P2000     1803 |      3.047  3.086 0.987 |    3.047  3.057 0.997 | 0.96 1.01 0.93 0.77 | 3.02e-12
mom_P2500     2251 |      3.038  3.054 0.995 |    3.044  3.034 1.003 | 1.02 1.01 0.93 0.77 | 3.22e-12
mom_P3000     2711 |      3.024  3.045 0.993 |    3.031  3.029 1.001 | 1.00 1.00 0.93 0.77 | 3.46e-12
mom_P3500     3160 |      3.023  3.041 0.994 |    3.041  3.025 1.005 | 0.98 1.00 0.93 0.77 | 3.66e-12
mom_P4000     3605 |      3.011  3.024 0.996 |    3.025  3.013 1.004 | 0.97 1.01 0.93 0.77 | 3.75e-12
mom_P4500     4038 |      3.015  3.024 0.997 |    3.023  3.014 1.003 | 0.97 1.01 0.93 0.77 | 3.95e-12
mom_P5000     4507 |      3.014  3.020 0.998 |    3.016  3.011 1.002 | 0.98 1.01 0.93 0.77 | 4.17e-12
mom_P10000    7000 |      3.016  3.030 0.995 |    3.029  3.018 1.004 | 0.98 1.01 0.93 0.77 | 5.78e-12
cos-0.5         -0 |      4.664  5.095 0.915 |    4.259  3.959 1.076 | 1.06 1.06 0.90 0.86 | 5.69e-11
cos-0.6         -1 |      4.471  4.959 0.902 |    4.348  4.959 0.877 | 1.10 1.12 0.97 0.84 | 2.77e-11
cos-0.7         -1 |      5.455  5.842 0.934 |    4.722  4.777 0.988 | 1.12 0.93 0.95 0.94 | 2.58e-11
cos-0.8         -1 |      5.081  5.506 0.923 |    5.255  5.506 0.954 | 1.08 1.06 0.84 0.90 | 1.90e-11
cos-0.9         -1 |      9.224  9.834 0.938 |    5.957  5.406 1.102 | 1.21 1.04 0.96 0.93 | 3.88e-11
cos-1.0         -1 |      4.060  4.519 0.898 |    5.214  5.476 0.952 | 1.05 1.03 0.83 0.80 | 1.98e-11
unit test n=0, b~0: N95 = 3.010 (exact 2.996)
mom obs ratio 0.896-0.998, median exp ratio 0.893-1.005
cos obs ratio 0.898-0.938, median exp ratio 0.877-1.102
pT 0.25-5 TeV obs flux range 2.89e-12 - 8.95e-12 (P=10 TeV point excluded: 5.78e-12)
cos -1..-0.4 obs flux range 1.90e-11 - 5.69e-11
```
- Observed HN/Bayes: 0.90-0.93 for p <= 1.5 TeV, 0.987-0.998 for p >= 2 TeV (n = 0 bins), 0.90-0.94 angular.
- Median expected HN/Bayes: 0.89-1.01 (momentum), 0.88-1.10 (angular). +2 sigma edge up to 27% lower (Bayesian toys draw b from its prior).
- Paper ranges: pT 0.25-5 TeV 2.89-8.95e-12 -> "3 to 9 x 10^-12" (was 3 to 10); cos -1..-0.4 1.90-5.69e-11 -> "2 to 6 x 10^-11" (unchanged).

## Runtime
2400 base points 15:31-16:58 PST, top-ups 716 points 16:58-17:24 and 440 points 17:25-17:38 (6 parallel, uaf-2).

## Files changed outside this dir
Paper EXO-26-004.tex (app:fluxlimit method sentence, pT range), Figures/7Results/upward_intensity_limit_vs_{pt,coszenith}.pdf;
AN Appendix_FluxLimit.tex, Figures/Appendix/FluxLimit/upward_intensity_limit_vs_{pt,coszenith}.pdf.
