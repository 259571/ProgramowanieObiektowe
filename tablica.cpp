#include <iostream>
#include "tablica.h"
#include "tablica_wysw.h"
#include "menu.h"
#include "pliki.h"
#include "tablica.h"

using namespace std;




void stringcell:: set_wartosc(std::string zdanie)
{
	this->zdanie=zdanie;
}



std::string stringcell:: get_wartosc_string()
{
	return zdanie;
}




void intcell:: set_wartosc(std::string zdanie)
{
	this->liczba=stoi(zdanie);

}


std::string intcell:: get_wartosc_string()
{
	return std::to_string(liczba);
}





int Tablica:: get_wiersze()
{
	return this->wiersze;
}

void Tablica:: set_wiersze(int w)
{
	this->wiersze=w;
}

int Tablica:: get_kolumny()
{
	return this->kolumny;
}

void Tablica:: set_kolumny(int k)
{
	this->kolumny=k;
}

string Tablica:: get_zawartosc_komorek(int x, int y)
{
	return this->tablica[x][y]->get_wartosc_string();
}

void Tablica:: set_zawartosc_komorek(int x, int y, string zaw)
{
	if(!(zaw.find_first_not_of("0123456789\n")==zaw.npos)&&this->typykol[x]!=1)
	{
		return;//tu wyrzuca blad 
	}
	else
	{
		this->tablica[x][y]->set_wartosc(zaw);
	}
}

void Tablica:: set_tablica(cell*** tab)
{
	this->tablica=tab;
}

int Tablica:: get_typy_kol(int jakakol)
{
	return this->typykol[jakakol];
}




int Tablica:: tworz_tablice(int x, int y, int *typykol)
{
	
	// zajmujje miejsce w pamieci na tablice 
	this->tablica = new cell**[x];
	this->wiersze = y;
	this->kolumny = x;
	this->typykol = typykol;

	for (int i = 0; i < x; i++)
	{
		this->tablica[i] = new cell*[y];

		for (int j = 0; j < y; j++) 
			{
				if (typykol[i]==0)
				{
					this->tablica[i][j]=new intcell();
				}	
	 			else
				{
					this->tablica[i][j]=new stringcell();
				}
			}		
	}
	return 0;
}

int Tablica:: zmiana_rozmiaru_tablicy (int nwiersze, int nkolumny)
{

	if (nkolumny<1||nwiersze<1)
	{
		return 1;
	}

	if (nkolumny < (this->kolumny))
	{
		this->kolumny = nkolumny;
	}
	if (nwiersze < (this->wiersze))
	{
		this->wiersze = nwiersze;
	}
	int *ntypykol=new int[nkolumny];
	
	for(int i = 0; i<kolumny;i++)
    {
       	ntypykol[i]=typykol[i];
    }

    for(int i = kolumny; i<nkolumny;i++)
    {
        ntypykol[i]=0;
    }
	Tablica *zmieniona_tab=new Tablica;


	zmieniona_tab->tworz_tablice(nkolumny, nwiersze, ntypykol);

	for (int y=0; y<this->wiersze; y++)
	{
		for (int x=0; x<this->kolumny; x++)
		{
				zmieniona_tab->set_zawartosc_komorek(x, y, this->get_zawartosc_komorek(x, y));
		}
	}
			
	this->tablica = zmieniona_tab->tablica;
	this->wiersze = nwiersze;
	this->kolumny = nkolumny;

	return 0;
}

