//	��ü���� ���α׷��� ���ð�� 2��
//	18:00 - 18:40
//	���� 10���� ������ ����� �� �� �ִ� �ý����� ���Ѵ�
//������� ȭ������ �����ϸ� �ȴ�. ��������� ���ʿ�
//���������� ���, �̸� ���� ������ �ȴ�.
//���������� Ŭ������ �����Ѵ�

//�Ϸù�ȣ�� �˻��ؼ� ���� ������ ���� ����� �ִ�
//���� �Է��� �ű��ο��� ����ɶ����� �Է��ϰ�ʹ�

//����̸����̸� private�ɹ������� �����Ѵ�
//�������� �Է� �� ��� ����� ����Լ��� �����Ѵ�(�ζ��α��� X)

//�޴� ����� main�� �����Ѵ�.


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
	cout << "��ü���� ���ð�� 2��" << endl;

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