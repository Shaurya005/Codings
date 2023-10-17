clc
clear all;
t = 0:.001:.25;
x = sin(2*pi*50*t) + sin(2*pi*120*t);
%Add some random noise with a standard deviation of 2 to produce a noisy signal y. Take a look at this noisy signal y by plotting it.

y = x + 2*randn(size(t));
subplot 221, plot(y(1:50))
title('Noisy time domain signal')

%Clearly, it is difficult to identify the frequency components from looking at this signal; that's why spectral analysis is so popular.
%Finding the discrete Fourier transform of the noisy signal y is easy; just take the fast-Fourier transform (FFT).

Y = fft(y,251);
%Compute the power spectral density, a measurement of the energy at various frequencies, using the complex conjugate (CONJ).
%Form a frequency axis for the first 127 points and use it to plot the result. (The remainder of the points are symmetric.)

Pyy = Y.*conj(Y)/251;
f = 1000/251*(0:127);
subplot 222, plot(f,Pyy(1:128))
title('Power spectral density')
xlabel('Frequency (Hz)')

subplot 223, plot(f(1:50),Pyy(1:50))
title('Power spectral density')
xlabel('Frequency (Hz)')