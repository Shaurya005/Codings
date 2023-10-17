clc
clear all
N=512;T=10;
dt=T/(N-1);
t=linspace(-5,5,N);
f=exp(-t.^2);F=fft(f);
F1=F(1:N/2+1);
F2=F(N/2+1:N);
F=[F2,F1];
dnu=(N-1)/(N*T);
nuNyq=1/(2*dt);
nu=-nuNyq+dnu*(0:N);
F=dt.*F;
%F=dt.*F./exp(-1i.*nu.*T/2);
y=linspace(-5,5,N);
F2=pi.^(1/2).*exp(-y.^2/4);
subplot 221,plot(y,F2);
title('Gaussian Function')
xlabel('tim(sec)-->')
ylabel('amplitude(v)-->')
%plot(nu,real(F),'r');
subplot 222,plot(nu,abs(F),'r');
title('FFT of Gaussian wave')
xlabel('frequency(Hz)-->')
ylabel('amplitude(v)-->')
xlim([-5 5])

x=-3:0.01:3;
y=zeros(1,length(x));
y(1:100)=1;
y(end-98:end)=1;
%The end operator must be used within an array index expression.
f=fft(y);
f=fftshift(f);
%figure(55) %Creates new window of plot with name 'figure 55'
subplot 223,plot(x,y);
title('Gate Function')
xlabel('tim(sec)-->')
ylabel('amplitude(v)-->')
subplot 224,plot(f)
title('FFT of Gate Function')
xlabel('Frequency(Hz)-->')
ylabel('amplitude(v)-->')