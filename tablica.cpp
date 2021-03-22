#include <iostream>

using namespace std;

int main(void)
{
	
	int x, y;
	cout << "Liczba wierszy: ";
	cin >> x;
	cout << "Liczba kolumn: ";
	cin >> y;


	double** tab = new double* [x];
	for (int i = 0; i < x; ++i)
	{
		tab[i] = new double[y];
		for (int j = 0; j < y; ++j) 
			tab[i][j] = (i + j) ;
	}

	for (int i = 0; i < x; ++i, cout << endl)
		for (int j = 0; j < y; ++j)
			cout << tab[i][j] << '\t';


	return 0;
}