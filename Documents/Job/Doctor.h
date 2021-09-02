#pragma once
#include<iostream>
#include "Job.h"
#include <string>
using namespace std;

class Doctor : public Job
{
private:
	string Major;
	int iNumberOfWorkingYear;
public:
	Doctor();
	void SetSpecialAttribute();
	string getMajor();
	int getNoWY();
	void Output(Doctor DT);
};

