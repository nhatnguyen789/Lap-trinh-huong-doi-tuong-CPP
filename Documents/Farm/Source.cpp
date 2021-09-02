#include<iostream>
#include<string>
#include"Cow.h"
#include"Goat.h"
#include"Lamb.h"
using namespace std;

int functionTable()
{
	int choice;
	cout << " -----------Farm Information------------";
	cout << "0.exit" << endl;
	cout << "1.Show number of baby-cows:" << endl;
	cout << "2.Show number of baby-goats:" << endl;
	cout << "3.show number of baby-lambs:" << endl;
	cout << "4.volume of cow's milk int the harvest:" << endl;
	cout << "5.volume of goat's milk int the harvest:" << endl;
	cout << "6.volume of lamb's milk int the harvest:" << endl;
	cout << "7.the sound of cows when they are hungry:" << endl;
	cout << "8.the sound of goats when they are hungry:" << endl;
	cout << "9.the sound of lamb when they are hungry:" << endl;
	cout << "input your choice:" << endl;
		do 
		{
			cin >> choice;
			if (choice > 9 || choice < 0)
			      cout << "Our farm do not have this function yet! Please try again: ";
		}while (choice > 9 || choice < 0);
		cin.ignore();   // dùng để đọc và loại bỏ n kí tự còn trong bộ nhớ đệm
		return choice;
}
int main()
{
	int choice;
	Cow Cow;
	Goat Goat;
	Lamb Lamb;
	cout << "- Input number of COWs that you want to put into your farm: ";
	cin >> Cow.iCow;
	cout << "\n- Input number of GOATs that you want to put into your farm: ";
	cin >> Goat.iGoat;
	cout << "\n- Input number of LAMBs that you want to put into your farm: ";
	cin >> Lamb.iLamb;
	cout << "\n -------> AFTER ONE HARVEST <------- " << endl;
	do
	{
		cout << endl;
		choice = functionTable();
		switch (choice)
		{
		case 1:
		{
			cout << "\nNumber of BABY-COWs: " << Cow.getBaby(Cow.iCow) << endl;
			break;
		}
		case 2:
		{
			cout << "\nNumber of BABY-GOATs: " << Goat.getBaby(Goat.iGoat) << endl;
			break;
		}
		case 3:
		{
			cout << "\nNumber of BABY-LAMBs: " << Lamb.getBaby(Lamb.iLamb) << endl;
			break;
		}
		case 4:
		{
			cout << "\nVolume of COW's milk in this harvest: " << Cow.getVmilk(Cow.iCow) << " lit" << endl; //thế tích sữa bò 
			break;
		}
		case 5:
		{
			cout << "\nVolume of GOAT's milk in this harvest: " << Goat.getVmilk(Goat.iGoat) << " lit" << endl;//thể tích sữa dê 
			break;
		}
		case 6:
		{
			cout << "\nVolume of LAMB's milk in this harvest: " << Lamb.getVmilk(Lamb.iLamb) << " lit" << endl; //thể tích sữa cừu
			break;
		}
		case 7:
		{
			cout << "\nThe COWs say: " << Cow.getBawl() << endl;
			break;
		}
		case 8:
		{
			cout << "\nThe GOATs say: " << Goat.getBawl() << endl;
			break;
		}
		case 9:
		{
			cout << "\nThe LAMBs say: " << Lamb.getBawl() << endl;
			break;
		}
		case 0:
		{
			exit(0);
		}
		}
	} while (choice != 0);
}