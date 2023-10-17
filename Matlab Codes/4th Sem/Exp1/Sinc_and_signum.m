Fs=42;Ts=1/Fs;
t=-1:Ts:40*Ts-Ts;
f=5;
y=sinc(pi*t*f);
subplot 221,plot(t,y);
title('Sinc Function')
xlabel('x-->');
ylabel('magnitude-->')
N=512;
fy=fft(y,N);
fr=(0:N-1)*Fs/N;
%fy=fy(1:floor(end/2));
%fr=fr(1:floor(end/2));
subplot 222,plot(fr,fftshift(abs(fy)));
title('FFT of Sinc wave')
xlabel('frequency(Hz)-->')
ylabel('amplitude(v)-->')

sf=1000;
x=[-5:0.1:5];
len=length(x);
y=sign(x);
y1=[];
for k=1:101 % If not using sign() function
    if x(k)<0
        y1(k)=-1;
    elseif x(k)==0
        y1(k)=0;
    else
        y1(k)=1;
    end
end
subplot 223,plot(x,y);
title('Signum Function')
xlabel('Time(sec)-->')
ylabel('Amplitude(v)-->')
ylim([-2 2])
f=(0:len/2-1)*sf/len;
z=fft(y,len);
z=z(1:len/2);
subplot 224,plot(f,abs(z));
title('FFT')
xlabel('Time(sec)-->')
ylabel('Amlitude(v)-->')