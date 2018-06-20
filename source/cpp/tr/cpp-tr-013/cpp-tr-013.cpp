// header 파일 관리
#include "cpp-tr-013h.h"


void main() {
	srand(time(0));

	car nubira;			//creating car object	
	cout << "Highest Speed of the car : " << nubira.get_highestspeed() << " Km\n";
	int n = nubira.navi.findShortestPath();
	nubira.navi.monitor();

	cout << "-----------------  speedgun moniter  ------------------\n";
		for (int i = 1; i <= n; i++) {
			road rd;		//creating road object
			speedgun sg;	//creating speedgun object

			cout << "Road" << i << ":\t";
			sg.shot(nubira);
			sg.monitor(rd);
		}
	cout << "-------------------------------------------------------\n\n";
}