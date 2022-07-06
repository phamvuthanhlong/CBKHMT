#include <stdio.h>
#include <math.h>

/* Bai 9: Tinh tich phan xac dinh bang 
phuong phap Euler va phuong phap Simpson */

double fun(double x){
	return pow(x,2) + sqrt(x) + sin(x);
}

void calc1(double a, double b, int n){
	/* Phuong phap Euler */
	double h, x, I; int i;
	h = (b-a)/n; I = 0;
	for (i = 0; i < n + 1; i++){
		x = a + i*h;
		if (i == 0 || i == n){
			I += fun(x);
		}else
			I += 2*fun(x);
	}
	printf("I_1= %lf\n", I*h/2);
}

void calc2(double a, double b, int n){
	/* Phuong phap Simpson */
	double h, x, I; int i;
	h = (b-a)/(2*n); I = 0;
	for (i = 0; i < n + 1; i++){
		x = a + 2*i*h;
		if (i == 0){
			I += fun(x);
		}
		else if (i == n){
			I += 4*fun(x - h) + fun(x);
		}
		else
			I += 4*fun(x - h) + 2*fun(x);
	}
	printf("I_2= %lf\n", I*h/3);
}

main(){
	double a, b; int n;
	scanf("%lf %lf %d", &a, &b, &n);
	calc1(a, b, n);
	fflush(stdin);
	calc2(a, b, n);
}
