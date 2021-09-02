#pragma once
#include "Cattle.h"
class Goat : public Cattle
{
public:
	Goat();
	~Goat();

	void setAmount();
	int getPregnant(int Amount);
	float getVmilk(int Amount);
	string getBawl();
};

