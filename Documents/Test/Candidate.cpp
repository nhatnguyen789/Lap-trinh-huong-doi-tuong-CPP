#include "Candidate.h"
#include <iostream>
#include <string>
using namespace std;


void Candidate::Input()
{
	cout << "   Nhap Ma Sinh Vien: ";
	cin >> Ma;
	cout << "   Nhap Ten Sinh Vien: ";
	getline(cin >> ws, Ten);
	cout << "   Nhap Vao Ngay Sinh: ";
	cin >> NgaySinh;
	cout << "   Nhap Diem Toan: ";
	cin >> DiemToan;
	cout << "   Nhap Diem Van: ";
	cin >> DiemVan;
	cout << "  Nhap Diem Anh: ";
	cin >> DiemAnh;
}

double Candidate::TongDiem()
{
	return DiemToan + DiemAnh + DiemVan;
}

void Candidate::Output()
{
	cout << "Ma Sinh Vien La: " << Ma << endl;
	cout << "Ten Sinh Vien La: " << Ten << endl;
	cout << "Diem Toan: " << DiemToan << endl;
	cout << "Diem Toan: " << DiemVan << endl;
	cout << "Diem Toan: " << DiemAnh << endl;
}

Candidate::Candidate()
{
}


Candidate::~Candidate()
{
}