#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

#define midletest1

#ifdef midletest1

class Appliance
{
public:
	Appliance() {};
	Appliance(const char*, int);
	~Appliance() {};
	virtual void Show();

protected:
	int volt;
	char name[10];

};

Appliance::Appliance(const char* a, int b)
{
	strcpy(name, a);
	volt = b;
}


void Appliance::Show(){

	cout << volt << "V " << name << endl;
	
	
}

class Aircon :public Appliance
{
public:
	Aircon() {};
	Aircon(const char*, int, int);
	~Aircon() {};
	void Show();
	void operator+(int);
	
protected:
	int tem;
};

Aircon::Aircon(const char* a, int b, int c)
{
	strcpy(name, a);
	volt = b;
	tem = c;
	
}

void Aircon::Show() {
	cout << volt << "V " << name << endl;
	cout << "실내온도 : " << tem << "도" << endl;
}

void Aircon::operator+(int a) {
	if (a < 0)
	{
		cout << "error" << endl;
	}
	tem += a;
}


int main() {
	
	Appliance washer("드럼세탁기", 110);
	washer.Show();
	
	Aircon hausen("거실에어콘", 220, 20);
	hausen.Show();
	hausen + 3;
	hausen.Show();
	
}


#endif // midletest1

#ifdef midletest2
class Figure
{
public:
	//Figure() {};
	//~Figure() {};
	virtual void Draw() = 0;

protected:

};

class Circle:public Figure
{
public:
	//Circle() {};
	//~Circle() {};
	void Draw() {
		cout << "ㅇ" << endl;
	}

private:

};

class Rect:public Figure
{
public:
	//Rect() {};
	//~Rect() {};
	void Draw() {
		cout << "ㅁ" << endl;
	};

protected:

};



int main() {
	Figure* fp;
	Circle Won;
	Rect Nemo;

	fp = &Won;
	fp->Draw();
	fp = &Nemo;
	fp->Draw();
}
#endif // midletest2

