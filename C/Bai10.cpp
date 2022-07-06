#include <stdio.h>

/* Bai 10: Dung ham swap de thay doi gia tri hai bien */

void swap(double *x, double *y){
	double temp;
	temp = *x; *x = *y; *y = temp;
}

main(){
	double x, y;
	scanf("%lf %lf", &x, &y);
	swap(&x, &y);
	printf("x= %lf, y= %lf", x, y);
}
