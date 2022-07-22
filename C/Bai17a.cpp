#include <stdio.h>
#include <time.h>
#include <math.h>

int main() {
    long i, N = 1000000;
    double a=123456777474, b, t;
    clock_t time1, time2;
    time1 = clock();
    for(i=0; i<N;i++){
        b = a*a*a*a;
    }
    time2 = clock();
    t = (time2 - time1)/(double)(CLOCKS_PER_SEC);
    printf("Time pt1: %lfs\n", t);
    
	time1 = clock();
    for(i=0; i<N;i++){
        b = pow(a,4);
    }
    time2 = clock();
    t = (time2 - time1)/(double)(CLOCKS_PER_SEC);
    printf("Time pt2: %lfs\n", t);
    return 0;
}
