#include<iostream>
#include"Point.h"
using namespace std;
const int Max = 30;

int main()
{
	int i, j, n, imax, jmax, imin, jmin;
	double maxDistance = 0, minDistance;
	Point P[Max];

	cout << "How many point in the Point plane? ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "\nPoint " << i + 1 << " :" << endl;
		P[i].SetPoint();
	}
	minDistance = P[0].Distance(P[1]);
	cout << "\n- information of Point:" << endl;
	for (i = 0; i < n; i++)
	{
		cout << endl;
		cout << "Point " << i + 1 << ": ";
		P[i].PrintInfor();
		for (j = i + 1; j < n - 1; j++)
		{
			if (P[i].Distance(P[j]) >= maxDistance)
			{
				maxDistance = P[i].Distance(P[j]);
				imax = i + 1;
				jmax = j + 1;
			}
			if (P[i].Distance(P[j]) <= minDistance)
			{
				minDistance = P[i].Distance(P[j]);
				imin = i + 1;
				jmin = j + 1;
			}
		}
	}
	cout << endl;
	cout << "\n - The biggest distance is: " << maxDistance << " (from point " << imax << " to point " << jmax << ")" << endl;
	cout << "\n - The smallest distance is: " << minDistance << " (from point " << imin << " to point " << jmin << ")" << endl;
	system("pause");
	return 0;
}