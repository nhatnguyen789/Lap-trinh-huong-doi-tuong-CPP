#include<iostream>
#include"Fraction.h"
using namespace std;

int main()
{
	Fraction F1(4), F2(5, 6), F3(3, 9), Result(0, 0);
	cout << "Fraction 1:" << F1.Numerator << " / " << F1.Denominator << endl;
	cout << "Fraction 2:" << F2.Numerator << " / " << F2.Denominator << endl;
	cout << "Fraction 3:" << F3.Numerator << " / " << F3.Denominator << endl;

	cout << "------------Caculator Fraction 1 & 2------------------------" << endl;
	cout << "  SUM           " << endl;
	cout << F1.Numerator << " / " << F1.Denominator << " + " << F2.Numerator << " / " << F2.Denominator << " = " << endl;
	Result = F1 + F2;
	Result.ReduceFraction();
	cout << endl;

	cout << "------------------------------------------------------------------" << endl;
	cout << "  SUBTRACT                       " << endl;
	cout << F1.Numerator << " / " << F1.Denominator << " - " << F2.Numerator << " / " << F2.Denominator << " = " << endl;
	Result = F1 - F2;
	Result.ReduceFraction();
	cout << endl;

	cout << "-------------------------------------------------------------------" << endl;
	cout << "  MULTIPLY                              " << endl;
	cout << F1.Numerator << " / " << F1.Denominator << " * " << F2.Numerator << " / " << F2.Denominator << " = " << endl;
	Result = F1 * F2;
	Result.ReduceFraction();
	cout << endl;

	cout << "---------------------------------------------------------------------" << endl;
	cout << "  DEVIDE                              " << endl;
	cout << F1.Numerator << " / " << F1.Denominator << " / " << F2.Numerator << " / " << F2.Denominator << " = " << endl;
	Result = F1 / F2;
	Result.ReduceFraction();
	cout << endl;

	cout << "------------------Caculator Fraction 1,2 & 3------------------------------" << endl;
	cout << " - SUM: " << F1.Numerator << "/" << F1.Denominator << " + " << F2.Numerator << "/" << F2.Denominator << " + " << F3.Numerator << "/" << F3.Denominator << " = " << endl;
	Result = F1 + F2 + F3;
	Result.ReduceFraction();
	cout << endl;

	cout << "---------------------------------------------------------------------------" << endl;
	cout << " - SUBTRACT: " << F1.Numerator << "/" << F1.Denominator << " - " << F2.Numerator << "/" << F2.Denominator << " - " << F3.Numerator << "/" << F3.Denominator << " = " << endl;
	Result = F1 - F2 - F3;
	Result.ReduceFraction();
	cout << endl;

	cout << "----------------------------------------------------------------------------" << endl;
	cout << " - MULTIPLY: " << F1.Numerator << "/" << F1.Denominator << " * " << F2.Numerator << "/" << F2.Denominator << " * " << F3.Numerator << "/" << F3.Denominator << " = " << endl;
	Result = F1 * F2 * F3;
	Result.ReduceFraction();
	cout << endl;

	cout << "-----------------------------------------------------------------------------" << endl;
	cout << " - DEVIDE: " << F1.Numerator << "/" << F1.Denominator << " devide " << F2.Numerator << "/" << F2.Denominator << " devide " << F3.Numerator << "/" << F3.Denominator << " = " << endl;
	Result = F1 / F2 / F3;
	Result.ReduceFraction();
	cout << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>-----------------<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
	system("Pasue");

}