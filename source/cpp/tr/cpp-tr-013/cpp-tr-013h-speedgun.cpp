#include "cpp-tr-013h.h"

void speedgun::shot(car a) {
	theSpeed = a.currentspeed();
}

void speedgun::monitor(road b) {
	int limit = b.get_speedLimit();
	cout << "current speed : " << theSpeed << "Km\t";
	cout << "speed limit : " << limit << "Km\n";
	ticketing(limit);
}

void speedgun::ticketing(int limit) {
	if (theSpeed > limit) {
		cout << "\t*\t\t\tticketed by " << theSpeed - limit << "Km over\n";
	}
}