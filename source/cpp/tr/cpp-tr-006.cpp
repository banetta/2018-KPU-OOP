#include <iostream>
using namespace std;

// 참조자 실습
// 책 p.67 - 96 참조/

void test (int&); 

int main() {
	cout << "참조자 실습\n\n";

	int a;
	int& r = a; // 참조자 선언 반드시 선언과 동시에 변수를 참조
	a = 10;
	test(a); // int& r = a;
	cout << a << endl;


	return 0;
}

void test (int& r) {
	cout << r << endl;
	r += 1;
}
