#include "Point.h"
#include<iostream>
using namespace std;
const int Max = 30;

Point::Point()
{
	x = 0;
	y = 0;
}
Point::~Point()
{
}

Point::Point(const Point& D)
{
	x = D.x;
	y = D.y;
}
Point::Point(double xx, double yy)
{
	x = xx;
	y = yy;
}
void Point::Setx(double x)
{
	x = x;
}
void Point::Sety(double y)
{
	y = y;
}
double Point::Getx()
{
	return x;
}

double Point::Gety()
{
	return y;
}
void Point::SetPoint()
{
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
}

void Point::PrintInfor()
{
	cout << "(" << x << "," << y << ")";
	cout << endl;
}

void Point::Move(double dx, double dy)
{
	x += dx;
	y += dy;
}

double Point::Distance(Point P)
{
	return sqrt(pow((x - P.x), 2) + pow((y - P.y), 2));
}

