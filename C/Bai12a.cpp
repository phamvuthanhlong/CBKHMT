#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Bai 12: Khai bao *a, *b, *c, x, y. In ra gia tri x, y. */

double *a, *b, *c, x, y;
void calc(){
    x = (*a + *b + *c)/3;
    y = (pow(*a-x,2) + pow(*b-x,2) + pow(*c-x,2))/3;
}
main(){
	double pa, pb, pc;
    scanf("%lf %lf %lf", &pa, &pb, &pc);
    a = &pa; b = &pb; c = &pc;
    calc();
    printf("x = %lf, y = %lf\n", x, y);
}
