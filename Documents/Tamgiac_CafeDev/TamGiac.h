#pragma once
#include<iostream>
#include"Point.h"
class TamGiac
{
private:
	Point* P;
	int NumberOfTriangle;
public:
	Point A, B, C;
	TamGiac() : A(0, 0), B(0, 0), C(0, 0) {};
	TamGiac(float xA, float yA, float xB, float yB, float xC, float yC) {};
	~TamGiac();
	void Input();
	void Output();
	void MoveTamGiac(float x, float y);
	void ZoomTamGiac(float k);
	void RotateTamGiac(float h);
	friend ostream& operator<<(ostream& os, TamGiac& T);
};

