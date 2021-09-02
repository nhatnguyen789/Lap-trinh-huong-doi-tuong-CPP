#include "Magazine.h"
#include<iostream>
using namespace std;
Magazine::Magazine()
{
}
Magazine::~Magazine()
{
}
void Magazine::InputInfor()
{
	cout << "Input information of this Magazine:" << endl;
	Book::InputInfor();
	cout << "Input Publication date:" << endl;
	cin >> PublicationDate;
}
void Magazine::OutputInfor()
{
	cout << "-------Magazine---------" << endl;
	Book::OutputInfor();
	cout << "-Publication date" << PublicationDate << endl;
}