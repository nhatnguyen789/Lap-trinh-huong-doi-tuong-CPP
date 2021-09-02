#include <iostream>
#include <math.h>
#include<conio.h>
using namespace std;

typedef struct
{
	char FullName[30];
	float MathScores;
	float LiteratureScores;
} Student;
void InputInformation(Student* S)
{
	cout << "Full Name: ";
	fgets(S->FullName, 30, stdin);
	cout << "Input Math scores: ";
	cin >> S->MathScores;
	cout << "Input Literature scores: ";
	cin >> S->LiteratureScores;
}
void main()
{
	Student S;
	float GPA;
	InputInformation(&S);
	GPA = (S.LiteratureScores + S.MathScores) / 2;
	cout << "\nGrade point Average of " << S.FullName << "is: " << GPA << endl;
	system("pause");
}