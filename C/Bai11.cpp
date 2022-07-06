#include <stdio.h>
#include <math.h>

/* Bai 11:	a/ Tinh f(x)^3
			b/ Tinh f + 2f + ... + nf */

double fun1(double x){
	return x*sin(x);
}

double fun2(double x){
	return exp(x) + 1;
}
// Phan a
void cube(double (*fun)(double), double x, double *result){
	double y;
	y = (*fun)(x);
	*result = y*y*y;
}
//Phan b
void calc(double (*fun)(double), double x, int n, double *result){
	double y;
	y = (*fun)(x);
	for (int i = 1; i< n+1; i++){
		*result += i*y;
	}
}

main(){
	double x, kp1, kp2, kq3, kq4; int n;
	scanf("%lf %d", &x, &n);
	cube(fun1, x, &kp1);
	cube(fun2, x, &kp2);
	calc(fun1, x, n, &kq3);
	calc(fun2, x, n, &kq4);
	printf("(f1)^3= %lf\n(f2)^3= %lf\nsum1= %lf\nsum2= %lf", kp1, kp2, kq3, kq4);
}
