#include "Rectangle.h"
void Rectangle::InputShape()
{
	ShapePoint::InputShape();
}

void Rectangle::CheckingShape()
{
	ShapePoint::CheckingShape();
	if ((A.GetY() == B.GetY() && C.GetY() == D.GetY()) && A.GetX() == D.GetX() && B.GetX() == C.GetX() || (B.GetY() == C.GetY() && D.GetY() == A.GetY()) && B.GetX() == A.GetX() && C.GetX() == D.GetX())
	{
		if (A.Distance(B) == C.Distance(D) && B.Distance(C) == A.Distance(D))
		{
			cout << "It is a rectangle! With information of coordinate: " << endl;
			cout << "A ";
			A.PrintInfor();
			cout << "B ";
			B.PrintInfor();
			cout << "C ";
			C.PrintInfor();
			cout << "D ";
			D.PrintInfor();
		}
		else
			cout << "It is NOT a rectangle!!";
	}
	else
		cout << "It is NOT a rectangle!!" << endl;
}