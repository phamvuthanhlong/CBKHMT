#include <stdio.h>
#include <stdlib.h>

/* Bai 17: Doi ngay thang cua nam sang ngay cua nam va nguoc lai */

int yearday(int (*daytab)[13], int year, int day, int month){
	int i, leap;
	
	leap = year %4 == 0 && year %100 != 0 || year %400 == 0;
	
	if(year < 1 || month < 1 || month > 12 || day < 1 || day > daytab[leap][month]){
		return -1;
	}
	for(i = 1; i < month; i++){
		day += daytab[leap][i];
	}
	return day;
}

void month_day(int daytab[][13], int year, int yearday, int *day, int *month){
	int i, leap;
	
	leap = year %4 == 0 && year %100 != 0 || year %400 == 0;
	
	if(year < 1 || yearday < 1 || yearday > (leap? 366 : 365))
    {
        *month = -1;
        *day = -1;
        return;
    }
	
	for(i = 1; yearday > daytab[leap][i]; i++){
		yearday -= daytab[leap][i];
	}
	*month = i;
	*day = yearday;
}

int main() {
    int daytab[2][13]={
		{0,31,28,31,30,31,30,31,31,30,31,30,31},
		{0,31,29,31,30,31,30,31,31,30,31,30,31}
	};
    int year, month, day, day_of_year;
    
    year = 2021; day_of_year = 266;
    month_day(daytab, year, day_of_year, &day, &month);
    if(day == -1){
    	printf("\nERROR\n");
	}else{
    	printf("\nNgay thu %d cua Nam %d tuong duong Ngay: %d/%d/%d\n", day_of_year, year, day, month, year);
    }
    
    year = 2022; day = 06; month = 02;
    day_of_year = yearday(daytab, year, day, month);
    if(day_of_year == -1){
    	printf("\nERROR\n");
	}else{
    	printf("\nNgay: %d/%d/%d tuong duong Ngay thu %d cua Nam %d\n", day, month, year, day_of_year, year);
    }
    return 0;
}
