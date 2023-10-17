clc
t=0:.001:0.2;
Am=10;Ac=20;
fm=10;fc=100;
phi=0;
m=Am*(cos(2*pi*fm*t+phi));
c=Ac*(cos(2*pi*fc*t+phi));
figure (1);
subplot(221),plot(t,m),grid on
subplot(222),plot(t,c),grid on
%M=c+c.*m;For matrix-matrix multiplication;Ac in c.*m is considered to be 1
M=(Ac+(Am*(cos(2*pi*fm*t+phi)))).*(cos(2*pi*fc*t+phi));
subplot(223),plot(t,M),grid on;
title('Under Modulated')
N=1024;
X=fft(M,N);
n=0:N-1;
subplot(224),plot(n,abs(X)),grid on
title('FFT of Under Modulation')

ts=0.001;
fs=1/ts;
Wn=pi*fc/(2*fs);
[b,a]=butter(1,0.4,'low');
filteredsignal=filter(b,a,X);
%filteredsignal=filteredsignal-mean(filteredsignal);
%subplot(224),plot(filteredsignal), grid on


figure (2)
Am=100;Ac=10;
m=Am*(cos(2*pi*fm*t+phi));
c=Ac*(cos(2*pi*fc*t+phi));
subplot(221),plot(t,m),grid on
subplot(222),plot(t,c),grid on
%M=c+c.*m;For matrix-matrix multiplication
M=(Ac+(Am*(cos(2*pi*fm*t+phi)))).*(cos(2*pi*fc*t+phi));
subplot(223),plot(t,M),grid on;
title('Over Modulated')
N=1024;
X=fft(M,N);
n=0:N-1;
subplot(224),plot(n,abs(X)),grid on
title('FFT of Over Modulation')

figure(3)
Am=100;Ac=100;
m=Am*(cos(2*pi*fm*t+phi));
c=Ac*(cos(2*pi*fc*t+phi));
subplot(221),plot(t,m),grid on
subplot(222),plot(t,c),grid on
%M=c+c.*m;For matrix-matrix multiplication
M=(Ac+(Am*(cos(2*pi*fm*t+phi)))).*(cos(2*pi*fc*t+phi));
subplot(223),plot(t,M),grid on;
title('Critically Modulated')
N=1024;
X=fft(M,N);
n=0:N-1;
subplot(224),plot(n,abs(X)),grid on
title('FFT of Critical Modulation')