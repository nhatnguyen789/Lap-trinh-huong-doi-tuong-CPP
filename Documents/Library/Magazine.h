#pragma once
#include"Book.h"
#include<iostream>
using namespace std;
class Magazine: public Book
{
protected:
	int PublicationDate;
public:
	Magazine();
	~Magazine();

	void InputInfor();
	int getPublicationDate();
	void OutputInfor();
};

