#pragma once
#include "Cattle.h"
class Lamb : public Cattle
{
public:
	Lamb();
	~Lamb();

	void setAmount();
	int getPregnant(int Amount);
	float getVmilk(int Amount);
	string getBawl();
};

