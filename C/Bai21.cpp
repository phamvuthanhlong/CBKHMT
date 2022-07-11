#include <stdio.h>

struct monthday{
	int month, day;
};

typedef struct monthday date;

int day_year(int daytab[], date *x){
	int x1, i;
	x1 = 0;
	for(i = 1; i < x->month; i++){
		x1 += daytab[i];
	}
	return x1 + x->day;
}

int main(){
	int daytab[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	date x; int x1;
	scanf("%d %d", &x.day, &x.month);
	x1 = day_year(daytab, &x);
	printf("%d\n", x1);
	return 0;
}
