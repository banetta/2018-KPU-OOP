#include <iostream>
#include <cstring>
using namespace std;

class Monitor{
	private:
		char name[10];
		int Bri;
	public:
		void InitName(char* iname);
		void ShowStat();
		void Bri_Con(int mBri);
};

int main(){
	
	char iname[10];
	int mBri;
	Monitor nMon;

	cout << "제조사를 입력해 주세요 : ";
	cin >> iname;

	nMon.InitName(iname);

	nMon.ShowStat();

	while(true){
		
		cout << "조정할 밝기를 입력해 주십시오 : ";
		cin >> mBri;
		nMon.Bri_Con(mBri);
	};

}

void Monitor::InitName(char* iname){
	strcpy(name, iname);
	
	Bri = 50;

}

void Monitor::ShowStat(){
	cout << "제조사 : " << name << endl;
	cout << "현재 밝기는 " << Bri << " 입니다." << endl;
}

void Monitor::Bri_Con(int mBri){
	Bri += mBri;	
	cout << "현재 밝기는 " << Bri << " 입니다." << endl;
}
