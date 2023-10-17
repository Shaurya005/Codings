% Group-8
% Gyan Pratap Singh  1704088
% Anurag Gupta       1704087
% Lokesh Rao         1704090
% Hement Rawal       1704108

clc;
clear all;
close all;

t=0:0.0001:0.1;
Am=5;
fm=50;                                              %message signal freq
m=Am*cos(2*pi*fm*t);                                %message signal
M=(Am/(2*pi*fm))*sin(2*pi*fm*t);

Ac=5    ;
fc=400;                                             %carrier signal freq
c=Ac*cos(2*pi*fc*t);                                %carrier signal

Kf=40;
s=Ac*cos(2*pi*fc*t + 2*pi*Kf*M);

%%time domain
figure(1);
plot(t,m);
xlabel('time');
ylabel('amplitude');
title('message signal');

%%time domain
figure(2);
plot(t,c);
xlabel('time');
ylabel('amplitude');
title('carrier signal');

%%time domain
figure(3);
plot(t,s);
xlabel('time');
ylabel('amplitude');
title('modulated signal');

%%frequency domain
ts = 0.0001;                                 %sampling time
fs=1/ts;
N = 1024;
S = fftshift(fft(s,N));
f = (-N/2:1:(N/2-1))/(N*ts);
figure(4);
plot(f, abs(S));
xlabel('frequency');
ylabel('amplitude');
title('fft of modulated wave');

%Demodulation

b=(Kf*Am)/fm;
s2=fmdemod(s,fc,fs,b);
figure(5);
plot(t,s2);
xlabel('time');
ylabel('amplitude');
title('demodulated signal');

