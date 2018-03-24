#include <iostream>
#include <string.h>
#include <math.h>
struct Point
{
	int x;
	int y;
	char color[10];
};
void show(struct Point B);
void move(struct Point *C, int mx, int my);
int distan(struct Point, struct Point);

int main() {
	
	//int x,y;
	//x = 10;
	//y = 20;
	//printf("(%d,%d)\n",x,y);
	
	int a = 0 ,b = 0;

	struct Point A;
	A.x = 10;
	A.y = 20;
	strcpy_s(A.color, "Blue");
	printf("(%d,%d),%s\n", A.x, A.y,A.color);
	//printf("%s\n", A.color);
	show(A); 
	printf("input Your Point : ");
	scanf_s("%d,%d", &a, &b);
	move(&A,a,b); //call by reference
	printf("(%d,%d),%s\n", A.x, A.y, A.color);

	// 두 점 사이의 거리를 구하시오

	struct Point B, C;


	printf("input Your Point : ");
	scanf_s("%d,%d", &B.x, &B.y);
	printf("input Your Point : ");
	scanf_s("%d,%d", &C.x, &C.y);
	printf("distance is : %d\n", distan(B, C));
	

	return 0;
}

void show(struct Point B){
	printf("(%d,%d),%s\n", B.x, B.y, B.color);
};

void move(struct Point *C, int mx, int my) {
	C->x = mx;
	C->y = my;
};

int distan(struct Point D, struct Point E){
	return sqrt((D.x - E.x)*(D.x - E.x) + (D.y - E.y)*(D.y - E.y));
};