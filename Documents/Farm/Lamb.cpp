#include "Lamb.h"
#include<iostream>
#include<time.h>
using namespace std;

Lamb::Lamb()
{
}
Lamb::~Lamb()
{
}
int Lamb::getBaby(int iGoat)
{
	srand((unsigned)time(0));
	return iPregnant = iGoat * (rand() % 10 + 1);
}
float Lamb::getVmilk(int iGoat)
{
	srand((unsigned)time(0));
	return Vmilk = iGoat * (rand() % 15);
}
string Lamb::getBawl()
{
	return Bawl = " beeee beeee beeee.......";
}
