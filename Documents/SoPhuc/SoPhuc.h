#pragma once
class SoPhuc
{
protected:
	double SoThuc;
	double SoAo;
public:
	SoPhuc();
	~SoPhuc();
	SoPhuc(double t, double a);
	void setSoThuc(double SoThuc);
	void setSoAo(double SoAo);
	double getSoThuc();
	double getSoAo();

	void Input();
	void Output();
	void Add(SoPhuc SP, SoPhuc SP1);
	void Subtract(SoPhuc SP, SoPhuc SP1);
	void Multi(SoPhuc SP, SoPhuc SP1);
	void Divide(SoPhuc SP, SoPhuc SP1);
};

