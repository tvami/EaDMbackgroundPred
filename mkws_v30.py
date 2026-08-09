import sys, importlib

# Usage: python3 mkws_v30.py <runScriptModule> <workingArea>
# Builds ONLY the workspace (base.root + ledger + UncertPlots/), no fits.
mod_name = sys.argv[1]
sys.argv = [mod_name, sys.argv[2]]
ref = importlib.import_module(mod_name)
ref.make_workspace()
print('make_workspace done for', sys.argv[1])
