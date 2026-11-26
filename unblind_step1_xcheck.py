#!/usr/bin/env python3
# Staged unblinding step 1: impacts on data by hand, as a cross-check of combineTool.
# Impact = r(theta at theta_hat +/- 1 sigma, rest profiled) - r_hat, from a profile scan of each
# nuisance with r >= 0. Prints only the impacts and nuisance values, never r_hat itself.
import os, json, subprocess
from concurrent.futures import ThreadPoolExecutor
import numpy as np
import ROOT

AREA = "rpf1x0_Binningv13_Inputv34_mergedDepths_SR_M3000GeV_Unblind/Signal_M3000GeV_mergedDepth_SR-1x0_area"
OUT = os.path.join(AREA, "xcheck")
os.makedirs(OUT, exist_ok=True)
os.chdir(OUT)
OPT = "-d ../card.root -M MultiDimFit -m 120 --cminDefaultMinimizerStrategy 0"
NUIS = ["CMS_EXO26004_" + n for n in ("RNN", "t0", "depthBin", "pT", "RNN_scale", "trig", "livetime",
                                      "Background_rpf_1x0_par0", "Background_rpf_1x0_par1")]


def run(cmd, log):
    with open(log, "w") as f:
        subprocess.run(cmd, shell=True, stdout=f, stderr=subprocess.STDOUT)


# nominal fit, r >= 0 as in FitDiagnostics
run(f"combine {OPT} -n _xc_nom --rMin 0 --rMax 50 --saveFitResult", "nom.log")
fr = ROOT.TFile.Open("multidimfit_xc_nom.root").Get("fit_mdf")
print(f"nominal fit status {fr.status()} covQual {fr.covQual()}", flush=True)
pars = {p.GetName(): (p.getVal(), p.getError()) for p in fr.floatParsFinal()}
r_hat = pars["r"][0]  # kept in memory only


def scan(n):
    v, e = pars[n]
    w = 4 * min(e, 1.0) if not n.endswith(("par0", "par1")) else 4 * e  # +/-4 sigma window
    w = max(w, 1e-6)
    run(f"combine {OPT} -n _xc_{n} --algo grid --points 41 --redefineSignalPOIs r -P {n} --floatOtherPOIs 1 --trackParameters r "  # keep theta a constrained nuisance
        f"--setParameterRanges {n}={v - w},{v + w}:r=0,50 --setParameters {n}={v}", f"scan_{n}.log")


def harvest(n):  # serial: PyROOT is not thread safe
    v, e = pars[n]
    tf = ROOT.TFile.Open(f"higgsCombine_xc_{n}.MultiDimFit.mH120.root")  # keep the file alive
    t = tf.Get("limit")
    x, dnll, r = [], [], []
    for ev in t:
        if ev.quantileExpected > -0.5:  # skip the best-fit row (-1)
            x.append(getattr(ev, n)); dnll.append(2 * ev.deltaNLL); r.append(ev.trackedParam_r)
    x, dnll, r = map(np.array, (x, dnll, r))
    ok = np.isfinite(dnll) & (dnll < 1e3)  # drop failed points (sentinel)
    o = np.argsort(x[ok]); x, dnll, r = x[ok][o], dnll[ok][o], r[ok][o]
    i0 = int(np.argmin(dnll))
    lo = np.interp(1, dnll[:i0 + 1][::-1], x[:i0 + 1][::-1]) if dnll[0] > 1 else np.nan  # 2dNLL=1 crossings
    hi = np.interp(1, dnll[i0:], x[i0:]) if dnll[-1] > 1 else np.nan
    res = {"name": n, "fit": [lo, x[i0], hi], "fitdiag_hesse": [v, e], "n_ok": int(ok.sum()),
           "imp_lo": float(np.interp(lo, x, r) - r_hat) if np.isfinite(lo) else None,
           "imp_hi": float(np.interp(hi, x, r) - r_hat) if np.isfinite(hi) else None}
    return res


with ThreadPoolExecutor(6) as ex:
    list(ex.map(scan, NUIS))
res = [harvest(n) for n in NUIS]
json.dump(res, open("impacts_xcheck.json", "w"), indent=1)
for d in sorted(res, key=lambda d: -max(abs(d["imp_lo"] or 0), abs(d["imp_hi"] or 0))):
    lo, c, hi = d["fit"]
    print(f'{d["name"]:42s} pts {d["n_ok"]:2d}/41  theta {c:+.3f} (-{c - lo:.3f}/+{hi - c:.3f})  hesse {d["fitdiag_hesse"][0]:+.3f}+/-{d["fitdiag_hesse"][1]:.3f}'
          f'  dr {d["imp_lo"] if d["imp_lo"] is None else round(d["imp_lo"], 4)} / {d["imp_hi"] if d["imp_hi"] is None else round(d["imp_hi"], 4)}', flush=True)
print("XCHECK DONE")
