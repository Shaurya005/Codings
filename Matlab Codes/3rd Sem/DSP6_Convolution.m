%Convolution of x(n) with h(n) i.e. impulse response
clc
clear all
h=[1,2,1,3,4,7];
x=[0.5 2 1 2];
x_init=x
h
l=length(x);
m=length(h);
for k=1:(l/2)
    n=x(k);
    x(k)=x(l-k+1);
    x(l-k+1)=n;
end
%The above code is for reversing x

n=length(h)+length(x)-1;

h_=zeros(1,(m+(2*(l-1))));

for k=l:l+m-1
    h_(k)=h(k-l+1);
end
h_

for k=1:n
    y(k)=0;
    for r=1:l
        y(k)=y(k)+x(r)*h_(r+k-1);
    end
end
y
con=conv(x_init,h)
subplot(311),stem(x)
title('Input Function x(n)')
xlabel('n -->')
ylabel('x(n) -->')
subplot(312),stem(h)
xlabel('n -->')
ylabel('h(n) -->')
title('Unit Impulse response of system h(n)')
subplot(313),stem(y)
xlabel('n -->')
ylabel('y(n) -->')
title('Convolution of x and h y(n)')