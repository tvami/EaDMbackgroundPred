#!/usr/bin/env python3
"""Wire Sp (13.0/7.7, cluster 371730) and Wp (11.0/11.0, 371731) into the re-score
chain: the five analysis scripts plus the three step9 condor cfgs.

Exact-string surgery on purpose, not regex: every anchor below is a literal line that
must be present verbatim. If an anchor is missing the file has drifted since this was
written, and rewriting it blind would silently produce a network list that disagrees
with the columns actually stored in the npz -- which is the single worst failure mode
in this pipeline, because it does not raise, it mislabels. So: hard exit, no guessing.

IDEMPOTENT. Re-running after a successful patch is a no-op per file. Safe to call from
finish_variant_grid.sh on a retry.

Usage:  add_sp_wp.py [--check]
        --check  report status and exit 0 (applied) / 1 (not applied); touch nothing
"""
import os, sys

SD = os.path.dirname(os.path.abspath(__file__))
HELP = '/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/helper_scripts'
CK_SP = 'rnn_retrain_weights_matchL0toData_shift13p0_smear7p7.ckpt'
CK_WP = 'rnn_retrain_weights_matchL0toData_shift11p0_smear11p0.ckpt'
# Two sentinels, because the two kinds of file name Sp differently: the python
# scripts carry the COLUMN name, the cfgs carry the CHECKPOINT name and never
# mention the column. Either one present means this file is done.
SENTINEL = 'Sp_shift13'          # the column name, in the 5 python scripts
SENTINEL_CFG = CK_SP             # the checkpoint name, in the 3 condor cfgs

# (path, anchor, replacement). Anchor must appear EXACTLY ONCE.
EDITS = [
    # ---------------------------------------------------------------- rescore_arms.py
    (f'{SD}/rescore_arms.py',
     "        ('old_v5',        'rnn_v5_188k_final_weights.ckpt',                           'abs')]",
     f"        ('Sp_shift13',    '{CK_SP}','abs'),\n"
     f"        ('Wp_smear11',    '{CK_WP}','abs'),\n"
     "        ('old_v5',        'rnn_v5_188k_final_weights.ckpt',                           'abs')]"),

    (f'{SD}/rescore_arms.py',
     'Scores twelve networks in one pass over the file:',
     'Scores fourteen networks in one pass over the file:'),

    (f'{SD}/rescore_arms.py',
     "Sp (13.0/7.7, cluster 371730) and Wp (11.0/11.0, 371731) are NOT here -- they were\n"
     "still training when this pass went out. Adding them means another full re-score.",
     "  Sp_shift13     ...matchL0toData_shift13p0_smear7p7.ckpt   (E1 + shift only, 13.0)\n"
     "  Wp_smear11     ...matchL0toData_shift11p0_smear11p0.ckpt  (E1 + smear only, 11.0)\n"
     "\n"
     "Sp and Wp are the one-variable gradients off E1: no two of arms 2/3/4/5 differ in a\n"
     "single variable, which is why the band looked non-monotonic in shift (the smear was\n"
     "moving underneath). They are the only pair that can say which knob drives the band."),

    # ---------------------------------------------------------- plot_arms_dataVsMC.py
    (f'{SD}/plot_arms_dataVsMC.py',
     "        ('NJ_noNu_E1',   'NJ  no-neutrino + E1',                 ROOT.kPink + 7)]",
     "        ('NJ_noNu_E1',   'NJ  no-neutrino + E1',                 ROOT.kPink + 7),\n"
     "        ('Sp_shift13',   'Sp  shift gradient (+13.0, #sigma7.7)', ROOT.kCyan + 2),\n"
     "        ('Wp_smear11',   'Wp  smear gradient (+11.0, #sigma11.0)', ROOT.kOrange + 10)]"),

    # -------------------------------------------------------- plot_arms_signal_eff.py
    (f'{SD}/plot_arms_signal_eff.py',
     "        ('NJ_noNu_E1',   'NJ  no-neutrino + E1',                 ROOT.kPink + 7,   33)]",
     "        ('NJ_noNu_E1',   'NJ  no-neutrino + E1',                 ROOT.kPink + 7,   33),\n"
     "        ('Sp_shift13',   'Sp  shift gradient (+13.0, #sigma7.7)', ROOT.kCyan + 2,  29),\n"
     "        ('Wp_smear11',   'Wp  smear gradient (+11.0, #sigma11.0)', ROOT.kOrange + 10, 30)]"),

    # --------------------------------------------------------- iso_background_eff.py
    (f'{SD}/iso_background_eff.py',
     "        'N_noNeutrino', 'NJ_noNu_E1']",
     "        'N_noNeutrino', 'NJ_noNu_E1',\n"
     "        # round 3, the one-variable gradients (clusters 371730 / 371731)\n"
     "        'Sp_shift13', 'Wp_smear11']"),

    # -------------------------------------------------------- patched_v5_baseline.py
    (f'{SD}/patched_v5_baseline.py',
     "        ('NJ_noNu_E1',   'NJ  no-neutrino + E1')]",
     "        ('NJ_noNu_E1',   'NJ  no-neutrino + E1'),\n"
     "        ('Sp_shift13',   'Sp  shift only  (13.0/7.7)'),\n"
     "        ('Wp_smear11',   'Wp  smear only  (11.0/11.0)')]"),
]

# the three step9 cfgs: append the four checkpoint files to transfer_input_files, and
# fix the stale "twelve checkpoints / Sp and Wp are not included" comment.
CFG_TAIL = (f'{HELP}/rnn_retrain_weights_noNeutrino_E1.ckpt.index')
CFG_ADD = (f'{CFG_TAIL}, '
           f'{HELP}/{CK_SP}.data-00000-of-00001, {HELP}/{CK_SP}.index, '
           f'{HELP}/{CK_WP}.data-00000-of-00001, {HELP}/{CK_WP}.index')
CFGS = ['step9_condor_rnn_rescore.cfg',
        'step9_condor_rnn_rescore_e2.cfg',
        'step9_condor_rnn_rescore_shift8.cfg']

CFG_COMMENT_OLD = ("# The twelve checkpoints are scored in a single pass per shard, so the expensive\n"
                   "# jagged read happens once instead of twelve times. Sp (371730) / Wp (371731)\n"
                   "# were still training when this went out and are not included.")
CFG_COMMENT_NEW = ("# The fourteen checkpoints are scored in a single pass per shard, so the expensive\n"
                   "# jagged read happens once instead of fourteen times. Sp (371730) / Wp (371731)\n"
                   "# are the one-variable shift/smear gradients off E1.")


def applied(path):
    with open(path) as f:
        txt = f.read()
    return SENTINEL in txt or SENTINEL_CFG in txt


def main():
    check = '--check' in sys.argv
    targets = sorted({p for p, _, _ in EDITS} | {f'{SD}/{c}' for c in CFGS})

    missing_ck = [p for p in (f'{HELP}/{CK_SP}.index', f'{HELP}/{CK_WP}.index')
                  if not os.path.exists(p)]
    done = [p for p in targets if applied(p)]
    todo = [p for p in targets if p not in done]

    if check:
        for p in targets:
            print(f'  {"APPLIED" if p in done else "pending"}  {os.path.basename(p)}')
        if missing_ck:
            print('  checkpoints NOT on disk yet: '
                  + ', '.join(os.path.basename(m) for m in missing_ck))
        sys.exit(0 if not todo else 1)

    if not todo:
        print('add_sp_wp: already applied to all 8 files, nothing to do')
        return
    if missing_ck:
        sys.exit('add_sp_wp: FATAL, checkpoints not on disk -- Sp/Wp have not finished '
                 'training:\n  ' + '\n  '.join(missing_ck))

    # ---- python scripts. Read/verify everything BEFORE writing anything, so a bad
    # anchor cannot leave half the chain patched and the other half not.
    buf = {}
    for path, anchor, repl in EDITS:
        if applied(path):
            continue
        txt = buf.get(path)
        if txt is None:
            with open(path) as f:
                txt = f.read()
        n = txt.count(anchor)
        if n != 1:
            sys.exit(f'add_sp_wp: FATAL, anchor found {n}x (want 1) in {path}\n'
                     f'  anchor: {anchor[:90]}...\n'
                     f'  the file has drifted; patch it by hand and re-run --check')
        buf[path] = txt.replace(anchor, repl)

    # ---- cfgs
    for c in CFGS:
        path = f'{SD}/{c}'
        if applied(path):
            continue
        with open(path) as f:
            txt = f.read()
        if txt.count(CFG_TAIL) != 1:
            sys.exit(f'add_sp_wp: FATAL, transfer_input_files tail not unique in {c}')
        txt = txt.replace(CFG_TAIL, CFG_ADD)
        if CFG_COMMENT_OLD in txt:
            txt = txt.replace(CFG_COMMENT_OLD, CFG_COMMENT_NEW)
        buf[path] = txt

    for path, txt in buf.items():
        with open(path, 'w') as f:
            f.write(txt)
        print(f'  patched  {os.path.basename(path)}')
    print(f'add_sp_wp: {len(buf)} file(s) written')


if __name__ == '__main__':
    main()
