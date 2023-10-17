clc
clear all
t=0:0.00001:0.002
f=1000
input=square(2*pi*f*t);
%For the same we can produce sin wave by writing sin in place of square
subplot(2,2,1),plot(t,input)
xlabel('t')
ylabel('Y')
title('Input Wave')

time_shifting=square(2*pi*f*(t-0.0005));
subplot(222),plot(t,time_shifting)
xlabel('t')
ylabel('Y')
title('Time Shifting')

time_scaling1=square(0.5*2*pi*f*t);
subplot(2,2,3),plot(t,time_scaling1) 
hold on
time_scaling=square(2*2*pi*f*t);
plot(t,time_scaling)
xlabel('t')
ylabel('Y')
title('Time scaling')
hold off

amplification=2*square(2*pi*f*t);
subplot(2,2,4),plot(t,amplification);
hold on
xlabel('t')
ylabel('Y')
title('Amplification')
attenuation=0.5*square(2*pi*f*t);
plot(t,attenuation)
hold off