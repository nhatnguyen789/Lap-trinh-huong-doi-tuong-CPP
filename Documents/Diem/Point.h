#pragma 
#include<iostream>

using namespace std;
class Point
{
private:
	int x, y;
public:
	void init(int ox, int oy);
	void move(int dx, int dy);
	void display();
};

