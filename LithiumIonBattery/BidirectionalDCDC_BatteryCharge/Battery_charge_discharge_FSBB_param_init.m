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
wave_freq = 100e3;  % 方波频率
time_step = 1 / wave_freq;  %时间常数>>求导

fprintf("FSBB initialize success!")




