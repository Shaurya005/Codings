
%AIM: Study of Double Side Band Suppressed Carrier Amplitude Modulation 
%---------------------------------------------------------------------------------------------------------------------
t=0:0.001:1; 
Ts=0.001; 
Am=5; 
Ac=5; 
fm=10; 
fc=85; 
m=Am*sin(2*pi*fm*t); 
c=Ac*cos(2*pi*fc*t); 
figure(1); 
subplot(2,2,1); 
plot(t,m); 
title('Message Signal'); 
xlabel('time');
ylabel('Amplitude'); 
subplot(2,2,2); 
plot(t,c); 
title('carrier signal'); 
xlabel('time'); 
ylabel('Amplitude'); 
u=0.6;
x=m.*c; 
subplot(2,2,3); 
plot(t,x); 
%DSB-SC in frequency domain 
N=1024;
XC=fft(x,N); 
f=(-N/2:1:((N/2)-1))*(1/(N*Ts));
figure(3);
plot(f,abs(XC)); 
title('Modulated signal in frequency'); 
xlabel('Time'); ylabel('Amplitude'); 
%demodulation 
d=x.*c;
w=0.05; 
[num,dem]=butter(2,w); 
Y=filter(num,dem,d);
figure(2)
subplot(2,1,1);
plot(t,Y);
title('Demodulated signal'); 
xlabel('Time'); 
ylabel('Amplitude'); 
subplot(2,1,2); 
plot(t,m);
title('Message signal'); 
xlabel('Time');
ylabel('Amplitude');

