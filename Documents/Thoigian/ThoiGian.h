#pragma once
#include<iostream>
using namespace std;
class ThoiGian
{
protected:
	double Gio;
	double Phut;
	double Giay;
public:
	ThoiGian();
	~ThoiGian();
	void setGio(double Gio);
	void setPhut(double Phut);
	void setGiay(double Giay);
	double getGio();
	double getPhut();
	double getGiay();
	void TakeTime();
	void InSec();
	void TimeCurrent();
	void Nhap();
	void Xuat();

};
