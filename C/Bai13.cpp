#include <stdio.h>

/* Bai 13:(Mang) Nhap n so tu ban phim luu vao 1 mang.
Tinh va in ra list[i] - tb mang */

int main() {
    int i,n,x=0;
    scanf("%d", &n);
    int list[n];
    for(i = 0; i < n; i++){
        scanf("%d", &list[i]);
        x += list[i];
    }
    x = x/n;
    for(i=0; i < n; i++){
        printf("%d\n", list[i]-x);
    }
    return 0;
}
