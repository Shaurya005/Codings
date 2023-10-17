% GROUP-8
% Gyan Pratap Singh 1704088
% Anurag Gupta      1704087
% Lokesh Rao        1704090
% Hement Rawal      1704108

clc;
close all;
clear all;

a = 4 ;
f = 3 ;
t = 0:0.02:2; 
x1 = 1;                                         
x2 = a*sin(2*pi*f*t); 
y = x1.*x2;                        

figure(1);
stem(x1);
xlabel('Time');
ylabel('Amplitude ');
title('Impulse Signal');

figure(2);                                 
plot(t,x2);
xlabel('Time ');
ylabel('Amplitude ');
title('Sine Wave');

figure(3);                              
stem(t,y);
xlabel('Time');
ylabel('Amplitude');
title('PAM Wave');