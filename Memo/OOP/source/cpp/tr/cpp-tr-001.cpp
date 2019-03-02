#include <iostream>
#include <cstring>
using namespace std;

// class 선언
class Car {
//public:
	private:
	char owner[10];
	int fuel_gauge;
	int cur_speed;
	public:
	//void InitMembers(char* ID, int fuel){
	//	strcpy(owner, ID);
	//	fuel_gauge = fuel;
	//	cur_speed = 0;
	//}
	//void show(){
	//	cout << "소유자명 : " << owner << endl;
	//	cout << "연료량 : " << fuel_gauge << "%" << endl;
	//	cout << "현재 속도 : " << cur_speed << "Km/h" << endl;
	//}
	//void show(){
	void InitMembers(char*, int);
	void Show();
	void Accel();
	void Break();
};


int main() {

	cout << "class 실습 \n\n";

	// 접근 제어 지시자
	// 1. public : 외부에 마음대로 쓸 수 있도록 지정
	// 2. private : 외부에서 사용 불가 같은 class에 있는 멤버 함수만 사용 가능
	// 3. protected : 상속 파트에서 다시 설명 현재 시점에서는 private와 거의 유사하다고 본다.
	//
	// 접근 제어 지시자의 원칙
	// 멤버 변수는 private로 두고 멤버 함수를 public으로 둔다.
	
	
	Car run99;
	// 전체를 public으로 선언시에 다음 코드 이용
	//strcpy(run99.owner, "run99");
	//run99.fuel_gauge = 100; // class와 struct 선언의 차이점 (상단 class 부분에서 public을 선언하지 않으면 에러)
	//run99.cur_speed = 0;

	//cout << run99.owner << endl;	
	

	//원칙대로 private 사용시
	run99.InitMembers("홍길동", 100);
	
	run99.Show();

	run99.Accel();
	run99.Accel();
	run99.Show();
	
	run99.Break();
	run99.Break();
	run99.Show();



	// inline (인라인) 책 참고 p.33	

}
// inline void Car::InitMembers(....
void Car::InitMembers(char* ID, int fuel){
	strcpy(owner, ID);
	fuel_gauge = fuel;
	cur_speed = 0;
}

void Car::Show(){
	cout << "소유자명 : " << owner << endl;
	cout << "연료량 : " << fuel_gauge << "%" << endl;
	cout << "현재 속도 : " << cur_speed << "Km/h" << endl;
}

void Car::Accel(){
	if(fuel_gauge <= 0){
		return;
	}
	else{
		fuel_gauge--;
	}
	cur_speed += 10;
}

void Car::Break(){
	if(cur_speed <= 0){
		return;
	}
	else{
		cur_speed -= 1;
	}
}
