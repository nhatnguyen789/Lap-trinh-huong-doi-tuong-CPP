#include "TamGiac.h"
#include<iostream>
using namespace std;
#define PI 3.14

TamGiac::~TamGiac()
{
}
void TamGiac::Input()
{
	double xA, yA, xB, yB, xC, yC;
	cout << "Point 1: " << endl;
	cout << "xA: ";
	cin >> xA;
	cout << "yA: ";
	cin >> yA;
	cout << "Point 2: " << endl;
	cout << "xB: ";
	cin >> xB;
	cout << "yB: ";
	cin >> yB;
	cout << "Point 3: " << endl;
	cout << "xC: ";
	cin >> xC;
	cout << "yC: ";
	cin >> yC;
	A.setHoanhDo(xA);		A.setTungDo(yA);
	B.setHoanhDo(xB);		B.setTungDo(yB);
	C.setHoanhDo(xC);		C.setTungDo(yC);
}
void TamGiac::Output()
{
	cout << "Coordinate: " << endl;
	cout << "A: " << "(" << A.getHoanhDo() << ";" << A.getTungDo() << ")" << endl;
	cout << "B: " << "(" << B.getHoanhDo() << ";" << B.getTungDo() << ")" << endl;
	cout << "C: " << "(" << C.getHoanhDo() << ";" << C.getTungDo() << ")" << endl;
}
void TamGiac::MoveTamGiac(float x, float y) {
	for (int i = 0; i < this->NumberOfTriangle; i++)
	{
		this->P[i].MovePoint(x, y);
	}
}

void TamGiac::ZoomTamGiac(float k) {
	for (int i = 0; i < this->NumberOfTriangle; i++) {
		this->P[i].setHoanhDo(this->P[i].getHoanhDo() * k);
		this->P[i].setTungDo(this->P[i].getTungDo() * k);
	}
}

void TamGiac::RotateTamGiac(float h) {
	h = h * PI / 180;
	for (int i = 0; i < this->NumberOfTriangle; i++) {
		int a = this->P[i].getHoanhDo();
		int b = this->P[i].getTungDo();
		this->P[i].setHoanhDo(a * cos(h) - b * sin(h));
		this->P[i].setTungDo(a * sin(h) + b * cos(h));
	}
}
ostream& operator<<(ostream& os, TamGiac& T) {
	using std::endl;
	os << "Multiangle with " << T.NumberOfTriangle << endl;
	for (int i = 0; i < T.NumberOfTriangle; i++) {
		os << T.P[i] << " ";
	}
	return os;
}