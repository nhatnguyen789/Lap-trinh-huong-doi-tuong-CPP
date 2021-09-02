#pragma once
#include"Book.h"
#include<iostream>
using namespace std;
class TextBook: public Book
{
protected:
	string PublisingCompany;
public:
	TextBook();
	~TextBook();

	void InputInfor();
	string getPublisingCompany();
	void OutputInfor();
};

