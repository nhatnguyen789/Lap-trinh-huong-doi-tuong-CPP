#include "Goat.h"
#include<iostream>
using namespace std;

Goat::Goat()
{
}
Goat::~Goat()
{
}
int Goat::getBaby(int Goat)
{
	srand((unsigned)time(0));
	return iPregnant = iGoat * (rand() % 10 + 1);
}
float Goat::getVmilk(int iGoat)
{
	srand((unsigned)time(0));
	return Vmilk = iGoat * (rand() % 5);
}
string Goat::getBawl()
{
	return Bawl = "Beeeee Beeee Beeee...";
}