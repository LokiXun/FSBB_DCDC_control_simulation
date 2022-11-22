%%
% Copyright 2012 The MathWorks, Inc.
numCells = 3;
% load('Kokam_LUT_3RC')%
results.T5C  = load('batteryParameterEstimation_results_3RC_5degC.mat');
results.T20C = load('batteryParameterEstimation_results_3RC_20degC.mat');
results.T40C = load('batteryParameterEstimation_results_3RC_40degC.mat');
SOC_LUT = results.T5C.SOC_LUT;

%% Thermal Properties
% Cell dimensions and sizes
cell_thickness = 0.0084; %m
cell_width = 0.215; %m
cell_height = 0.220; %m

% Cell surface area
cell_area = 2 * (...
    cell_thickness * cell_width +...
    cell_thickness * cell_height +...
    cell_width * cell_height); %m^2

% Cell volume
cell_volume = cell_thickness * cell_width * cell_height; %m^3
%%
for idx = 1:numCells
%% Lookup Table Breakpoints

Battery(idx).SOC_LUT = SOC_LUT;
Battery(idx).Temperature_LUT = [5 20 40] + 273.15;

%% Em Branch Properties (OCV, Capacity)

% Battery capacity
Battery(idx).Capacity_LUT = [31 31 31]; %Ampere*hours

%% Em Branch Properties (OCV, Capacity)

% Em open-circuit voltage vs SOC rows and T columns
Battery(idx).Em_LUT = [ results.T5C.Em ...
                        results.T20C.Em ...
                        results.T40C.Em]; %Volts

%% Terminal Resistance Properties

% R0 resistance vs SOC rows and T columns
Battery(idx).R0_LUT = [ results.T5C.R0 ...
                        results.T20C.R0 ...
                        results.T40C.R0]; %Ohms

%% RC Branch 1 Properties

% R1 Resistance vs SOC rows and T columns
Battery(idx).R1_LUT = [ results.T5C.R1 ...
                        results.T20C.R1 ...
                        results.T40C.R1]; %Ohms

% R2 Resistance vs SOC rows and T columns
Battery(idx).R2_LUT = [ results.T5C.R2 ...
                        results.T20C.R2 ...
                        results.T40C.R2]; %Ohms

% R3 Resistance vs SOC rows and T columns
Battery(idx).R3_LUT = [ results.T5C.R3 ...
                        results.T20C.R3 ...
                        results.T40C.R3]; %Ohms

% C1 Capacitance vs SOC rows and T columns
Battery(idx).t1_LUT = [ results.T5C.tau1 ...
                        results.T20C.tau1 ...
                        results.T40C.tau1]; %Farads

% C2 Capacitance vs SOC rows and T columns
Battery(idx).t2_LUT = [ results.T5C.tau2 ...
                        results.T20C.tau2 ...
                        results.T40C.tau2]; %Farads

% C3 Capacitance vs SOC rows and T columns
Battery(idx).t3_LUT = [ results.T5C.tau3 ...
                        results.T20C.tau3 ...
                        results.T40C.tau3]; %Farads

%% 
% Cell mass
Battery(idx).cell_mass = 0.84; %kg

% Volumetric heat capacity
% assumes uniform heat capacity throughout the cell
% ref: J. Electrochemical Society 158 (8) A955-A969 (2011) pA962
Battery(idx).cell_rho_Cp = 2.04E6; %J/m3/K

% Specific Heat
Battery(idx).cell_Cp_heat = Battery(idx).cell_rho_Cp * cell_volume / Battery(idx).cell_mass; %J/kg/K
%% Initial Conditions
% Charge deficit
% Battery(idx).Qe_init = 15.6845; %Ampere*hours

% Ambient Temperature
Battery(idx).T_init = 20 + 273.15; %K

end
%% Initial charge deficit
Battery(1).SOC0 = 0.2;
Battery(2).SOC0 = 0.22; %Ampere*hours
Battery(3).SOC0 = 0.24; %Ampere*hours

% Convective heat transfer coefficient
% For natural convection this number should be in the range of 5 to 25
h_conv = 5; %W/m^2/K Cell-to-cell
h_conv_end = 10; %W/m^2/K End cells to ambient

%% Passive balancing parameters
% load('tempParam')
I_cc = 15;
R = .2;
R_bleed = 20;
T_volt = 600;
V_th = 11.5;
deltaV = 0.01;
V_top = 12.5;
