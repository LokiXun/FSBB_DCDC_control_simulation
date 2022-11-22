function x = stateUpdate2(x,i)
Ts = .1;
Capacity = 1;
% x = [SOC R0 R1 C1 iR]; iR is the current through R1
% Simple first-order system (no hysteresis)
x(1) = x(1) - Ts / Capacity / 3600 * i;
x(2) = x(2);
x(3) = x(3);
x(4) = x(4);
x(5) = exp(-Ts/x(3)/x(4))*x(5) + (1-exp(-Ts/x(3)/x(4)))*i;