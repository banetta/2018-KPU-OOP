#include "cpp-tr-013h.h"

car::car() {
	highestSpeed = 140 + 10 * (rand() % 7);
}

int car::currentspeed() {
	return (1 + rand() % highestSpeed);
}