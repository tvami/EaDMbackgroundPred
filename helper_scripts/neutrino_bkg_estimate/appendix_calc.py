# neutrino-induced upward muon yield in the SR: flux x area x livetime x efficiency, plus figures
import numpy as np, json, os
import matplotlib; matplotlib.use('Agg'); import matplotlib.pyplot as plt
OUT='/home/users/tvami/EarthAsDM/AN/AN-23-122/Figures/Appendix/NeutrinoBkg'; os.makedirs(OUT,exist_ok=True)
NA=6.022e23; T=15090*3600.   # AN total magnet-on livetime, Eq. eq:Ttotal
lE=np.array([2.25,2.62,3.01,3.39,3.78,4.17,4.56,4.96,5.36]); icE=10**lE
# IceCube-59 unfolded nu_mu+nubar_mu, E^2 Phi [GeV cm-2 s-1 sr-1] (arXiv:1409.4535 Tables 1-3)
tabs={'all':[2.54e-4,0.97e-4,3.06e-5,1.00e-5,3.64e-6,1.01e-6,2.65e-7,6.44e-8,1.85e-8],
      'hor':[2.45e-4,1.13e-4,3.80e-5,1.12e-5,4.45e-6,1.61e-6,4.15e-7,8.76e-8,2.22e-8],
      'ver':[2.75e-4,0.87e-4,2.28e-5,7.81e-6,1.99e-6,3.81e-7,6.84e-8,1.07e-8]}
def mk(tab):
    e=icE[:len(tab)]; lF=np.log(np.array(tab)/e**2); L=np.log(e)
    s0=(lF[1]-lF[0])/(L[1]-L[0]); s1=(lF[-1]-lF[-2])/(L[-1]-L[-2])
    def f(E):
        x=np.log(E); y=np.interp(x,L,lF)
        y=np.where(x<L[0],lF[0]+s0*(x-L[0]),y); y=np.where(x>L[-1],lF[-1]+s1*(x-L[-1]),y)
        return np.exp(y)
    return f
phi_astro=lambda E: 1.44e-18*(E/1e5)**-2.37   # IceCube 9.5 yr, nu_mu+nubar_mu
def sig(E,nb):  # CC cross section per nucleon [cm2]
    return np.minimum((0.334e-38 if nb else 0.677e-38)*E,5.53e-36*E**0.363)
def Yfrac(x,nb,r=0.2):  # fraction of CC events with E_mu >= x E_nu
    a,b=(r,1.) if nb else (1.,r); u=1-x
    return (a*u+b*(1-(1-u)**3)/3.)/(a+b/3.)
def dphimu(Emu,pn,al=2.2e-3,be=4.0e-6,R=1.2):  # equilibrium muon flux [cm-2 s-1 sr-1 GeV-1]
    En=np.logspace(np.log10(Emu)+1e-6,8,1500); fn=R/(1+R)
    ig=pn(En)*(fn*sig(En,0)*Yfrac(Emu/En,0)+(1-fn)*sig(En,1)*Yfrac(Emu/En,1))
    return NA/(al+be*Emu)*np.trapz(ig,En)
AOm=lambda r,h: 0.5*np.pi*(2*np.pi*r*2*h+2*np.pi*r*r)*1e4   # hemisphere-integrated projected area [cm2 sr]
A_trk=AOm(1.12,2.70); A_flt=AOm(0.80,2.12)
eff=json.load(open(os.path.join(os.path.dirname(os.path.abspath(__file__)),'eff_bins.json'))); Es=np.array(sorted(int(k) for k in eff if k!='nu'))
def eps(E,t):
    v=np.array([eff[str(e)]['pass'][str(t)] for e in Es]); o=np.interp(np.log(E),np.log(Es),v)
    return np.where(E<Es[0],0.,o)
Emu=np.logspace(0.2,5,500)
edges=[200,350,538,726,1027,1329,1743,2157,2685,3212,3740,4500,5500,6900]
def yields(pn,al=2.2e-3,be=4e-6,A=A_trk):
    d=np.array([dphimu(E,pn,al,be) for E in Emu])
    cum=lambda t: np.trapz(d*eps(Emu,t),Emu)*T*A
    thr={t:cum(t) for t in [200,1027,2157]}
    bins=[cum(edges[i])-(cum(edges[i+1]) if i+1<len(edges) else 0) for i in range(len(edges))]
    return d,thr,bins
res={}
for k in ['all','hor','ver']: res[k]=yields(mk(tabs[k]))
res['lo']=yields(mk(tabs['all']),2.5e-3,5e-6); res['hi']=yields(mk(tabs['all']),2.0e-3,3e-6)
res['flt']=yields(mk(tabs['all']),A=A_flt); res['astro']=yields(phi_astro)
d=res['all'][0]; I=lambda lo,dd=d: np.trapz(np.where(Emu>lo,dd,0),Emu)
summ={'SK_check':I(1.6),'Phi_gt':{t:I(t) for t in [10,100,200,1000]},
      'Ncross_all':I(1.6)*A_trk*T,'Ncross_flt':I(1.6)*A_flt*T,'Ncross200':I(200)*A_trk*T,'Ncross1000':I(1000)*A_trk*T,
      'thr':{k:v[1] for k,v in res.items()},'bins':{k:v[2] for k,v in res.items()},'A_trk':A_trk,'A_flt':A_flt}
json.dump(summ,open('appendix_numbers.json','w'),indent=1)
for k,v in summ['thr'].items(): print(k,{t:f'{x:.2e}' for t,x in v.items()})
print('SK check',summ['SK_check'],'Ncross',summ['Ncross_all'],summ['Ncross_flt'],summ['Ncross200'],summ['Ncross1000'])
bk=json.load(open(os.path.join(os.path.dirname(os.path.abspath(__file__)),'bkg_pass.json')))
print('bin  nu  nu_lo nu_hi  bkg');
for i,b in enumerate(bk): print(b[0],b[1],f"{res['all'][2][i]:.2e}",f"{res['flt'][2][i]:.2e}", f"{b[2]:.3f}+-{b[3]:.3f}")
# ---- figures
C1,C2,C3='#2a78d6','#eb6834','#1baf7a'; INK='#3d3d3a'
plt.rcParams.update({'font.size':13,'axes.edgecolor':INK,'axes.labelcolor':INK,'xtick.color':INK,'ytick.color':INK,'axes.spines.top':False,'axes.spines.right':False})
fig,ax=plt.subplots(1,2,figsize=(13,5.2))
cumI=lambda dd: np.array([np.trapz(np.where(Emu>e,dd,0),Emu) for e in Emu])
a=ax[0]
lo_=np.minimum(cumI(res['lo'][0]),cumI(res['ver'][0])); hi_=np.maximum(cumI(res['hi'][0]),cumI(res['hor'][0]))
a.fill_between(Emu,lo_*0.6,hi_*1.65,color=C1,alpha=0.18,lw=0,label='atmospheric, total uncertainty')
a.plot(Emu,cumI(d),color=C1,lw=2,label=r'atmospheric $\nu_\mu$ (IceCube unfolded)')
a.plot(Emu,cumI(res['astro'][0]),color=C2,lw=2,ls='--',label=r'astrophysical $\nu_\mu$ (IceCube diffuse)')
a.errorbar([1.6],[1.74e-13],yerr=[[0.073e-13],[0.073e-13]],fmt='o',ms=9,color=C3,mec='white',mew=1.5,label='Super-K measurement')
a.set_xscale('log'); a.set_yscale('log'); a.set_xlim(1.5,3e4); a.set_ylim(1e-18,1e-12)
a.set_xlabel(r'$E_\mu$ threshold [GeV]'); a.set_ylabel(r'$\Phi_\mu(>E_\mu)$ [cm$^{-2}$ s$^{-1}$ sr$^{-1}$]')
a.grid(alpha=0.25,lw=0.6); a.legend(frameon=False,fontsize=11,loc='lower left')
a=ax[1]
EE=np.logspace(np.log10(200),np.log10(9e4),300)
for t,c,m,lab in [(200,C1,'o',r'$p_T>200$ GeV (full SR)'),(1027,C2,'s',r'$p_T>1027$ GeV (blinded SR)')]:
    a.plot(EE,eps(EE,t),color=c,lw=2)
    a.plot(Es,[eff[str(e)]['pass'][str(t)] for e in Es],m,color=c,ms=6,mec='white',mew=1,label=lab)
a.set_xscale('log'); a.set_xlabel(r'muon energy at CMS, $E_\mu$ [GeV]'); a.set_ylabel('selection efficiency per tracker-crossing muon')
a.set_ylim(0,0.14); a.grid(alpha=0.25,lw=0.6); a.legend(frameon=False,fontsize=11)
fig.tight_layout(); fig.savefig(OUT+'/nubkg_flux_and_eff.pdf'); fig.savefig(OUT+'/nubkg_flux_and_eff.png',dpi=120)
fig,a=plt.subplots(figsize=(8,5.2))
x=np.array([b[0] for b in bk]+[bk[-1][1]]); bb=np.array([b[2] for b in bk]); be_=np.array([b[3] for b in bk])
nu=np.array(res['all'][2]); V=np.array([res[k][2] for k in ['all','hor','ver','lo','hi','flt']])
nulo=V.min(0)*0.60; nuhi=V.max(0)*1.65   # variations + IceCube flux syst (+65/-40%)
json.dump({'nulo':list(nulo),'nuhi':list(nuhi)},open('band.json','w'))
a.stairs(bb,x,color=C1,lw=2,label='post-fit background (B-only), SR PASS')
a.stairs(bb+be_,x,baseline=np.maximum(bb-be_,1e-6),fill=True,color=C1,alpha=0.18)
a.stairs(nu,x,color=C2,lw=2,label=r'expected atmospheric-$\nu$ muons')
a.stairs(nuhi,x,baseline=np.maximum(nulo,1e-7),fill=True,color=C2,alpha=0.2)
a.axvline(1027,color=INK,ls=':',lw=1); a.text(1060,2e-5,'blinded above',color=INK,fontsize=11)
a.set_xscale('log'); a.set_yscale('log'); a.set_ylim(1e-5,1e2); a.set_xlim(200,7001)
a.set_xlabel(r'$p_T$ [GeV]'); a.set_ylabel('events per bin, full Run 3'); a.grid(alpha=0.25,lw=0.6)
a.legend(frameon=False,fontsize=11,loc='upper right',bbox_to_anchor=(1,1.0))
a.set_xticks([200,300,500,1000,2000,3000,5000]); a.set_xticklabels(['200','300','500','1000','2000','3000','5000']); a.minorticks_off()
fig.tight_layout(); fig.savefig(OUT+'/nubkg_vs_bkg_SR.pdf'); fig.savefig(OUT+'/nubkg_vs_bkg_SR.png',dpi=120)
