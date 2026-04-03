#!/usr/bin/env python3
"""
Standalone script to run TwoDAlphabet workflow for a single signal.
Usage: python run_single_signal_2DA.py <workingArea> <config.json> <signal> <tf_type>
"""

from time import time
from TwoDAlphabet import plot
from TwoDAlphabet.twoDalphabet import MakeCard, TwoDAlphabet
from TwoDAlphabet.alphawrap import BinnedDistribution, ParametricFunction
from TwoDAlphabet.helpers import make_env_tarball, cd, execute_cmd
from TwoDAlphabet.ftest import FstatCalc
import os
import sys
import numpy as np

# Parse command line arguments
if len(sys.argv) != 5:
    print("Usage: python run_single_signal_2DA.py <workingArea> <config.json> <signal> <tf_type>")
    sys.exit(1)

workingArea = sys.argv[1]
configJSON = sys.argv[2]
signal = sys.argv[3]
tf_type = sys.argv[4]

print(f"\n{'='*80}")
print(f"Starting TwoDAlphabet workflow")
print(f"  Working area: {workingArea}")
print(f"  Config: {configJSON}")
print(f"  Signal: {signal}")
print(f"  Transfer function: {tf_type}")
print(f"{'='*80}\n")

# Helper function to get region names
def _get_other_region_names(pass_reg_name):
    '''
    If passing e.g. "fail", will return ("fail", "pass")
    In HSCP analysis, we're just considering F/P regions
    '''
    return pass_reg_name, pass_reg_name.replace('fail','pass')

# Helper function to generate constraints for parametric Transfer Functions
def _generate_constraints(nparams):
    out = {}
    return out

# Dict to store transfer function forms and constraints
_rpf_options = {
    '0x0': {
        'form': '0.1*(@0)',
        'constraints': {
            0: {"MIN": 0.0, "MAX": 50},
        }
    },
    '1x0': {
        'form': '0.1*(@0+@1*x)',
        'constraints': {
            0: {"MIN": 0.0, "MAX": 50},
            1: {"MIN": -0.1, "MAX": 0.1}
        }
    },
    '1x0Prime': {
        'form': '0.1*(@0+@1*x+@2/x)',
        'constraints': _generate_constraints(3)
    },
    '0x1': {
        'form': '0.1*(@0+@1*y)',
        'constraints': _generate_constraints(2)
    },
    '1x1': {
        'form': '0.1*(@0+@1*x)*(1+@2*y)',
        'constraints': _generate_constraints(3)
    },
    '2x0': {
        'form': '0.1*(@0+@1*x+@2*x**2)*(@3)',
        'constraints': {
            0: {"MIN": 0.0, "MAX": 1},
            1: {"MIN": 0.5, "MAX": 1},
            2: {"MIN": -2, "MAX": 0},
            3: {"MIN": 0, "MAX": 2}
        }
    },
    '2x1': {
        'form': '0.1*(@0+@1*x+@2*x**2)*(1+@3*y)',
        'constraints': _generate_constraints(4)
    },
    '2x2': {
        'form': '0.1*(@0+@1*x+@2*x**2)*(1+@3*y+@4*y**2)',
        'constraints': _generate_constraints(4)
    },
    'expo': {
        'form': 'exp(-@0*x+@1)',
        'constraints': _generate_constraints(2)
    },
    'sigmoid': {
        'form': '(@0+0.1*@4*x)/(@1+exp(-@2*x+@3))',
        'constraints': {
            0: {"MIN": 0.0, "MAX": 50},
            1: {"MIN": 0.0, "MAX": 500},
            2: {"MIN": 0.0, "MAX": 500},
            3: {"MIN": -5, "MAX": 5},
            4: {"MIN": 0.0, "MAX": 50}
        }
    }
}

# Helper function for selecting the signal from the ledger
def _select_signal(row, args):
    signame = args[0]
    poly_order = args[1]
    if row.process_type == 'SIGNAL':
        if signame in row.process:
            return True
        else:
            return False
    elif 'Background' in row.process:
        if row.process == 'CMS_EXO26004_Background_'+poly_order:
            return True
        elif row.process == 'CMS_EXO26004_Background':
            return True
        else:
            return False
    else:
        return True


# Make the workspace
def make_workspace():
    print(f"\n[Step 1/5] Creating workspace...")
    # Create the workspace directory, using info from the specified JSON file
    twoD = TwoDAlphabet(workingArea, configJSON, loadPrevious=False)

    # 2DAlphabet wasn't intended for an analysis like this, so the default function
    # for Looping over all regions and for a given region's data histogram, subtracting
    # the list of background histograms, and returning a data-bkgList is called initQCDHists.
    # This is b/c QCD multijet is the main background we usually estimate via 2DAlphabe
    bkg_hists = twoD.InitQCDHists()

    # Now, we loop over "pass" and "fail" regions and get the binnings
    for f, p in [_get_other_region_names(r) for r in twoD.ledger.GetRegions() if 'fail' in r]:
        # get the binning for the fail region
        binning_f, _ = twoD.GetBinningFor(f)
        # you can change the name as you see fit
        fail_name = 'CMS_EXO26004_Background_'+f
        # this is the actual binned distribution of the fail
        bkg_f = BinnedDistribution(fail_name, bkg_hists[f], binning_f, constant=False)
        # now we add it to the 2DAlphabet ledger
        twoD.AddAlphaObj('CMS_EXO26004_Background',f, bkg_f)

        # now construct all of the possible transfer functions, to be chosen and used later
        for opt_name, opt in _rpf_options.items():
            bkg_rpf = ParametricFunction(
                fail_name.replace('fail','rpf')+'_'+opt_name, # this is our pass/fail ratio
                binning_f,                                    # we use the binning from fail
                opt['form'],                                  # transfer function form
                opt['constraints']                            # parameter constraints
            )

            # now define the bkg in pass as the bkg in fail multiplied by the transfer function (bkg_rpf)
            bkg_p = bkg_f.Multiply(fail_name.replace('fail','pass')+'_'+opt_name, bkg_rpf)

            # then add this to the 2DAlphabet ledger
            twoD.AddAlphaObj('CMS_EXO26004_Background_'+opt_name,p,bkg_p,title='CMS_EXO26004_Background')

        # and save it out
        twoD.Save()

    print(f"  ✓ Workspace created successfully")


# function for performing the fit
def perform_fit(signal, tf, rMaxExt=30, extra=''):
    '''
        signal [str] = signal name (e.g., 'Signal_M10000GeV_e6_SR')
        tf [str] = transfer function type (e.g., '2x0', '1x0', '0x0')
        rMaxExt [float] = maximum r value for fit
        extra [str] = any extra flags to pass to Combine when running the ML fit
    '''
    print(f"\n[Step 2/5] Performing fit with rMax={rMaxExt}...")
    # this is the name of the directory created in the workspace function
    working_area = workingArea
    # we reuse the workspace from the last step.
    # The runConfig.json is copied from the origin JSON config file,
    # and we must specify that we want to load the previous workspace
    twoD = TwoDAlphabet(working_area, '{}/runConfig.json'.format(working_area), loadPrevious=True)

    # Now we create a ledger and make a new area for it with a Combine card
    # this select() method uses lambda functions. Will explain later
    print("  Transfer function: " + str(tf))
    subset = twoD.ledger.select(_select_signal, '{}'.format(signal), tf)
    twoD.MakeCard(subset, '{}-{}_area'.format(signal, tf))

    # perform fit
    print("  Running ML fit...")
    twoD.MLfit('{}-{}_area'.format(signal, tf), rMin=0, rMax=rMaxExt, verbosity=1, extra=extra)
    print(f"  ✓ Fit completed")


def plot_fit(signal, tf):
    print(f"\n[Step 3/5] Creating fit plots...")
    working_area = workingArea
    twoD = TwoDAlphabet(working_area, '{}/runConfig.json'.format(working_area), loadPrevious=True)
    subset = twoD.ledger.select(_select_signal, '{}'.format(signal), tf)
    # Get the data title from the JSON config instead of hardcoding it
    data_title = twoD.ledger.GetProcessTitle('data_obs')
    twoD.StdPlots('{}-{}_area'.format(signal, tf), subset, lumiText=data_title, pf_slice_str={"fail":"RNNScore < 0.9999","pass":"RNNScore > 0.9999"})
    twoD.StdPlots('{}-{}_area'.format(signal, tf), subset, True, lumiText=data_title, pf_slice_str={"fail":"RNNScore < 0.9999","pass":"RNNScore > 0.9999"})
    print(f"  ✓ Plots created successfully")


def run_limits(signal, tf):
    print(f"\n[Step 4/5] Computing limits...")
    working_area = workingArea
    twoD = TwoDAlphabet(working_area, '{}/runConfig.json'.format(working_area), loadPrevious=True)
    twoD.Limit(
        subtag='{}-{}_area'.format(signal, tf),
        blindData=False,
        verbosity=1,
        condor=False
    )
    print(f"  ✓ Limits computed successfully")


# Main workflow
if __name__ == "__main__":
    try:
        # Step 1: Create workspace
        make_workspace()

        # Step 2: Perform fit with adaptive rMax
        # Check if already done to avoid re-running
        if os.path.exists(workingArea + "/" + signal + f"-{tf_type}_area/done"):
            print(f"\nWorkflow already completed for {signal} (found 'done' marker)")
            sys.exit(0)

        fitPassed = False
        rMax = 50

        while not fitPassed:
            print(f"\nAttempting fit with rMax = {rMax}")
            perform_fit(signal, tf_type, rMax, extra='--robustHesse 1')

            # Check if fit passed
            log_file = workingArea + "/" + signal + f"-{tf_type}_area/FitDiagnostics.log"
            if os.path.exists(log_file):
                with open(log_file, 'r') as file:
                    content = file.read()
                    if "Fit failed" not in content:
                        fitPassed = True
                        print(f"  ✓ Fit successful with rMax = {rMax}")
                    else:
                        rMax = rMax / 2.
                        print(f"  ✗ Fit failed, reducing rMax to {rMax}")
                        if rMax < 0.1:
                            print(f"  ERROR: rMax too small ({rMax}), giving up")
                            sys.exit(1)
            else:
                print(f"  WARNING: Log file not found: {log_file}")
                fitPassed = True  # Assume success if no log file

        # Step 3: Plot fit results
        plot_fit(signal, tf_type)

        # Step 4: Run limits
        print(f"\n\nFit is successful, running limits now for {signal}")
        run_limits(signal, tf_type)

        # Step 5: Copy base.root and create done marker
        print(f"\n[Step 5/5] Finalizing...")
        if os.path.exists(workingArea + "/base.root"):
            os.system("cp " + workingArea + "/base.root " + workingArea + "/" + signal + f"-{tf_type}_area/.")
            print(f"  ✓ Copied base.root")
        else:
            print(f"  ⚠ Warning: base.root not found, skipping copy")

        # Create done marker
        open(workingArea + "/" + signal + f"-{tf_type}_area/done", 'w').close()
        print(f"  ✓ Created 'done' marker")

        print(f"\n{'='*80}")
        print(f"SUCCESS: Completed processing for {signal}")
        print(f"  Output directory: {workingArea}/{signal}-{tf_type}_area")
        print(f"{'='*80}\n")

    except Exception as e:
        print(f"\n{'='*80}")
        print(f"ERROR: Failed to process {signal}")
        print(f"  Error: {str(e)}")
        print(f"{'='*80}\n")
        import traceback
        traceback.print_exc()
        sys.exit(1)
