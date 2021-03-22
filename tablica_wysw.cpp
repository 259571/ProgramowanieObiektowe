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