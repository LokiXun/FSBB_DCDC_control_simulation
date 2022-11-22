function y = measUpdate2(x,i)

p1 = -2.281; p2 =  5.586; p3 = -4.016; p4 =  1.519; p5 =  3.382;
OCV = p1*x(1)^4 + p2*x(1)^3 + p3*x(1)^2 + p4*x(1) + p5;
y = OCV - x(2) * i - x(3) * x(5);