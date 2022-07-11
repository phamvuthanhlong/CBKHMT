#include <stdio.h>
#include <math.h>

struct point{
	float x, y;
};

struct rect{
	struct point pt1, pt2;
};

void test_struct1(){
	// nhap 2 diem point
	// tinh khong cach
	struct point r1, r2;
	float r;
	scanf("%f %f", &r1.x, &r1.y);
	scanf("%f %f", &r2.x, &r2.y);
	// Tinh khoang cach 2 diem r = sqrt(x^2+y^2)
	r = sqrt((r1.x-r2.x)*(r1.x-r2.x)+(r1.y-r2.y)*(r1.y-r2.y));
	printf("Khoang cach 2 diem: r = %f\n", r);
}

void test_struct2(){
	// Nhap rect
	// Nhap point
	// xac dinh point
	struct rect r;
	struct point r1;
	r.pt1.x = 2.1; r.pt1.y = 1.5;
	r.pt2.x = 5.7; r.pt2.y = 2;
	scanf("%f %f", &r1.x, &r1.y);
	if(r1.x > r.pt1.x && r1.x < r.pt2.x && r1.y > r.pt1.y && r1.y < r.pt2.y)
		printf("In rect\n");
	else
		printf("Out rect\n");
}

int main(){
	test_struct1();
	test_struct2();
	return 0;
}

