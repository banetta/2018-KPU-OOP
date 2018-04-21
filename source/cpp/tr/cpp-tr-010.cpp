#include <iostream>
#include <cstring>
using namespace std;

class Mobile
{
	char num[20];

public:
	Mobile(char*);
	~Mobile();
	void WhatYourNumber();

};

Mobile::Mobile(char* mynum)
{
	strcpy_s(num, 20, mynum);
}

Mobile::~Mobile()
{
	strcpy_s(num, 20, "NULL");
	cout << "default »ý¼ºÀÚ" << endl;
}

void Mobile::WhatYourNumber() {
	
	cout << "My Number is :" << num << endl;
}

class Person
{

	int age;
	char name[50];
	Mobile LG;

public:
	
	Person(int, char*, char*);
	~Person() {};
	void WhatYourName();
	void HowOldAreYou();
	void WhoAreYou();

};

int main()
{
	Person Kim(25, "JJKim", "010-0000-0000");
	Kim.WhoAreYou();
	return 0;
}

Person::Person(int myage, char* myname, char* mynum) : age(myage), LG(mynum)
{
	strcpy_s(name, 50, myname);
	cout << "Person class" << endl;
}
 
void Person::WhatYourName()
{
	cout << "My name is " << name << endl;
}

void Person::HowOldAreYou()
{
	cout << "I`m " << age << " years old" << endl;
}

void Person::WhoAreYou() {
	WhatYourName();
	HowOldAreYou();
	LG.WhatYourNumber();
}