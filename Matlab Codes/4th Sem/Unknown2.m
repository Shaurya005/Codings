rng default

Fs = 1000;
t = linspace(0,1,Fs);
x = cos(2*pi*100*t)+0.5*randn(size(t));

%The filter design is an FIR lowpass filter with order equal to 20 and a cutoff frequency of 150 Hz. Use a Kaiser window with length one sample greater than the filter order and  $\beta = 3$. See kaiser for details on the Kaiser window.
%Use fir1 to design the filter. fir1 requires normalized frequencies in the interval [0,1], where 1 corresponds to  $\pi$ rad/sample. To use fir1, you must convert all frequency specifications to normalized frequencies.
%Design the filter and view the filter's magnitude response.

fc = 150;
Wn = (2/Fs)*fc;
b = fir1(20,Wn,'low',kaiser(21,3));
fvtool(b,1,'Fs',Fs)
y = filter(b,1,x);

plot(t(1:100),x(1:100))
hold on
plot(t(1:100),y(1:100))

xlabel('Time (s)')
ylabel('Amplitude')
legend('Original Signal','Filtered Data')
