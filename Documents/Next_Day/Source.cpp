#include <iostream>
#include<conio.h>
using namespace std;

struct Date
{
	int Day;
	int Month;
	int Year;
};
void InputDay(Date* D)
{
	do
	{
		cout << "\nInput day: ";
		cin >> D->Day;
		if (D->Day > 31)
		{
			cout << "Sorry! A month just have most 31 days!" << endl;
			cout << "Please try again!" << endl;
		}

	} while (D->Day > 31);
}
void InputMonth(Date* D)
{
	do
	{
		cout << "Input month: ";
		cin >> D->Month;
		if (D->Month > 12)
		{
			cout << "Sorry! A year just have most 12 months!" << endl;
			cout << "Please try again!" << endl;
		}
	} while (D->Month > 12);
}
void InputYear(Date* D)
{
	while (D->Month > 12);
	cout << "Input year: ";
	cin >> D->Year;
}
void OutputnextDay(Date D)
{
	cout << "\nThe next day is: " << endl;
	cout << D.Day + 1 << "/" << D.Month << "/" << D.Year << endl;
}
void OutputnextMonth(Date D)
{
	cout << "\nThe next day of your is: " << endl;
	cout << 1 << "/" << D.Month + 1 << "/" << D.Year << endl;
}
void OutputnextYear(Date D)
{
	cout << "\nThe next day of your is: " << endl;
	cout << 1 << "/" << 1 << "/" << D.Year + 1 << endl;
}
void main()
{
	Date D;
	InputDay(&D);
	InputMonth(&D);
	switch (D.Month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	{
		InputYear(&D);
		if (D.Day == 31 && D.Month == 12)
			OutputnextYear(D);
		else if
			(D.Day == 31 && D.Month != 12)
			OutputnextMonth(D);
		else
			OutputnextDay(D);
		break;
	}
	case 4: case 6: case 9: case 11:
	{
		if (D.Day == 31)
		{
			cout << "This month only has 30 days at most!" << endl;
			InputDay(&D);
		}
		InputYear(&D);
		if (D.Day == 30)
			OutputnextMonth(D);
		else
			OutputnextDay(D);
		break;
	}
	case 2:
	{
		InputYear(&D);
		if ((D.Year % 4 == 0) && (D.Year % 100 !=0 )||(D.Year % 400 == 0))
		{
			if (D.Day > 29)
			{
				cout << "This year is a leap year, so February has 29 days at most!" << endl;
				InputDay(&D);
			};
			if (D.Day == 29)
				OutputnextMonth(D);
			else
				OutputnextDay(D);
		}
		else
		{
			if (D.Day > 28)
			{
				cout << "This is not a leap year, so February only has 28 days at most!" << endl;
				InputDay(&D);
			};
			if (D.Day == 28)
				OutputnextMonth(D);
			else
				OutputnextDay(D);
		}
	}
	}
	system("pause");
}