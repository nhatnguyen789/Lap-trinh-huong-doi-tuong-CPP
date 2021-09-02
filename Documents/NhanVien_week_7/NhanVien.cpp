#include<iostream>
#include "NhanVien.h"
#include<string>
using namespace std;

NhanVien::NhanVien()
{
	Ten = " ";
	Ngaysinh = " ";
	Luong = NULL;
}
NhanVien::~NhanVien()
{
}
void NhanVien::SetInfor()
{
	cin.ignore();
	cout << "Nhap ten cua nhan vien:" << endl;
	getline(cin, Ten);
	cout << "nhap ngay sinh:" << endl;
	getline(cin, Ngaysinh);
}
string NhanVien::getTen()
{
	return Ten;
}
string NhanVien::getNgaySinh()
{
	return Ngaysinh;
}
float NhanVien::getLuong()
{
	return Luong;
}
void NhanVien::Output()
{
	cout << "1.Ten:" << getTen() << endl;
	cout << "2.Ngay Sinh:" << getNgaySinh() << endl;
}
