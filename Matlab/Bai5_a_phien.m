clc; clear all; close all;
n=input('Nhap vao thang can kiem tra: ');
switch n
    case{1,3,5,7,8,10,12}
        fprintf('Thang %d co 31 ngay\n',n)
    case{4,6,9,11}
        fprintf('Tháng %d co 30 ngay\n',n)
    case{2}
        fprintf('Thang 2 co 28 hoac 29 ngay\n')
end