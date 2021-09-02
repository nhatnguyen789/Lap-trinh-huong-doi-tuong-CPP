#pragma once
#include<iostream>
#include <string>
using namespace std;
class Cattle
{
	protected:
		int iPregnant;
		float Vmilk;
		string Bawl; //tiếng kêu 
	public:
		Cattle();
		~Cattle();

		int getPregnant();
		void setPregnant(int Baby);  //con 

		float getVmilk();
		void setVmilk(float volume); //thể tích 

		string getBawl();
		void setBawl(string call); //gọi 
};


