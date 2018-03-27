// 프로그램의 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서
// 입력 받은 데이터를 그대로 출력하는 프로그램을 작성해 보자

#include <iostream>
#include <string>
using namespace std;

struct Person{
	char name[10];
	char phone[10];
};

int main() {

	struct Person P;
	
	cout << "이름을 입력하세요 : " ;
	cin >> P.name;

	cout << "전화번호를 입력하세요 : ";
	cin >> P.phone;

	cout << "이름 : " << P.name << endl;
	cout << "전화번호 : " << P.phone << endl;
}
