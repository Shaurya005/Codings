clc
clear all
n=0:0.01:2;
x=sin(2*pi*1*n);
for k=1:1:100
  c(k)=0;
  for p=1:1:201;
    c(k)=c(k)+x(p)*exp(-i*p*2*pi*1*n(p)*k);
  end 
end

for k=1:1:201
  y(k)=0;
  for p=1:1:100;
    y(k)=y(k)+c(p)*exp(i*p*2*pi*1*n(k)*k);
  end
end
subplot(211),plot(n,x);
subplot(212),plot(n,real(y));