% GROUP-8
% Gyan Pratap Singh 1704088
% Anurag Gupta      1704087
% Lokesh Rao        1704090
% Hement Rawal      1704108

clc;
close all;
clear all;

t = 0:0.001:1;
fc = 50;
fm = 5;
Ac = 20;
Am = 4;

vc = Ac.*sawtooth(2*pi*fc*t);
vm = Am.*sin(2*pi*fm*t);
n = length(vc);
for i = 1:n
    if (vm(i)>=vc(i))
        pwm(i) = 1;
    else
        pwm(i) = 0;
    end
end

% Representation of the Message Signal
figure(1);
plot(t,vm);
xlabel('Time');
ylabel('Amplitude');
title('Message Signal');

% Representation of the Carrier Signal
figure(2);
plot(t,vc);
xlabel('Sample');
ylabel('Amplitude');
title('Carrier Signal');

% Representation of the PWM Signal
figure(3);
plot(t,pwm);
xlabel('Sample');
ylabel('Amplitude');
title('PWM Signal');
axis([0 1 0 2]);
