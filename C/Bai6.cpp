#include <stdio.h>
#include <math.h>

/* Bai 6: Tinh sin(x)^n. x va n nhap tu ban phim
gom ham fun1, fun2 va main */

double fun1(double x, int n)
{
	int i; double fact = 1;
	for (i = 0; i < n; i++)
		fact *= sin(x);
	return fact;
}

double fun2(double x, int n)
{
	if (n == 1) return sin(x);
	return fun2(x, n--)*sin(x);
}

main()
{
	double x; int n;
	scanf("%lf %d", &x, &n);
	printf("fun 1: %lf\nfun 2: %lf", fun1(x, n), fun2(x, n));
}
