#include <iostream>

using namespace std;

int main(void)
{
	// pobranie wymiarow tablicy 
	int x, y;
	cout << "Podaj liczbe wierszy: ";
	cin >> x;
	cout << "Podaj liczbe kolumn: ";
	cin >> y;

	// zajmujje miejsce w pamieci na tablice 
	double** tab = new double* [x];
	for (int i = 0; i < x; ++i)
	{
	// uzytkownik wypelnia tablice 
		tab[i] = new double[y];
		for (int j = 0; j < y; ++j) 
			{
				cout << "Podaj wartosc komorki: "  << i << ", " << j << ": ";
				cin >> tab[i][j];
			}
			
	}
	// wyswietlam tablice
	for (int i = 0; i < x; ++i, cout << endl)
		for (int j = 0; j < y; ++j)
			cout << tab[i][j] << '\t';


	return 0;
}