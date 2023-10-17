clc
time=-10:0.01:10;
freq_signal = 0.2;
freq_carrier = 6;
carrier= 5*sin(2*pi*freq_carrier*time);
signal= cos(2*pi*freq_signal*time);
subplot(6,1,1)
plot(time,signal);
title('Signal')
subplot(6,1,2)
plot(time,carrier)
title('Carrier')
subplot(6,1,3)

K=0.5;
modulation=(1+K.*signal).*carrier;
plot(time,modulation)
title('Under Modulation')
subplot(6,1,4)

K=1;
modulation=(1+K*signal).*carrier;
%In case of scaler-vector multiplication .* is same as * as everything in
%matlab is a matrix. So results remain same on using .* or *.
plot(time,modulation)
title('Critical Modulation')
subplot(6,1,5)

K=8;
modulation=(1+K.*signal).*carrier;
plot(time,modulation)
title('Over Modulation')
subplot(6,1,6);

modulation=fft(modulation);
plot(time,modulation)
title('FFT of Over Modulation');