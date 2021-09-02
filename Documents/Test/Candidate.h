#pragma once
#include<string.h>
using namespace std;

class Candidate
{
private:
	string Ma;
	string Ten;
	string NgaySinh;
	double DiemToan, DiemVan, DiemAnh;
public:
	Candidate();
	~Candidate();
	void Input();
	double TongDiem();
	void Output();
};

