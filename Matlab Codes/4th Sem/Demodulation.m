clc
close all
am = 10;
fm = 20;
tm = 1/fm;

t = 0:0.001:1;
T = 0.001;
fs = 1/T; 
m = am * sin(2 * pi *fm *t);

subplot 311, plot(t,m);
title('message signal');
xlabel('time');
ylabel('amplitude');

ac = 10;
fc = fm*10;
c = ac * sin(2 * pi * fc *t);
subplot 312, plot(t,c);
title('carrier signal');
xlabel('time');
ylabel('amplitude');

m = am/ac;
y =  (1 + m*cos(2 * pi * fm * t)) .* c;
subplot 313, plot(t,y);
title('modulated signal');
xlabel('time');
ylabel('amplitude');

figure(2)
N =128;
f = (-N/2: N/2 - 1 ) .* (1/(N*T));
yf = fft(y,N);
subplot 211, plot(f,abs(yf));
title('FFT of Modulated Signal')
xlabel('Frequency')
ylabel('Magnitude')

sam = y .* c ;
[num, den] = butter(2, 2 * fc/fs);
z = filter(num,den,sam);
subplot 212, plot(t,z);
title('demodulated signal');
xlabel('time');
ylabel('amplitude')