#include<iostream>
#include<math.h>
#include"Point.h"
#include"Triangle.h"
using namespace std;
const int Max = 30;

Triangle:: Triangle()
{
}
Triangle::~Triangle()
{
}
void Triangle::Input()
{
	double xA, xB, xC, yA, yB, yC;
	cout << "Point A:" << endl;
	cout << "xA:";
	cin >> xA;
	cout << "\nyA:";
	cin >> yA;
	cout << "\nPoint B:" << endl;
	cout << "xB:";
	cin >> xB;
	cout << "\nyB:";
	cin >> yB;
	cout << "\nPoint C:" << endl;
	cout << "XC:";
	cin >> xC;
	cout << "\nyC:";
	cin >> yC;
	A.Setx(xA);
	A.Sety(yA);
	B.Setx(xB);
	B.Sety(yB);
	C.Setx(xC);
	C.Sety(yC);
}
void Triangle::Output()
{
	cout << "Point is:" << endl;
	cout << "A(" << A.Getx() << "," << A.Gety() << ")" << endl;
	cout << "B(" << B.Getx() << "," << B.Gety() << ")" << endl;
	cout << "B(" << C.Getx() << "," << C.Gety() << ")" << endl;
}
double Triangle::dA()
{
	return A.Distance(B);
}
double Triangle::dB()
{
	return B.Distance(C);
}
double Triangle::dC()
{
	return C.Distance(A);
}
double Triangle::getPerimeter()
{
	return (A.Distance(B) + B.Distance(C) + C.Distance(A));
}
double Triangle::getArea()
{
	double a, b, c, p;
	a = A.Distance(B);
	b = B.Distance(C);
	c = C.Distance(A);
	p = (a + b + c) / 2;
	return (sqrt(p * (p - a) * (p - b) * (p - c)));
}