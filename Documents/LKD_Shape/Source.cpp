#include "ShapePoint.h"
#include "Square.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "Trapezoid.h"

int functionTable()
{
	int choice;
	cout << "\n------ SHAPE CHECKING ---------" << endl;
	cout << "1. Checking a SQUARE. " << endl;
	cout << "2. Checking a RECTANGLE. " << endl;
	cout << "3. Checking a PARALLELOGRAM. " << endl;
	cout << "4. Checking a TRAPEZOID. " << endl;
	cout << "______________________" << endl;
	cout << "0. Exit." << endl;
	cout << "\nYour choice: ";
	do
	{
		cin >> choice;
		if (choice > 4 || choice < 0)
			cout << "Wrong choice! Please choose again: ";
	} while (choice > 4 || choice < 0);
	cin.ignore();
	return choice;
}

int main()
{
	int choice;
	ShapePoint* Shape;
	do
	{
		cout << endl;
		choice = functionTable();
		switch (choice)
		{
		case 1:
		{
			Shape = new Square();
			Shape->InputShape();
			Shape->CheckingShape();
			break;
		}
		case 2:
		{
			Shape = new Rectangle();
			Shape->InputShape();
			Shape->CheckingShape();
			break;
		}
		case 3:
		{
			Shape = new Parallelogram();
			Shape->InputShape();
			Shape->CheckingShape();
			break;
		}
		case 4:
		{
			Shape = new Trapezoid();
			Shape->InputShape();
			Shape->CheckingShape();
			break;
		}
		case 0:
			exit(0);
		}
	} while (choice != 0);
}