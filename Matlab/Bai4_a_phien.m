clc; clear all; close all;
a = menu('Ve do thi luong giac','sin(x)','cos(x)','tan(x)');
if a == 1
    x=-pi:0.1:pi;
    plot(x,sin(x),'r')
    grid on
    xlabel('x')
    ylabel('y')
elseif a == 2
    x=-pi:0.1:pi;
    plot(x,cos(x),'r')
    grid on
    xlabel('x')
    ylabel('y')
else
    x=-pi:0.1:pi;
    plot(x,tan(x),'r')
    grid on
    xlabel('x')
    ylabel('y')
end
