"""Loader for the vendored direct-detection limit curves. See README.md for provenance.

The kdund/dd_limit_plot files do NOT share a column layout -- LZ 2024 puts `upper_limit` in
column 1 while XENONnT 2025 puts it in column 6, behind five sensitivity-band columns. Reading
"column 1" everywhere would silently plot XENONnT's -2sigma sensitivity band as if it were the
observed limit. So the column is always resolved by NAME out of `result_metadata.toml`, and a
file whose header cannot be resolved raises rather than guessing.
"""

import os
import re

import numpy as np

HERE = os.path.dirname(os.path.abspath(__file__))
KDUND = os.path.join(HERE, "kdund")
META = os.path.join(KDUND, "result_metadata.toml")

# Preference order for the column holding the published observed upper limit.
LIMIT_KEYS = ("upper_limit", "limit", "nufloor")


def _metadata():
    """{stem: {'header': [...], 'delimiter': str, 'label': str}} parsed out of the TOML.

    Deliberately a small regex parse rather than a toml dependency: python3.9 in CMSSW has no
    tomllib, and only three keys are needed.
    """
    text = open(META).read()
    out = {}
    # Section headers appear as ["<stem>"] (quoted) in this file.
    for match in re.finditer(r'^\[\"?([^\]\"]+)\"?\]\s*$', text, flags=re.M):
        stem = match.group(1)
        body = text[match.end():]
        nxt = re.search(r'^\[\"?[^\]\"]+\"?\]\s*$', body, flags=re.M)
        body = body[:nxt.start()] if nxt else body
        entry = {"header": [], "delimiter": ",", "label": stem}
        hdr = re.search(r'^header\s*=\s*\[(.*?)\]', body, flags=re.M | re.S)
        if hdr:
            entry["header"] = re.findall(r'"([^"]+)"', hdr.group(1))
        dlm = re.search(r'^delimiter\s*=\s*"([^"]*)"', body, flags=re.M)
        if dlm:
            entry["delimiter"] = dlm.group(1)
        lab = re.search(r'^label\s*=\s*"([^"]*)"', body, flags=re.M)
        if lab:
            entry["label"] = lab.group(1)
        out[stem] = entry
    return out


def load(stem, column=None):
    """Return (mass_GeV, sigma_cm2, label) for one vendored curve.

    `column` overrides the name lookup, for files with several curves in them (the neutrino fog
    carries nufloor / nufog_2d5 / nufog_3d0 side by side).
    """
    meta = _metadata().get(stem)
    if meta is None or not meta["header"]:
        raise KeyError(f"{stem} has no header in {META}; refusing to guess its columns")
    header = meta["header"]

    want = column or next((k for k in LIMIT_KEYS if k in header), None)
    if want is None:
        raise KeyError(f"{stem}: none of {LIMIT_KEYS} in header {header}")
    icol = header.index(want)

    rows = []
    path = os.path.join(KDUND, stem + ".csv")
    for line in open(path):
        line = line.strip()
        if not line or line[0] in "#%":
            continue
        parts = line.split(meta["delimiter"]) if meta["delimiter"].strip() else line.split()
        try:
            vals = [float(p) for p in parts]
        except ValueError:
            continue
        if len(vals) <= icol:
            continue
        rows.append((vals[0], vals[icol]))

    data = np.array(rows)
    data = data[(data[:, 1] > 0) & np.isfinite(data[:, 1])]
    return data[np.argsort(data[:, 0])].T[0], data[np.argsort(data[:, 0])].T[1], meta["label"]
