#include <iostream>
#include <cstring>
using namespace std;

class Car {
	private:
		char gameID[10];
		int fuel_gauge;
		int cur_speed;
	public:
		/*
		Car(){
			cout << "디폴트 생성자 호출\n" << endl;
			
			strcpy(gameID, "Nice");
			fuel_gauge = 80;
			cur_speed = 0;
		}	// 디폴트 생성자 생략되어있다.
		*/
		Car() {} // 디폴트 생성자 명시

		Car(char* ID, int fuel) : fuel_gauge(fuel){ // 생성자 오버로딩, 멤버 이니셜라이저
			cout << "디폴트 생성자 호출\n" << endl;
			
			strcpy(gameID, ID);
			//fuel_gauge = fuel; // 위에 멤버 이니셜라이저로 초기화
			cur_speed = 0;
		}

		void InitMembers(char*, int);
		void Show();
		//void Accel();
		void Accel(int ac = 10);	// 함수 오버로딩과 default 파라미터
		//void Break();
		void Break(int br = 10);
};


int main() {

	cout << "함수 오버로딩과 default parameter 실습 \n\n";
	
	Car run99;	// 디폴트 생성자 호출 Car();
	//Car run99("Wow", 90);



	run99.InitMembers("홍길동", 100);
	//warning: ISO C++ ~ 에러가 나는 이유가 디폴트 생성자를 이용하지 않아 안좋은 코드이기에 주의를 준다
	
	run99.Show();

	run99.Accel(20);
	run99.Accel();
	run99.Accel();
	run99.Show();
	
	run99.Break(30);
	run99.Break();
	run99.Show();


}

void Car::InitMembers(char* ID, int fuel){
	strcpy(gameID, ID);
	fuel_gauge = fuel;
	cur_speed = 0;
}

void Car::Show(){
	cout << "소유자명 : " << gameID << endl;
	cout << "연료량 : " << fuel_gauge << "%" << endl;
	cout << "현재 속도 : " << cur_speed << "Km/h" << endl;
}
/*
void Car::Accel(){
	if(fuel_gauge <= 0){
		return;
	}
	else{
		fuel_gauge--;
	}
	cur_speed += 10;
}
*/
void Car::Accel(int ac){
	if(fuel_gauge <= 0){
		return;
	}
	else{
		fuel_gauge-= ac/10;
	}
	this->cur_speed += ac;// this 포인터 기본적으로 생략해도 이런식으로 부른다.
	// (*this).cur_speed += ac;

}
/*
void Car::Break(){
	if(cur_speed <= 0){
		return;
	}
	else{
		cur_speed -= 10;
	}
}
*/
void Car::Break(int br){
	if(cur_speed <= 0){
		return;
	}
	else{
		cur_speed -= br;
	}
}
