#pragma once
#include<iostream>
#include<string>
using namespace std;
class NhanVien
{
protected:
	string Ten;
	string Ngaysinh;
	float Luong;
	float Luong_cb;
public:
	NhanVien();
	~NhanVien();
	string getTen();
	string getNgaySinh();
	float getLuong();
	void SetInfor();
	void Output();
};


