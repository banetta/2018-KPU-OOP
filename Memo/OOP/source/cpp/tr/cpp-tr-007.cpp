#include <iostream>
using namespace std;

// Message Passing 실습

class Castle {
	private:
		int hp;
	
	public:
		void set_hp(int);
		void ca_show();
		void destroy(int);
};

class Dragon {
	private:
		int power;

	public:
		void set_power(int);
		void dr_show();
		void fire(Castle *);
};

int main() {
	cout << "Message Passing 실습\n\n";

	Dragon Blue;
	Castle kingdom;

	Blue.set_power(20);
	Blue.dr_show();
	kingdom.set_hp(100);
	kingdom.ca_show();

	Blue.fire(&kingdom); // Castle& cs = kingdom
	kingdom.ca_show();


	return 0;
}

void Dragon::set_power(int pw){

	if ( pw <= 0 ){
		cout << "입력 오류(power >= 0)\n";
	}
	else{
		power = pw;
	}

}

void Dragon::dr_show(){

	cout << "power : " << power << endl;

}

void Dragon::fire(Castle* cs){

	cs->destroy(power);

}


void Castle::set_hp(int st){

	if ( st <= 0){
		cout << "입력 오류(hp >= 0)\n";
	}
	else{
		hp = st;
	}
}

void Castle::ca_show(){

	cout << "Castle hp : " << hp << endl;
}

void Castle::destroy(int atk){

	hp -= atk;
	if ( hp < 0 ){
		cout << "Castle Destroyed\n\n";

	}
}


