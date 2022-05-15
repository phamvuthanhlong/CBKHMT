clc; clear all; close all;
matkhau = 123456;
d = 0;
a=input('Nhap mat khau co 6 chu so: ');
for i=1:5
   if a == matkhau
       disp('Chuc mung ban da nhap dung mat khau')
       break;
   else
       d = d+1;
       if d < 5
           a=input('Ban da nhap sai, hay nhap lai: ');
       elseif d == 5
           disp('Ban nhap qua so lan quy dinh!')
       end
   end
end