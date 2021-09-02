#include "SoPhuc.h"
#include<iostream>
#include<math.h>
using namespace std;

SoPhuc::SoPhuc()
{
}
SoPhuc::~SoPhuc()
{
}
SoPhuc::SoPhuc(double t, double a)
{
	SoThuc = t;
	SoAo = a;
}
void SoPhuc::setSoThuc(double SoThuc)
{
	this->SoThuc = SoThuc;
}
void SoPhuc::setSoAo(double SoAo)
{
	this->SoAo = SoAo;
}
double SoPhuc::getSoThuc()
{
	return SoThuc;
}
double SoPhuc::getSoAo()
{
	return SoAo;
}
void SoPhuc::Input()
{
	cout << "Nhap phan thuc:";
	cin >> SoThuc;
	cout << "\nNhap phan Ao:";
	cin >> SoAo;
}
void SoPhuc::Output()
{
	cout << "\nSo Phuc vua nhap la: " << SoThuc << " +  i" << SoAo << endl;
}
void SoPhuc::Add(SoPhuc SP, SoPhuc SP1)
{
	SoThuc = SP.SoThuc + SP1.SoThuc;
	SoAo = SP.SoAo + SP1.SoAo;
}
void SoPhuc::Subtract(SoPhuc SP, SoPhuc SP1)
{
	SoThuc = SP.SoThuc - SP1.SoThuc;
	SoAo = SP.SoAo - SP1.SoAo;
}
void SoPhuc::Multi(SoPhuc SP, SoPhuc SP1)
{
	SoThuc = SP.SoThuc * SP1.SoThuc - SP.SoAo * SP1.SoAo;
	SoAo = SP.SoThuc * SP1.SoAo + SP.SoAo * SP1.SoThuc;
}
void SoPhuc::Divide(SoPhuc SP, SoPhuc SP1)
{
	SoThuc = (SP.SoThuc * SP1.SoThuc + SP.SoAo * SP1.SoAo) / (pow(SP1.SoThuc, 2) + pow(SP1.SoAo, 2));
	SoAo = (SP1.SoThuc * SP.SoAo - SP.SoThuc * SP1.SoAo) / (pow(SP1.SoThuc, 2) + pow(SP1.SoAo, 2));
}

