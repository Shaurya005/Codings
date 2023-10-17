sfc=1000;
tc=0:1/sfc:1;
Ac=1;
fc=100;
c=Ac*cos(2*pi*fc*tc);
figure(1)
plot(tc,c);
xlabel('time(s)')
ylabel('amplitude(v)')
title('Carrier Signal')

sfm=1000;
tm=0:1/sfm:1;
Am=1;fm=10;
m=Am*cos(2*pi*fm*tm);
figure(2)
plot(tm,m);
xlabel('time(s)')
ylabel('amplitude(v)');
title('Message Signal')

figure(3)
uc=1*(Am/Ac);%critical modulation index
sc=Ac*cos(2*pi*fc*tc).*(1+uc*cos(2*pi*fm*tm));
plot(tm,sc);
xlabel('time(s)');
ylabel('amplitude(v)');
legend('Critical Modulation');
title('Modulated signal');

figure(4)
uo=2*(Am/Ac); %over modulation index
so=Ac*cos(2*pi*fc*tc).*(1+uo*cos(2*pi*fm*tm));
plot(tm,so);
xlabel('time(s)')
ylabel('amplitude(v)')
legend('Over Modulation');
title('Modulated signal');

figure(5)
uu=0.5*(Am/Ac);
su=Ac*cos(2*pi*fc*tc).*(1+uu*cos(2*pi*fm*tm));
plot(tm,su);
xlabel('time(s)')
ylabel('amplitude(v)')
legend('Under Modulated')
title('Modulated Signal')

%Critical Modulation Signal Power Spectrum
figure(11)
fftc=fft(sc,length(tm));
fftc=fftc(1:length(tm)/2);
plot(abs(fftc));
xlabel('Hertz(Hz)');
ylabel('amplitude(v)');
legend('Critical Power Spectrum')
title('Modulated Signal Power Spectrum');

ds=sc.*c;
%using Low pass Filter
dm=conv(ds, exp(-tc/0.016));
figure(6)
subplot 211,plot(dm)
xlim([0 1000])
xlabel('time(s)');
ylabel('amplitude(v)');
% legend('Critical DeModulation')
title('DeModulated Signal')