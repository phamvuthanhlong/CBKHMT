#include <stdio.h>
#include <stdlib.h>

/* Bai 12: Tinh n! su dung bien toan cuc */

int n; double fact;
void factorial(){
	int count;
	if(n < 0){
		printf("ERROR");
		exit(1);
	}
	else{
		for(count = n, fact = 1; count > 0; --count){
			fact *= (double)count;
		}
	}
}

main(){
	for(n = 0; n < 11; n++){
		factorial();
		printf("%d! = %.0lf\n", n, fact);
	}
}

