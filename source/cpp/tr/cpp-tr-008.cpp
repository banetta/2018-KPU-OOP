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
		void show();
		void fuel_charge(gas_station &, int);

};


int main() {

	cout << "자료은닉, 메시지패싱 실습" << endl;

	gas_station gas;
	car my_car;

	gas.set_gas_fuel(500);
	gas.gas_show();
	my_car.set_car_fuel(10);
	my_car.show();

	my_car.fuel_charge(gas, 50);

	gas.gas_show();
	my_car.show();

	return 0;
}

void gas_station::set_gas_fuel(int fuel){
	if ( fuel <= 0) {
		cout << "입력오류\n";
	}

	gas_fuel = fuel;

}

void gas_station::gas_show(){

	cout << "gas_station fuel : " << gas_fuel << endl;
}

void gas_station::charge(int gs){

	if ( gs <= 0 ) {
		cout << "입력오류\n";
	}

	gas_fuel -= gs;
}

void car::fuel_charge(gas_station cs, int gas){
	
	cs->charge(gas);
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
