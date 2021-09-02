#pragma once
using namespace std;

class Point
{
	public:
		double x, y;
		Point();
		~Point();
		Point(const Point& D);
		// Point():x(0), y(0){};
		//Point(double xx, double yy) :x(xx), y(yy) {};
		Point(double xx, double yy);
		double Getx();
		double Gety();
		void Setx(double x);
		void Sety(double y);
		void SetPoint();
		void PrintInfor();
		void Move(double dx, double dy);
		double Distance(Point P);
};


