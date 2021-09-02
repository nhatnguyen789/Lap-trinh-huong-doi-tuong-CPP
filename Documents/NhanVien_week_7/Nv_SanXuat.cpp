#include<iostream>
#include "Nv_SanXuat.h"
using namespace std;

Nv_SanXuat::Nv_SanXuat()
{
}
void Nv_SanXuat::Nhap_So_SanPham()
{
	NhanVien::SetInfor();
	cout << "Nhap so san pham:" << endl;
	cin >> So_Sanpham;
}
void Nv_SanXuat::Nhap_LuongCoBan()
{
	cout << "nhap luong co ban:" << endl;
	cin >> LuongCoban;
}
float Nv_SanXuat::getLuong()
{
	NhanVien::Luong = (LuongCoban + So_Sanpham * 5000);
	return NhanVien::Luong;
}
void Nv_SanXuat::Output()
{
	cout << "\n thong tin cua cong nhan:" << endl;
	NhanVien::Output();
	cout << "3.Luong:" << getLuong() << endl;
}