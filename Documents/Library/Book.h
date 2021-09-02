#pragma once
#include<iostream>
using namespace std;
class Book
{
protected:
	string NameOfBook;
	int NumberOfPage;
public:
	Book();
	virtual ~Book();

	virtual void InputInfor();
	string getNameOfBook();
	int getNumberOfPage();

	virtual void OutputInfor();
};

