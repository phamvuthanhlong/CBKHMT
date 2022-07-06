#include <stdio.h>

/* Bai 18a: Tinh n!, chuong trinh gom 2 file: factorial.c va main.c */

void factorial(int i, double *fact);

main(){
	int i; double fact;
	for(i = 0; i < 11; i++){
		factorial(i, &fact);
		printf("%d! = %.0lf\n", i, fact);
	}
}

#include "factorial.cpp"

