#include <iostream>
#include <cstring>
using namespace std;
// 1조 가전제품
// 2조 동물
// 3조 가구
// 4조 식물
// 대상을 각자 정하여 ADT를 설계
// 멤버변수가 최소 2가지 이상
// 관련된 멤버 함수가 2개 이상 연산 알고리즘이 들어가있는 함수

class CAT{
	private:
		char name[10];
		char kind[10];
		int age;
		int child;
	public:
		void InitCat(char* name, char* kind, int age, int child);
		void ShowCat();
		void AgeUp();
		void AddChild();
}

int main(){

	char c_name[10], c_kind[10];
	int c_age = NULL, c_child = NULL;

	cout << "이름을 입력해 주세요 : ";
	cin >> c_name;

	cout << "품종을 입력해 주세요 : ";
	cin >> c_kind;

	cout << "나이를 입력해 주세요 : ";
	cin >> c_age;

	cout << "새끼 수를 입력해 주세요 : ";\
	
}

void CAT::InitCat(char* c_name, char* c_kind, int c_age, int c_child){
	strcpy(name, c_name);
	strcpy(kind, c_kind);
	age = c_age;
	child = c_child;
}

void CAT::ShowCat(){
	cout << "이름 : " << name << endl;
	cout << "품종 : " << kind << endl;
	cout << "나이 : " << age << "세" << endl;
	cout << "새끼 수 : " << kind << "마리" << endl;
}

void CAT::AgeUp(){
	age++;
}

void CAT::AddChild(){
	child++;
}

