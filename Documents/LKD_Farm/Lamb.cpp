#include "Lamb.h"
#include "time.h"

Lamb::Lamb()
{
}

Lamb::~Lamb()
{
}

void Lamb::setAmount()
{
	cout << "\n- Input number of LAMBs that you want to put into your farm: ";
	Cattle::setAmount();
}

int Lamb::getPregnant(int Amount)
{
	srand((unsigned)time(0));
	return Baby = Amount * (rand() % 10 + 1);
}

float Lamb::getVmilk(int Amount)
{
	srand((unsigned)time(0));
	return Vmilk = Amount * (rand() % 15);
}

string Lamb::getBawl()
{
	return Bawl = "Beee beee beee...";
}