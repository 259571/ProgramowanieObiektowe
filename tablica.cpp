#include <iostrema>

using namespace std;

double tworzenie(int x, int y)
{
	double tablica = new double[x];
	for (int i = 0; i<y: i++)
	{
		tablica[i] = new double[y];
	}
	return tablica;
}

void zmiania_danych()
{
	int x, y;
	cout << " Ktora komorke chcesz zmienic? " << endl;
	cin >> x;
	cin >> y;
	cout << "Na jaka wartosc chcesz zmienic wybrana komorke? " << endl;
	cin >> tablica[x][y]
	
}
