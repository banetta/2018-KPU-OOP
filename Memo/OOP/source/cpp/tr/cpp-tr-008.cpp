#include <iostream>
using namespace std;

class gas_station {
	private:
		int gas_fuel;

	public:
		void set_gas_fuel(int);
		void gas_show();
		void charge(int);

};

class car { 
	private:
		int car_fuel;

	public:
		void set_car_fuel(int);
		void car_show();
		void fuel_charge(gas_station &, int);

};


int main() {

	cout << "자료은닉, 메시지패싱 실습" << endl;

	gas_station gas;
	car my_car;
	
	int i = NULL;

	gas.set_gas_fuel(500);
	gas.gas_show();
	my_car.set_car_fuel(10);
	my_car.car_show();

	while ( true ) {
	my_car.fuel_charge(gas, i);

	gas.gas_show();
	my_car.car_show();
	}
	return 0;
}

void gas_station::set_gas_fuel(int fuel){
	if ( fuel <= 0 ) {
		cout << "입력오류\n";
	}

	gas_fuel = fuel;

}

void gas_station::gas_show(){

	cout << "gas_station fuel : " << gas_fuel << endl;
}

void gas_station::charge(int gas){

	if ( gas <= 0 ) {
		cout << "입력오류\n";
	}
	else if ( gas_fuel <= 0 ) {
		cout << "기름이 다 떨어졌습니다.\n";
		exit(1);
	}

	gas_fuel -= gas;
}

void car::fuel_charge(gas_station& cs, int gas){
	
	cout << "연료 주입량 : " ;
	cin >> gas;

	cs.charge(gas);

	car_fuel += gas;
}


void car::set_car_fuel(int fuel){

	if ( fuel <= 0) {
		cout << "입력오류\n";
	}

	car_fuel = fuel;

}

void car::car_show(){

	cout << "car fuel : " << car_fuel << endl;
}
