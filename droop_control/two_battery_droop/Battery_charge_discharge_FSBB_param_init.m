% Four switch buck-boost DC/DC initialization
clear;clc;close all;

%% 1. DCDC topology
% % 1.1 FSBB main topology
% FSBB_mid_bridge_Resistance = 0.004;
% FSBB_mid_bridge_inductance = 20e-6;
% 
% FSBB_BatterySide_capacitance = 1440e-6;
% FSBB_BusSide_capacitance = 1440e-6;
% 
% % 1.2 Battery
% Battery_additional_resistance = 0.1;
% 
% BatteryOutputVoltage_min = 85.85;  % V
% BatteryOutputVoltage_max = 116.15; 
% BusVoltageReference = 96;
% BusVoltageErrorRange = 0.05;  % 5%
% BusVoltage_deltaRange = ...
%     floor(BusVoltageReference * BusVoltageErrorRange); % <5%

%% 2. control module param
wave_freq = 45e3;  % 方波频率
time_step = 1 / wave_freq;  %时间常数>>求导

fprintf("FSBB initialize success!")

% discharge
% u1 == 1 & (u2>=87.9 & u2 <=103.5)
% u1 == 1 & (u2 > 103.5 & u2 <= 119)
% charge
% u1 == 0 & (u3>=85.5 & u3 <=101)
% u1 == 0 & (u3 > 101 & u3 <=116.15)

%% Load change in Discharge
% 1. Constant Current
Voltage_current_mode = 96;
Current_100 = 29;
R_100 = Voltage_current_mode / Current_100;
load_percent_list = [1/4, 1/2, 3/4, 1];
R_current_mode_load_change = zeros(1, length(load_percent_list));
I_current_mode_load_change = zeros(1, length(load_percent_list));
R_current_mode_load_change(end) = R_100;
I_current_mode_load_change(end) = Current_100;
for i=1:length(load_percent_list)-1
    Load_percent = load_percent_list(i);
    R_current_mode_load_change(i) = R_100 / Load_percent;
    I_current_mode_load_change(i) = Current_100 * Load_percent;
end


% 2. Constant Power
Voltage_power_mode = 105;
P_100 = 3000;
R_100 = Voltage_power_mode^2 / P_100;
load_percent_list = [1/4, 1/2, 3/4, 1];
R_power_mode_load_change = zeros(1, length(load_percent_list));
Power_power_mode_load_change = zeros(1, length(load_percent_list));
R_power_mode_load_change(end) = R_100;
Power_power_mode_load_change(end) = P_100;
for i=1:length(load_percent_list)-1
    Load_percent = load_percent_list(i);
    R_power_mode_load_change(i) = R_100 / Load_percent;
    Power_power_mode_load_change(i) = P_100 * Load_percent;
end

% 3. Constant Voltage
Voltage_setup = 96;
P_100 = 3000;
R_100 = Voltage_setup^2 / P_100;
load_percent_list = [1/4, 1/2, 3/4, 1];
R_voltage_mode_load_change = zeros(1, length(load_percent_list));
Power_voltage_mode_load_change = zeros(1, length(load_percent_list));
R_voltage_mode_load_change(end) = R_100;
Power_voltage_mode_load_change(end) = P_100;
for i=1:length(load_percent_list)-1
    Load_percent = load_percent_list(i);
    R_voltage_mode_load_change(i) = R_100 / Load_percent;
    Power_voltage_mode_load_change(i) = P_100 * Load_percent;
end

% u1 == 1  & u4 > 10  & (u2>=87.9 & u2 <= 119)
% u1 == 0 & (u3>=85.5 & u3 <= 116.15) & u4 < 95