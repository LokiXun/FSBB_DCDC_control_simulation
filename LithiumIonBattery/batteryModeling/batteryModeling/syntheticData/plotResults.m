
figure(100)
subplot(2,3,1)
plot(SOC_LUT,tau1,'k')
legend({'\tau_1'})
subplot(2,3,2) 
plot(SOC_LUT,tau2,'b')
legend({'\tau_2'})
subplot(2,3,3)
plot(SOC_LUT,tau3,'b')
legend({'\tau_3'})
subplot(2,3,4)
plot(SOC_LUT,R0,'k',SOC_LUT,R1,'b',SOC_LUT,R2,'r',SOC_LUT,R3,'g')
ylim([0 .01])
legend({'R_0' 'R_1' 'R_2' 'R_3'})
subplot(2,3,5)
plot(SOC_LUT,Em,'k')
