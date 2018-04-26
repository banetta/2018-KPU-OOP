#include <iostream>
using namespace std;
#define self_reference

#ifdef virtualfunc

class Parent
{
public:
	void fn1() { cout << "�θ��� fn1()" << endl; };
	// virtual void fn3() { cout << "�θ��� fn3()" << endl; };	//	�����Լ� ����
	virtual void fn3() = 0;	//	���� ���� �Լ�
private:

};

class Child : public Parent
{
public:
	void fn2() { cout << "�ڽ��� fn2()" << endl; };
	void fn3() { cout << "�ڽ��� fn3()" << endl; };	//	�Լ� �������̵� (�θ𿡰� ��ӹ��� �Լ��� ���¸� ������ �� �� �ڽ� class���� �ٽ� ����������)
	// �θ� class���� virtual������ �Ǿ������� ��ð� �Ǿ����� �ʾƵ� �ٷ� �����Լ��� �ȴ�
	// 1) �⺻ Ŭ������ ����Լ��� virtual�� ����Ǿ� ������, �Ļ� Ŭ������ �ִ� ���� ������Ÿ���� ����Լ��� virtual ������ ���� �ʾƵ� �ڵ����� virtual�� ��� �޴´�.

private:

};

void out_fn(Parent* ap) {
	ap->fn3();
}

void out_fn(Parent& ar) {
	ar.fn3();
}

int main() {

	cout << "�Լ� �������̵� �� �����Լ�, �׸��� �߻�Ŭ����" << endl;
	// Parent A;	//	�߻�Ŭ���� (��ü�� ������ �� ���� Ŭ����)
	// �θ��� ������ -> �ڽ�
	Parent* pParent;
	Child Kim;
	pParent = &Kim;	//	�θ��� �����Ͱ� �ڽ��� ����ų �� �ִ�.

	pParent->fn3();	//	�����Լ� ������ ���־�߸� �ڽ�class�� �������̵��� �Լ��� �̿��� �� �ִ�.
	// 3) �⺻ Ŭ������ �����ʹ� �����ϰ� �ִ� ��ü�� ��巹���� ���� �ڽ� Ŭ������ ��ü�� ���� �Ļ� Ŭ������ ��ü�� ������ �� �ִ�.

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
	void operator++();	//	���׿����� �����ε� ����
	void operator+(int);	//	���׿����� �����ε� ����
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

//	���׿����� �����ε� ����
void Point::operator++() {
	
	++mx;
	++my;

}

//	���׿����� �����ε� ����
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
	cout << "������ �����ε�" << endl;

	Point A(1, 2);
	
	A.Show();
	//	���׿����� �����ε� ����
	++A;	
	A.operator++();
	//	���� ��� ���������� �����ϰ� ����ȴ�.
	A.Show();

	//	���׿����� �����ε� ����
	A + 2;	//	�ڿ� 2�� �Լ��� parameter�� �޾ƿ´�.
	A.operator+(2);
	//	���� ��� ���������� �����ϰ� ����ȴ�.
	A.Show();


	//	���� : �ٸ� parameter�� �߰��� �����Ͽ� �����ϱ�
	Point B(10, 20);

	A + B;	//	����ü ��ü�� ���� ����

	A.Show();

	//2 + A;	//	friend�� �̿��Ͽ� ������ ����������, ���������� �ٷ��� �ʱ⿡ ���� �غ���

	//	���� : �ٸ� �����ڷε� �����غ���.
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
	void operator++();	//	���׿����� �����ε� ����
	void operator+(int);	//	���׿����� �����ε� ����
	Point& operator+(Point);	//	self-reference return ����
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

//	���׿����� �����ε� ����
void Point::operator++() {

	++mx;
	++my;

}

//	���׿����� �����ε� ����
void Point::operator+(int a) {

	mx += a;
	my += a;

}

Point& Point::operator+(Point i) {

	mx += i.mx;
	my += i.my;

	return *this;	//	��ü �ڱ� �ڽ��� �ǹ�.

}

void Point::operator-(int a) {

	mx -= a;
	my -= a;

}

int main() {
	cout << "������ �����ε�" << endl;

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
