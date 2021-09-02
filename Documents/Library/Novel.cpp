#include "Novel.h"
#include<iostream>
#include<string>
using namespace std;

Novel::Novel()
{
}
Novel::~Novel()
{
}

void Novel::InputInfor()
{
	cout << "Input information of this Novel:" << endl;
	Book::InputInfor();
	cin.ignore();
	cout << "Input author information:" << endl;
	getline(cin, Author);
}
string Novel::getAuthor()
{
	return Author;
}
void Novel::OutputInfor()
{
	cout << "--------NOVEL---------" << endl;
	Book::OutputInfor();
	cout << "-Author:" << Author << endl;
}
