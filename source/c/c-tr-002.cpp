#include <iostream>
using namespace std;

struct Employer
{
	int num;
	char name[20];
	int age;
};
int main() {
	// 실습과제 2) (구조체 배열) 

	Employer EMP[20];
	int i = 0;
	int mode = 0;
	int iCnt = 0;
	cout << "===   menu   ===" << endl << "1. input new number" << endl << "2. search" << endl << "3. no. of members" << endl << "4. menu" << endl << "5. exit" << endl << endl << endl << endl;
	while (true)
	{
		
		cout << endl << "mode>";
		cin >> mode;
		cout << endl;
		switch (mode)
		{
		case 1:
			cout << "input number>";
			cin >> i;
			EMP[i].num = i;

			cout << "input name>";
			cin >> EMP[i].name;

			cout << "input age>";
			cin >> EMP[i].age;
			iCnt++;
			break;

		case 2:
			cout << "input number>";
			cin >> i;
			cout << "no.>" << EMP[i].num << endl << "name>" << EMP[i].name << endl << "age>" << EMP[i].age << endl;
			break;

		case 3:
			cout << iCnt << " member(s)";
			
			break;

		case 4:
			cout << "===   menu   ===" << endl << "1. input new number" << endl << "2. search" << endl << "3. no. of members" << endl << "4. menu" << endl << "5. exit" << endl << endl << endl << endl;
			break;

		case 5:
			cout << "end of program" << endl;
			return 0;
		
		default:
			cout << "error retry input number";
			mode = 4;
			break;
		
		}
	}



}
