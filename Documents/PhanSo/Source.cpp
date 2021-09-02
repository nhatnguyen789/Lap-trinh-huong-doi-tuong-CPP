#include <iostream>
#include <math.h>
#define MAX 2
using namespace std;

struct Fraction
{
	float numerator;
	float denominator;
};
void InputFraction(Fraction *F)
{
	do
	{
		cout << "Input numerator: ";
		cin >> F->numerator;
		cout << "Input denominator: ";
		cin >> F->denominator;
	} while (F->denominator == 0);
}
void ReduceFraction(Fraction *F)
{
	int a = F->numerator;
	int b = F->denominator;
	if (a < 0)
	{
		a = abs(a);
	}
	while (a != b) //tìm UCLN của 2 số 
	{
		a > b ? a -= b : b -= a; //nếu a>b thì a=a-b ngược lại a<b thì b=b-a;
	}
	F->numerator = F->numerator / a;  //lấy tử chia UCLN = a = b bởi vì khi thoát khỏi vòng lặp while thì điều kiện phải là a = b
	F->denominator = F->denominator / a; //lấy mẫu chia UCLN =a = b nên lấy =a là được 
	cout << F->numerator << "/" << F->denominator << endl; //in ra phân số vừa rút gọn
}
void Compare(Fraction F1, Fraction F2)
{
	float a,b;
	a = (F1.numerator / F1.denominator);  
	b = (F2.numerator / F2.denominator);
	if (a==b)
	{
		cout << "the first fraction is equal to the second fraction" << endl;
	}
	else if (a > b)
	{
		cout << "The first fraction ( " << F1.numerator << "/" << F1.denominator << " ) is bigger than the second fraction." << endl;
	}
	else
	{
		cout << "The second fraction ( " << F2.numerator << "/" << F2.denominator << " ) is bigger than the first fraction." << endl;
	}
}
void ReduceToTheSameDenominator(Fraction *F1, Fraction *F2)
{
	int SameDenominator;
	SameDenominator = (F1->denominator) * (F2->denominator);
	F1->numerator = F1->numerator * F2->denominator;
	F2->numerator = F2->numerator * F1->denominator;
	F1->denominator = SameDenominator;
	F2->denominator = SameDenominator;
}
void Calculate(Fraction F1, Fraction F2)
{
	Fraction Sum, Subtract, Multiply, Divide;

	Sum.numerator = F1.numerator + F2.numerator;
	Sum.denominator = F1.denominator;
	cout << " Sum: ";
	ReduceFraction(&Sum);

	Subtract.numerator = F1.numerator - F2.numerator;
	Subtract.denominator = F1.denominator;
	cout << " Subtract: ";
	ReduceFraction(&Subtract);

	Multiply.numerator = F1.numerator * F2.numerator;
	Multiply.denominator = F1.denominator * F2.denominator;
	cout << " Multiply: ";
	ReduceFraction(&Multiply);

	Divide.numerator = F1.numerator * F2.denominator;
	Divide.denominator = F1.denominator * F2.numerator;
	cout << " Divide: ";
	ReduceFraction(&Divide);
}
int main()
{
	Fraction F[MAX];
	int i, n = 1;
	cout << "1. Reduce a fraction: " << endl;
	for (i = 0; i <= n; i++)
	{
		InputFraction(&F[i]);
		cout << "The fraction after reduce is: " << endl;
		cout << "\nF["<< i <<"]= ";
		ReduceFraction(&F[i]);
		cout << endl;
	}
	cout << "\n2. Compare two fractions: " << endl;
	Compare(F[0],F[1]);
	ReduceToTheSameDenominator(&F[0], &F[1]);
	cout << "\n3. Calculate: " << endl;
	Calculate(F[0], F[1]);
	system("pause"); 
} 

//---------giải thích hàm ReduceFraction ----------\\
//Tại mỗi bước lặp nó sẽ kiểm tra giá trị hiện tại của a và b xem thằng nào lớn hơn
/*Ví dụ với hai số a = 7, b = 5
bên trong vòng lặp while(a != b)

L1: a > b = > a = 2, b = 5
L2: b > a = > a = 2, b = 3
L3: b > a = > a = 2, b = 1
L4: a > b = > a = 1, b = 1
L5: a == b = > trả về a hoặc b đều được = > KQ là 1 */