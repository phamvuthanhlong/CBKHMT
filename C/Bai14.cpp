#include <stdio.h>

/* Bai 14:(Mang) Tinh n!. In n! tu 5 -> 10 */
 
int main() {
    int i, n;
    scanf("%d", &n);
    int fact[n];
    fact[0] = 1;
    for(i=1; i<n+1; i++){
        fact[i] = i*fact[i-1];
    }
    for(i=5; i<11; i++){
        printf("%d! = %d\n", i,fact[i]);
    }
    return 0;
}
