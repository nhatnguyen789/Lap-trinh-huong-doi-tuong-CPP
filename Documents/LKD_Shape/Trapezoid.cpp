#include "Trapezoid.h"
void Trapezoid::InputShape()
{
	ShapePoint::InputShape();
}

void Trapezoid::CheckingShape()
{
	ShapePoint::CheckingShape();
	if ((A.GetY() == B.GetY() && C.GetY() == D.GetY() || (B.GetY() == C.GetY() && D.GetY() == A.GetY())))
	{
		if (A.Distance(B) < C.Distance(D) && B.Distance(C) == A.Distance(D))
		{
			cout << "It is a SCALE trapezoid! With information of coordinate: " << endl;
			cout << "A ";
			A.PrintInfor();
			cout << "B ";
			B.PrintInfor();
			cout << "C ";
			C.PrintInfor();
			cout << "D ";
			D.PrintInfor();
		}
		else if (A.Distance(B) < C.Distance(D) && B.Distance(C) != A.Distance(D))
		{
			{
				cout << "It is a NORMAL trapezoid! With information of coordinate: " << endl;
				cout << "A ";
				A.PrintInfor();
				cout << "B ";
				B.PrintInfor();
				cout << "C ";
				C.PrintInfor();
				cout << "D ";
				D.PrintInfor();
			}
		}
		else
			cout << "It is NOT a trapezoid!!";
	}
	else
		cout << "Fours point of you make a shape does not have side parallel with coordinate axis." << endl;
}