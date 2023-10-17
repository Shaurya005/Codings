%y(n)=x(n)+x(n-1)+x(n-2)+.......x(n-10)
%Formation of accumulator
clc
clear all
x=3:3:30;
for n=1:10
    if(n==1)
        y(n)=x(n);
    else
        y(n)=0;
        for k=1:n
            y(n)=y(n)+x(k);
        end
    end
end
y
subplot(211),plot(x,y)
title('Continuous-time System Response')
xlabel('x(n)-->')
ylabel('y(n)-->')
subplot(212),stem(x,y)
title('Discrete-time System Response')
xlabel('x(n)-->')
ylabel('y(n)-->')
