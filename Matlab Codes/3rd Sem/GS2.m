   x = 0:pi/100:2*pi;
y = sin(x);
plot(x,y)
xlabel('x')
ylabel('sin(x)')
title('Plot of the Sine Function')
plot(x,y,'r--')
%The 'r--' string is a line specification.Each specification can include characters for the line color, style, and marker. 
%A marker is a symbol that appears at each plotted data point, such as a +, o, or *. For example, 'g:*' requests a dotted green line with * markers.

%Notice that the titles and labels that you defined for the first plot are no longer in the current figure window. By default, MATLAB® clears the figure each time you call a plotting function, resetting the axes and other elements to prepare the new plot.
%To add plots to an existing figure, use hold.
x = 0:pi/100:2*pi;
y = sin(x);
plot(x,y)

hold on

y2 = cos(x);
plot(x,y2,':')
%Until you use hold off or close the window, all plots appear in the current figure window.
%But range of x must be the same to plot graphs in same figure
y3=2*sin(2*x)
plot(x,y3);
legend('sin','cos','sin2x')

hold off


%Three-dimensional plots typically display a surface defined by a function in two variables, z = f(x,y)
%To evaluate z, first create a set of (x,y) points over the domain of the function using meshgrid.
