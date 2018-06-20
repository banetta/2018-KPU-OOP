#include "cpp-tr-013h.h"

road::road() {
	int a = 1 + rand() % 5;
	switch (a) {
	case 1:
		speedLimit = 60;
		break;
	case 2:
		speedLimit = 70;
		break;
	case 3:
		speedLimit = 80;
		break;
	case 4:
		speedLimit = 100;
		break;
	default:
		speedLimit = 120;
		break;
	}
}