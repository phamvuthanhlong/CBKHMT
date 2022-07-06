#include <stdio.h>
#include <math.h>

/* Bai 7: Tinh tong n so nhap vao tu file bai7.dat.
Tim so lon nhat va so nho nhat. In ra man hinh */

void calc(int n)
{
	double x, xmax = -1e7, xmin = 1e7, s = 0; FILE *p;
	p = fopen("bai7.dat", "r");
	for (int i = 1; i <= n; i++){
		fscanf(p,"%lf", &x);
		s += x;
		if (x > xmax)	xmax = x;
		if (x < xmin)	xmin = x;
	}
	fclose(p);
	if (xmax == xmin)
		printf("Tong= %lf\nx_max= x_min= %lf", s, xmax);
	else
		printf("Tong= %lf\nx_max= %lf\nx_min= %lf", s, xmax, xmin);
}

main()
{
	int n;
	scanf("%d", &n);
	calc(n);
}
