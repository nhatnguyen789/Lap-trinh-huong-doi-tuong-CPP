#pragma once
#include <iostream>
#include <string>
#include "time.h"
using namespace std;
class Cattle
{
	protected:
		int Amount;
		int Baby;
		float Vmilk;
		string Bawl;
	public:
		Cattle();
		~Cattle();
		virtual void setAmount();
		virtual int getPregnant(int Amount);
		virtual float getVmilk(int Amount);
		virtual string getBawl();
		int getAmount();
};

