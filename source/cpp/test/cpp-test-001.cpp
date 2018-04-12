#include <iostream>
using namespace std;

// 수시 1차
// 2018 - 04 - 10 18:00 ~ 18 : 40;
// 아래 main()이 동작하도록 창고와 트럭 클래스를 구현하시오. 
// 창고에서 트럭으로 짐을 옮기는 과정을 Message Passing으로 모델링한 것이다.
//
// (단, 짐은 모두 자료은닉으로 안전하게 캡슐화하시오,)

class Storage {
	private:
		int box;

	public:
		void init(int);
		void Display();
		void load(int);

};

class Trunk {
	private:
		int box;

	public:
		void init(int);
		void Display();
		void load(Storage*, int);
};


int main(){
	
	Trunk LG;
	
	Storage Yello;

	LG.init(0);	// 초기 트럭 짐의 개수

	Yello.init(50);	// 초기 창고 짐의 개수

	LG.Display();
	Yello.Display();

	LG.load(&Yello, 5);	// 5개의 짐 옮기기

	LG.Display();
	Yello.Display();

	// 출력결과 : 	트럭 : 0
	// 		창고 : 50
	// 		트럭 : 5
	// 		창고 : 45


}

void Storage::init(int i){

	if ( i <= 0 ) {
		cout << "잘못 입력하셨습니다." << endl;
	}
	else {
	
		box += i;
	}
}

void Storage::Display(){

	cout << "Storage box : " << box << endl;

}

void Storage::load(int i) {

	if ( i <= 0 ) {
		cout << "잘못 입력하셨습니다." << endl;
	}
	else{

		box -= i;
	}

}

void Trunk::init(int i){

	if ( i <= 0 ) {
		cout << "잘못 입력하셨습니다." << endl;
	}
	else {

		box += i;
	}
}

void Trunk::Display(){

	cout << "Trunk box : " << box << endl;
}

void Trunk::load(Storage* Ye, int i){
	
	if ( i <= 0 ) {
		cout << "잘못 입력하셨습니다." << endl;
	}
	else {

		Ye->load(i);

		box += i;
	}

}


