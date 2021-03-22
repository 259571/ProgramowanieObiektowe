#include <iostream>
#include "tablica.h"
#include "tablica_wysw.h"

using namespace std;

double** tworz_tablice(int x, int y)
{
	
	// zajmujje miejsce w pamieci na tablice 
	double** tab = new double* [x];
	for (int i = 0; i < x; ++i)
	{
	// uzytkownik wypelnia tablice 
		tab[i] = new double[y];
		for (int j = 0; j < y; ++j) 
			{
				wprowadz_wartosc(tab, i, j);
	
			}		
	}
	


	return 0;
}