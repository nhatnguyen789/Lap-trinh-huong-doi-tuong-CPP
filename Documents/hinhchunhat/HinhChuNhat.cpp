#include<iostream>
#include<conio.h>
#include<math.h>
#include "HinhChuNhat.h"
using namespace std;
HinhChuNhat::HinhChuNhat()
{
}
HinhChuNhat::~HinhChuNhat()
{
}
HinhChuNhat::HinhChuNhat(int d, int r)
{
	this->ChieuDai = d;
	this->ChieuRong = r;
}
HinhChuNhat::HinhChuNhat(const HinhChuNhat& hcn)
{
	this->ChieuDai = hcn.ChieuDai;
	this->ChieuRong = hcn.ChieuRong;
}
void HinhChuNhat::SetChieuRong()
{
	this->ChieuRong = ChieuRong;
}
void HinhChuNhat::SetChieuDai()
{
	this->ChieuDai = ChieuDai;
}
int HinhChuNhat::GetChieuRong()
{
	return ChieuRong;
}
int HinhChuNhat::GetChieuDai()
{
	return ChieuDai;
}
int HinhChuNhat::TinhDienTich(int ChieuDai,int ChieuRong)
{
	return ChieuDai*ChieuRong;
}