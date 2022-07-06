#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* Bai 18: Tinh gia tri trung binh, sai phan cua 1 trieu so ngau nhien thuoc [0, 1]*/

int main(){
	int i, N = 1000000, seed;
	double sum1, sum2, avg, var, x;
	seed = time(NULL); srand(seed);
	sum1 = sum2 = 0;
	for(i = 0; i < N; i++){
		x = rand()/double(RAND_MAX);
		sum1 += x; sum2 += (x - 0.5)*(x - 0.5);
	}
	avg = sum1/N; var = sum2/N;
	printf("avg = %lf, var = %lf", avg, var);
	return 0;
}

