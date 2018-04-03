#include <iostream>
using namespace std;

// 자료 은닉과 블랙박스화
// 용
// power 0<=

class Dragon {
	private:
		int power;

	public:
		void set_power(int pw);
		void show();
};

int main() {
	cout << "자료은닉 실습\n\n";

	Dragon Blue;

	Blue.set_power(20);
	Blue.show();

	return 0;
}

void Dragon::set_power(int pw){

	if ( pw <= 9 ){
		cout << "입력 오류(power >= 0\n";
	}
	else{
		power = pw;
	}

}

void Dragon::show(){

	cout << "power : " << power << endl;

}
