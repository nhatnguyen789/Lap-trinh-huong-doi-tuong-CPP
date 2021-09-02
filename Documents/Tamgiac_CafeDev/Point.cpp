#include "Point.h"
#include<iostream>
using namespace std;

Point::Point()
{
	HoanhDo = 0;
	TungDo = 0;
}
Point::~Point()
{
}
Point::Point(float x, float y)
{
	HoanhDo = x;
	TungDo = y;
}
void Point::setHoanhDo(float HoanhDo)
{
	this->HoanhDo = HoanhDo;
}
void Point::setTungDo(float TungDo)
{
	this->TungDo = TungDo;
}
float Point::getHoanhDo()
{
	return HoanhDo;
}
float Point::getTungDo()
{
	return TungDo;
}
void Point::NhapDiem()
{
	cout << "Nhap ten diem:";
	cin >> TenDiem;
	cout << "\nNhap Hoanh do:";
	cin >> HoanhDo;
	cout << "\nNhap tung do:";
	cin >> TungDo;
}
void Point::XuatDiem()
{
	cout << "\nDiem vua nhap la: " << TenDiem << " ( " << HoanhDo << ", " << TungDo << " )" << endl;
}
void Point::MovePoint(float x, float y)
{
	setHoanhDo(getHoanhDo() + x);
	setTungDo(getTungDo() + y);
}
ostream& operator<<(ostream& os, Point& P) {
	os << "( " << P.getHoanhDo() << " , " << P.getTungDo() << " )";
	return os;
}
istream& operator>>(istream& is, Point& P) {
	is >> P.HoanhDo >> P.TungDo;
	return is;
}
Point& Point::operator=(Point& P) 
{
	this->setHoanhDo(P.getTungDo());
	this->setHoanhDo(P.getHoanhDo());
	return *this;
}