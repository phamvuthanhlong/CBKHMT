clc; clear all; close all;
s=0;
fprintf('Nhap 10 so bat ki\n')
for i=1:10
    fprintf('So thu %d: ', i)
    a = input('');
    b(i) = a;
    s= s+a;
end
clc;
fprintf('Cac so da nhap:\n\n\t')
for i=1:10
    fprintf('%d\t', b(i))
end
fprintf('\n\nTong = %d\n\n', s)