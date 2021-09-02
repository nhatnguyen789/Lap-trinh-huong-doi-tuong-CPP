#include "Book.h"
#include<iostream>
#include<string>
using namespace std;

Book::Book()
{
}
Book::~Book()
{
}
void Book::InputInfor()
{
	cin.ignore();
	cout << "Input the tittle:" << endl;
	getline(cin, NameOfBook);
	cout << "Input Number of page:" << endl;
	cin >> NumberOfPage;
}
void Book::OutputInfor()
{
	cout << "Getting general information " << endl;
	cout << "[" << NameOfBook << "|" << NumberOfPage << "]" << endl;
}
string Book::getNameOfBook()
{
	return NameOfBook;
}
int Book::getNumberOfPage()
{
	return NumberOfPage;
}