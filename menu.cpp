#include <iostream>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"
#include "pliki.h"
#include <cstdlib>

using namespace std;

int opcja;


void menu()
{
	
		cout << "\t Witaj uzytkowniku! " << endl << endl;
		cout << "Widzisz przed soba program ktory tworzy arkusz kalkulacyjny." << endl << endl;
		cout << "Mozesz w nim tworzyc i modyfikowac wymiary tablicy" << endl; 
		cout << "oraz przeprowadzic proste działania matematyczne" << endl << endl;
		cout << "Teraz stworz swoja tablice! " << endl << endl;

	Tablica arkusz = tworz_arkusz();

	for (;;)
	{

		cout << "\t MENU" << endl;
		cout << "_______________________" << endl;
		cout << "Wybierz opcje z menu" << endl << endl;	 
		cout << "1. Zmiana rozmiaru tablicy " << endl;
		cout << "2. Zmiana zawartosci tablicy " << endl;
		cout << "3. Wyswietlenie tablicy" << endl;
		cout << "4. Dodawanie zawartosci komorek" << endl;
		cout << "5. Odejmowanie zawartosci komorek" << endl;
		cout << "6. Mnozenie zawartosci komorek" << endl;
		cout << "7. Dzielenie zawartosci komorek" << endl;
		cout << "8. Sumowanie zawartosci wedlug kolumn" << endl;
		cout << "9. Sumowanie zawartosci wedlug wierszy" << endl;
		cout << "10. Zapis tablicy do pliku" << endl;
		cout << "11. Wczytanie tablicy z pliku" << endl;
		cout << "12. Wyscie z programu " << endl;

		opcja = wprowadz();

		system("clear");

		switch (opcja)
		{
		case 1:
		{

			int nwiersze, nkolumny;
			
			cout << "1. Wybrales opcje zmiany rozmiaru tablicy" << endl;

			cout << "Podaj nowa ilosc wierszy: " << endl;
			cin >> nwiersze;
			cout << "Podaj nowa ilosc kolumn: " << endl;
			cin >> nkolumny;
	

			arkusz.zmiana_rozmiaru_tablicy (nwiersze, nkolumny);
		}
		break;

		case 2:
		{
			zmiana_elementu (&arkusz);
		}
		break;

		case 3:
		{
			tablica_wyswietlanie (arkusz);
		}
		break;

		case 4:
		{
			 suma_kom (&arkusz);
		}
		break;

		case 5:
		{
			odej_kom (&arkusz);
		}
		break;

		case 6:
		{
			mno_kom (&arkusz);
		}
		break;

		case 7:
		{
			dziel_kom (&arkusz);
		}
		break;

		case 8:
		{
			sum_wg_kolumn (&arkusz);
		}
		break;

		case 9:
		{
			sum_wg_wierszy (&arkusz);
		}
	
		case 10:
		{
			zapis_danych (&arkusz);
		}
		break;

		case 11:
		{
			wczyt_danych (&arkusz);
		}
		break;

		case 12:
		{
			exit(0);
		}
		break;

		default:
		{
			cout << "Nie ma takiej opcji w menu";
		}
		}

		
	}
}

