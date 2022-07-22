#include <stdio.h>
#include <stdlib.h>
/* Bai 15: Xac dinh do dai xau, sao chep xau, so sanh xau */

// Xac dinh do dai
int strlen1(char s[]){
    int n; 
    for(n = 0; s[n] != '\0'; n++);
    return n;
}

// Sao chep xau
void strcpy3(char s[], char t[]){
    char i;
    for(i = 0; t[i] != '\0'; i++){
        s[i] = t[i];
    }
    s[i] = '\0';
}

// So sanh xau
int strcmp1(char s[], char t[]){
    int i;
    for(i = 0; s[i] == t[i]; i++)
        if(s[i] == '\0')
            return 0;
    return s[i]-t[i];
}
int main() {
	char s1[256] = "hello", s2[256] = "", s3[256] = "hell";
	printf("ps: %s; pt: %s; pb: %s\n", s1, s2, s3);
    printf("Test strlen1(ps) = %d\n", strlen1(s1));
    printf("Test strcmp1(pb, ps) = %d\n", strcmp1(s3, s1));
    strcpy3(s2, s3);
    printf("Test strcpy3(pt, ps): %4s\n", s2);
    return 0;
}
