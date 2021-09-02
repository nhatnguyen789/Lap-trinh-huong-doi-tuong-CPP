#include<iostream>
#include"People.h"
#include"Sinhvien.h"
using namespace std;

int main()
{
	People p1("Le Van Nhan:", 1980);
	Sinhvien s1("Vo Vien Sinh", "200002541", 1984);
	cout << "1.\n";
	p1.An();   s1.An();
	cout << "2.\n";
	p1.xuat(); s1.xuat();
	s1.Peple::xuat();
	cout << "3.\n";
	cout << "P1" << "\n";
	cout << "s1" << \n
}