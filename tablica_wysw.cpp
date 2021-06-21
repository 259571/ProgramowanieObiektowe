#include <iostream>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"
#include "pliki.h"

using namespace std;

// FUNCJE ZWIAZANE Z TABLICA

void tablica_wyswietlanie(Tablica tablica)
{
	// wyswietlam tablice
	for (int i = 0; i < tablica.get_wiersze(); ++i, cout << endl)
	{
		for (int j = 0; j < tablica.get_kolumny(); ++j)
		{
			cout << tablica.get_zawartosc_komorek(j, i) << '\t';
		}
		cout << endl;
	}
}

Tablica tworz_arkusz()
{
	// pobranie wymiarow tablicy
	int x, y;
	Tablica arkusz;
	cout << "Podaj liczbe wierszy: ";
	y = wprowadz();
	cout << "Podaj liczbe kolumn: ";
	x = wprowadz();
	int *typykol = new int[x];
	for (int i = 0; i < x; i++)
	{
		cout << "Jaka ma byc kolumna [" << i << "]. 0-int, 1-sting" << endl;
		typykol[i] = wprowadz();
	}
	arkusz.tworz_tablice(x, y, typykol);

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			arkusz.set_zawartosc_komorek(j, i, wprowadz_wartosc(j, i));
		}
	}
	return arkusz;
}

string wprowadz_wartosc(int x, int y)
{

	string wartosc;
	cout << "Podaj wartosc komorki: [" << x << "], [" << y << "]: ";
	cin >> wartosc;
	return wartosc;
}

int wprowadz()
{
	int x;
	cin >> x;
	while (!cin)
	{
		czysc();
		cin >> x;
	}
	return x;
}

void czysc()
{
	cin.clear();
	cin.ignore(1000, '\n');
}

void zmiana_rozmiaru(int *nwiersze, int *nkolumny)
{
	cout << "1. Wybrales opcje zmiany rozmiaru tablicy" << endl;

	cout << "Podaj nowa ilosc wierszy: " << endl;
	cin >> *nwiersze;
	cout << "Podaj nowa ilosc kolumn: " << endl;
	cin >> *nkolumny;
}

void zmiana_elementu(Tablica *tablica)
{
	int ktorakolumna, ktorywiersz;
	cout << "2. Wybrales opcje zmiany zawartosci komorek tablicy" << endl;
	;

	cout << "Zawartosc ktorej komorki chcesz zmienic(kolumna, wiersz) ?" << endl;
	cin >> ktorywiersz;
	cin >> ktorakolumna;

	tablica->set_zawartosc_komorek(ktorywiersz, ktorakolumna, wprowadz_wartosc(ktorywiersz, ktorakolumna));
}

// FUNKCJE MATEMATYCZNE

void suma_kom(Tablica *tablica)
{
	int x, y, i, j;
	double wynik;
	cout << "3. Wybrales opje dodawania zawartosci komorek" << endl;

	cout << "Podaj wspolrzedne pierwszej komorki" << endl;
	cin >> x;
	cin >> y;
	cout << "Podaj wspolrzedne drugiej komorki" << endl;
	cin >> i;
	cin >> j;

	if ((*tablica).get_typy_kol(x) == 0 && (*tablica).get_typy_kol(i) == 0)
	{
		wynik = stod(tablica->get_zawartosc_komorek(x, y)) + stod(tablica->get_zawartosc_komorek(i, j));
		cout << "Suma podanych komorek to: " << wynik;
	}

	else
	{
		cout << "Podane komorki nie sa intami" << endl;
	}
}

void odej_kom(Tablica *tablica)
{
	int x, y, i, j;
	double wynik;
	cout << "4. Wybrales opje odemjowania zawartosci komorek" << endl;

	cout << "Podaj wspolrzedne pierwszej komorki" << endl;
	cin >> x;
	cin >> y;
	cout << "Podaj wspolrzedne drugiej komorki" << endl;
	cin >> i;
	cin >> j;

	if ((*tablica).get_typy_kol(x) == 0 && (*tablica).get_typy_kol(i) == 0)
	{
		wynik = stod(tablica->get_zawartosc_komorek(x, y)) - stod(tablica->get_zawartosc_komorek(i, j));
		cout << "Roznica podanych komorek to: " << wynik;
	}

	else
	{
		cout << "Podane komorki nie sa intami" << endl;
	}
}

void mno_kom(Tablica *tablica)
{
	int x, y, i, j;
	double wynik;
	cout << "5. Wybrales opje mnozenia zawartosci komorek" << endl;

	cout << "Podaj wspolrzedne pierwszej komorki" << endl;
	cin >> x;
	cin >> y;
	cout << "Podaj wspolrzedne drugiej komorki" << endl;
	cin >> i;
	cin >> j;

	if ((*tablica).get_typy_kol(x) == 0 && (*tablica).get_typy_kol(i) == 0)
	{
		wynik = stod(tablica->get_zawartosc_komorek(x, y)) * stod(tablica->get_zawartosc_komorek(i, j));
		cout << "Mnozenie podanych komorek to: " << wynik;
	}

	else
	{
		cout << "Podane komorki nie sa intami" << endl;
	}
}

void dziel_kom(Tablica *tablica)

{
	int x, y, i, j;
	double wynik;
	cout << "6. Wybrales opje dzielenia zawartosci komorek" << endl;

	cout << "Podaj wspolrzedne pierwszej komorki" << endl;
	cin >> x;
	cin >> y;
	cout << "Podaj wspolrzedne drugiej komorki" << endl;
	cin >> i;
	cin >> j;

	if ((*tablica).get_typy_kol(x) == 0 && (*tablica).get_typy_kol(i) == 0)
	{
		if (stod(tablica->get_zawartosc_komorek(i, j)) != 0)
		{
			wynik = stod(tablica->get_zawartosc_komorek(x, y)) / stod(tablica->get_zawartosc_komorek(i, j));
			cout << "Dzielenie podanych komorek to: " << wynik;
		}
		else
		{
			cout << "Pamietaj cholero nie dziel przez zero" << endl;
		}
	}

	else
	{
		cout << "Podane komorki nie sa intami" << endl;
	}
}

void sum_wg_kolumn(Tablica *tablica)
{
	int sumak = 0;

	for (int i = 0; i < tablica->get_kolumny(); i++)
	{
		sumak = 0;
		if (tablica->get_typy_kol(i) == 0)
		{
			for (int j = 0; j < tablica->get_wiersze(); j++)
			{
				sumak += stoi(tablica->get_zawartosc_komorek(i, j));
			}
			cout << "Suma wartosci kolumny [" << i << "] wynosi: " << sumak << endl;
		}
		else
		{
			cout << "Kolumna nr [" << i << "] nie jest intowa" << endl;
		}
	}
}

int sum_wg_wierszy(Tablica *tablica)
{
	int sumaw = 0, sprawdzanie = 0;
	for (int j = 0; j < tablica->get_wiersze(); j++)
	{
		for (int i = 0; i < tablica->get_kolumny(); i++)
		{
			if (tablica->get_typy_kol(i) == 0)
			{
				sumaw += stoi(tablica->get_zawartosc_komorek(i, j));
			}
			else
			{
				sprawdzanie++;
			}
		}

		if (sprawdzanie == tablica->get_kolumny())
		{
			std::cout << "W podanym wierszu nie ma liczb"
					  << "\n";
		}
		else
		{
			cout << "W wierszu [" << j << "] suma wartosci komorek wynosi: " << sumaw << endl;
		}
		sumaw = 0;
		sprawdzanie = 0;
	}

	return 0;
}

int najwieksza_wartosc(Tablica *tablica)
{

	for (int i = 0; i < tablica->get_kolumny(); i++)
	{

		if (tablica->get_typy_kol(i) == 0)
		{
			int max = stoi(tablica->get_zawartosc_komorek(i, 0));
			for (int j = 0; j < tablica->get_wiersze(); j++)
			{
				if (max < stoi(tablica->get_zawartosc_komorek(i, j)))
				{
					max = stoi(tablica->get_zawartosc_komorek(i, j));
				}
			}
			cout << "Najwieksza wartosc w kolumnie nr [" << i << "] wynosi: " << max << endl;
		}
	}
	return 0;
}

int najmniejsza_wartosc(Tablica *tablica)
{

	for (int i = 0; i < tablica->get_kolumny(); i++)
	{
		if (tablica->get_typy_kol(i) == 0)
		{
		int min = stoi(tablica->get_zawartosc_komorek(i, 0));
			for (int j = 0; j < tablica->get_wiersze(); j++)
			{
				if (min > stoi(tablica->get_zawartosc_komorek(i, j)))
				{
					min = stoi(tablica->get_zawartosc_komorek(i, j));
				}
			}
			cout << "Najmniejsza wartosc w kolumnie nr [" << i << "] wynosi: " << min << endl;
		}
	}
	return 0;
}

double srednia_wartosc(Tablica *tablica)
{

	for (int i = 0; i < tablica->get_kolumny(); i++)
	{
		double srednia = 0;
		if (tablica->get_typy_kol(i) == 0)
		{
			for (int j = 0; j < tablica->get_wiersze(); j++)
			{
				srednia += stoi(tablica->get_zawartosc_komorek(i, j));
			}
			cout << "Srednia wartosc kolumny nr [" << i << "] wynosi: " << srednia / tablica->get_wiersze() << endl;
		}
	}
	return 0;
}
