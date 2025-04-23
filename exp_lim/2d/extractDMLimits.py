import ROOT
import json
import sys
import pandas as pd
import numpy as np
pd.set_option('display.max_columns', None)

df = pd.read_parquet('/Users/sanjitmasanam/Documents/CodingProjects/CMS/exp_lim/rates_for_one_month.parquet')
rate_CMS_arr = df['rate_CMS'].to_numpy()
ma_arr = df['ma'].to_numpy()
mx_arr = df['mx'].to_numpy()
epsilon_arr = df['epsilon'].to_numpy()

inputFolder = "/Users/sanjitmasanam/Documents/CodingProjects/git_repos/EaDMbackgroundPred/rpf2x0_Binningv3_Inputv4_SR_Blind"

outputPoints = []

for dmMass in [1000,2000,3000,4000,5000,6000,7000,8000,9000,10000]:
	for epsilon in [1.000000e-08,2.000000e-08,3.000000e-08,4.000000e-08,5.000000e-08,6.000000e-08,7.000000e-08,8.000000e-08,9.000000e-08,1.000000e-07]:
		######### HACK FOR WRONG XS NUMBERS. SET TO ONE AFTER FIXED. #########
		scale = float(0.01 * 2 * rate_CMS_arr[(np.isclose(ma_arr, np.full(ma_arr.shape, 0.237194))) & (np.isclose(mx_arr, np.full(mx_arr.shape, dmMass))) & (np.isclose(epsilon_arr, np.full(epsilon_arr.shape, epsilon), rtol=5e-10, atol=5e-10))])
		print("Scale: ", scale)

		limitInfo = {}

		inputFileName = f"{inputFolder}/Signal_M{int(dmMass/2)}GeV-2x0_area/higgsCombineTest.AsymptoticLimits.mH120.root"
		inputFile = ROOT.TFile(inputFileName)
		inputTree = inputFile.Get("limit")

		tmpDict = {}
		tmpDict["m1"] = dmMass
		tmpDict["m2"] = epsilon
		tmpDict["dm"] = tmpDict["m1"]-tmpDict["m2"]

		# inputTree.Print()
		for entry in inputTree:
			# print(entry.)
			# print(entry.limit)
			# print(entry.quantileExpected)

			if entry.quantileExpected==-1:
				tmpDict["upperLimit"] = entry.limit*scale
			if entry.quantileExpected==0.02500000037252903:
				tmpDict["expectedUpperLimitMinus2Sig"] = entry.limit*scale
			elif entry.quantileExpected==0.1599999964237213:
				tmpDict["expectedUpperLimitMinus1Sig"] = entry.limit*scale
			elif entry.quantileExpected==0.5:
				tmpDict["expectedUpperLimit"] = entry.limit*scale
			elif entry.quantileExpected==0.8399999737739563:
				tmpDict["expectedUpperLimitPlus1Sig"] = entry.limit*scale
			elif entry.quantileExpected==0.9750000238418579:
				tmpDict["expectedUpperLimitPlus2Sig"] = entry.limit*scale

		outputPoints.append(tmpDict)


with open("DMLimits.json", 'w') as f:
    json.dump(outputPoints, f, indent=4)
