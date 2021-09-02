#include "ThoiGian.h"
#include<iostream>
#include<ctime>
using namespace std;

ThoiGian::ThoiGian()
{
}
ThoiGian::~ThoiGian()
{
}
void ThoiGian::setGio(double Gio)
{
	this->Gio = Gio;
}
void ThoiGian::setPhut(double Phut)
{
	this->Phut = Phut;
}
void ThoiGian::setGiay(double Giay)
{
	this->Giay = Giay;
}
double ThoiGian::getGio()
{
	return this->Gio;
}
double ThoiGian::getPhut()
{
	return this->Phut;
}
double ThoiGian::getGiay()
{
	return this->Giay;
}
void ThoiGian::TakeTime()
{
	cout << "Take time form your computor!!!" << endl;
	time_t CurTime = time(0);
	struct tm info;
	time(&CurTime);
	gmtime_s(&info, &CurTime);
	char timebuf[30];
	this->Gio = (double)((info.tm_hour + 7) % 24);
	this->Phut = (double)info.tm_min;
	this->Giay = (double)info.tm_sec;
	this->Xuat();
}
void ThoiGian::InSec()
{
	cout << "Thoi gian ban nhap trong la:" << endl;
	cout << this->Gio * 60 * 60 + this->Phut * 60 + this->Giay << "second.\n";
}
void ThoiGian::Xuat()
{
	cout << "thoi gian ban nhap vao la:" << endl;
	cout << this->Gio << " : " << this->Phut << " : " << this->Giay << endl;
}
void ThoiGian::Nhap()
{
	cout << "\nNhap Gio:";
	cin >> this->Gio;
	cout << "\nNhap Phut:";
	cin >> this->Phut;
	cout << "\nNhap Giay:";
	cin >> this->Giay;
}
void ThoiGian::TimeCurrent()
{
	time_t CurTime = time(0);
	struct tm info;
	time(&CurTime);
	gmtime_s(&info, &CurTime);
	char timebuf[30];
	printf("thoi gian hien tai la: %2d : %02d: %02d \n", (info.tm_hour + 7) % 24, info.tm_min, info.tm_sec);
}