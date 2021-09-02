#include<iostream>
#include"NhanVien.h"
#include"Nv_SanXuat.h"
#include"Nv_VanPhong.h"
using namespace std;
#define Max 100

int main()
{
	int i, soNV, choice, o = 0, w = 0, iMax, iMin, checko = 0, checkw = 0;	//so nhan vien
	Nv_VanPhong O[Max];
	Nv_SanXuat W[Max];
	float LuongMax = 0, LuongMin;
	cout << "Nhap so nhan vien: ";
	cin >> soNV;
	for (i = 0; i < soNV; i++)
	{
		cout << endl;
		cout << "Lua chon kieu nhan vien ban muon them?" << endl;
		cout << "1.Van Phong." << endl;
		cout << "2.Cong Nhan." << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			O[o].Nhap_songaylamviec();
			o++;
			break;
		case 2:
			W[w].Nhap_So_SanPham();
			W[w].Nhap_LuongCoBan();
			w++;
			break;
		}
	}
	LuongMin = O[0].getLuong();
	cout << "\n------------ Quan Ly Nhan Vien --------------" << endl;
	for (i = 0; i < o; i++)
	{
		if (O[i].getLuong() > LuongMax)
		{
			LuongMax = O[i].getLuong();
			iMax = i;
		}
		if (O[i].getLuong() < LuongMin)
		{
			LuongMin = O[i].getLuong();
			iMin = i;
		}
		O[i].Output();
	}
	for (int j = 0; j < w; j++)
	{
		if (W[j].getLuong() > LuongMax)
		{
			checko++;
			LuongMax = W[j].getLuong();
			iMax = j;
		}
		if (W[j].getLuong() < LuongMin)
		{
			checkw++;
			LuongMin = W[j].getLuong();
			iMin = j;
		}
		W[j].Output();
	}
	cout << "\nNhan vien co luong cao nhat la: " << endl;
	if (checko == 0)
		cout << "Van phong:	\n" << O[iMax].getTen() << " | " << O[iMax].getNgaySinh() << " | " << "Luong: " << O[iMax].getLuong() << endl;
	else
		cout << "Cong Nhan:	\n" << W[iMax].getTen() << " | " << W[iMax].getNgaySinh() << " | " << "Luong: " << W[iMax].getLuong() << endl;
	cout << "\nNhan vien co luong thap nhat la: " << endl;
	if (checkw == 0)
		cout << "Van phong:	\n" << O[iMin].getTen() << " | " << O[iMin].getNgaySinh() << " | " << "Luong: " << O[iMin].getLuong() << endl;
	else
		cout << "Cong nhan:	\n" << W[iMin].getTen() << " | " << W[iMin].getNgaySinh() << " | " << "Luong: " << W[iMin].getLuong() << endl;
	system("pause");
}

