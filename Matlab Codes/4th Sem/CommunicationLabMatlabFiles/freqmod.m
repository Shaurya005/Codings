
%AIM: Study of Frequency Modulation and Demodulation%
%---------------------------------------------------------
clc;
close all;
clear all;
am=5;
ac=10;
t=0:0.0001:0.1;
kf=50;
fm=300;
fc=700;
%%Message signal
m=am*cos(2*pi*fm*t);
subplot(411);
plot(t,m);
title('Message signal');
xlabel('Time --->');
ylabel('Amplitude');
%%Carrier signal
c=ac*cos(2*pi*fc*t);
subplot(412)
plot(t,c);
title('Carrier signal');
xlabel('Time --->');
ylabel('Amplitude');
%%Frequency modulated signal
s=ac.*cos((2*pi*fc*t)+((kf*am.*sin(2*pi*fm.*t))/fm));
subplot(413); 
plot(t,s);
title('Frequency modulated signal');
xlabel('Frequency --->');
ylabel('Amplitude');
f=kf*am;
z=fmdemod(s,fc,10000,f);
subplot(414); 
plot(t,z);
title('Demodulated signal');
xlabel('TIme --->');
ylabel('Amplitude');