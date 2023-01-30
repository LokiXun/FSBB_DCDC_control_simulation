% Four switch buck-boost DC/DC param
clear;clc;close all;

%% DCDC 参数
fs=45e3;         %工作频率

BatteryOutputVoltage_min = 85.85;  % V
BatteryOutputVoltage_max = 116.15; 
MotherLineVoltageReference = 96;
MotherLineVoltageErrorRange = 0.05;  % 5%
MotherLineVoltage_deltaRange = ...
    floor(MotherLineVoltageReference * MotherLineVoltageErrorRange); % <5%

Ts = 2e-6;  %时间常数>>求导

% R=1;            %电阻
% Vin=102.5;         %输入电压
% Vo=96;          %输出电压
% D1=0.5;         %S1占空比
% % D2=0.4;         %S4占空比
% a=0.2;          %电感电流波动区间，即(yc-yd)/yc。yd<0时a>1
% l=0.1;          %电容电压波动系数
% D1S34=0.5;      %在S1开启的哪个位置开启S3（取值0-1）
% %% 计算
% s34ks=D1*D1S34; %S3延迟时间比
% D2=1-D1*Vin/Vo; %根据D1,Vin，Vo求出D2
% Io=Vo/R;        %输出电流
% T1=s34ks/fs;T2=D1*(1-D1S34)/fs;
% T3=(1-D2-D1*(1-D1S34))/fs;T4=(D2-s34ks)/fs; %电感电流变化四个阶段
% %(yb+yc)*T2/2+(yc+yd)*T3/2=Io*T    S3打开时电感电流给电容充电，T2,T3段，稳态时全部用于负载放电
% %yd=yc-Vo*T3/L                     T3阶段电感上承受-Vo的电压 yc=yb+(Vin-Vo)*T2/L
% %T2阶段电感上承受Vin-Vo的电压 a=(yc-yd)/yc                      定义的电感电流波动区间
% syms yb yc yd L
% eqn1 = [(yb+yc)*T2/2+(yc+yd)*T3/2==Io/fs,yd==yc-Vo*T3/L,a==(yc-yd)/yc,yc==yb+(Vin-Vo)*T2/L ];
% [yb yc yd L] = solve(eqn1, [yb yc yd L]);
% yb = double(yb);%将 yb 中的值转换为双精度
% yc = double(yc);%将 yc 中的值转换为双精度
% yd = double(yd);%将 yd 中的值转换为双精度
% L  = double(L); %将 L  中的值转换为双精度，联立求解出yb,yc,yd,L
% dVo=Vo*l;       %电容电压波动量
% %((yc+yd)/2-Io)*T3=I*t=C*dVo    在S3打开时产生的电容电压波动
% C=((yc+yd)/2-Io)*T3/dVo;        %求出电容电压
% ya=yd;ye=yd;
% IL=(T1*(ya+yb)+T2*(yb+yc)+T3*(yc+yd)+2*T4*yd)*fs/2;  %求出电感电流平均值

fprintf("FSBB initialize success!")




