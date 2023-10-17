clc
clear all;
t=0:0.001:1;
td=0.001;
x = sin(4*pi*t)+cos(16*pi*t)-sin(8*pi*t);
subplot(4,1,1);
plot(t,x);
nfft = 1024;
f = (-nfft/2 : nfft/2 -1)*(1/(nfft*td));
X = fftshift(fft(x,nfft));
subplot(4,1,2);
plot(f,abs(X));
x1=downsample(x,5);
% plot(f,abs(x1));
x2=upsample(x1,5);
subplot(4,1,1);
plot(t,x);
hold on
plot(t,x2(1:length(x)));
subplot(4,1,3);
X2 = fftshift(fft(x2,nfft));
plot(f,abs(X2));

V = zeros(1,nfft);
V(nfft/2 -30 : nfft/2 + 30) = 1;
X_hyat = 5*V.*X2;
x_hyat = ifft(X_hyat,nfft,'nonsymmetric');
%x_hyat = real(ifft(fftshift(X_hyat,nfft)));
subplot(4,1,4);
plot(t,x_hyat(1:1001));