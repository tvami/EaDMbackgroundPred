#!/usr/bin/env python3
"""Wire cone89 (372361) and cone75n (372362) into the re-score chain.

Same design as add_sp_wp.py: exact-string anchors, every anchor verified BEFORE anything
is written, idempotent. A drifted file hard-exits rather than being rewritten blind --
silently producing an arm list that disagrees with the npz columns is the worst failure
mode here, because it does not raise, it mislabels.

WHAT THESE TWO ARE. Both use E1's shift/smear (11.0/7.7); the ONLY difference between
them is which downward-going sample supplies label 0:
  cone89   0-89 deg cone, smasanam's Ntuplizer-0to89Theta campaign  (9.29M raw)
  cone75n  0-75 deg cone, the SAME campaign                          (9.97M raw)
Read them as the PAIR cone89 - cone75n. Neither is interpretable against the deployed
arms on its own, because both differ from the deployed MaxTheta-75 in campaign as well
as cone -- that is exactly the arm-2 mistake. Only the difference isolates the cone.

Usage: add_cones.py [--check]
"""
import os, sys

SD = os.path.dirname(os.path.abspath(__file__))
HELP = '/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/helper_scripts'
CK89 = 'rnn_retrain_weights_cone89_shift11p0_smear7p7.ckpt'
CK75 = 'rnn_retrain_weights_cone75n_shift11p0_smear7p7.ckpt'
SENTINEL = 'cone89'          # column name (python) AND checkpoint substring (cfgs)

EDITS = [
    (f'{SD}/rescore_arms.py',
     "        ('Wp_smear11',    'rnn_retrain_weights_matchL0toData_shift11p0_smear11p0.ckpt','abs'),",
     "        ('Wp_smear11',    'rnn_retrain_weights_matchL0toData_shift11p0_smear11p0.ckpt','abs'),\n"
     f"        ('cone89',        '{CK89}','abs'),\n"
     f"        ('cone75n',       '{CK75}','abs'),"),

    (f'{SD}/rescore_arms.py',
     '  Wp_smear11     ...matchL0toData_shift11p0_smear11p0.ckpt  (E1 + smear only, 11.0)',
     '  Wp_smear11     ...matchL0toData_shift11p0_smear11p0.ckpt  (E1 + smear only, 11.0)\n'
     '  cone89         ...cone89_shift11p0_smear7p7.ckpt          (E1 recipe, 0-89 label 0)\n'
     '  cone75n        ...cone75n_shift11p0_smear7p7.ckpt         (E1 recipe, 0-75 same campaign)'),

    (f'{SD}/plot_arms_dataVsMC.py',
     "        ('Wp_smear11',   'Wp  smear gradient (+11.0, #sigma11.0)', ROOT.kOrange + 10)]",
     "        ('Wp_smear11',   'Wp  smear gradient (+11.0, #sigma11.0)', ROOT.kOrange + 10),\n"
     "        ('cone89',       'C89  0-89 cone label 0',                ROOT.kRed + 3),\n"
     "        ('cone75n',      'C75n  0-75 cone, same campaign',        ROOT.kBlue - 7)]"),

    (f'{SD}/plot_arms_signal_eff.py',
     "        ('Wp_smear11',   'Wp  smear gradient (+11.0, #sigma11.0)', ROOT.kOrange + 10, 30)]",
     "        ('Wp_smear11',   'Wp  smear gradient (+11.0, #sigma11.0)', ROOT.kOrange + 10, 30),\n"
     "        ('cone89',       'C89  0-89 cone label 0',                ROOT.kRed + 3,   27),\n"
     "        ('cone75n',      'C75n  0-75 cone, same campaign',        ROOT.kBlue - 7,  28)]"),

    (f'{SD}/iso_background_eff.py',
     "        'Sp_shift13', 'Wp_smear11']",
     "        'Sp_shift13', 'Wp_smear11',\n"
     "        # round 4, the cone pair (clusters 372361 / 372362) -- read as C89 minus C75n\n"
     "        'cone89', 'cone75n']"),

    (f'{SD}/patched_v5_baseline.py',
     "        ('Wp_smear11',   'Wp  smear only  (11.0/11.0)')]",
     "        ('Wp_smear11',   'Wp  smear only  (11.0/11.0)'),\n"
     "        ('cone89',       'C89  0-89 cone label 0'),\n"
     "        ('cone75n',      'C75n 0-75 cone, same campaign')]"),
]

CFG_TAIL = f'{HELP}/rnn_retrain_weights_matchL0toData_shift11p0_smear11p0.ckpt.index'
CFG_ADD = (f'{CFG_TAIL}, '
           f'{HELP}/{CK89}.data-00000-of-00001, {HELP}/{CK89}.index, '
           f'{HELP}/{CK75}.data-00000-of-00001, {HELP}/{CK75}.index')
CFGS = ['step9_condor_rnn_rescore.cfg', 'step9_condor_rnn_rescore_e2.cfg',
        'step9_condor_rnn_rescore_shift8.cfg']


def applied(path):
    return SENTINEL in open(path).read()


def main():
    check = '--check' in sys.argv
    targets = sorted({p for p, _, _ in EDITS} | {f'{SD}/{c}' for c in CFGS})
    missing = [p for p in (f'{HELP}/{CK89}.index', f'{HELP}/{CK75}.index')
               if not os.path.exists(p)]
    done = [p for p in targets if applied(p)]
    todo = [p for p in targets if p not in done]

    if check:
        for p in targets:
            print(f'  {"APPLIED" if p in done else "pending"}  {os.path.basename(p)}')
        if missing:
            print('  checkpoints NOT on disk: ' + ', '.join(map(os.path.basename, missing)))
        sys.exit(0 if not todo else 1)

    if not todo:
        print('add_cones: already applied to all 8 files'); return
    if missing:
        sys.exit('add_cones: FATAL, checkpoints missing:\n  ' + '\n  '.join(missing))

    buf = {}
    for path, anchor, repl in EDITS:
        if applied(path):
            continue
        txt = buf.get(path) or open(path).read()
        n = txt.count(anchor)
        if n != 1:
            sys.exit(f'add_cones: FATAL, anchor found {n}x (want 1) in {path}\n'
                     f'  anchor: {anchor[:90]}...')
        buf[path] = txt.replace(anchor, repl)

    for c in CFGS:
        path = f'{SD}/{c}'
        if applied(path):
            continue
        txt = open(path).read()
        if txt.count(CFG_TAIL) != 1:
            sys.exit(f'add_cones: FATAL, transfer_input_files tail not unique in {c}')
        buf[path] = txt.replace(CFG_TAIL, CFG_ADD)

    for path, txt in buf.items():
        open(path, 'w').write(txt)
        print(f'  patched  {os.path.basename(path)}')
    print(f'add_cones: {len(buf)} file(s) written')


if __name__ == '__main__':
    main()
