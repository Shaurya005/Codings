clc
clear all
x=[9 2 3]
b=0;
n=length(x)
y=sym('z')
for i=1:n
    b=b+x(i)*y^(1-i)
end
[num,den]=numden(b)
c1=sym2poly(num)
c2=sym2poly(den)
H=tf(c1,c2)
pzmap(H)
grid on;