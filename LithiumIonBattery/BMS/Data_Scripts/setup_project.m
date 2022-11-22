if ~isfolder('work')
    mkdir('work')
end
proj = slproject.getCurrentProject;
cfg = Simulink.fileGenControl('getConfig');
cfg.CacheFolder = [proj.RootFolder, '\work'];
cfg.CodeGenFolder = [proj.RootFolder, '\src'];
Simulink.fileGenControl('setConfig', 'config', cfg);
%builddocsearchdb(fullfile(proj.RootFolder,'Doc','HTML'))
%web(fullfile(proj.RootFolder,'Doc','HTML'),'BMS.html')
cd([proj.RootFolder]);
load('BattCrntDrvCycle');
clear cfg;