#include<iostream>
#include "Job.h"
#pragma once
using namespace std;
class Student: public Job
{
private:
	int ID;
	float GPA;
public:
	Student();
	void InputSpecialAttribute();
	int getID();
	float getGPA();
	void Output(Student ST);
};

