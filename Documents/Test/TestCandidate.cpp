#include<iostream>
#include "TestCandidate.h"
using namespace std;
void TestCandidate::Input()
{
	cout << "Nhap vao n Thi Sinh: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Nhap sinh vien thu " << i << ": " << endl;
		A[i].Nhap();
	}
}

void TestCandidate::Output()
{
	for (int i = 1; i <= n; i++)
	{
		if (A[i].TongDiem() > 15)
		{
			A[i].Xuat();
			cout << endl;
		}

	}
}

TestCandidate::TestCandidate()
{
}


TestCandidate::~TestCandidate()
{
}
