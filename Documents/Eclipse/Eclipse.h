#pragma once
#include"Circle.h"
#include<iostream>
using namespace std;

class Eclipse: public Circle
{
protected:
	double MinorAxis; //trục nhỏ 
	double MajorAxis; //trục lớn 
public:
	Eclipse();
	~Eclipse();

	double getMinorAxis();
	void setMinorAxis();

	double getMajorAxis();
	void setMajorAxis();

	double getPerimeter();
	double getArea();
};

