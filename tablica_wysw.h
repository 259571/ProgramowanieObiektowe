#pragma once 
#include "tablica.h"
/// @file

/** 
 * @brief program wyswietla tablice 
 * @param[out] tablica program wyswietla tablice
 */ 
void tablica_wyswietlanie (Tablica tablica); 

/** 
 * @brief program tworzy arkusz
 * @param[in] wiersze program pobiera od uzytkownika ilosc wierszy
 * @param[in] kolumny progrma pobiera od uzytkownika ilosc kolumny
 * @param[out] arkusz program zwraca arkusz
 */
Tablica tworz_arkusz();


/** 
 * @brief program pobiera wartosci komurek
 * @param[in] tablica program pobiera od uzytkownka wartosci komorek 
 * @param[out] tablica program zwraca tablice z wprowadzonymi wartosciami komorek
 */
std::string wprowadz_wartosc(int x, int y);

/** 
 * @brief uzytkownik moze zmienic wartosc wybranej komorki
 * @param[in] wiersze Funkcja pobiera wiersz w ktorym bedzie wprowadzana zmiana 
 * @param[in] kolumny Funkcja pobiera kolumne w ktorej bedzie wprowadzana zmiana
 * @param[in,out] wartosc Funca pobiera zawartosc komorki i zamienia ja na nowa 
 */

void zmiana_elementu (Tablica *tablica);

/** 
 * @brief progrma zmienia rozmiar tablicy
 * @param [in,out] nkolumny program pobiera od uzytkownika nowa ilosc kolumny
 * @param [in,out] nwiersze progrma pobiera od uzytkownika nowa ilosc wierszy
 * @param [out] tablica progrma zwraca zmieniona tablice  
 */
void zmiana_rozmiaru (int *nkolumny, int *nwiersze);

/**
 * @brief Funcja wprowadzajaca wartosc za pomoca int 
 */
int wprowadz();

/**
 * @brief Funcja czyszczaca buffor strumienia wyjsciowego
 */
void czysc();


// FUNKCJE MATEMATYCZNE
 
/** 
 * @brief Funcja sumuje dwie wybrane komoreki
 * @param[in] zawartosc program pobiera wartosc wybranych komorek
 * @param[out] wynik program zwraca wynik sumy
 */ 
void suma_kom (Tablica *tablica); 

/** 
 * @brief Funcja odejmuje dwie wybrane komoreki
 * @param[in] zawartosc program pobiera wartosc wybranych komorek
 * @param[out] wynik program zwraca wynik odejmowania
 */ 
void odej_kom (Tablica *tablica); 

/** 
 * @brief Funcja mnozy dwie wybrane komoreki
 * @param[in] zawartosc program pobiera wartosc wybranych komorek
 * @param[out] wynik program zwraca wynik mnozenia
 */ 
void mno_kom (Tablica *tablica); 

/** 
 * @brief Funcja dzieli dwie wybrane komoreki
 * @param[in] zawartosc program pobiera wartosc wybranych komorek
 * @param[out] wynik program zwraca wynik dzialania 
 */ 
void dziel_kom (Tablica *tablica); 

/** 
 * @brief Funcja sumuje wartosci wedlug kolumn 
 * @param[in] tablica program pobiera wartosci wszystkich komorek
 * @param[out] wynik program zwraca sume wedlug kolumn 
 */
void sum_wg_kolumn (Tablica *tablica);

/**
 * @brief Funkcja sumuje wartosci wedlug wierszy
 * @param [in] tablica funcja pobiera wartosci wszystkich komorek
 * @param [out] wynik  funkca zwraca sume wartosci komorek wedlug wierszy 
 */
int sum_wg_wierszy (Tablica *tablica);

/**
 * @brief Funkcja znajduje najwieksza wartosc w kolumnach
 * @param [in] zawartosc Funkcja pobiera zawartosc komorek
 * @param [out] najwieksza Funkcja zwraca najwieksza wartosc komorek
 */

int najwieksza_wartosc(Tablica *tablica);

/**
 * @brief Funkcja znajduje najmniejsza wartosc w kolumnach
 * @param [in] zawartosc Funkcja pobiera zawartosc komorek
 * @param [out] najmniejsza Funkcja zwraca najmniejsza wartosc komorek
 * @param tablica 
 */
int najmniejsza_wartosc(Tablica *tablica);

/**
 * @brief Funkcja znajduje srednia wartosc w kolumnach
 * @param [in] zawartosc Funkcja pobiera zawartosc komorek
 * @param [out] srednia Funkcja zwraca srednia wartosc komorek
 */
double srednia_wartosc(Tablica *tablica);

