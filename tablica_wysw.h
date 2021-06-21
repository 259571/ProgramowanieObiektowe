#pragma once 
#include "tablica.h"
/// @file

/** 
 * @brief program wyswietla tablice 
 * @param[out] tablica program dostaje tablice do wyswietlenia
 */ 
void tablica_wyswietlanie (Tablica tablica); 

/** 
 * @brief program tworzy arkusz
 * @param[in,out] wiersze program pobiera od uzytkownika ilosc wierszy
 * @param[in,out] kolumny progrma pobiera od uzytkownika ilosc kolumny
 * @param[in,out] arkusz program zwraca arkusz
 */
Tablica tworz_arkusz();


/** 
 * @brief program pobiera wartosci komurek
 * @param[in,out] tablica program pobiera od uzytkownka wartosci komorek 
 * @param[in,out] tablica program zwraca tablice z wprowadzonymi wartosciami komorek
 */
std::string wprowadz_wartosc(int x, int y);

/** 
 * @brief uzytkownik moze zmienic wartosc wybranej komorki
 * @param[in] wiersze Funkcja pobiera wiersz w ktorym bedzie wprowadzana zmiana 
 * @param[in] kolumny Funkcja pobiera kolumne w ktorej bedzie wprowadzana zmiana
 * @param[in,out] zawartosc Funca pobiera zawartosc komorki i zamienia ja na nowa 
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
 * @brief suma dwoch wybranych komorek
 * @param[in] zawartosc program pobiera wartosc wybranej komoreki
 * @param[out] wynik program zwraca wynik dzialania 
 */ 
void suma_kom (Tablica *tablica); 

/** 
 * @brief odemowanie dwoch wybranych komorek
 * @param[in] zawartosc program pobiera wartosc wybranej komoreki
 * @param[out] wynik program zwraca wynik dzialania 
 */ 
void odej_kom (Tablica *tablica); 

/** 
 * @brief mnozenie dwoch wybranych komorek
 * @param[in] zawartosc program pobiera wartosc wybranej komoreki
 * @param[out] wynik program zwraca wynik dzialania 
 */ 
void mno_kom (Tablica *tablica); 

/** 
 * @brief dzielenie dwoch wybranych komorek
 * @param[in] zawartosc program pobiera wartosc wybranej komoreki
 * @param[out] wynik program zwraca wynik dzialania 
 */ 
void dziel_kom (Tablica *tablica); 

/** 
 * @brief sumowanie wedlug kolumn 
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
 * @brief Funcja pobierajaca wartosc int
 */
int wprowadz();

/**
 * @brief Funcja czyszczaca
 */
void czysc();
