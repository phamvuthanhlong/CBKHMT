#include <stdio.h>

/* Bai 5: Tinh giai thua tu 5 den 10
	gom ham factorial va main */

double factorial(int n)
{
	int i; double fact = 1;
	for (i = n; i > 0; i--)
		fact *= double(i);
	return fact;
}

main()
{
	for (int i = 0; i <= 10; i++)	
		printf("%d! = %.0lf\n", i, factorial(i));
}
