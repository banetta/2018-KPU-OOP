//	�ǻ�Ȱ���� ��ӿ� �ش��ϴ� ������ ��� ��Ӱ��踦 �����Ͻÿ�
// - Ŭ���� �� ����� �̸��� �����ϰ� ����ÿ�.
//	-�� Ŭ������ �ٽ� �������, ����Լ��� �ϳ� �̻� �ΰ�, ��� ������ ��� private�Ӽ����� �����Ͻÿ�
//	-�⺻ Ŭ������ �Ļ� Ŭ������ ����� �ʱ�ȭ�� �� �ֵ��� �ʱ�ȭ�ڸ� �̿��Ͽ� �����ڵ� �����Ͻÿ�.

//	1. �Ƿ�, 2. ������ǰ, 3. ����, 4. ����(����), 5. �ǹ�(��), 6. ����

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

