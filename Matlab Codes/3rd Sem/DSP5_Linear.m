clc
clear all;
y1=zeros(1,15);
for k=1:15
    if k==1
        x1(k)=1;
    else
        x1(k)=0;
    end
end
%x1(k) is unit impulse  here
for k=1:15
    if k==1
        y1(k)=x1(k);
    else
        y1(k)=x1(k)+0.9*y1(k-1);
    end
end
%y1(k) is unit impulse response here
y2=zeros(1,15);
for k=1:15
    if k>=1
        x2(k)=1;
    else
        x2(k)=0;
    end
end
%x2(k) is unit step function here
for k=1:15
    if k==1
        y2(k)=x2(k);
    else
        y2(k)=x2(k)+0.9*y2(k-1);
    end
end
%y1(k) is unit step response here
x3=x1+x2;

for k=1:15
    if k==1
        y3(k)=x3(k);
    else
        y3(k)=x3(k)+0.9*y3(k-1);
    end
end
for k=1:15
    y4=y1+y2
end
subplot(221),stem(y1)
xlabel('x1(k) -->')
ylabel('y1(k) -->')
title('Impulse Response')

subplot(222),stem(y2)
xlabel('x2(k) -->')
ylabel('y2(k) -->')
title('Step Response')

subplot(223),stem(y3)
xlabel('x3(k)=x1(k)+x2(k)')
ylabel('y3(k) -->')
title('Response of x1+x2 by formula')

subplot(224),stem(y4)
xlabel('x3(k)=x(1)+x(2)')
ylabel('y4(k)=y1(k)+y2(k)')
title('Response of x1+x2 as y1+y2')