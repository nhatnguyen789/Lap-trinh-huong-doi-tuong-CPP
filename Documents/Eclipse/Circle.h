#pragma once
#include<iostream>
using namespace std;
class Circle
{
protected:
	double fRadius;
public:
	Circle();
	~Circle();

	double getRadius();
	void setRadius();

	double getPerimeter();
	double getArea();
};

