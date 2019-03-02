//	실생활에서 상속에 해당하는 예제를 들어 상속관계를 구현하시오
// - 클래스 및 멤버의 이름을 적절하게 만드시오.
//	-각 클래스의 핵심 멤버변수, 멤버함수는 하나 이상 두고, 멤버 변수는 모두 private속성으로 구현하시오
//	-기본 클래스와 파생 클래스의 멤버를 초기화할 수 있도록 초기화자를 이용하여 생성자도 구현하시오.

//	1. 의류, 2. 가전제품, 3. 동물, 4. 가게(상점), 5. 건물(집), 6. 가구

#include <iostream>
using namespace std;

class Elec
{
public:
	Elec();
	Elec(int, int);
	~Elec();

private:
	int volt;
	int microwave;
};

Elec::Elec(int myvolt, int mymicwave)
{
	volt = myvolt;
	microwave = mymicwave;
}

Elec::~Elec()
{
}

class Phone : public Elec
{
public:
	Phone();
	Phone(int);
	~Phone();

private:
	int battery;
};

Phone::Phone(int mynum)
{
}

Phone::~Phone()
{
}
int main() {

}

