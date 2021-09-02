#pragma once
#include<iostream>
#include<math.h>
using namespace std;
class Fraction
{
public:
	long Numerator, Denominator;
public:
	Fraction(long Num, long Den) { InputFraction(Num, Den); };
	Fraction(long Num) { InputFraction(Num, 1); };
	~Fraction();
	void InputFraction(long Num, long Den);
	friend Fraction operator + (Fraction F1, Fraction F2);
	friend Fraction operator - (Fraction F1, Fraction F2);
	friend Fraction operator * (Fraction F1, Fraction F2);
	friend Fraction operator / (Fraction F1, Fraction F2);
	void ReduceFraction();
};

