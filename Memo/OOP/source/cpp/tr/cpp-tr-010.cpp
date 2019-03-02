//#define stringtype
#define chartype

#ifdef stringtype

#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;

class Mobile
{
public:
	Mobile(string);
	Mobile() {};
	~Mobile();
	void WhatYourNumber();

private:

	string num;

};

Mobile::Mobile(string mynum)
{
	num = mynum;
}

Mobile::~Mobile()
{
	cout << "default 持失切" << endl;
}

void Mobile::WhatYourNumber() {

	cout << "My Number is : " << num << endl;

}

class Person
{
public:
	Person();
	Person(int myage, string myname, string mynum);

	~Person();
	void WhatYourName();
	void HowOldAreYou();
	void WhoAreYou();
private:
	int age;
	string name;
	Mobile LG;
};

Person::Person()
{}

Person::Person(int myage, string myname, string mynum) :age(myage), LG(mynum)
{
	name = myname;
	cout << "Person class" << endl;
}

Person::~Person()
{
} 

void Person::WhatYourName() {

	cout << "My name is : " << name << endl;
}

void Person::HowOldAreYou() {
	cout << "I`m " << age << " years old" << endl;
}

void Person::WhoAreYou() {
	WhatYourName();
	HowOldAreYou();
	LG.WhatYourNumber();
}

int main() {

	Person kim;
	Person Kim(50, "JJKim", "010-0000-0000");
	Kim.WhoAreYou();

	
	return 0;
}

#endif 

#ifdef chartype

#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;

class Mobile
{
public:
	Mobile(const char*);
	Mobile() {};
	~Mobile();
	void WhatYourNumber();

private:

	char num[20];

};

Mobile::Mobile(const char* mynum)
{
	strcpy_s(num, 20, mynum);
}

Mobile::~Mobile()
{
	strcpy_s(num, 20, "NULL");
	cout << "default 持失切" << endl;
}

void Mobile::WhatYourNumber() {

	cout << "My Number is : " << num << endl;

}

class Person 
{
public:
	Person();
	Person(int myage, const char* myname, const char* mynum);

	~Person();
	void WhatYourName();
	void HowOldAreYou();
	void WhoAreYou();
private:
	int age;
	char name[50];
	Mobile LG;
};

Person::Person()
{}

Person::Person(int myage, const char *myname,const char *mynum):age(myage), LG(mynum)
{
	strcpy(name, myname);
	cout << "Person class" << endl;
}

Person::~Person ()
{
}

void Person::WhatYourName() {

	cout << "My name is : " << name << endl;
}

void Person::HowOldAreYou() {
	cout << "I`m " << age << " years old" << endl;
}

void Person::WhoAreYou() {
	WhatYourName();
	HowOldAreYou();
	LG.WhatYourNumber();
}

int main() {
	
	Person kim;
	Person Kim(50, "JJKim", "010-0000-0000");
	Kim.WhoAreYou();
	return 0;
}

#endif 
