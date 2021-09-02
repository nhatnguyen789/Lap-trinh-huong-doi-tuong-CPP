#pragma once

#include<iostream>
using namespace std;
class Point
{
protected:
	char TenDiem[3];
	float HoanhDo;
	float TungDo;
public:
	Point();
	~Point();
	Point(const Point& P);
	Point(float x, float y);
	void setHoanhDo(float HoanhDo);
	void setTungDo(float TungDo);
	float getHoanhDo();
	float getTungDo();
	void NhapDiem();
	void XuatDiem();
	void MovePoint(float x, float y);
	Point& operator=(Point& P);
	//void DrawingCoordinate() -> library is not supported
	friend ostream& operator<<(ostream& os, Point& P);
	friend istream& operator>>(istream& is, Point& P);
};
