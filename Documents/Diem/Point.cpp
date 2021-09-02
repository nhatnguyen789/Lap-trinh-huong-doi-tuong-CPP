#include "Point.h"
#include<iostream>
using namespace std;

void Point::init(int ox, int oy)
{
	cout << "Ham thanh phan init\n";
	x = ox; y = oy;
}
void Point::move(int dx, int dy)
{
	cout << "ham thanh phan move:" << endl;
	x += dx; x += dy;
}
void Point::display()
{
	cout << "ham thanh phan dispaly" << endl;
	cout << "Toa do:" << x << " " << y << "\n";
}
