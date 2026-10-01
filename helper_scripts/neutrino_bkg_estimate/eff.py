# selection efficiency (trigger+presel+RNN>=WP) vs pT threshold, per sample
import ROOT, glob, re, json
ROOT.EnableImplicitMT(4)
D='/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.8_wRNN/'
WP=0.99999
files=sorted(glob.glob(D+'Signal/sr/matched_muon/*.root'))
files=[f for f in files if 'SurfaceDepth' not in f]
files.append(D+'BkgMC/sr/matched_muon/skimmed_matched_muon_sr_CosmicToMu_Par-MinP-10-MaxP-10000-MinTheta-91-MaxTheta-179_cosmuogen_v5.0.0.root')
out={}
for f in files:
    F=ROOT.TFile.Open(f); N=F.Get('h_cutflow').GetBinContent(1); F.Close()
    df=ROOT.RDataFrame('tree',f)
    df=(df.Define('chi2ndof','ROOT::VecOps::Where(muon_fromGenTrack_Ndof!=0,muon_fromGenTrack_Chi2/muon_fromGenTrack_Ndof,999.)')
          .Define('pe','ROOT::VecOps::Where(muon_fromGenTrack_Pt>0,muon_fromGenTrack_PtErr/(muon_fromGenTrack_Pt*muon_fromGenTrack_Pt),999.)')
          .Define('q','chi2ndof<35. && muon_fromGenTrack_NumValidHits>7 && pe<1e-3 && abs(muon_fromGenTrack_Eta)<0.9')
          .Define('ptmax','ROOT::VecOps::Max(muon_fromGenTrack_Pt[q])'))
    thr=[200,350,538,726,1000,1027,1329,1743,2000,2157,2685,3212,3740,4500,5500,6900]
    cnt={t:df.Filter(f'ptmax>{t}').Count() for t in thr}
    cntP={t:df.Filter(f'ptmax>{t} && RNNScore>={WP}').Count() for t in thr}
    key='nu' if 'MaxP-10000' in f else int(re.search(r'MinP-(\d+)',f).group(1))
    out[key]={'N':N,'presel':{t:cnt[t].GetValue()/N for t in thr},'pass':{t:cntP[t].GetValue()/N for t in thr},
              'npass':{t:cntP[t].GetValue() for t in thr}}
    print(key,flush=True)
json.dump(out,open('eff_bins.json','w'),indent=1)
