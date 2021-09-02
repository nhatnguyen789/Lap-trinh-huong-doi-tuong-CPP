#include "People.h"
using namespace std;
People::People() {}
People::~People() {}

void People::xuat() const
{
	cout << "Nguoi, ho ten:" << Hoten;
	cout << "Sinh" << NamSinh;
	cout << endl;
}