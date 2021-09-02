#pragma once
#include<iostream>
#include"NhanVien.h"
using namespace std;

class Nv_SanXuat: public NhanVien
{
private:
	int So_Sanpham;
	float LuongCoban;
public:
	Nv_SanXuat();
	void Nhap_So_SanPham();
	void Nhap_LuongCoBan();
	float getLuong();
	void Output();
};

