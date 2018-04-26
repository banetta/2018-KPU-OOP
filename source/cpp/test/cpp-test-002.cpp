//	객체지향 프로그래밍 수시고사 2차
//	18:00 - 18:40
//	직원 10명의 정보를 입출력 할 수 있는 시스템을 원한다
//입출력은 화면으로 가능하면 된다. 파일입출력 불필요
//직원정보는 사번, 이름 나이 정도면 된다.
//직원정보는 클래스로 구현한다

//일련번호로 검색해서 직원 정보를 보는 기능이 있다
//직원 입력은 신규인원이 충원될때마다 입력하고싶다

//사번이름나이를 private맴버변수로 구현한다
//직원정보 입력 및 출력 기능은 멤버함수로 구현한다(인라인구현 X)

//메뉴 방식은 main에 구현한다.


#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

class Person
{
public:
	Person();
	void init_Person();
	void serch_Person();
	void num_of_Person();

private:
	int count = NULL;
	int num;
	string name;
	int age;

};
Person::Person() {

}

void Person::init_Person() {

	cout << "no. >";
	cin >> num;
	cout << "name >";
	scanf("%s", name);
	cout << "age. >";
	cin >> age;
	cout << endl;
	count++;

}

void Person::serch_Person() {
	
	int a = NULL;
	cout << "input number >";
	cin >> a;
	cout << "no. >" << num << endl;
	cout << "name >" << printf("%s", name) << endl;
	cout << "age. >" << age << endl;

}

void Person::num_of_Person() {
	
	cout << count << " member(s)" << endl;

}

int main() {
	cout << "객체지향 수시고사 2차" << endl;

	int i = NULL;
	Person A;

	while (true)
	{
		cout << "=== menu ===" << endl << "1. insert new member" << endl << "2. serch" << endl << "3. no. of members" << endl << "5. exit" << endl << endl << endl;
		cout << "mode> ";
		cin >> i;

		switch (i)
		{
		case 1:
			A.init_Person();
			i = NULL;
			break;

		case 2:
			A.serch_Person();
			i = NULL;
			break;

		case 3:
			A.num_of_Person();
			i = NULL;
			break;

		case 5:
			cout << "Program exit" << endl;
			return 0;

		default:
			cout << "worng number" << endl;
			break;
		}
	}
	

}