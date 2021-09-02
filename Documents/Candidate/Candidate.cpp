#include "Candidate.h"
#include<iostream>
#include<string.h>
using namespace std;

Candidate::Candidate()
{

}
Candidate::~Candidate()
{

}
void Candidate::Input()
{
	cout << "\n Input information" << endl;
	cout << "---------------------------------" << endl;
	cout << "Input student's code:" << endl;
	cin >> Code;
	cin.ignore();
	cout << "2.Input Name:";
	getline(cin, Name);
	cout << "3.Input day of birth:" << endl;
	cin >> DayofBirth;
	getline(cin, DayofBirth);
	cout << "4.Math's Score:" << endl;
	cin >> MathScore;
	cout << "5.Literature's Score:" << endl;
	cin >> LiteratureScore;
	cout << "6.English's Score:" << endl;
	cin >> EnglishScore;
}
float Candidate::GPA()
{
	return (MathScore + LiteratureScore + EnglishScore);
}
void Candidate::Output()
{
	if (GPA() > 15)
	{
		cout << "\n ID:" << Code << endl;
		cout << "Name " << Name << endl;
		cout << "Day of Birth:" << DayofBirth << endl;
		cout << "Math's Score:" << MathScore << endl;
		cout << "Literature's Score:" << LiteratureScore << endl;
		cout << "English's Score:" << EnglishScore << endl;
		cout << "----------------------!!!!!!!-------------------------" << endl;
	}
}

