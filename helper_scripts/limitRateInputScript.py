import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
import argparse
import contextlib

pd.set_option('display.max_columns', 13)

df_1 = pd.read_parquet('helper_scripts/parquet_files/rates_muons_electrons_both_alphas_MX_1TeV_to_100TeV_special_granularity_fewer_columns.parquet')
df_2 = pd.read_parquet('helper_scripts/parquet_files/rates_muons_electrons_both_alphas_MX_100TeV_to_200TeV_in_steps_of_5TeV.parquet')
df_3 = pd.read_parquet('helper_scripts/parquet_files/rates_muons_electrons_both_alphas_mx_500_1000_mxstep_100.parquet')
df_4 = pd.read_parquet('helper_scripts/parquet_files/rates_muons_electrons_both_alphas_mx_225_500_mxstep_25.parquet')
df_full = pd.concat([df_1, df_2, df_3, df_4], ignore_index=True)

df = df_full.loc[(np.isclose(df_full['ma'], 0.245455)) & (df_full['alpha_therm_or_max'] == 'MAX') & (df_full['final_state_particles'] == 'muons')]

rate_CMS = df['rate_CMS_1month'].to_numpy()
ma = df['ma'].to_numpy()
mx = df['mx'].to_numpy()
epsilon = df['epsilon'].to_numpy()
alpha_therm_or_max = df['alpha_therm_or_max'].to_numpy()
final_state_particles = df['final_state_particles'].to_numpy()

parser = argparse.ArgumentParser(description='')
parser.add_argument('-d','--depth', action='store', dest='depth', help='Depth')
parser.add_argument('-l','--limit_directory', action='store', dest='limit_directory', help='Limit Directory')
args = parser.parse_args()

depth = args.depth
limit_directory = args.limit_directory

if depth != 'e0': extra_text = f'_{depth}'
else: extra_text = ''

def eff_func(mass):
    return (0.06758539099355372 * np.exp(-3.9610274911588674e-05 * mass) + 0.016782590921269932)

# eps grid densified to 1e-9 steps up to 1.24e-7 (see set_limit_alphaMax.py labels --
# these two MUST stay identical). Every value must exist in the parquet eps grid
# (exact np.isclose lookup below), which is on a 1e-9 grid, so all these are valid.
eps_list = [4e-09, 5e-09, 6e-09, 7e-09, 8e-09, 9e-09, 1e-08, 1.1e-08, 1.2e-08, 1.3e-08, 1.4e-08, 1.5e-08, 1.6e-08, 1.7e-08, 1.8e-08, 1.9e-08, 2e-08, 2.1e-08, 2.2e-08, 2.3e-08, 2.4e-08, 2.5e-08, 2.6e-08, 2.7e-08, 2.8e-08, 2.9e-08, 3e-08, 3.1e-08, 3.2e-08, 3.3e-08, 3.4e-08, 3.5e-08, 3.6e-08, 3.7e-08, 3.8e-08, 3.9e-08, 4e-08, 4.1e-08, 4.2e-08, 4.3e-08, 4.4e-08, 4.5e-08, 4.6e-08, 4.7e-08, 4.8e-08, 4.9e-08, 5e-08, 5.1e-08, 5.2e-08, 5.3e-08, 5.4e-08, 5.5e-08, 5.6e-08, 5.7e-08, 5.8e-08, 5.9e-08, 6e-08, 6.1e-08, 6.2e-08, 6.3e-08, 6.4e-08, 6.5e-08, 6.6e-08, 6.7e-08, 6.8e-08, 6.9e-08, 7e-08, 7.1e-08, 7.2e-08, 7.3e-08, 7.4e-08, 7.5e-08, 7.6e-08, 7.7e-08, 7.8e-08, 7.9e-08, 8e-08, 8.1e-08, 8.2e-08, 8.3e-08, 8.4e-08, 8.5e-08, 8.6e-08, 8.7e-08, 8.8e-08, 8.9e-08, 9e-08, 9.1e-08, 9.2e-08, 9.3e-08, 9.4e-08, 9.5e-08, 9.6e-08, 9.7e-08, 9.8e-08, 9.9e-08, 1e-07, 1.01e-07, 1.02e-07, 1.03e-07, 1.04e-07, 1.05e-07, 1.06e-07, 1.07e-07, 1.08e-07, 1.09e-07, 1.1e-07, 1.11e-07, 1.12e-07, 1.13e-07, 1.14e-07, 1.15e-07, 1.16e-07, 1.17e-07, 1.18e-07, 1.19e-07, 1.2e-07, 1.21e-07, 1.22e-07, 1.23e-07, 1.24e-07, 1.34e-07, 1.44e-07, 1.54e-07, 1.64e-07, 1.74e-07, 1.84e-07, 1.94e-07, 2.04e-07, 2.14e-07, 2.24e-07, 2.34e-07, 2.44e-07, 2.54e-07, 2.64e-07, 2.74e-07, 2.84e-07, 2.94e-07, 3.04e-07, 3.28e-07, 3.52e-07, 3.76e-07, 4e-07, 4.24e-07, 4.48e-07, 4.72e-07, 4.96e-07, 5.2e-07, 5.44e-07, 5.68e-07, 5.92e-07, 6.16e-07, 6.4e-07, 6.64e-07, 6.88e-07, 7.12e-07, 7.36e-07, 7.6e-07, 7.84e-07, 8.08e-07, 8.32e-07, 8.56e-07, 8.8e-07, 9.04e-07, 9.28e-07, 9.52e-07, 9.76e-07, 1e-06]
mass_dict = {
    'e0': [1600, 1800, 2000, 2200, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000, 5400, 5600, 5800, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 25000, 30000, 35000, 40000, 45000, 50000, 55000, 60000, 70000, 75000, 80000, 85000, 90000, 95000, 100000, 110000, 120000, 130000, 140000, 150000, 160000, 170000, 180000, 185000, 190000, 195000, 200000, 225000, 250000, 275000, 300000, 325000, 350000, 375000, 400000, 425000, 450000, 475000, 500000, 600000, 700000, 800000, 900000, 1000000],
    'e2': [2000,3000,4000,6000,7000,8000,9000,10000,20000,40000,60000,80000,100000,120000,140000,160000,180000, 185000, 190000, 195000, 200000, 225000, 250000, 275000, 300000, 325000, 350000, 375000, 400000, 425000, 450000, 475000, 500000, 600000, 700000, 800000, 900000],
    'e3': [2000,3000,4000,5000,6000,7000,8000,9000,10000,20000,40000,60000,80000,100000,120000,140000,160000,180000, 185000, 190000, 195000, 200000, 225000, 250000, 275000, 300000, 325000, 350000, 375000, 400000, 425000, 450000, 475000, 500000, 600000, 700000, 800000, 900000],
    'e4': [2000,3000,4000,5000,6000,7000,8000,9000,10000,20000,40000,60000,80000,100000,120000,140000,160000,180000, 185000, 190000, 195000, 200000, 225000, 250000, 275000, 300000, 325000, 350000, 375000, 400000, 425000, 450000, 475000, 500000, 600000, 700000, 800000, 900000],
    'e5': [2000,3000,4000,5000,6000,7000,8000,9000,10000,20000,40000,60000,80000,100000,120000,140000,160000,180000, 185000, 190000, 195000, 200000, 225000, 250000, 275000, 300000, 325000, 350000, 375000, 400000, 425000, 450000, 475000, 500000, 600000, 700000, 800000, 900000],
    'e6': [3000,4000,5000,6000,7000,8000,9000,10000,20000,40000,60000,80000,100000,120000,140000,160000,180000, 185000, 190000, 195000, 200000, 225000, 250000, 275000, 300000, 325000, 350000, 375000, 400000, 425000, 450000, 475000, 500000, 600000, 700000, 800000, 900000]
}

output_file = f"exp_lim/signal_{limit_directory}_alpha_max.txt"
print(f"Saving to {output_file}")

# Wrap everything you want saved to file in this block
with open(output_file, 'w') as f, contextlib.redirect_stdout(f):
    # First Line
    print(",".join(
        f'{limit_directory}/rpf2x0_Signal_M{min(int(mass/2), 90000)}GeV{extra_text}_SR/Signal_M{min(int(mass/2), 90000)}GeV{extra_text}_SR-2x0_area'
        for mass in mass_dict[depth]
    ))

    # Second Line
    print(",".join(
        f'{mass}' for mass in mass_dict[depth]
    ))

    # Third Line
    print(",".join(
        '100' for mass in mass_dict[depth]
    ))

    # Subsequent Lines
    for eps in eps_list:
        list = []
        for dm_mass in mass_dict[depth]:
            dm_mass = min(dm_mass, 900000)
            if dm_mass % 200 != 0:
                rate = (rate_CMS[(np.isclose(mx, (dm_mass+100))) & (np.isclose(epsilon, eps, rtol=5e-11, atol=5e-11))][0] + rate_CMS[(np.isclose(ma, 0.245455)) & (np.isclose(mx, (dm_mass-100))) & (np.isclose(epsilon, eps, rtol=5e-11, atol=5e-11))][0]) / 2
            else:
                rate = rate_CMS[(np.isclose(mx, dm_mass)) & (np.isclose(epsilon, eps, rtol=5e-11, atol=5e-11))][0]
            if dm_mass > 90000:
                rate *= eff_func(dm_mass)/eff_func(90000)

            list.append(rate)

        print(*[f"{x.item():e}" for x in list], sep=", ")