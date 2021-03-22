#include <iostream>
using namespace std;
int main(void)
{
	
	int x, y;
	cout << "Liczba wierszy: ";
	cin >> x;
	cout << "Liczba kolumn: ";
	cin >> y;


	double** tab2 = new double* [x];
	for (int i = 0; i < x; ++i)
	{
		tab2[i] = new double[y];
		for (int j = 0; j < y; ++j) 
			tab2[i][j] = (i + j) / 10.0;
	}

	for (int i = 0; i < x; ++i, cout << endl)
		for (int j = 0; j < y; ++j)
			cout << tab2[i][j] << '\t';


	return 0;
}