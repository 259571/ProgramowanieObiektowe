#pragma once 
#include "tablica.h"
/// @file

/** "wczyt_danych" tworzy arkusz o podanych rozmiarach, a jego zawartosc pobiera z pliku 
 *  @param[in,out] tablica program dostaje arkusz do edycji
 */
int wczyt_danych (Tablica *tablica);

/** "zapis_danych" wielkosc oraz zawartosc arkusza zostaje zapisana do pliku 
 *  @param[in] tablica program dostaje arkusz do podgladu
 */
int zapis_danych (Tablica *tablica);