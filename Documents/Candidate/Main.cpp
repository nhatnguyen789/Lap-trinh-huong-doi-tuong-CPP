#include<iostream>
#include"Candidate.h"
#include<string.h>
using namespace std;
const int Max = 30;

int main()
{
	int i, n;
	Candidate C[Max];
	cout << "how many student you want to input:" << endl;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		C[i].Input();
		C[i].GPA();
	}
	cout << "Student have sum of Score subject over 15:" << endl;
	for (i = 0; i < n; i++)
	{
		C[i].Output();
	}
	system("pause");
}
