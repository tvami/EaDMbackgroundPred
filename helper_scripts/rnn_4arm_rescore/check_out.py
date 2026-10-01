#!/usr/bin/env python3
"""Verify out/ is COMPLETE and CONSISTENT before anything plots it.

This exists because a partial out/ does not raise. Every analysis script globs
`data_vr2_*.npz` and concatenates whatever it finds, so a re-score that lost 10 of 49
data shards produces figures and a decision table that look entirely normal and are
quietly built on 80% of the data. Counting files is the cheap guard; checking that
every file carries the same network columns is the guard that catches the other silent
failure -- an npz written by an older rescore_arms.py with a shorter ARMS list.

Checks:
  1. every `name` in joblist.txt and joblist_e2.txt has out/<name>.npz
  2. those npz all share ONE identical key set, which contains every required arm
  3. no zero-length arrays
  4. the *_shift8.npz carried over from cluster 371700 still exist and still carry
     `old_v5` and `arm3_shift8` -- the only two columns patched_v5_baseline.py reads
     from them (they are deliberately never re-scored, so they keep the old 6-net
     layout and are excluded from the key-set comparison in 2)

Usage: check_out.py ARM[,ARM...]        required arm columns, comma-separated
       check_out.py --arms-from-rescore  read the list out of rescore_arms.py instead
Exit 0 = safe to plot. Exit 1 = do not plot.
"""
import ast, glob, os, sys
import numpy as np

SD = os.path.dirname(os.path.abspath(__file__))
OUT = f'{SD}/out'
JOBLISTS = ['joblist.txt', 'joblist_e2.txt']
SHIFT8_NEEDS = {'old_v5', 'arm3_shift8'}


def arms_from_rescore():
    """Pull the ARMS column names out of rescore_arms.py without importing it
    (importing drags in ROOT + TensorFlow for what is a 20-line text check)."""
    src = open(f'{SD}/rescore_arms.py').read()
    tree = ast.parse(src)
    for node in ast.walk(tree):
        if (isinstance(node, ast.Assign) and node.targets
                and getattr(node.targets[0], 'id', None) == 'ARMS'):
            # literal_eval, not `.value`: ast.Str/ast.Constant differ across the
            # python versions this runs under (the cmsenv python is older than the
            # one on the login node) and `.value` only exists on the newer one.
            return [ast.literal_eval(e.elts[0]) for e in node.value.elts]
    sys.exit('check_out: could not find ARMS in rescore_arms.py')


def main():
    if len(sys.argv) < 2:
        sys.exit(__doc__)
    need = (arms_from_rescore() if sys.argv[1] == '--arms-from-rescore'
            else [s.strip() for s in sys.argv[1].split(',') if s.strip()])
    need = set(need) | {'RNNScore'}
    print(f'check_out: requiring {len(need)} columns: {", ".join(sorted(need))}\n')

    expect = []
    for jl in JOBLISTS:
        p = f'{SD}/{jl}'
        if not os.path.exists(p):
            sys.exit(f'check_out: FATAL, missing {jl}')
        for line in open(p):
            line = line.strip()
            if line:
                expect.append(line.split(',')[0].strip())
    print(f'  joblists expect {len(expect)} npz')

    bad, keysets = [], {}
    missing = [n for n in expect if not os.path.exists(f'{OUT}/{n}.npz')]
    for n in expect:
        p = f'{OUT}/{n}.npz'
        if not os.path.exists(p):
            continue
        try:
            z = np.load(p)
            ks = frozenset(z.files)
            keysets.setdefault(ks, []).append(n)
            miss = need - ks
            if miss:
                bad.append(f'{n}: missing columns {sorted(miss)}')
            elif len(z[sorted(ks)[0]]) == 0:
                bad.append(f'{n}: zero events')
        except Exception as e:
            bad.append(f'{n}: unreadable ({e})')

    print(f'  found          {len(expect) - len(missing)} npz')
    if missing:
        print(f'\n  !! MISSING {len(missing)}:')
        for n in missing[:25]:
            print(f'       {n}')
        if len(missing) > 25:
            print(f'       ... and {len(missing) - 25} more')
    if len(keysets) > 1:
        print(f'\n  !! {len(keysets)} DIFFERENT key sets among the npz -- '
              f'they were not all written by the same rescore_arms.py:')
        for ks, names in sorted(keysets.items(), key=lambda kv: -len(kv[1])):
            print(f'       {len(names):3d} files, {len(ks)} cols, e.g. {names[0]}')
            print(f'            {", ".join(sorted(ks))}')
    if bad:
        print(f'\n  !! {len(bad)} bad file(s):')
        for b in bad[:25]:
            print(f'       {b}')

    # -------------------------------------------------------------- shift8 carry-over
    # Checked as a REQUIRED SET, not a count. out/ accumulates shift8 files from
    # several rounds (18 sig_e4 + 18 sig_e2 + 3 cosmicMC = 39 as of 2026-07-30), so a
    # count is not a stable invariant. What matters is that the specific files
    # patched_v5_baseline.py reads for the deployed baseline are present and still
    # carry old_v5 and arm3_shift8. These are never re-scored, so they keep the older
    # 6-network layout and are excluded from the key-set comparison above.
    s8 = sorted(glob.glob(f'{OUT}/*_shift8.npz'))
    s8_need = (['cosmicMC_vr1_shift8', 'cosmicMC_vr2_shift8']
               + [f'sig_e4_{m}_shift8' for m in (1000, 5000, 10000, 90000)])
    print(f'\n  shift8 carry-over: {len(s8)} npz present, '
          f'{len(s8_need)} required by patched_v5_baseline.py')
    s8bad = []
    for n in s8_need:
        p = f'{OUT}/{n}.npz'
        if not os.path.exists(p):
            s8bad.append(f'{n}: MISSING (needed for the deployed baseline)')
            continue
        try:
            miss = SHIFT8_NEEDS - set(np.load(p).files)
            if miss:
                s8bad.append(f'{n}: missing {sorted(miss)}')
        except Exception as e:
            s8bad.append(f'{n}: unreadable ({e})')
    for b in s8bad:
        print(f'  !! {b}')
    if not s8bad:
        print(f'  all {len(s8_need)} required shift8 files OK')

    ok = not missing and not bad and len(keysets) <= 1 and not s8bad
    print('\n' + ('check_out: OK -- safe to plot'
                  if ok else 'check_out: FAILED -- do NOT plot, fix the above first'))
    sys.exit(0 if ok else 1)


if __name__ == '__main__':
    main()
