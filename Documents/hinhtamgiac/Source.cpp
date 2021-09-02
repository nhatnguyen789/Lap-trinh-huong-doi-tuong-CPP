#include<iostream>
#include"Triangle.h"
#include"Point.h"
#define Max 100
using namespace std;


int main()
{
	int i, NoR;		//NoT: Number of Triangle.
	int iP,iA;
	Triangle R[Max];
	double maxPerimeter = 0, maxArea = 0;

	cout << "How many Triangle ??? ";
	cin >> NoR;
	for (i = 0; i < NoR; i++)
	{
		cout << endl;
		cout << "Triangle: " << i + 1 << ": " << endl;
		R[i].Input();
	}
	for (i = 0; i < NoR; i++)
	{
		cout << "\nTriangle " << i + 1 << " has information: " << endl;
		R[i].Output();
		cout << "Side 1: " << R[i].dA() << " m";
		cout << "\nSide 2: " << R[i].dB() << " m";
		cout << "\nSide 3: " << R[i].dC() << " m";
		cout << "\n\nPERIMETER: " << R[i].getPerimeter() << " m";
		cout << "\nAREA: " << R[i].getArea() << " m2" << endl;

		if (R[i].getPerimeter() > maxPerimeter)
		{
			maxPerimeter = R[i].getPerimeter();
			iP = i;
		}
		if (R[i].getArea() > maxArea)
		{
			maxArea = R[i].getArea();
			iA = i;
		}
	}
	cout << "\n + Triangle has the biggest perimeter is Triangle: " << maxPerimeter << endl;
	cout << " + Triangle has the biggest area is Triangle:  " << maxArea << endl;
	system("pause");
}