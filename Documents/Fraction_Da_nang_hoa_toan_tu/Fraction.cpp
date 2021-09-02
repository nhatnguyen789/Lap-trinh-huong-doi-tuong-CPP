#include "Fraction.h"
#include<iostream>
using namespace std;

Fraction::~Fraction()
{
}
void Fraction::InputFraction(long Num, long Den)
{
	Numerator = Num;
	Denominator = Den;
}
void Fraction::ReduceFraction()
{
	long a = Numerator;
	long b = Denominator;
	if (a < 0)
	{
		a = abs(a);
		b = abs(b);
	}
	while(a != b)
	{
		a > b ? a -= b : b -= a;
	}
	Numerator = Numerator / a;
	Denominator = Denominator / a;
	cout << "After Reduce Fraction:" << Numerator << " / " << Denominator << endl;
}
Fraction operator + (Fraction F1, Fraction F2)
{
	return Fraction((F1.Numerator * F2.Denominator) + (F2.Numerator * F1.Denominator), (F1.Denominator * F2.Denominator));
}
Fraction operator - (Fraction F1, Fraction F2)
{
	return Fraction((F1.Numerator * F2.Denominator) - (F2.Numerator * F2.Denominator), (F1.Denominator * F2.Denominator));
}
Fraction operator * (Fraction F1, Fraction F2)
{
	return Fraction((F1.Numerator * F2.Numerator), (F1.Denominator * F2.Denominator));
}
Fraction operator / (Fraction F1, Fraction F2)
{
	return Fraction((F1.Numerator * F2.Denominator), (F1.Denominator * F2.Numerator));
}