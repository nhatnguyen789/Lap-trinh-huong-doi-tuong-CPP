#include "Goat.h"
Goat::Goat()
{
}

Goat::~Goat()
{
}

void Goat::setAmount()
{
	cout << "\n- Input number of GOATs that you want to put into your farm: ";
	Cattle::setAmount();
}

int Goat::getPregnant(int Amount)
{
	srand((unsigned)time(0));
	return Baby = Amount * (rand() % 10 + 1);
}

float Goat::getVmilk(int Amount)
{
	srand((unsigned)time(0));
	return Vmilk = Amount * (rand() % 5);
}

string Goat::getBawl()
{
	return Bawl = "Beeee beee beeee ...";
}