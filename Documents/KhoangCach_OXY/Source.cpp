#include <iostream>
#include <math.h>
#include <conio.h>
#define MAX 100
using namespace std;
struct Point
{
	char N[3]; //tên của điểm 
	float X;   //hoành độ của điểm
	float Y;   //tung độ của điểm
};
void InputPoint(Point* P)
{
	cout << "Input name of point: ";
	cin >> P->N;
	cout << "Input X: ";
	cin >> P->X;
	cout << "Input Y: ";
	cin >> P->Y;
}
void Calculate(Point A, Point B, int i, float& a)
{
	float Result;
	Result = sqrt(pow((A.X - B.X), 2) + pow((A.Y - B.Y), 2));
	a = Result;
	cout << "" << i << ". The distance of " << A.N << " and " << B.N << " is: " << Result << endl;
}
int main()
{
	float Result, fMAX;
	int n, i, j, savei, savej, count = 0;
	Point P[MAX];   //mảng kiểu point
	float arrResult[50];

	cout << "How many point? : ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "\n";
		InputPoint(&P[i]);
	}
	cout << "\n";
	fMAX = 0;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
		{
			count += 1;
			Calculate(P[i], P[j], count, arrResult[count - 1]);
			if (arrResult[count - 1] >= fMAX)
			{
				fMAX = arrResult[count - 1];
				savei = i;
				savej = j;
			}
			else
				continue;
		}
	cout << "\nThe most distance is: " << fMAX << " - from " << P[savei].N << " to " << P[savej].N << "!" << endl;
	system("pause");
}