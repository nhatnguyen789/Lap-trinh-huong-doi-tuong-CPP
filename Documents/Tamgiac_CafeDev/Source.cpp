#include<iostream>
#include"TamGiac.h"
using namespace std;
#define MAX 3

int main()
{
	float x = 2, y = 2, k = 3, h = 30;
   TamGiac TG[MAX]; //constructor 3 angle
   for (int i = 0; i < MAX; i++)
   {
	   cout << "---------- Triangle Solve---------" << endl;
	   TG[i].Input();
	   TG[i].Output();
   }
   TG[0].MoveTamGiac(x, y);
   TG[0].Output();
   TG[0].ZoomTamGiac(k);
   TG[0].Output();
   TG[0].RotateTamGiac(h);
   TG[0].Output();

   TG[1].MoveTamGiac(x, y);
   TG[1].Output();
   TG[1].ZoomTamGiac(k);
   TG[1].Output();
   TG[1].RotateTamGiac(h);
   TG[1].Output();

   TG[2].MoveTamGiac(x, y);
   TG[2].Output();
   TG[2].ZoomTamGiac(k);
   TG[2].Output();
   TG[2].RotateTamGiac(h);
   TG[2].Output();
}