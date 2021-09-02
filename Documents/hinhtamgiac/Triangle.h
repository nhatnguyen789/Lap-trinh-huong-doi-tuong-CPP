#pragma once
#include"Point.h";
using namespace std;

class Triangle
{
public:
	Point A,B,C;
	Triangle() :A(0, 0), B(0, 0), C(0, 0) {};
	Triangle(double xA, double xB, double xC, double yA, double yB, double yc) {};
	void Input();
	void Output();
	double dA();
	double dB();
	double dC();
	double getPerimeter();
	double getArea();
};

