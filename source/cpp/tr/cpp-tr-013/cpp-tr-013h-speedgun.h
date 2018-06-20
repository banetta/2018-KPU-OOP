#pragma once
#include "cpp-tr-013h.h"

#ifndef _SPEED_
#define _SPEED_

class speedgun {
	int theSpeed;
	void ticketing(int);    // encapsulation : black box
public:
	void shot(car);
	void monitor(road);
};

#endif