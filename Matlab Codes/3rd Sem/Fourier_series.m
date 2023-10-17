clc
clear all
n=0:0.01:2;
x=sin(2*pi*1*n);
N=length(n);
for k=1:4*N
  sum1=0;
  for p=1:N
    sum1=sum1+x(p)*exp(-1i*2*pi*1*n(p)*k);
    %Replace comlex i and j for 1i for speed and improved robustness
  end
  c(k)=sum1/(N*8);
end

for k=1:N
  y(k)=0;
  for p=1:4*N
    y(k)=y(k)+c(p)*exp(1i*2*pi*1*n(k)*p);
  end
end
subplot(211),plot(x);
subplot(212),plot(real(y));
%If here real were not there it's plot would be circular
ylim([-1 1])