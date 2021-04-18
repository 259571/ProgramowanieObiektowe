#include <iostream>

using namespace std;

int wprowadzenie()
{
	cout << "Patrzysz teraz na program, ktory jest arkuszem kalkulacyjnym" << endl;
	cout << "Mozesz w nim edytowac i towrzyc arkusze" << endl;
	
	
	return 0;
}


void wprowadz_wartosc(double** tablica, int x, int y)
{
	cout << "Podaj wartosc komorki: "  << x << ", " << y << ": ";
				cin >> tablica[x][y];

}

void tablica_wysw (double** tablica, int x, int y)
{
	// wyswietlam tablice
	for (int i = 0; i < x; ++i, cout << endl)
		for (int j = 0; j < y; ++j)
			cout << tablica[i][j] << '\t';
}

void zmiana_rozmiaru (char znak)
{
	cout << "Wybrales opcje zmiany rozmiaru tablicy" << endl;
			cout << "Jesli chcesz kontynuowac nacisnij T, jesli chcesz wrocic do menu nacisnij N" << endl;
			cin >> znak;
			
				if (znak=='t' || znak=='T')
					cout << "Podaj nowe wymary tablicy" << endl;
				

}

void zmiana_elementu (char znak, int x, int y, float tablica[][])
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




void suma_kom (char znak, int x, int y, int i, int j, float wynik, float tablica[][])
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

void odej_kom (char znak, int x, int y, int i, int j, float wynik, float tablica[][])
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


void mno_kom (char znak, int x, int y, int i, int j, float wynik, float tablica[][])
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


void dziel_kom (char znak, int x, int y, int i, int j, float wynik, float tablica[][])

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