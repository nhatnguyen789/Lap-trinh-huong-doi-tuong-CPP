#include <iostream>
#include"Eclipse.h"
#include"Circle.h"
using namespace std;

int functionTable()
{
	int choice;
	cout << "\n_______ SHAPE _______" << endl;
	cout << "0. Cancle." << endl;
	cout << "1. Input a circle. " << endl;
	cout << "2. Input an ellipse. " << endl;
	cout << "______________________" << endl;
	cout << "\nYour choice: ";
	do
	{
		cin >> choice;
		if (choice > 2 || choice < 0)
			cout << "Wrong choosen! Please choose again: ";
	} while (choice > 2 || choice < 0);
	cin.ignore();
	return choice;
}

int main()
{
	int choice;
	Eclipse E;
	Circle C;
	do
	{
		cout << endl;
		choice = functionTable();
		switch (choice)
		{
		case 1:
		{
			C.setRadius();
			cout << "\nInformation of this circle: " << endl;
			cout << "1. Radius: " << C.getRadius() << " m" << endl;
			cout << "2. Perimeter: " << C.getPerimeter() << " m" << endl;
			cout << "3. Area: " << C.getArea() << " m2" << endl;
			break;
		}
		case 2:
		{
			E.setMajorAxis();
			cout << endl;
			E.setMinorAxis();
			cout << "\nInformation of this eclipse: " << endl;
			cout << "1. Major-axis: " << E.getMajorAxis() << " m" << endl;
			cout << "2. Minor-axis:: " << E.getMinorAxis() << " m" << endl;
			cout << "3. Perimeter: " << E.getPerimeter() << " m" << endl;
			cout << "4. Area: " << E.getArea() << " m2" << endl;
			break;
		}
		case 0:
			exit(0);
		}
	} 		while (choice != 0);
}