#pragma once
#include "cpp-tr-013h.h"
#ifndef _CAR_
#define _CAR_

class car {
	int highestSpeed;
public:
	navigator navi;

	car();
	int get_highestspeed() { return highestSpeed; }
	int currentspeed();
};

#endif // !_CAR_

