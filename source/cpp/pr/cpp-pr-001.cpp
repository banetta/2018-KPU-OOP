#include <iostream>
#include <cstring>
using namespace std;
#define P32

#ifdef P26
void swap(int*, int*);
void swap(char*, char*);
void swap(double*, double*);


int main() {

	int num1 = 20, num2 = 30;
	swap(num1, num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(ch1, ch2);
	cout << ch1 << ' ' << ch2 << endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(dbl1, dbl2);
	cout << dbl1 << ' ' << dbl2 << endl;

	return 0;
}

void swap(int* a, int* b) {
	
	int *temp = NULL;
	temp = a;
	a = b;
	b = temp;

}

void swap(char* a, char* b) {
	char *temp = NULL;
	temp = a;
	a = b;
	b = temp;

	
}

void swap(double* a, double* b) {
	double *temp = NULL;
	temp = a;
	a = b;
	b = temp;

	
}
#endif // P26

#ifdef P32

int main() {

}
#endif // P32

