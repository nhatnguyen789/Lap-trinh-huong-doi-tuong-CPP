#pragma once
#include "Cattle.h"
class Cow : public Cattle
{
public:
	Cow();
	~Cow();

	void setAmount();
	int getPregnant(int Amount);
	float getVmilk(int Amount);
	string getBawl();
};
