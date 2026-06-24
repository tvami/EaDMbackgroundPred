"""
plot_training_metrics.py

Usage:
    python plot_training_metrics.py <csv_file> [<csv_file2> ...]

For each CSV file the script produces a single figure with:
  - Left  y-axis : loss columns   (train solid, val dashed, blue tones)
  - Right y-axis : accuracy columns (train solid, val dashed, orange/green tones)

Output .png is saved next to the CSV with 'training_history' replaced by
'training_metrics' in the filename.

If no 'epoch' column is found the row index is used as x-axis.
"""

import sys
import re
from pathlib import Path

import pandas as pd
import matplotlib.pyplot as plt
import matplotlib.ticker as ticker


# ── output filename ────────────────────────────────────────────────────────────

def derive_output_path(csv_path: Path) -> Path:
    stem = csv_path.stem
    if 'training_history' in stem:
        new_stem = stem.replace('training_history', 'training_metrics', 1)
    else:
        new_stem = re.sub(r'^[^_]+(?:_[^_]+)?', 'training_metrics', stem, count=1)
    return csv_path.with_name(new_stem + '.png')


# ── column classification ──────────────────────────────────────────────────────

def classify_columns(columns):
    """
    Split metric columns into two buckets: loss-like and accuracy-like.

    Loss bucket  : any column whose base name contains 'loss'
    Accuracy bucket: any column whose base name contains 'acc' or 'accuracy'
    Remainder    : appended to whichever bucket is smaller (or loss by default)

    Returns (loss_cols, acc_cols) — each a list, train entries before val entries.
    """
    loss_cols, acc_cols, other_cols = [], [], []

    for col in columns:
        base = re.sub(r'^val_', '', col).lower()
        if 'loss' in base:
            loss_cols.append(col)
        elif 'acc' in base:
            acc_cols.append(col)
        else:
            other_cols.append(col)

    # Dump extras into whichever bucket is smaller
    for col in other_cols:
        if len(loss_cols) <= len(acc_cols):
            loss_cols.append(col)
        else:
            acc_cols.append(col)

    # Sort each bucket: train (no val_ prefix) before val
    loss_cols.sort(key=lambda c: c.startswith('val_'))
    acc_cols.sort(key=lambda c: c.startswith('val_'))

    return loss_cols, acc_cols


# ── colours ────────────────────────────────────────────────────────────────────

# Loss  : blues
LOSS_TRAIN  = ['#1D4ED8', '#1E40AF', '#3730A3']
LOSS_VAL    = ['#93C5FD', '#BAE6FD', '#A5B4FC']

# Accuracy : oranges / greens
ACC_TRAIN   = ['#EA580C', '#16A34A', '#9333EA']
ACC_VAL     = ['#FED7AA', '#86EFAC', '#D8B4FE']


def line_styles(cols, train_palette, val_palette):
    """Yield (color, linestyle) for each column in order."""
    ti = vi = 0
    for col in cols:
        if col.startswith('val_'):
            yield val_palette[vi % len(val_palette)], '--'
            vi += 1
        else:
            yield train_palette[ti % len(train_palette)], '-'
            ti += 1


# ── main plot ──────────────────────────────────────────────────────────────────

def plot_csv(csv_path: Path):
    df = pd.read_csv(csv_path)

    if 'epoch' in df.columns:
        x = df['epoch']
        x_label = 'Epoch'
        metric_cols = [c for c in df.columns if c != 'epoch']
    else:
        x = df.index
        x_label = 'Step'
        metric_cols = list(df.columns)

    if not metric_cols:
        print(f"[WARN] No metric columns in {csv_path.name}. Skipping.")
        return

    loss_cols, acc_cols = classify_columns(metric_cols)

    fig, ax_loss = plt.subplots(figsize=(9, 5))
    ax_acc = ax_loss.twinx()

    marker_every = max(1, len(x) // 20)

    # ── plot loss (left axis) ──────────────────────────────────────────────────
    loss_handles = []
    for col, (color, ls) in zip(loss_cols, line_styles(loss_cols, LOSS_TRAIN, LOSS_VAL)):
        line, = ax_loss.plot(
            x, df[col], label=col, color=color, linestyle=ls,
            linewidth=1.8, marker='o', markersize=3, markevery=marker_every,
        )
        loss_handles.append(line)

    # ── plot accuracy (right axis) ─────────────────────────────────────────────
    acc_handles = []
    for col, (color, ls) in zip(acc_cols, line_styles(acc_cols, ACC_TRAIN, ACC_VAL)):
        line, = ax_acc.plot(
            x, df[col], label=col, color=color, linestyle=ls,
            linewidth=1.8, marker='s', markersize=3, markevery=marker_every,
        )
        acc_handles.append(line)

    # ── axes labels & style ────────────────────────────────────────────────────
    ax_loss.set_xlabel(x_label, fontsize=10)
    ax_loss.set_ylabel('Loss', fontsize=10, color=LOSS_TRAIN[0])
    ax_acc.set_ylabel('Accuracy', fontsize=10, color=ACC_TRAIN[0])

    ax_loss.tick_params(axis='y', labelcolor=LOSS_TRAIN[0])
    ax_acc.tick_params(axis='y', labelcolor=ACC_TRAIN[0])

    ax_loss.xaxis.set_major_locator(ticker.MaxNLocator(integer=True))
    ax_loss.grid(True, linestyle=':', alpha=0.4)
    ax_loss.spines['top'].set_visible(False)

    # ── combined legend ────────────────────────────────────────────────────────
    all_handles = loss_handles + acc_handles
    all_labels  = [h.get_label() for h in all_handles]
    ax_loss.legend(all_handles, all_labels, fontsize=8, framealpha=0.85,
                   loc='upper right', bbox_to_anchor=(1.0, 0.85))

    fig.suptitle(csv_path.stem, fontsize=13, fontweight='bold')
    fig.tight_layout()

    out_path = derive_output_path(csv_path)
    fig.savefig(out_path, dpi=150, bbox_inches='tight')
    plt.close(fig)
    print(f"Saved → {out_path}")


# ── entry point ────────────────────────────────────────────────────────────────

def main():
    if len(sys.argv) < 2:
        print("Usage: python plot_training_metrics.py <file.csv> [<file2.csv> ...]")
        sys.exit(1)

    for arg in sys.argv[1:]:
        path = Path(arg)
        if not path.exists():
            print(f"[ERROR] File not found: {path}")
            continue
        if path.suffix.lower() != '.csv':
            print(f"[WARN] Skipping non-CSV file: {path}")
            continue
        print(f"Processing {path.name} ...")
        plot_csv(path)


if __name__ == '__main__':
    main()
