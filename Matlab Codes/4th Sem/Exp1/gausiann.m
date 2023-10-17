clear all;
clc;
x=-5:0.1:5;
y1 = gaussmf(x,[2 5]);
y2 = fft(y1,101);
figure (1);
subplot 211,plot(x,y1);
title('Gaussian function');
xlabel('time-->');
ylabel('amplitude-->')
subplot 212,plot(x,y2);
title('fft of gaussian function');
xlabel('time-->');
ylabel('amplitude-->');