#pragma once
#include"Book.h"
#include<iostream>

class Novel:public Book
{
protected:
	string Author;
public:
	Novel();
	~Novel();

	void InputInfor();
	string getAuthor();
	void OutputInfor();
};

