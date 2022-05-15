clc; clear all; close all;
n = input('Nhap So tu nhien n = ');
if n == 0 || n == 1
    gt = 1;
else
    gt = n*giaithua(n-1);
end
fprintf('Giai thua cua %d la:\n\t%d! = %d\n', n, n, gt)