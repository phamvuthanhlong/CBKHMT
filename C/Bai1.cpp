#include <stdio.h>
#include <math.h>

/* Bai 1: Tinh S= acos(b) + e^c; a, b, c nhap tu ban phim */

main(){
	double a, b, c, s;
	scanf("%lf %lf %lf", &a, &b, &c);
	s = a*cos(b) + exp(c);
	printf("s1 = %lf\n", s);
}
/*
main(){
	double a, b, c, s; FILE *p;
	p = fopen("input.dat", "r");
	fscanf(p, "%lf %lf %lf", &a, &b, &c);
	fclose(p);
	s = a*cos(b) + exp(c);
	p = fopen("output.dat", "w");
	printf(p, "s2= %lf", s);
	fclose(p);
}
*/
