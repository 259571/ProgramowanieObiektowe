#include <iostream>
#include "menu.h" 
#include "tablica.h"
#include "pliki.h"
#include <fstream>

using namespace std;

int zapis_danych (Tablica *tablica)
{
    ofstream plik("tab.csv");

    if(plik.good())
    {
        plik << tablica->get_kolumny() << endl;
        plik << tablica->get_wiersze() << endl;

        for (int i=0; i<tablica->get_kolumny(); i++)
        {
            plik << tablica->get_typy_kol(i) << " ";
        } 
        plik << endl;

        for (int i=0; i<tablica->get_wiersze(); i++)
        {
            for(int j=0; j<tablica->get_kolumny(); j++)
            {
                plik << tablica->get_zawartosc_komorek(j, i) << " ";
            }
            plik << endl;
        }
        plik.close();
        return 1;
    }
    else
    {
        plik.close();
        return 0;
    }

};


int wczyt_danych (Tablica *tablica)
{
    ifstream plik("tab.csv");

    if(plik.good())
    {
        int kolumny, wiersze;

        plik >> kolumny;
        plik >> wiersze;
        int *typykol=new int[kolumny];

        for(int i; i<kolumny; i++)
        {
            plik >> typykol[i];
        }
        tablica->tworz_tablice(wiersze, kolumny, typykol);

        string buf;
        for(int i=0; i<wiersze; i++)
        {
            for(int j=0; j<kolumny; j++)
            {
                plik >> buf;
                tablica->set_zawartosc_komorek(j, i, buf);
            }
        }
        plik.close();
        return 1;
    }
    else
    {
        plik.close();
        return 0;
    }
}

