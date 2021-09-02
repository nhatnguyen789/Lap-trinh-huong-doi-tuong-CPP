#include "Cow.h"
Cow::Cow()
{
}

Cow::~Cow()
{
}

void Cow::setAmount()
{
	cout << "- Input number of COWs that you want to put into your farm: ";
	Cattle::setAmount();
}

int Cow::getPregnant(int Amount)
{
	srand((unsigned)time(0));
	return Baby = Amount * (rand() % 10 + 1);
}

float Cow::getVmilk(int Amount)
{
	srand((unsigned)time(0));
	return Vmilk = Amount * (rand() % 20);
}

string Cow::getBawl()
{
	return Bawl = "Umboar Umboar Umboar ...";
}