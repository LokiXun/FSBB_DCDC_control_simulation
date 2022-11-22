proj = currentProject;
builddocsearchdb(fullfile(proj.RootFolder,'Doc','HTML'))
web(fullfile(proj.RootFolder,'Doc','HTML'),'BMS.html')