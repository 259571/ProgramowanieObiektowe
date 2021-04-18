#include <iostream>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"
#include <cstdlib>

using namespace std;

int opcja;

void menu()
{

	int x, y;

	double **arkusz = tworz_arkusz(&x, &y);

	for (;;)
	{

		cout << "\t MENU" << endl;
		cout << "_______________________" << endl;
		cout << "Wybierz opcje z menu" << endl
			 << endl;
		cout << "1. Zmiana rozmiaru tablicy " << endl;
		cout << "2. Zmiana zawartosci tablicy " << endl;
		cout << "3. Dodawanie zawartosci komorek" << endl;
		cout << "4. Odejmowanie zawartosci komorek" << endl;
		cout << "5. Mnozenie zawartosci komorek" << endl;
		cout << "6. Dzielenie zawartosci komorek" << endl;
		cout << "7. Wyscie z programu " << endl;

		cin >> opcja;

		switch (opcja)
		{
		case 1:
		{
			void zmiana_rozmiaru (char znak);
		}
		break;

		case 2:
		{
			void zmiana_elementu (char znak, int x, int y, float tablica[][]);
		}
		break;

		case 3:
		{
			void suma_kom (char znak, int x, int y, int i, int j, float wynik, float tablica[][]);
		}
		break;

		case 4:
		{
			void odej_kom (char znak, int x, int y, int i, int j, float wynik, float tablica[][]);
		}
		break;

		case 5:
		{
			void mno_kom (char znak, int x, int y, int i, int j, float wynik, float tablica[][]);
		}
		break;

		case 6:
		{
			void dziel_kom (char znak, int x, int y, int i, int j, float wynik, float tablica[][]);
		}
		break;

		case 7:
		{
			exit(0);
		}
		break;

		default:
		{
			cout << "Nie ma takiej opcji w menu";
		}
		}

		system("clear");
	}
}

double **tworz_arkusz(int *x, int *y)
{
	// pobranie wymiarow tablicy

	cout << "Podaj liczbe wierszy: ";
	cin >> *x;
	cout << "Podaj liczbe kolumn: ";
	cin >> *y;

	return tworz_tablice(*x, *y);
}
