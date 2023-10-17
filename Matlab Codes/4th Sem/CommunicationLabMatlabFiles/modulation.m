clc,close all

t=0:0.001:1;
ts=0.0001;
fs=1/ts;
fm=10;
fc=100;
Am=2;
Ac=4;
k=0.2;

m=Am*cos(2*pi*fm*t);
c=Ac*cos(2*pi*fc*t);
modSig=c.*(1+k.*m);

subplot(5,1,1)
plot(t,m,'g')
subplot(5,1,2)
plot(t,c,'r')
subplot(5,1,3)
plot(t,modSig,'m')

N=128;
f=(-N/2:N/2-1)*1/(N*ts);
fSig=fftshift(fft(modSig,N));
subplot(5,1,4)
plot(f,abs(fSig),'b')

y=fSig.*c;
[num,den]=butter(2,2*fc/fs);
z=filter(num,den,y);
subplot(5,1,5)
plot(t,z)
