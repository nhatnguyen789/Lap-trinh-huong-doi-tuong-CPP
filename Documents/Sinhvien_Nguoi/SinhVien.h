#pragma once
#include<iostream>
#include"Sinhvien.h"
#include"People.h"
using namespace std;

class Sinhvien
{
	class SinhVien :public People {
		char* MaSo;
	public:
		SinhVien();
		SinhVien(char* ht, char* ms, int ns) : People(ht, ns) {
			MaSo = strdup(ms);
		}
		~SinhVien()
		{
			delete[]MaSo;
		}

	};
};


