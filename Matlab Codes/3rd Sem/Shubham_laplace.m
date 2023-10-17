clc
clear all
syms t w x(w,t) X(s) s
assume(w,'real')%does'nt have any effect here
assume(s>0)
x=(exp(-5*t)+exp(-6*t))*exp(-(s*t))
X=int(x,t,0,inf)
[num,den]=numden(X)
c1=sym2poly(num)
c2=sym2poly(den)
H=tf(c1,c2)
simplify(H)
%pretty(H), it is not working here
pzmap(H)
grid on;