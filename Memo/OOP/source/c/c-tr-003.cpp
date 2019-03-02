#include <iostream>
#pragma warning(disable:4996)
int add1(int, int);
void swap(int*, int*);
void my_strcpy(char*, char*);
int main() {
	int a = 0, b = 0;
	printf("input a and b : ");
	scanf("%d %d", &a, &b);
	printf("result = %d\n", add1(a, b));

	int* c, d;
	swap(&a, &b);
	printf("result = %d, %d\n", a, b);

	char str[10];
	my_strcpy(str, "Life");
	printf("result = %s\n", str);

	return 0;

}
int add1(int c, int d) {
	
	return c + d;
}

void swap(int* p, int* q) {
	
	int f;
	f = *p;
	*p = *q;
	*q = f;
}
void my_strcpy(char* e, char* f) {
	int i = 0;
	while (f[i] != '\0')
	{
		e[i] = f[i];
		i++;
	}
	e[i] = '\0';
}