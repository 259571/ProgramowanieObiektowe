#include <iostream>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"


using namespace std;

int opcja;

void menu()
{

	int x = 0;
	cout << "\t MENU" << endl;
	cout << "_______________________" << endl;
	cout << "Wybierz opcje z menu" << endl << endl;
	cout << "1. " << endl;
	cout << "2. " << endl;
	cout << "3. " << endl;
	cout << "4. " << endl;
	cout << "5. " << endl;
	cout << "6. " << endl;
	
	
	cin >> opcja;
	
	switch(opcja)
	{
		case 1:
		{
			cout <<"1. ";
		}
		break;
		
		case 2:
		{
			cout <<"2. ";
		}
		break;
		
		case 3:
		{
			cout <<"3. ";
		}
		break;
		
		case 4:
		{
			cout <<"4. ";
		}
		break;
		
		case 5:
		{
			cout <<"5. ";
		}
		break;
		
		case 6:
		{
			cout <<"6. ";
		}
		break;
		
		default: 
		{
			cout << "Nie ma takiej opcji w menu";
		}
	}

	system ("cls");
}	
	
double** tworz_arkusz()
{
	// pobranie wymiarow tablicy 
	int x, y;
	cout << "Podaj liczbe wierszy: ";
	cin >> x;
	cout << "Podaj liczbe kolumn: ";
	cin >> y;

	return tworz_tablice(x, y);
}
