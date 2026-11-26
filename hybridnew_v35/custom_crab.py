# CRAB customization for the EaDM v35 HybridNew grid (adapted from dazhang's BH set_limit_hybridnew)
def custom_crab(config):
    print('>> Customising the crab config')
    config.Site.storageSite = 'T2_US_UCSD'
    config.Data.publication = False
    config.Data.outLFNDirBase = '/store/user/tvami/EarthAsDM/HybridNew_v35'
    config.JobType.maxJobRuntimeMin = 300
    config.JobType.maxMemoryMB = 2000
    config.JobType.psetName = '/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/CombineHarvester/CombineTools/scripts/do_nothing_cfg.py'
    config.JobType.inputFiles = ['/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/CombineHarvester/CombineTools/scripts/FrameworkJobReport.xml', '/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/CombineHarvester/CombineTools/scripts/copyRemoteWorkspace.sh', '/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/../bin/el8_amd64_gcc12/combine', 'card.root']
