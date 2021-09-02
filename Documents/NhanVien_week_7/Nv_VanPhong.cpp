#include<iostream>
#include "Nv_VanPhong.h"
#include<math.h>
using namespace std;

Nv_VanPhong::Nv_VanPhong()
{
}
void Nv_VanPhong::Nhap_songaylamviec()
{
	NhanVien::SetInfor();
	cout << "Nhap so ngay lam viec:" << endl;
	cin >> so_ngaylamviec;
}
float Nv_VanPhong::getLuong()
{
	NhanVien::Luong = (100000 * so_ngaylamviec);
	return NhanVien::Luong;
}
void Nv_VanPhong::Output()
{
	cout << "Thong tin van phong:" << endl;
	NhanVien::Output();
	cout << "3.Luong:" << getLuong() << endl;
}