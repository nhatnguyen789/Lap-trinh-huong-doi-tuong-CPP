#pragma once
using namespace std;
class HinhChuNhat
{
private:
	int ChieuDai;
	int ChieuRong;
public:
	HinhChuNhat();
	~HinhChuNhat();
	HinhChuNhat(int d,int r);
	HinhChuNhat(const HinhChuNhat& hcn);
	void SetChieuDai();
	void SetChieuRong();
	int GetChieuDai();
	int GetChieuRong();
	int TinhDienTich(int ChieuDai,int ChieuRong);
};

