% Initialization file for demo ssc_lithium_cell_1RC_estim_ini.mdl. Demo
% based on T. Huria, M. Ceraolo, J. Gazzarri, R. Jackey. "High Fidelity
% Electrical Model with Thermal Dependence for Characterization and
% Simulation of High Power Lithium Battery Cells," IEEE International
% Electric Vehicle Conference, March 2012
%
% Copyright 2012-2019 The MathWorks, Inc.

%% Load experimental data
load('synthData.mat');

% Battery capacity
Capacity = 31; % Ampere*hours
SOC_LUT = (0.1:.1:1)';
Qe_init = 0; % Ampere*hours
SOC0 = (Capacity-Qe_init)/Capacity;
expTemperature = [20 5 40];

%% Estimated Parameters - Initial starting points before estimation
% Em open-circuit voltage vs SOC
Em = 3.8*ones(size(SOC_LUT)); %Volts
Em_min = 3*ones(size(SOC_LUT)); %Volts
Em_max = 4.2*ones(size(SOC_LUT)); %Volts

% R0 resistance vs SOC
R0 = 0.01*ones(size(SOC_LUT)); %Ohms
R0_min = 0.001*ones(size(SOC_LUT)); %Ohms
R0_max = 0.1*ones(size(SOC_LUT)); %Ohms

% Diffusion resistance
% R1 Resistance vs SOC
R1 = 0.0005*ones(size(SOC_LUT)); %Ohms
R1_min = 0.00001*ones(size(SOC_LUT)); %Ohms
R1_max = 0.01*ones(size(SOC_LUT)); %Ohms

% tau1 Time Constant vs SOC
tau1 = 10*ones(size(SOC_LUT)); %Ohms
tau1_min = 1*ones(size(SOC_LUT)); %Ohms
tau1_max = 100*ones(size(SOC_LUT)); %Ohms

% R2 Resistance vs SOC
R2 = 0.0005*ones(size(SOC_LUT)); %Ohms
R2_min = 0.00001*ones(size(SOC_LUT)); %Ohms
R2_max = 0.01*ones(size(SOC_LUT)); %Ohms

% tau2 Time Constant vs SOC
tau2 = 100*ones(size(SOC_LUT)); %Ohms
tau2_min = 10*ones(size(SOC_LUT)); %Ohms
tau2_max = 500*ones(size(SOC_LUT)); %Ohms

% R3 Resistance vs SOC
R3 = 0.0005*ones(size(SOC_LUT)); %Ohms
R3_min = 0.00001*ones(size(SOC_LUT)); %Ohms
R3_max = 0.01*ones(size(SOC_LUT)); %Ohms

% tau3 Time Constant vs SOC
tau3 = 500*ones(size(SOC_LUT)); %Ohms
tau3_min = 100*ones(size(SOC_LUT)); %Ohms
tau3_max = 5000*ones(size(SOC_LUT)); %Ohms

%%
if ~exist('estimExp')
    estimExp = 1;
end
if ~exist('numTau')
    numTau = 1;
    prm_dyn = num2str(numTau+1);
    set_param([gcs '/battery'],'prm_dyn',prm_dyn)
end
