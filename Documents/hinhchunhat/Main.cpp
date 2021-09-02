#include<iostream>
#include"HinhChuNhat.h"
using namespace std;
int main()
{
	HinhChuNhat hcn;
	int d,r, S;
	cout << "nhap chieu dai:";
	cin >> d;
	cout << "\nnhap chieu rong:";
	cin >> r;
	S = hcn.TinhDienTich(d,r);
	cout << "\nDien tich hinh chu nhat la:" << S << endl;
}