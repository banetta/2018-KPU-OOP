#include <iostream>
using namespace std;
#define self_reference

#ifdef virtualfunc

class Parent
{
public:
	void fn1() { cout << "부모의 fn1()" << endl; };
	// virtual void fn3() { cout << "부모의 fn3()" << endl; };	//	가상함수 선언
	virtual void fn3() = 0;	//	순수 가상 함수
private:

};

class Child : public Parent
{
public:
	void fn2() { cout << "자식의 fn2()" << endl; };
	void fn3() { cout << "자식의 fn3()" << endl; };	//	함수 오버라이딩 (부모에게 상속받은 함수의 형태만 마음에 들 때 자식 class에서 다시 재정의해줌)
	// 부모 class에서 virtual선언이 되어있으면 명시가 되어있지 않아도 바로 가상함수가 된다
	// 1) 기본 클래스의 멤버함수가 virtual로 선언되어 있으면, 파생 클래스에 있는 같은 프로토타입의 멤버함수는 virtual 선언을 하지 않아도 자동으로 virtual을 상속 받는다.

private:

};

void out_fn(Parent* ap) {
	ap->fn3();
}

void out_fn(Parent& ar) {
	ar.fn3();
}

int main() {

	cout << "함수 오버라이딩 및 가상함수, 그리고 추상클래스" << endl;
	// Parent A;	//	추상클래스 (객체를 생성할 수 없는 클래스)
	// 부모의 포인터 -> 자식
	Parent* pParent;
	Child Kim;
	pParent = &Kim;	//	부모의 포인터가 자식을 가리킬 수 있다.

	pParent->fn3();	//	가상함수 선언을 해주어야만 자식class에 오버라이딩된 함수를 이용할 수 있다.
	// 3) 기본 클래스의 포인터는 지시하고 있는 객체의 어드레스에 따라 자신 클래스의 객체는 물론 파생 클래스의 객체도 지시할 수 있다.

	out_fn(&Kim);
	out_fn(Kim);
}

#endif // virtualfunc

#ifdef overloding

class Point
{
	int mx, my;	//	m_x

public:

	Point() {};
	Point(int, int);
	~Point();
	void Show();
	void operator++();	//	단항연산자 오버로딩 선언
	void operator+(int);	//	이항연산자 오버로딩 선언
	void operator+(Point);
	void operator-(int);

private:

};

Point::Point(int x, int y)
{
	mx = x;
	my = y;
}

Point::~Point()
{
}

void Point::Show() {
	cout << "(" << mx << "," << my << ")" << endl;
}

//	단항연산자 오버로딩 구현
void Point::operator++() {
	
	++mx;
	++my;

}

//	이항연산자 오버로딩 구현
void Point::operator+(int a) {

	mx += a;
	my += a;

}

void Point::operator+(Point i) {

	mx += i.mx;
	my += i.my;

}

void Point::operator-(int a) {

	mx -= a;
	my -= a;

}

int main() {
	cout << "연산자 오버로딩" << endl;

	Point A(1, 2);
	
	A.Show();
	//	단항연산자 오버로딩 실행
	++A;	
	A.operator++();
	//	두줄 모두 같은뜻으로 이해하고 실행된다.
	A.Show();

	//	이항연산자 오버로딩 실행
	A + 2;	//	뒤에 2는 함수의 parameter로 받아온다.
	A.operator+(2);
	//	두줄 모두 같은뜻으로 이해하고 실행된다.
	A.Show();


	//	응용 : 다른 parameter를 추가로 구현하여 응용하기
	Point B(10, 20);

	A + B;	//	구조체 자체로 응용 가능

	A.Show();

	//2 + A;	//	friend를 이용하여 구현이 가능하지만, 수업에서는 다루지 않기에 따로 해볼것

	//	응용 : 다른 연산자로도 응용해보기.
	A - 3;
	A.Show();

}

#endif // overloding

#ifdef self_reference


class Point
{
	int mx, my;	//	m_x

public:

	Point() {};
	Point(int, int);
	~Point();
	void Show();
	void operator++();	//	단항연산자 오버로딩 선언
	void operator+(int);	//	이항연산자 오버로딩 선언
	Point& operator+(Point);	//	self-reference return 선언
	void operator-(int);

private:

};

Point::Point(int x, int y)
{
	mx = x;
	my = y;
}

Point::~Point()
{
}

void Point::Show() {
	cout << "(" << mx << "," << my << ")" << endl;
}

//	단항연산자 오버로딩 구현
void Point::operator++() {

	++mx;
	++my;

}

//	이항연산자 오버로딩 구현
void Point::operator+(int a) {

	mx += a;
	my += a;

}

Point& Point::operator+(Point i) {

	mx += i.mx;
	my += i.my;

	return *this;	//	객체 자기 자신을 의미.

}

void Point::operator-(int a) {

	mx -= a;
	my -= a;

}

int main() {
	cout << "연산자 오버로딩" << endl;

	Point A(1, 2);
	Point B(10, 20);
	Point C(0, 0);

	(A + B) + 2;
	A.Show();

	C = A + B;	//	Point& C = *this;
	C + 2;
	C.Show();
}

#endif // self_reference
