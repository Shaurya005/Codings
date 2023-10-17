clc;
clear all;
fs=500e3 %very high sampling rate 500
f=10e3 %frequency of sinusoidal 
nCyl=5; %generate five times of sinusoidal
t=0:1/fs:nCyl*1/f; %time index
x=cos(2*pi*f*t);

plot(t,x)
title('Continuous Sinusoidal Signal')
xlabel('Time(s)');
ylabel('Amplitude');