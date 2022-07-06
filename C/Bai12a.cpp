#include <stdio.h>
#include <math.h>

/* Bai 12: Khai bao *a, *b, *c, x, y. In ra gia tri x, y. */

int *a, *b, *c, x, y;
void calc(){
    x = (*a+*b+*c)/3;
    y = (pow(*a-x,2)+pow(*b-x,2)+pow(*c-x,2))/3;
}
main(){
    scanf("%d %d %d", a, b, c);
    printf("x = %d, y = %d", *a, *b);
    calc();
    printf("x = %d, y = %d", x, y);
}
