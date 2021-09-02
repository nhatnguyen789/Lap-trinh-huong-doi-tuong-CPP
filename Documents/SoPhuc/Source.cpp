#include"SoPhuc.h"
#include<iostream>
using namespace std;
const int MAX = 2;

int main()
{
	SoPhuc SP[MAX];
	SoPhuc Tong, Hieu, Tich, Thuong;
	for (int i = 0; i < MAX; i++)
	{
		SP[i].Input();
		SP[i].Output();
	}
	Tong.Add(SP[0],SP[1]);
	Tong.Output();
	Hieu.Divide(SP[0], SP[1]);
	Hieu.Output();
	Tich.Multi(SP[0], SP[1]);
	Tich.Output();
	Thuong.Divide(SP[0], SP[1]);
	Thuong.Output();
}