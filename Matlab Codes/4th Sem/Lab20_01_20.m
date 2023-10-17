clc
clear all;
t1=0:0.0001:0.01;
N1=length(t1);
Am=10;fm=1000;
m=Am*cos(2*pi*fm*t1);
subplot 221, plot(m)
ylim([-100,100]);
title('Message Signal');
t2=0:0.0000001:0.00001;
N2=length(t2);
Ac=100;fc=455000;
c=Ac*cos(2*pi*fc*t2);
subplot 222, plot(c)
title('Carrier Signal');

dsb_sc=c.*m;
subplot 223,plot(dsb_sc)
title('DSB-SC Signal')

demod=dsb_sc.*c;
subplot 224,plot(demod)
title('Demodulated DSB-SC Signal')
%[b,a] = butter(n,Wn)
%[b,a] = butter(n,Wn,ftype)
%[b,a] = butter(n,Wn) returns the transfer function coefficients of an nth-order lowpass digital Butterworth filter with normalized cutoff frequency Wn.
%[b,a] = butter(n,Wn,ftype) designs a lowpass, highpass, bandpass, or bandstop Butterworth filter, depending on the value of ftype and the number of elements of Wn. The resulting bandpass and bandstop designs are of order 2n.
%The cutoff frequencies must be within the interval of (0,1).

figure(5)
%After demodulating, you might want to filter out the carrier signal. The particular filter used, such as butter, cheby1, cheby2, and ellip, can be selected on the mask of the demodulator block. Different filtering methods have different properties,
%and you might need to test your application with several filters before deciding which is most suitable.

[b,a] = butter(1,0.1,'low')

figure(2);
f1=fft(m,N1);

plot(1:length(f1)