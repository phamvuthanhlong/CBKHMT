#include <stdio.h>
#include <math.h>

/* Bai 4: Tim nghiem phuong trinh x^5 + ax^2 - b = 0 */

main(){
	double a, b, xo, x, d, dx, N = 1000000, n = 0;
	scanf("%lf %lf %lf", &a, &b, &xo);
	printf("Phuong trinh: x^5 + %.0lfx^2 - %.0lf = 0\n", a, b);
	while(n<N){
		d = b - a*pow(xo, 2);
		if (d > 0){
			x = pow(d, 0.2);
			dx = fabs((x - xo)/xo);
		}
		xo = x; n++;
	}
	printf("x: %.5lf\ndx: %2.100lf\nn: %.0lf", x, dx, n);
}
