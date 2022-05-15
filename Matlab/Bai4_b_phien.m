clc; clear all; close all;
n=input('Nhap gia tri n la: ');
if n==1||n==2
    F=1;
    fprintf('So hang thu %d la: %d\n',n,F);
else
    for i=3:n
        F(1)=1;
        F(2)=1;
        F(i)=F(i-1)+F(i-2);
    end
    fprintf('So hang thu %d la: %d\n', n,F(n));
end