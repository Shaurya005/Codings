t=0:.00001:.005;
%Our sample frequency must be atleast twice of frequency defined
%So for this time step  must be less than 1/2f 
f=1000
y=sin(2*pi*f*t)
subplot(221),plot(t,y)
%If we are not giving x values i.e. t than it takes around 500 samples
xlabel('t')
ylabel('sin(x)')
title('Plot of the Sine Function')


t=-10:1:10;
y=zeros(1,21);
for k=1:length(t)
    if(t(1,k)>=0)
        y(1,k)=1
    else
        y(1,k)=0
    end
end
subplot(222), plot(t,y)
% If we don't write plot but only stem then also it would work.
stem(t,y)
title('Step Signal')


t=1:10;
y=zeros(1,10)
for k=1:length(t)
    y(1,k)=t(1,k)
end
subplot(223),plot(t,y)
xlabel('x-axis')
ylabel('y-axis')
title('Ramp Function')


t=0:.1:10
e=2.718
y=e.^t
subplot(224),plot(t,y)
title('Exponential Function')
xlabel('x')
ylabel('e^x')