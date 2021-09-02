#include "Cattle.h"
#include "Cow.h"
#include "Goat.h"
#include "Lamb.h"
using namespace std;

int functionTable()
{
	int choice;
	cout << "---------------- FARM MANAGEMENT---------------" << endl;
	cout << "1. Show number of BABY-COWs. " << endl; // số lượng gia súc có thể sinh con
	cout << "2. Show number of BABY-GOATs. " << endl;
	cout << "3. Show number of BABY-LAMBs. " << endl;
	cout << "4. Volume of COW's milk in this harvest. " << endl; //thế tích sữa 
	cout << "5. Volume of GOAT's milk in this harvest. " << endl;
	cout << "6. Volume of LAMB's milk in this harvest. " << endl;
	cout << "7. the COW's sound when they are hungry :/ " << endl; //tiếng kêu khi đói 
	cout << "8. the GOAT's sound when they are hungry:/ " << endl;
	cout << "9. the LAMB's sound when they are hungry:/ " << endl;
	cout << "_________________________________________________" << endl;
	cout << "0. Exit." << endl;
	cout << "\nYour choice: ";
	do
	{
		cin >> choice;
		if (choice > 9 || choice < 0)
			cout << "Our farm do not have this function yet! Please choose again: ";
	} while (choice > 9 || choice < 0);
	cin.ignore();
	return choice;
}

int main()
{
	int choice;
	Cattle* Cattle[2];
	Cattle[0] = new Cow();
	Cattle[0]->setAmount();
	Cattle[1] = new Goat();
	Cattle[1]->setAmount();
	Cattle[2] = new Lamb();
	Cattle[2]->setAmount();

	cout << "\n -->>>>>>>>>>>>> AFTER ONE HARVEST <<<<<<<<<<<<<<-- " << endl;
	do
	{
		cout << endl;
		choice = functionTable();
		switch (choice)
		{
		case 1:
		{
			cout << "\nNumber of BABY-COWs: " << Cattle[0]->getPregnant(Cattle[0]->getAmount()) << endl;
			break;
		}
		case 2:
		{
			cout << "\nNumber of BABY-GOATs: " << Cattle[1]->getPregnant(Cattle[1]->getAmount()) << endl;
			break;
		}
		case 3:
		{
			cout << "\nNumber of BABY-LAMBs: " << Cattle[2]->getPregnant(Cattle[2]->getAmount()) << endl;
			break;
		}
		case 4:
		{
			cout << "\nVolume of COW's milk in this harvest: " << Cattle[0]->getVmilk(Cattle[0]->getAmount()) << " liter(s)" << endl;
			break;
		}
		case 5:
		{
			cout << "\nVolume of GOAT's milk in this harvest: " << Cattle[1]->getVmilk(Cattle[1]->getAmount()) << " liter(s)" << endl;
			break;
		}
		case 6:
		{
			cout << "\nVolume of LAMB's milk in this harvest: " << Cattle[2]->getVmilk(Cattle[2]->getAmount()) << " liter(s)" << endl;
			break;
		}
		case 7:
		{
			cout << "\nThe COWs sound: " << Cattle[0]->getBawl() << endl;
			break;
		}
		case 8:
		{
			cout << "\nThe GOATs sound: " << Cattle[1]->getBawl() << endl;
			break;
		}
		case 9:
		{
			cout << "\nThe LAMBs sound: " << Cattle[2]->getBawl() << endl;
			break;
		}
		case 0:
		{
			exit(0);
		}
		}
	} while (choice != 0);
}