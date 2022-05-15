clc; clear all; close all;
s=0; i=1;
while (pi^2/6-s)/(pi^2/6)>0.0001
    s=s+1/(i^2);
    i=i+1;
end
fprintf('Dieu kien la n >= %d\n',i);