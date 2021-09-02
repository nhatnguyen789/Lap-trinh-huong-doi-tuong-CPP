#pragma once
#include<iostream>
#include"NhanVien.h"
using namespace std;
class Nv_VanPhong:public NhanVien
{
private:
	int so_ngaylamviec;
public:
	Nv_VanPhong();
	void Nhap_songaylamviec();
	float getLuong();
	void Output();
};

