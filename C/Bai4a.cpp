#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Bai 4: Tim nghiem phuong trinh x^5 + ax^2 - b = 0 */

main(){
	double a, b, xo, x, d, dx, N = 1000000, n = 0;
	scanf("%lf %lf", &a, &b);
	printf("\t\tx^5 + %.0lfx^2 - %.0lf = 0\n", a, b);
	printf("Solve for x: "); scanf("%lf", &xo);
	while(n<N){
		d = b - a*xo*xo;
		if (d > 0){
			x = pow(d, 0.2);
			dx = fabs((x - xo)/x);
		}
		else{
			printf("nhap lai");
			exit(1);
		}
		xo = x; n++;
	}
	printf("Nghiem x= %.5lf\nDo lech dx= %.2lf\nSo lan tinh n: %.0lf", x, dx, n);
}
