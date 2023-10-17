clc
close all;
x=-5:0.1:5;
fs=1/(1.5*0.1);
N=x.*fs;
for n=1:101
    if x(n)==0
        y1(n)=1;
    else
        y1(n)=sin(pi*x(n))./(pi*x(n));%Unnormalized sinc function is (sin x)/x
    end
%But Normalised sinc function is (sin pi*x)/(pi*x)
end
y2=sinc(x);
subplot(221),plot(x,y1)
title('Using Normalised formula')
xlabel('X-Axis')
ylabel('Sinc Function')
subplot(222),plot(x,y2)
title('Using Sinc function')
xlabel('X-Axis')
ylabel('Sinc Function')
f1=fft(y2,50);
subplot 223, plot(f1);