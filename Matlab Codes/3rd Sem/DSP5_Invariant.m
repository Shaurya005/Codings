clc
clear all;
y=zeros(1,15)
for k=1:15
    if k>=1
        x(k)=1;
    else
        x(k)=0;
    end
end
for k=1:15
    if k==1
        y(k)=x(k);
    else
        y(k)=x(k)+0.9*y(k-1);
    end
end

%Now code for time shifting of x(k) and y(k)
%Formation of x(t-1)
for k=2:15
    t=k-1;
    x1(k)=x(t);
end
%Formation of y(t-1)
for k=2:15
    z=k-1;
    y1(k)=y(z);
end
subplot(221),stem(x)
xlabel('k -->')
ylabel('x(k) -->')
title('Input')
subplot(222),stem(y)
xlabel('x(k) -->')
ylabel('y(k) -->')
title('Output')
subplot(223),stem(x1)
xlabel('t=k-1')
ylabel('x(t) -->')
title('Input by delay')
subplot(224),stem(y1)
xlabel('z -->')
ylabel('y(z) -->')
title('Output by delay')