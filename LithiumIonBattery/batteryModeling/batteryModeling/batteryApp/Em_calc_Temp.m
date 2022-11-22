%% Load data for Sanyo UR18650W battery 
clear
load('sanyo.mat');

%%
SOC_LUT = (0:.1:1)';
Capacity = 1.5;
%% Resistance and OCV calculation
% Prepare normalized x axes for each current

% x1p5 = sanyo_1p5A_25C(:,1)/sanyo_1p5A_25C(end,1);
% x10  = sanyo_10A_25C(:,1)/ sanyo_10A_25C(end,1);
% x15  = sanyo_15A_25C(:,1)/ sanyo_15A_25C(end,1);
% x20  = sanyo_20A_25C(:,1)/ sanyo_20A_25C(end,1);
x1p5 = sanyo_1p5A_25C(:,1)/sanyo_1p5A_25C(end,1);
x10  = sanyo_10A_25C(:,1)/ sanyo_1p5A_25C(end,1);
x15  = sanyo_15A_25C(:,1)/ sanyo_1p5A_25C(end,1);
x20  = sanyo_20A_25C(:,1)/ sanyo_1p5A_25C(end,1);
%% Plot discharge curves at each current
figure(1)
plot(   x1p5, sanyo_1p5A_25C(:,2),...
        x10,  sanyo_10A_25C(:,2),...
        x15,  sanyo_15A_25C(:,2),...
        x20,  sanyo_20A_25C(:,2))
legend({'1.5A' '10A' '15A' '20A'})
xlabel('1-SOC')
xlim([0 1])
ylabel('V')
title('Sanyo UR18650W 25ºC')

%% Fitting discharge curves at different currents
fit1p5 = fit(x1p5,sanyo_1p5A_25C(:,2),'smoothingspline');
fit10  = fit(x10, sanyo_10A_25C(:,2), 'smoothingspline');
fit15  = fit(x15, sanyo_15A_25C(:,2), 'smoothingspline');
fit20  = fit(x20, sanyo_20A_25C(:,2), 'smoothingspline');

figure(2)
hold on
plot(fit1p5,'-k'); plot(fit10,'-r'); plot(fit15,'-b'); plot(fit20,'-g');
legend({'1.5A' '10A' '15A' '20A'})
xlabel('1-SOC')

ylabel('V')
title('Sanyo UR18650W 25ºC Spline Fit')

%% Construct V vs. discharge current for different SOC levels
% Em_MAT is a matrix with rows: SOC, cols: current

for i=1:length(SOC_LUT)
    Em_MAT(i,:) = [fit1p5(SOC_LUT(i)) fit10(SOC_LUT(i)) fit15(SOC_LUT(i)) fit20(SOC_LUT(i))];
end

% Fit and visualize Em vs. I for each SOC level
colorV = {'-k','-r','-b','-g','-c','-k','-r','-b','-g','-c','-k'};
colorF = {'black','black','black','black','black','red','red','red','red','red','blue'};
figure(3)
hold on
for i=1:length(SOC_LUT)
    plot([1.5 10 15 20],Em_MAT(i,:),colorV{i},'Marker','o','MarkerFaceColor',colorF{i})
end
xlabel('i Amps')
ylabel('V Volts')
legend(num2str(SOC_LUT),'Location','eastoutside')
title('Sanyo UR18650W 25ºC - legend: 1-SOC')

%% Fit a line to the V vs. i curve to extrapolate to i=0

fitSOC00 = fit([1.5 10 15 20]',Em_MAT(1,:)','poly1');
fitSOC01 = fit([1.5 10 15 20]',Em_MAT(2,:)','poly1');
fitSOC02 = fit([1.5 10 15 20]',Em_MAT(3,:)','poly1');
fitSOC03 = fit([1.5 10 15 20]',Em_MAT(4,:)','poly1');
fitSOC04 = fit([1.5 10 15 20]',Em_MAT(5,:)','poly1');
fitSOC05 = fit([1.5 10 15 20]',Em_MAT(6,:)','poly1');
fitSOC06 = fit([1.5 10 15 20]',Em_MAT(7,:)','poly1');
fitSOC07 = fit([1.5 10 15 20]',Em_MAT(8,:)','poly1');
fitSOC08 = fit([1.5 10 15 20]',Em_MAT(9,:)','poly1');
fitSOC09 = fit([1.5 10 15 20]',Em_MAT(10,:)','poly1');
fitSOC10 = fit([1.5 10 15 20]',Em_MAT(11,:)','poly1');

R0_25 = abs(mean([fitSOC02.p1 fitSOC04.p1 fitSOC06.p1 fitSOC08.p1 ]));
%% Extrapolate the values of Voltage to i=0 to estimate the OCV at different SOC levels

Em = [fitSOC00(0) fitSOC01(0) fitSOC02(0) fitSOC03(0)...
      fitSOC04(0) fitSOC05(0) fitSOC06(0) fitSOC07(0)...
      fitSOC08(0) fitSOC09(0) fitSOC10(0) ]';

figure(1)
hold on
plot(SOC_LUT,Em,'o','MarkerFaceColor','k')
Em_fit = fit(SOC_LUT,Em,'smoothingspline');
Em = Em_fit((0:.01:1)');

% Em (OCV) at 25ºC as a result of extrapolation of discharge curves to 0A
% Em = flipud(Em);

%% Calculate time, current and voltage vectors for simulation
t1p5 =(0:Capacity * 3600 / 1.5)';
t10 = (0:Capacity * 3600 / 10)';
t15 = (0:Capacity * 3600 / 15)';
t20 = (0:Capacity * 3600 / 20)';

i1p5 = 1.5 * ones(length(t1p5),1);
i10 = 10 *   ones(length(t10),1);
i15 = 15 *   ones(length(t15),1);
i20 = 20 *   ones(length(t20),1);

fitV1p5 = fit1p5((0:1/(length(t1p5)-1):1)');
fitV10  = fit10((0:1/ (length(t10)-1 ):1)');
fitV15  = fit15((0:1/ (length(t15)-1 ):1)');
fitV20  = fit20((0:1/ (length(t20)-1 ):1)');

%% Plot discharge at different T's @ i = 10A

xm10C = sanyo_10A_m10C(:,1)/ sanyo_10A_25C(end,1);
x0C   = sanyo_10A_0C(:,1)  / sanyo_10A_25C(end,1);
x60C  = sanyo_10A_60C(:,1) / sanyo_10A_25C(end,1);

figure(4)
plot(   xm10C, sanyo_10A_m10C(:,2),...
        x0C  , sanyo_10A_0C(:,2),...
        x10  , sanyo_10A_25C(:,2),...
        x60C , sanyo_10A_60C(:,2))
legend({'-10ºC' '0ºC' '25ºC' '60ºC'})
xlabel('1-SOC')
ylabel('V')
xlim([0 1])

%% Time, current, and voltage vectors for simulation
% Capacity should be corrected by temperature

% Construct fit objects for Voltage vs. SOC
fitm10C = fit(xm10C, sanyo_10A_m10C(:,2), 'smoothingspline');
fit0C   = fit(x0C  , sanyo_10A_0C  (:,2), 'smoothingspline');
fit60C  = fit(x60C , sanyo_10A_60C (:,2), 'smoothingspline');

% If i=constant, we can translate Ah to sec as:
tm10C = (0:sanyo_10A_m10C(end,1) * 3600 / 10)';
t0C   = (0:sanyo_10A_0C(end,1)   * 3600 / 10)';
t60C  = (0:sanyo_10A_60C(end,1)  * 3600 / 10)';

% Evaluate V at each time stamp
fitVm10C = fitm10C((0:1/ (length(tm10C)-1 ):xm10C(end))');%1)');%
fitV0C   = fit0C  ((0:1/ (length(t0C)  -1 ):x0C(end))');%1)');%
fitV60C  = fit60C ((0:1/ (length(t60C) -1 ):x60C(end))');%1)');%

% Calculate duration of each discharge
tm10C = tm10C(1:length(fitVm10C));
t0C = t0C(1:length(fitV0C));
t60C = t60C(1:length(fitV60C));

% Current is a constant in all cases
im10C = 10 * ones(length(tm10C),1);
i0C   = 10 * ones(length(t0C),1);
i60C  = 10 * ones(length(t60C),1);

%% Load LUT calculated using parameter estimation at different temperatures
% load('sanyo_LUT.mat')
% Instead of importing from PE SL procedure, we estimate the resistance at
% different temperatures by doing R = DeltaV/DeltaI

% We first create V = f(SoC) curves
Vm10C = fitm10C(0:.01:1);
V0C   = fit0C  (0:.01:1);
V60C  = fit60C (0:.01:1);
V25C = fit10 (0:.01:1);

% Then we calculate resistance using I = 10A
Rm10C = (Em - Vm10C)./10;
R0C = (Em - V0C)./10;
R25C = (Em - V25C)./10;
R60C = (Em - V60C)./10;

% Since later we will fit R0 as a function of SOC, we need to flip it
% upside down because up until now it was a function of x = 1-SOC
R0_LUT = flipud([Rm10C R0C R25C R60C]);

T_LUT = 273 + [-10 0 25 60];

%% Plot R0 vs. T
figure(5)
hold on
SOCbkpts = [20 40 60 80];
color = {'k' 'b' 'r' 'g'};
for k=1:4
    scatter(1000./T_LUT , log(R0_LUT(SOCbkpts(k),:)),'MarkerFaceColor',color{k})
end
%%
disp('Temperature dependence of R_0')
for k=1:4
    R0_vs_T_fit = fit(1000./T_LUT' , log(R0_LUT(SOCbkpts(k),:))','poly1');
    plot(R0_vs_T_fit)
    Ea(k) = 8.314 * R0_vs_T_fit.p1;
end

xlabel('1000/T (1000/K)')
ylabel('ln(R_0) (\Omega)')
title('Arrhenius plot of R_0 vs. 1000/T')
disp(' ')
disp('Activation energy for Li ion conduction')
disp(['Ea = ' num2str(Ea) ' kJ/mol'])

% legend({['Ea = ' num2str(Ea) ' kJ/mol']})
legend({'SOC = 20%','SOC = 40%','SOC = 60%','SOC = 80%'})

disp('Compare with Ji et al, JES 160(4) A636-A649 pA640')
disp('Ea for electrolyte transport in Li ion battery = 20 kJ/mol')

%% Fit a surface of R = f(T,SOC)
R0_LUT_bkpts = [Rm10C(SOCbkpts) R0C(SOCbkpts) R25C(SOCbkpts) R60C(SOCbkpts)];
[R0_vs_T_SOC_fit, gof] = fit([repmat(SOCbkpts'/100,4,1),reshape(repmat(1000./T_LUT,4,1),16,1)]...
    ,reshape(log(R0_LUT_bkpts),16,1),'poly21');

figure(6)
plot(R0_vs_T_SOC_fit,[repmat(SOCbkpts'/100,4,1),reshape(repmat(1000./T_LUT,4,1),16,1)]...
    ,reshape(log(R0_LUT_bkpts),16,1))

xlabel('SOC')
ylabel('1000/T (K)')
zlabel('ln(R)')