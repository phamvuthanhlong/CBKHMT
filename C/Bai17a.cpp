#include <stdio.h>
#include <time.h>

int main() {
    long i, N = 1000000;
    double a=123456777474, b, t;
    clock_t time1, time2;
    time1 = clock();
    for(i=0; i<N;i++)
        b = a*a*a*a;
    time2 = clock();
    t = (time2 - time1)/(double)(CLOCKS_PER_SEC);
    printf("Time: %lf", t);
    return 0;
}
