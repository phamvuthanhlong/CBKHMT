#include <stdio.h>

/* Bai 14a: Tinh tong duong cheo cua mang 2 chieu */

int main()
{
 	int i, j, hang, cot, a[10][10], Sum = 0;
 	printf("Nhap so hang, so cot cua mang: ");
 	scanf("%d %d", &i, &j);
 	while (1){
	 	if (i == j){
		 	printf("Nhap cac phan tu cua mang:\n");
		 	for(hang = 0; hang < i; hang++){
		   		for(cot = 0;cot < j;cot++){
		      		scanf("%d", &a[hang][cot]);
		    	}
		  	}
		 	for(hang = 0; hang < i; hang++){
		   		Sum = Sum + a[hang][hang];
		  	}
		  	break;
		}
		else{
			printf("\nKhong phai mang 2 chieu! (so hang != so cot)\nNhap lai so hang, so cot cua mang: ");
			scanf("%d %d", &i, &j);
		}
	}
 	printf("Tong duong cheo cua mang =  %d", Sum );
 	return 0;
}
