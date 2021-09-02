#pragma once
#include<iostream>
#include"Cattle.h"
using namespace std;
class Goat:public Cattle
{
public:
	int iGoat;
	Goat();
	~Goat();
	int getBaby(int iGoat);
	float getVmilk(int iGoat);
	string getBawl();
};

