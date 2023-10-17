% GROUP-8
% Gyan Pratap Singh 1704088
% Anurag Gupta      1704087
% Lokesh Rao        1704090
% Hement Rawal      1704108

clc;
close all;
clear all;

fc= 1000;                                              
fs= 10000;
f1= 200;
t= 0:1/fs:((2/f1)-(1/fs));
x1= 0.4*cos(2*pi*f1*t)+0.5;      
y1= modulate(x1,fc,fs,'ppm');

figure(1);
plot(x1);
title(' single tone message, f1=200,fs=10000');

figure(2);
plot(y1);
axis([0 500 -0.2 1.2]);
title('ppm, one cycle of f1, fc=1000,f1=200');

x1_recov=demod(y1,fc,fs,'ppm');
figure(3);
plot(x1_recov);
title('time domain recovered,single tone, f1=200');
