#include <stdio.h>
#include <math.h>

struct point{
	float x, y;
};

struct rect{
	struct point pt1, pt2;
};

void test_point(){
	struct point r, *r1;
	r.x = 1.2; r.y = 2.7;
	r1 = &r;
	printf("(*r1).x = %f, (*r1).y = %f\n", (*r1).x, (*r1).y);
	printf("r1->x = %f, r1->y = %f\n", r1->x, r1->y);
}

struct point addpoint(struct point r1, struct point r2){
	struct point r3;
	r3.x = r1.x + r2.x;
	r3.y = r1.y + r2.y;
	return r3;
}
void cononrect(struct rect r, struct rect *r1){
	r1->pt1.x = (r.pt1.x > r.pt2.x ? r.pt1.x: r.pt2.x);
	r1->pt1.y = (r.pt1.y > r.pt2.y ? r.pt1.y: r.pt2.y);
	r1->pt2.x = (r.pt1.x < r.pt2.x ? r.pt1.x: r.pt2.x);
	r1->pt2.y = (r.pt1.y < r.pt2.y ? r.pt1.y: r.pt2.y);
}
int main(){
	struct rect p1, *p2;
	struct point r1, r2, r3;
	r1.x = 1.1; r1.y = 2.0;
	r2.x = 3.1; r2.y = 3.0;
	r3 = addpoint(r1,r2);
	printf("%f %f\n", r3.x, r3.y);
	p1.pt1 = r1; p1.pt2 = r2;
	test_point();
	cononrect(p1, p2);
	printf("%f %f %f %f\n", p2->pt1.x, p2->pt1.y, p2->pt2.x, p2->pt2.y);
	test_point();
	return 0;
}

