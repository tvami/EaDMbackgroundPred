"""Canonical RNN input preparation, shared by training (rnn_retrain*.py) and
inference (skimmed_ntuple_processing_script.py).

Keeping this in one place matters: the network is sensitive to how t0 is presented,
so any mismatch between how the tensor is built at training time and at inference
time silently corrupts the score. Import from here rather than re-implementing.

Two t0 conventions:

  center=None       the original absolute-t0 input (v5 RNN and earlier). The network
                    then keys on the absolute DT segment t0, which makes the score
                    sensitive to timing calibration: a +-10 ns coherent shift changes
                    the cosmic pass rate by an order of magnitude, and the ~10 ns
                    data-vs-MC t0 offset shows up as a data/MC disagreement.

  center='median'   per-event centered t0: the median t0 over the event's valid
                    segments is subtracted, so only the *gradient* of t0 along the
                    track survives. That is the physically discriminating quantity
                    (upward-going vs downward-going = sign of dt0/dy), and it is
                    invariant under a global timing offset.

Sentinel handling: -999 / 9999 mark segments with no valid timing. They are excluded
from the centering reference and are left at their sentinel value, so they remain
distinguishable constants (matching the '--mode valid' convention used in the
t0-shift studies).
"""
import numpy as np
import awkward as ak

SENTINEL_LO = -998.0
SENTINEL_HI = 9998.0
PAD_VALUE = -9999.0          # must match layers.Masking(mask_value=...)


def valid_mask(t0_arr):
    """Element-wise mask of segments carrying a real t0."""
    return (t0_arr > SENTINEL_LO) & (t0_arr < SENTINEL_HI)


def _median_per_event(masked):
    """Per-event median of a jagged array whose invalid entries are already None.

    awkward has no median reducer. The obvious `[np.median(ev) for ev in ...]` costs
    ~100 us/event in Python and was the single reason the centered-t0 training arm
    took 25 h; this does the same arithmetic on one flat numpy buffer. Sorting each
    event and taking the middle element (or the mean of the two middle ones for even
    multiplicity) is exactly np.median's definition, so the result is bit-identical.
    Events with no valid segment get 0.0, as before.
    """
    s = ak.sort(ak.drop_none(masked), axis=-1)
    counts = np.asarray(ak.num(s), dtype=np.int64)
    flat = np.asarray(ak.flatten(s), dtype=np.float64)
    starts = np.zeros(len(counts), dtype=np.int64)
    np.cumsum(counts[:-1], out=starts[1:])
    ref = np.zeros(len(counts), dtype=np.float64)
    nz = counts > 0
    lo = starts[nz] + (counts[nz] - 1) // 2         # equal to hi when the count is odd
    hi = starts[nz] + counts[nz] // 2
    ref[nz] = 0.5 * (flat[lo] + flat[hi])
    return ref


def center_t0(t0_arr, how='median'):
    """Subtract a per-event t0 reference from the valid segments.

    Returns the centered jagged array. Events with no valid segment are unchanged.
    A constant offset applied to a whole event leaves the output invariant, which
    is the entire point.
    """
    if how in (None, 'none', 'absolute'):
        return t0_arr
    good = valid_mask(t0_arr)
    masked = ak.mask(t0_arr, good)                   # invalid -> None, ignored by the reducers
    if how == 'median':
        ref = ak.Array(_median_per_event(masked))
    elif how == 'mean':
        ref = ak.fill_none(ak.mean(masked, axis=-1), 0.0)
    elif how == 'first':
        # earliest valid segment (arrays are t0-sorted before this is called)
        ref = ak.fill_none(ak.min(masked, axis=-1), 0.0)
    else:
        raise ValueError(f'unknown centering mode: {how}')
    return ak.where(good, t0_arr - ref, t0_arr)


def shift_t0(t0_arr, ns=0.0):
    """Add a constant to the valid segments, leaving sentinels untouched.

    Used to train on MC moved into the *data* absolute-t0 frame: the cosmic MC sits
    ~11.6 ns below data in per-event median t0, and +8 ns was the offset that brought
    the score distributions onto data. Training there keeps the discriminating power
    of absolute t0 (which centering throws away) while removing the offset.

    Applied to valid segments only: the -999 / 9999 sentinels have to stay
    recognizable constants, and 8 ns is far smaller than the gap to them, so the
    t0 ordering is unaffected either way.
    """
    if not ns:
        return t0_arr
    good = valid_mask(t0_arr)
    return ak.where(good, t0_arr + ns, t0_arr)


def smear_t0(t0_arr, sigma=0.0, seed=20260728):
    """Add an independent Gaussian offset per EVENT (not per segment).

    Training augmentation: absolute t0 (sigma=0) lets the network key on a variable
    that is offset ~11.6 ns between data and MC, while centering removes it outright
    at a measured cost of 4.6x the error rate. Smearing sits between the two -- the
    network can still use absolute t0 where it helps, but cannot depend on its exact
    value, so the score stops being fragile under a global timing shift.

    Per event, so the within-event gradient dt0/dy -- the actual discriminant -- is
    untouched; only the event's overall offset moves. Sentinels are left alone.
    Seeded, so a rerun reproduces the same tensor.
    """
    if not sigma:
        return t0_arr
    delta = np.random.default_rng(seed).normal(0.0, sigma, len(t0_arr))
    good = valid_mask(t0_arr)
    return ak.where(good, t0_arr + delta, t0_arr)


def jitter_t0(t0_arr, sigma=0.0, seed=20260730):
    """Add an independent Gaussian offset per SEGMENT (contrast smear_t0, per EVENT).

    This is the one transform that touches the *within-event* t0 residual, i.e. the
    dt0/dy gradient itself. Measured on the training tensor against data, the cosmic MC
    within-event spread is too NARROW by 1.31x (multiplicity-controlled; see
    rnn_4arm_rescore/residual_diagnostics.py, definition E), and no per-event transform
    can change that -- shift and smear cancel exactly in t0_i - t0_j.

    sigma ~ 2.8 ns closes that gap, sized by scan rather than by quadrature because
    subtracting the per-event median correlates the jitter into its own reference.

    The cost is real and is the whole reason this is opt-in: widening the residual
    degrades the gradient the discrimination rests on. Centering (which destroys the
    per-event offset entirely) cost 80% of the signal efficiency; a jitter is a much
    milder version of the same trade, but it is the same trade. Screen it on the
    post-transform class separation before spending a training slot.

    Sentinels are left alone, as everywhere else. Seeded, so a rerun reproduces.
    """
    if not sigma:
        return t0_arr
    good = valid_mask(t0_arr)
    counts = ak.num(t0_arr)
    flat = np.random.default_rng(seed).normal(0.0, sigma, int(ak.sum(counts)))
    delta = ak.unflatten(flat, counts)
    return ak.where(good, t0_arr + delta, t0_arr)


def build_rnn_tensor(t0_arr, x_arr, y_arr, z_arr, nMax=None, center='median',
                     shift=0.0, smear=0.0, jitter=0.0):
    """Sort by t0, optionally shift and center t0, pad to nMax, stack into (N, nMax, 4).

    `shift` is a constant, and `smear` a per-event Gaussian sigma, added to the valid
    t0 before centering. Both are redundant with centering by construction -- it is
    invariant under any per-event offset, so center='median' gives a bit-identical
    tensor whatever they are set to. Use them only with center=None.

    `jitter` is a per-SEGMENT sigma and is NOT redundant with centering: it is the only
    transform here that changes t0_i - t0_j, so it survives centering and combining the
    two is meaningful.

    Sorting is done on the *raw* t0: centering is a per-event constant shift, so it
    cannot change the ordering, but sorting first keeps the behaviour identical to
    the original pipeline.

    nMax=None -> use the max multiplicity in this batch (the production convention;
    the Masking layer makes the sequence length irrelevant to the weights, so this
    may legitimately differ between training and inference).
    """
    ind = ak.argsort(t0_arr, axis=-1, ascending=True)
    t0_s, x_s, y_s, z_s = t0_arr[ind], x_arr[ind], y_arr[ind], z_arr[ind]

    t0_s = shift_t0(t0_s, ns=shift)
    t0_s = smear_t0(t0_s, sigma=smear)
    # jitter goes AFTER the per-event transforms and BEFORE centering: it is the only
    # one that survives centering, so with center='median' a jittered tensor is NOT
    # bit-identical to an unjittered one (unlike shift/smear, which cancel exactly).
    t0_s = jitter_t0(t0_s, sigma=jitter)
    t0_s = center_t0(t0_s, how=center)

    if nMax is None:
        nMax = int(ak.max(ak.num(t0_s)))
    # clip=True so an event longer than nMax is truncated rather than left ragged
    # (without it ak.to_numpy raises on a jagged result -- the old hardcoded
    # nMax=274 silently became a bug once the samples reached 280 segments).
    def pad(a):
        return ak.to_numpy(ak.fill_none(
            ak.pad_none(a, nMax, axis=1, clip=True), PAD_VALUE))

    return np.stack([pad(t0_s), pad(x_s), pad(y_s), pad(z_s)],
                    axis=-1).astype(np.float32), nMax
