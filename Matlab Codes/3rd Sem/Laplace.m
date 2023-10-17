clc 
clear all
%specifying that variable t and s are symbolic ones 
syms t s %syms s t are same
f=-1.25+3.5*t*exp(-2*t)+1.25*exp(-2*t);
F=laplace(f,t,s)

%F=laplace(f,s,t)=((5*exp(-2*t))/4 + (7*t*exp(-2*t))/2 - 5/4)/t
 
%h=pzmap(sys)
%grid on;
%To make expression more readable we can use comman, simplify and pretty
simplify(F)
pretty(F)
%Alternatively, laplace transform can be written directly as
%F=laplace(-1.25+3.5*t*exp(-2*t)+1.25*exp(-2*t))


%Inverse Laplace Transform from f(t)
F=(s - 5)/(s*(s + 2)^2);
ilaplace(F,s,t)
%ilaplace(F,t,s)=(dirac(s)*(s - 5))/(s*(s + 2)^2)
simplify(ans)
pretty(ans)
%Alternatively,we can write ilaplace((s - 5)/(s*(s + 2)^2))
