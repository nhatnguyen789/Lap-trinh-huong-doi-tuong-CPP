#include<iostream>
#include<string>
#include "Book.h"
#include "Magazine.h"
#include "Novel.h"
#include "TextBook.h"
const int Max = 100;
using namespace std;

int FunctionTable()
{
	int Choice;
	cout << "-----------------BOOK MANAGEMENT-------------" << endl;
	cout << "1.Add a TextBook:" << endl;
	cout << "2.Add a Novel:" << endl;
	cout << "3.Add a Magazine:" << endl;
	cout << "4.Print information list of book:" << endl;
	cout << "5.Find information of book:" << endl;
	cout << "6.Remove a book:" << endl;
	cout << "0.Canel!!!" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "Your choice: ";
	do
	{
		cin >> Choice;
		if (Choice < 0 || Choice > 6)
		{
			cout << "Wrong chosen! Please choose again! " << endl;
			cout << "Your choice: ";
		}
	} while (Choice < 0 || Choice > 6);
	return Choice;
}
int main()
{
	int choice, check;
	int i = 0;
	string NameFinding;
	Book* Book[Max];
	do
	{
		choice = FunctionTable();
		switch (choice)
		{
		case 1:
			Book[i] = new TextBook();
			Book[i++]-> InputInfor();
			break;
		case 2:
			Book[i] = new Novel();
			Book[i++]->InputInfor();
			break;
		case 3:
			Book[i] = new Magazine();
			Book[i++]->InputInfor();
			break;
		case 4:
			for (int j = 0; j < i; j++)
			{
				Book[j]->OutputInfor();
				cout << endl;
			}
			break;
		case 5:
			check = 0;
			cin.ignore();
			cout << "Input name of book that you want to find information:" << endl;
			getline(cin, NameFinding);
			for (int j = 0; j < i; j++)
			{
				if (NameFinding == Book[j]->getNameOfBook())
				{
					Book[j]->OutputInfor();
					cout << endl;
					check++;
				}
			}
			if (check == 0)
				cout << "Not found this book!!!" << endl;
			break;
		case 6:
			check = 0;
			cin.ignore();
			cout << "Input name of book that you want to remove :" << endl;
			getline(cin, NameFinding);
			for (int j = 0; j < i; j++)
			{
				if (NameFinding == Book[j]->
					getNameOfBook())
				{
					check++;
					delete Book[j];
					cout << "Remove Successfully!" << endl;
				}
			}
			if (check == 0)
				cout << "NOT found this book!" << endl;
			break;
		case 0:
			exit(0);
		}
	} while (choice != 0);
		system("pause");

}