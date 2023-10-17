clc
clear all
t=1:1:10;
%x=zeros(1,10); It is not necessary
for k=1:length(t)
    if(t(1,k)>=0)
        x(1,k)=1;
    else
        x(k)=0;% x(1,k)is same as x(k) as in 1D array
    end
end
%here x is unit step function
y_init=0;
for n=1:length(t)
    if(n==1)
        y(n)=x(t(n))+0.9*y_init;
    else
        y(n)=x(t(n))+0.9*y(n-1)
%if here ; is not used then it will print all values of y for every iteration of loop
%here indices must not be less than 1 as in t(n) or y(n)
    end
end
subplot(211),plot(t,y)
xlabel('t(s) -->')
ylabel('Amplitude -->')
title('Continuous Time System Response');
subplot(212),stem(t,y)
xlabel('t(s) -->')
ylabel('Amplitude -->')
title('Discrete Time System Response');