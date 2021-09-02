#include<iostream>
#include"Point.h"

using namespace std;

void main()
{
	Point p;
	p.init(2, 4);
	p.display();
	p.move(1, 2);
	p.display();
	system("pause");
}