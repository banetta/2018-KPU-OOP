#include <iostream>
using namespace std;

// 계산기 기능의 Calculator 클래스를 정의해 보자.
// 기본적으로 지니는 기능은 덧셈, 뺄셈, 곱셈 그리고 나눗셈이며, 연산을 할 때마다 어떠한 연산을 몇 번 수행했는지 기록되어야 한다.
// 아래의 main 함수와 실행의 예에 부합하는 Calculator 클래스를 정의하면 된다. (책 p.135 참고 및 본문 소스 참조)
// 단, 멤버변수는 private로, 멤버 함수는 public으로 선언하자.

class Calculator {
	private:
		int Addcount, Divcount, Mincount, Mulcount;
		
	public:
		void Init();
		double Add(double Ax, double Ay);
		double Div(double Dx, double Dy);
		double Min(double Mix, double Miy);
		double Mul(double Mux, double Muy);
		void ShowOpCount();

};

int main() {
	//책에 정의된 main 함수
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();;
	return 0;
}

void Calculator::Init(){
	Addcount = 0;
	Divcount = 0;
	Mincount = 0;
	Mulcount = 0;
}

double Calculator::Add(double Ax, double Ay){
	double result;
	result = Ax + Ay;
	Addcount += 1;
	return result;
}

double Calculator::Div(double Dx, double Dy){
	double result;
	result = Dx / Dy;
	Divcount += 1;
	return result;
}

double Calculator::Min(double Mix, double Miy){
	double result;
	result = Mix - Miy;
	Mincount += 1;
	return result;
}

double Calculator::Mul(double Mux, double Muy){
	double result;
	result = Mux * Muy;
	Mulcount += 1;
	return result;
}

void Calculator::ShowOpCount(){
	cout << "덧셈 : " << Addcount;
	cout << " 뺄셈 : " << Mincount;
	cout << " 곱셈 : " << Mulcount;
	cout << " 나눗셈 : " << Divcount << endl;
}

