#include "Eclipse.h"
#include <iostream>
#include <math.h>
using namespace std;
const double PI = 3.141592653589793238463;

Eclipse::Eclipse()
{
}


Eclipse::~Eclipse()
{
}

double Eclipse::getMinorAxis()
{
	return MinorAxis;
}

void Eclipse::setMinorAxis()
{
	cout << "Input Minor-axis of Eclipse: ";
	cin >> MinorAxis;
}

double Eclipse::getMajorAxis()
{
	return MajorAxis;
}

void Eclipse::setMajorAxis()
{
	cout << "Input Major-axis of Eclipse: ";
	cin >> MajorAxis;
}

double Eclipse::getPerimeter()
{
	return (2 * PI * sqrt(0.5 * (pow(MajorAxis, 2) + pow(MinorAxis, 2))));
}

double Eclipse::getArea()
{
	return (PI * MajorAxis * MinorAxis);
}