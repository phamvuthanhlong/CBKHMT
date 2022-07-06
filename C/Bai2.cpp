#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Bai 2: Giai phuong trinh ax^2 + bx + c =0 */

main(){
	double a, b, c, delta, x1, x2, x;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0){
		printf("PT bac nhat co 1 nghiem: x= %lf", -c/b);
		exit(1);
	}
	else{
		delta = b*b - 4*a*c;
		if (delta == 0){
			printf("PT co nghiem kep: x1= x2= %lf", -b/2/a);
		}
		else if (delta > 0){
			x1 = (-b + sqrt(delta)/2/a);
			x2 = (-b - sqrt(delta)/2/a);
			printf("PT co nghiem: x1= %lf, x2= %lf", x1, x2);
		}
		else
			printf("PT vo nghiem!");
	}
}
