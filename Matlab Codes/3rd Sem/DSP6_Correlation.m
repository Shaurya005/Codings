%Correlation of x(n) with y(n) i.e. Rxy()
clc
clear all
x=[0.5 2 1 2 3 2 1];
y=[1,2,1,3,7];
x
y
l=length(x);
m=length(y);

n=l+m-1;

x_=zeros(1,l+(2*(m-1)));

for k=m:l+m-1
    x_(k)=x(k-m+1);
end
x_
for k=1:n
    Rxy(k)=0;
    for r=1:m
        Rxy(k)=Rxy(k)+y(r)*x_(r+k-1);
    end
end
Rxy
xcorr(x,y)

%For auto correlation 

n=l+l-1;
x_=zeros(1,l+(2*(l-1)));
for k=l:l+l-1
    x_(k)=x(k-l+1);
end
x_
for k=1:n
    Rxx(k)=0;
    for r=1:l
        Rxx(k)=Rxx(k)+x(r)*x_(r+k-1);
    end
end
Rxx
xcorr(x,x)
subplot(221),stem(x)
title('Graph of x(n)')
xlabel('n -->')
ylabel('x(n) -->')
subplot(222),stem(y)
xlabel('n -->')
ylabel('y(n) -->')
title('Graph of y(n)')
subplot(223),stem(Rxy)
xlabel('m -->')
ylabel('Rxy(m) -->')
title('Correlation of x with y')
subplot(224),stem(Rxx)
xlabel('m -->')
ylabel('Rxx(m) -->')
title('Auto Correlation of x')