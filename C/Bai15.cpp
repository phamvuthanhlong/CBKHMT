#include <stdio.h>
#include <stdlib.h>

/* Bai 15: Xac dinh do dai xau, sao chep xau, so sanh xau */

// Xac dinh do dai
int strlen1(const char *s){
    int n; 
    for(n = 0; s[n] != '\0'; n++);
    return n;
}

int strlen2(const char *s){
    const char *ps = s;
    for(; *ps != '\0'; ps++);
    return ps - s;
}
// Sao chep xau
void strcpy1(char *s, char *t){
    while ((*s = *t) != '\0'){
        s++; t++;
    }
}

void strcpy2(char *s, char *t){
    while ((*s++ = *t++) != '\0');
}

void strcpy3(char *s, char *t){
    char i;
    for(i = 0; t[i] != '\0'; i++){
        s[i] = t[i];
    }
    s[i] = '\0';
}
// So sanh xau
int strcmp1(const char *s, const char *t){
    int i;
    for(i = 0; s[i] == t[i]; i++)
        if(s[i] == '\0')
            return 0;
    return s[i]-t[i];
}

int strcmp2(const char *s, const char *t){
    for(; *s == *t; s++, t++)
        if(*s == '\0')
            return 0;
    return *s - *t;
}

int main() {
	char s1[256] = "hello", s2[256], s3[256] = "hell";
    char *ps, *pt, *pb;
	ps = s1;
	pt = s2;
	pb = s3;
	printf("ps: %s; pt: %s; pb: %s\n", ps, pt, pb);
    printf("Test strlen1(ps) = %d\n", strlen1(ps));
    printf("Test strlen2(ps) = %d\n", strlen2(ps));
    printf("Test strcmp1(pb, ps) = %d\n", strcmp1(pb, ps));
    printf("Test strcmp2(ps, pb) = %d\n", strcmp2(ps, pb));
    strcpy1(pt, ps);
    printf("Test strcpy1(pt, ps): %4s\n", pt);
    strcpy2(pt, ps);
    printf("Test strcpy2(pt, ps): %4s\n", pt);
    strcpy3(pt, ps);
    printf("Test strcpy3(pt, ps): %4s\n", pt);
    return 0;
}
