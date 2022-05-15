clc; clear all; close all;
% bai 3
disp('Giai phuong trinh ax^2+bx+c = 0')
a=input('Nhap vao a: ');
b=input('Nhap vao b: ');
c=input('Nhap vao c: ');
if a==0
    x=-c/b;
    fprintf('Phuong trinh bac nhat co nghiem:\n\tx = %f\n',x)
else
    denta=b*b-4*a*c;
    if denta>0
        x1=(-b-sqrt(denta))/2/a;
        x2=(-b+sqrt(denta))/2/a;
        fprintf('Phuong trinh co 2 nghiem:\n\tx1 = %f\n\tx2 = %f\n', x1, x2)
    elseif denta==0
        x=-b/2/a;
        fprintf('Phuong trinh co nghiem kep:\n\tx1 = x2 = %f\n',x)
    else
        fprintf('Phuong trinh vo nghiem!\n')
    end
end