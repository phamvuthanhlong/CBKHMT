#include <stdio.h>
#include <math.h>

/* Bai 8: Tim nghiem cua pt x^5 - e^x + 5 = 0
bang phuong phap vet can/chia doi. Nghiem thuoc [2;3] */

double fun(double x)
{
	return pow(x,2) + (x) - 5;
}

/* vet can */
void calc1(double a, double b)
{
	printf("Tim nghiem bang phuong phap vet can!\n");
	double x, x0, h, f, fmin;
	h = (fabs(a-b))/100;
	for (int i = 0; i < 101; i++){
		x = a+i*h;
		f = fun(x);
		if (i == 0){
			fmin = f;
			x0 = x;
		}
		if (fabs(f) < fabs(fmin)){
			fmin = f;
			x0 = x;
		}
	}
	printf("x= %lf\n", x0);
}

/* chia doi */
void calc2(double a, double b)
{
	printf("Tim nghiem bang phuong phap chia doi!\n");
	double c, x0, fa, fb, fc;
	fa = fun(a);
	for (int i = 0; i < 101; i++){
		c = (a+b)/2;
		fc = fun(c);
		if (fa*fc > 0)
			a = c;
		else
			b = c;
		x0 = c;
	}
	printf("x= %lf\n", x0);
}

main()
{
	double a, b;
	scanf("%lf %lf", &a, &b);
	calc1(a, b);
	fflush(stdin);
	calc2(a, b);
}
