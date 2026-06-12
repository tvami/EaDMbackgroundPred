from time import time
from TwoDAlphabet import plot
from TwoDAlphabet.twoDalphabet import MakeCard, TwoDAlphabet
from TwoDAlphabet.alphawrap import BinnedDistribution, ParametricFunction
from TwoDAlphabet.helpers import make_env_tarball, cd, execute_cmd
from TwoDAlphabet.ftest import FstatCalc
import os,sys
import numpy as np
from optparse import OptionParser
parser = OptionParser(usage="Usage: python %prog workingArea config.json")

workingArea = sys.argv[1]
configJSON = "config_Binningv9alt_Inputv25_VR2_M3000GeV_e4.json" # sys.argv[2]

# Helper function to get region names
def _get_other_region_names(pass_reg_name):
    '''
    If passing e.g. "fail", will return ("fail", "pass")
    In HSCP analysis, we're just considering F/P regions
    '''
    return pass_reg_name, pass_reg_name.replace('fail','pass')

# Helper function to generate constraints for parametric Transfer Functions
# Change values as you see fit
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
            1: {"MIN": 0.0, "MAX": 50}
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
    # Multiplicative quadratic, positivity-safe.
    # (@0+@1*x)>=0 and (1+@2*x)>0 for @2 in [-0.9,0] over x in [0,1];
    '2x0': {
        'form': '0.1*(@0+@1*x)*(1+@2*x)',
        'constraints': {
            0: {"MIN": 0.0,  "MAX": 50},
            1: {"MIN": 0.0,  "MAX": 50},
            2: {"MIN": -0.9, "MAX": 0.0}
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
  # Create the workspace directory, using info from the specified JSON file
  twoD = TwoDAlphabet(workingArea, configJSON, loadPrevious=False)

  bkg_hists = twoD.InitQCDHists()

  # Now, we loop over "pass" and "fail" regions and get the binnings
  for f, p in [_get_other_region_names(r) for r in twoD.ledger.GetRegions() if 'fail' in r]:
    binning_f, _ = twoD.GetBinningFor(f)
    fail_name = 'CMS_EXO26004_Background_'+f
    bkg_f = BinnedDistribution(fail_name, bkg_hists[f], binning_f, constant=False)
    twoD.AddAlphaObj('CMS_EXO26004_Background',f, bkg_f)

    for opt_name, opt in _rpf_options.items():
           bkg_rpf = ParametricFunction(
               fail_name.replace('fail','rpf')+'_'+opt_name,
               binning_f,
               opt['form'],
               opt['constraints']
           )

           bkg_p = bkg_f.Multiply(fail_name.replace('fail','pass')+'_'+opt_name, bkg_rpf)

           twoD.AddAlphaObj('CMS_EXO26004_Background_'+opt_name,p,bkg_p,title='CMS_EXO26004_Background')

    twoD.Save()


# function for performing the fit
def perform_fit(signal, tf, rMaxExt = 30, extra=''):
    working_area = workingArea
    twoD = TwoDAlphabet(working_area, '{}/runConfig.json'.format(working_area), loadPrevious=True)
    print("tf: " + str(tf))
    subset = twoD.ledger.select(_select_signal, '{}'.format(signal), tf)
    twoD.MakeCard(subset, '{}-{}_area'.format(signal, tf))
    print("perform fit")
    twoD.MLfit('{}-{}_area'.format(signal, tf), rMin=0, rMax=rMaxExt, verbosity=1, extra=extra)

def plot_fit(signal, tf):
    working_area = workingArea
    twoD = TwoDAlphabet(working_area, '{}/runConfig.json'.format(working_area), loadPrevious=True)
    subset = twoD.ledger.select(_select_signal, '{}'.format(signal), tf)
    data_title = twoD.ledger.GetProcessTitle('data_obs')
    twoD.StdPlots('{}-{}_area'.format(signal, tf), subset, lumiText=data_title, pf_slice_str={"fail":"RNNScore < 0.9999","pass":"RNNScore > 0.9999"})
    twoD.StdPlots('{}-{}_area'.format(signal, tf), subset, True, lumiText=data_title, pf_slice_str={"fail":"RNNScore < 0.9999","pass":"RNNScore > 0.9999"})

def GOF(signal,tf,condor=True, extra=''):
    working_area = workingArea
    signame = signal
    twoD = TwoDAlphabet(working_area, '{}/runConfig.json'.format(working_area), loadPrevious=True)
    if not os.path.exists(twoD.tag+'/'+signame+'-{}_area/card.txt'.format(tf)):
        print('{}/{}-area/card.txt does not exist, making card'.format(twoD.tag,signame))
        subset = twoD.ledger.select(_select_signal, signame, tf)
        twoD.MakeCard(subset, signame+'_area')
    if condor == False:
        twoD.GoodnessOfFit(
            signame+'-{}_area'.format(tf), ntoys=5000, freezeSignal=0,
            condor=False, extra=extra
        )
    else:
        twoD.GoodnessOfFit(
            signame+'-{}_area'.format(tf), ntoys=5000, freezeSignal=0,
            condor=True, njobs=10, extra=extra,
            singularityImage='/cvmfs/singularity.opensciencegrid.org/cmssw/cms:rhel8',
            desiredSites='T2_US_UCSD'
        )

def plot_GOF(signal, tf, condor=True):
    working_area = workingArea
    plot.plot_gof('{}'.format(working_area), '{}-{}_area'.format(signal, tf), condor=condor)

def plot_TF(signal, tf):
    working_area = workingArea
    plot.plot_transfer_funcs(working_area, '{}-{}_area'.format(signal, tf))

def wait_for_condor(name_filter=None, poll_interval=120, timeout=None):
    '''Block until the relevant condor jobs are done before harvesting their output.

    Args:
        name_filter (str, optional): Substring of the job executable (Cmd) to match, so we only
            wait on these GoF jobs rather than every job the user has queued. If None, waits on
            all of the user's jobs.
        poll_interval (int, optional): Seconds between condor_q polls. Defaults to 120.
        timeout (int, optional): Give up after this many seconds (None = wait indefinitely).
    '''
    import time, subprocess, getpass
    user = getpass.getuser()
    cmd = ['condor_q', user, '-af', 'ClusterId']
    if name_filter:
        cmd = ['condor_q', user, '-constraint', 'regexp("{}", Cmd)'.format(name_filter), '-af', 'ClusterId']
    start = time.time()
    while True:
        try:
            out = subprocess.run(cmd, capture_output=True, text=True).stdout
        except Exception as e:
            print('condor_q failed (%s); assuming jobs are done.' % e)
            return
        njobs = len([l for l in out.splitlines() if l.strip()])
        if njobs == 0:
            print('All condor jobs finished%s.' % (' for '+name_filter if name_filter else ''))
            return
        if timeout is not None and (time.time()-start) > timeout:
            print('WARNING: timed out after %ds with %d job(s) still in queue.' % (timeout, njobs))
            return
        print('Waiting on %d condor job(s)... (polling every %ds)' % (njobs, poll_interval))
        time.sleep(poll_interval)

def run_limits(signal, tf):
    working_area = workingArea
    twoD = TwoDAlphabet(working_area, '{}/runConfig.json'.format(working_area), loadPrevious=True)
    twoD.Limit(
	subtag='{}-{}_area'.format(signal, tf),
	blindData=False,
	verbosity=1,
	condor=False
    )

def _gof_for_FTest(twoD, subtag, card_or_w='card.txt'):

    run_dir = twoD.tag+'/'+subtag

    with cd(run_dir):
        gof_data_cmd = [
            'combine -M GoodnessOfFit',
            '-d '+card_or_w,
            '--algo=saturated',
            '-n _gof_data'
        ]

        gof_data_cmd = ' '.join(gof_data_cmd)
        execute_cmd(gof_data_cmd)

def test_FTest(poly1, poly2, signal=''):
    working_area = workingArea

    twoD = TwoDAlphabet(working_area, '{}/runConfig.json'.format(working_area), loadPrevious=True)
    binning = twoD.binnings['default']
    nBins = (len(binning.xbinList)-1)*(len(binning.ybinList)-1)

    params1 = twoD.ledger.select(_select_signal, '{}'.format(signal), poly1).alphaParams
    rpfSet1 = params1[params1["name"].str.contains("rpf")]
    print("rpfSet1: " + str(rpfSet1))
    nRpfs1  = len(rpfSet1.index)
    print(" >>>>>> Num RPF parameters for poly1: " + str(nRpfs1))
    _gof_for_FTest(twoD, '{}-{}_area'.format(signal,poly1), card_or_w='card.txt')
    gofFile1 = working_area+'/{}-{}_area/higgsCombine_gof_data.GoodnessOfFit.mH120.root'.format(signal,poly1)

    params2 = twoD.ledger.select(_select_signal, '{}'.format(signal), poly2).alphaParams
    rpfSet2 = params2[params2["name"].str.contains("rpf")]
    nRpfs2  = len(rpfSet2.index)
    print(" >>>>>> Num RPF parameters for poly2: " + str(nRpfs2))
    _gof_for_FTest(twoD, '{}-{}_area'.format(signal,poly2), card_or_w='card.txt')
    gofFile2 = working_area+'/{}-{}_area/higgsCombine_gof_data.GoodnessOfFit.mH120.root'.format(signal,poly2)

    base_fstat = FstatCalc(gofFile1,gofFile2,nRpfs1,nRpfs2,nBins)
    print(base_fstat)

    plot.plot_ftest(base_fstat, nRpfs1, nRpfs2, nBins, poly1, poly2, working_area)

if __name__ == "__main__":
    make_workspace()

    tf_types = ['2x0', '1x0', '0x0']
    signal_areas = ["Signal_M3000GeV_e4_VR2"] * len(tf_types)

    for signal, tf_type in zip(signal_areas,tf_types) :
      fitPassed = False
      rMax = 50
      while not (fitPassed) :
        print("\n\n\nperform_fit with rMax = " + str(rMax))
        perform_fit(signal,tf_type,rMax,extra='--robustHesse 1')
        with open(workingArea + "/" + signal + f"-{tf_type}_area/FitDiagnostics.log", 'r') as file:
          content = file.read()
          if not "Fit failed" in content: fitPassed = True
          rMax = rMax / 2.
      plot_fit(signal,tf_type)
      plot_TF(signal,tf_type)
      print("\n\n\nFit is succesful, running limits now for " + str(signal))
      #run_limits(signal,tf_type)
      useCondor = True
      GOF(signal,tf_type,condor=useCondor)
      if useCondor:
        # GOF submits asynchronously; block until these jobs finish before harvesting their output
        wait_for_condor(name_filter=f"{workingArea}_{signal}-{tf_type}_area_gof_toys")
      plot_GOF(signal,tf_type,condor=useCondor)
      os.system("cp " + workingArea + "/base.root " + workingArea + "/" + signal + f"-{tf_type}_area/.")
      open(workingArea + "/" + signal + f"-{tf_type}_area/done", 'w').close()
    test_FTest('1x0','2x0',"Signal_M3000GeV_e4_VR2")
