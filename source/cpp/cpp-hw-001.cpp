// 사용자로부터 총 5개의 정수를 입력 받아서, 그 합을 출력하는 프로그램을 작성해 보자

#include <iostream>
using namespace std;

int main() {

	int i, result;

	cout << "1번째 정수 입력 : ";
	cin >> i;
	result = result + i;
	
	cout << "2번째 정수 입력 : ";
	cin >> i;
	result = result + i;

	cout << "3번째 정수 입력 : ";
	cin >> i; 
	result = result + i;
	
	cout << "4번째 정수 입력 : ";
	cin >> i;
	result = result + i;
	
	cout << "5번째 정수 입력 : ";
	cin >> i;
	result = result + i;

	cout << "합계 : " << result << endl;

}
