#pragma once
#include<iostream>
#include"Job.h"
#include<string>
using namespace std;
class Singer:public Job
{
private:
	string TypeOfMusic;
	int iNumberShow;
	int iNumberAlbum;
public:
	Singer();
	void SetSpecialAttribute();
	string getToM();
	int getNoS();
	int getNoA();
	void Output(Singer SG);
};

