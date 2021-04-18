#include <iostream>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"
#include <cstdlib>

using namespace std;

int opcja;

void menu()
{

	int x = 0, y = 0, i = 0, j = 0, wynik = 0;
	char znak ;

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
			cout << "Wybrales opcje zmiany rozmiaru tablicy" << endl;
			cout << "Jesli chcesz kontynuowac nacisnij T, jesli chcesz wrocic do menu nacisnij N" << endl;
			cin >> znak;
			
				if (znak=='t' || znak=='T')
					cout << "Podaj nowe wymary tablicy" << endl;
				
				else 
					break;


		}
		break;

		case 2:
		{
			cout << "Wybrales opcje zmiany zawartosci tablicy" << endl;;
			cout << "Jesli chcesz kontynuowac nacisnij T, jesli chcesz wrocic do menu nacisnij N" << endl;
			cin >> znak;
			
			if (znak=='t' || znak=='T')
					cout << "Zawartosc ktorej komorki chcesz zmienic ?" << endl;
					cin >> x;
					cin >> y;
					cout << "Wprowadz nowa wartosc komorki" << endl;
					cin >> tablica[x][y];
				
				 

		}
		break;

		case 3:
		{
			cout << "3. Wybrales opje dodawania zawartosci komorek" << endl;
			cout << "Jesli chcesz kontynuowac nacisnij T, jesli chcesz wrocic do menu nacisnij N" << endl;
			cin >> znak;
			
				if (znak=='t' || znak=='T')
					cout << "Podaj wspolrzedne pierwszej komorki" << endl;
					cin >> x;
					cin >> y;
					cout << "Podaj wspolrzedne drugiej komorki" << endl;
					cin >> i;
					cin >> j;
					cout << "Suma podanych komorek to: " << wynik = tablica[x][y] + tablica[i][j];
		}
		break;

		case 4:
		{
			cout << "4. Wybrales opje odemjowania zawartosci komorek"<< endl;
			cout << "Jesli chcesz kontynuowac nacisnij T, jesli chcesz wrocic do menu nacisnij N" << endl;
			cin >> znak;
			
				if (znak=='t' || znak=='T')
					cout << "Podaj wspolrzedne pierwszej komorki" << endl;
					cin >> x;
					cin >> y;
					cout << "Podaj wspolrzedne drugiej komorki" << endl;
					cin >> i;
					cin >> j;
					cout << "Odemowanie podanych komorek to: " << wynik = tablica[x][y] - tablica[i][j];


		}
		break;

		case 5:
		{
			cout << "5. Wybrales opje mnozenia zawartosci komorek"<< endl;
			cout << "Jesli chcesz kontynuowac nacisnij T, jesli chcesz wrocic do menu nacisnij N" << endl;
			cin >> znak;
			
				if (znak=='t' || znak=='T')
					cout << "Podaj wspolrzedne pierwszej komorki" << endl;
					cin >> x;
					cin >> y;
					cout << "Podaj wspolrzedne drugiej komorki" << endl;
					cin >> i;
					cin >> j;
					cout << "Mnozenie podanych komorek to: " << wynik = tablica[x][y] * tablica[i][j];


		}
		break;

		case 6:
		{
			cout << "6. Wybrales opje dzielenia zawartosci komorek"<< endl;
			cout << "Jesli chcesz kontynuowac nacisnij T, jesli chcesz wrocic do menu nacisnij N" << endl;
			cin >> znak;
			
				if (znak=='t' || znak=='T')
					cout << "Podaj wspolrzedne pierwszej komorki" << endl;
					cin >> x;
					cin >> y;
					cout << "Podaj wspolrzedne drugiej komorki" << endl;
					cin >> i;
					cin >> j;
					cout << "Dzielenie podanych komorek to: " << wynik = tablica[x][y] / tablica[i][j];

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
