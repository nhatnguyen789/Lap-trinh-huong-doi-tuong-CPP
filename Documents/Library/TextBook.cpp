#include "TextBook.h"
#include<iostream>
using namespace std;

TextBook::TextBook()
{
}
TextBook::~TextBook()
{
}

void TextBook::InputInfor()
{
	cout << "Input information of textbook:" << endl;
	Book::InputInfor();
	cout << "Input publising Company:" << endl;
	cin >> PublisingCompany;
}
void TextBook::OutputInfor()
{
	cout << "--------TEXTBOOK-----------" << endl;
	Book::OutputInfor();
	cout << "-publising company:" << PublisingCompany << endl;
}
string TextBook::getPublisingCompany()
{
	return PublisingCompany;
}