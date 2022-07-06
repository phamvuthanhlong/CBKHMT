#include <stdio.h>
#include <stdlib.h>

/* Bai 16:(Con tro) Thuat toan sap xep Hoare */

void swap(int *v[], int i, int j){
    int temp;
    temp = *v[i]; *v[i] = *v[j]; *v[j] = temp;
}

void quicksort(int *v[], int left, int right){
    int i, last;
    if(left >= right)
        return;
    swap(v, left, (left+right)/2);
    last = left;
    for(i = left+1; i <= right; i++)
        if(*v[left]>*v[i])
            swap(v, ++last, i);
    swap(v, left, last);
    quicksort(v, left, last-1);
    quicksort(v, last+1, right);
}

int main() {
    int i, *v[8], v1[8] = {1,7,11,5,6,9,12,2};
    for(i = 0;i < 8; i++)
        v[i] = &v1[i];
    quicksort(v, 0, 7);
    for(i = 0;i < 8; i++)
        printf("%4d", *v[i]);
    return 0;
}
