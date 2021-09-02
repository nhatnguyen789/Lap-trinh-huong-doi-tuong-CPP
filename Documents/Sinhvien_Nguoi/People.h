#pragma once
#include<iostream>
#include"People.h"
using namespace std;
class People
{
	char* Hoten;
	int NamSinh;
public:
	People();
	People(char* ht, int ns) :NamSinh(ns) { Hoten = strdup(ht); }
	~People() { delete[] Hoten; }
	void An() const { cout << Hoten << "an 3 chen com\n"; }
	void Ngu() const { cout << Hoten << "ngu ngay 8 tieng\n" }
	void xuat() const;
	//friend ostream& operater <<(ostream &os,Nguoi &p);
};