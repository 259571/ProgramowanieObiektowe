#pragma once
/// @file

/**
 * @brief Interfejs dla komorki
 */
class cell 
{
public:
    /**
     * @brief Funkcja nadaje wasrtosc komorce
     * @param [out] Wartosc Zostaje nadana wartosc komorce
     */

    virtual void set_wartosc(std::string) = 0;

    /**
     * @brief Funkcja zwraca wartosc komorki w postaci tekstowej
     * @param [in] Wartosc Wartosc zostaje zwrocona w postaci tekstowej
     */
    virtual std::string get_wartosc_string() = 0;
};



/**
 * @brief Klasa opisujaca komorki typu tekstowego
 */
class stringcell : public cell
{
    std::string zdanie;

public:
    /**
 * @brief Funkcja przypisuje komorkce stringowej "-"
 */
    stringcell()
    {
        zdanie = "-";
    }

    /**
 * @brief Funkcja ustawia wartosc komorki
 */
    void set_wartosc(std::string);

    /**
  * @brief Funcja zwraca wartosc komorki stringowej
  */
    std::string get_wartosc_string();
};




/**
 * @brief Klasa opisuje komorki typu liczbowego
 */

class intcell : public cell
{
    int liczba;

public:
    /**
 * @brief Funkcja przypisuje komorce intowej "0"
 */
    intcell()
    {
        liczba = 0;
    }

    /**
 * @brief Funkcja ustawia wartosc komorki
 */
    void set_wartosc(std::string);

    /**
  * @brief Funcja zwraca wartosc komorki stringowej
  */
    std::string get_wartosc_string();
};




/**
 * @brief Klasa opisujaca arkusz
 */
class Tablica
{
private:
    cell ***tablica;
    int wiersze;
    int kolumny;
    int *typykol;

public:
    /**
     * @brief Funkcja tworzy tablice
     * @param [in] kolumny Funkcja pobiera od uzytkownika ilosc kolumn
     * @param [in] wiersze Funkcja pobiera od uzytkownika ilosc wierszy
     * @param [in] typy_kolumn Funcja pobiera od uzytkownika typy kolumn
     * @param [out] tablica Funkcja zwraca tablice 
     */
    int tworz_tablice(int x, int y, int *typykol);

    /**
     * @brief Funcja zmienia wymiary tablicy wedle uznania uzytkownika
     * @param [in] nkolumny Funcja pobiera od uzytkownika nowa ilosc kolumny
     * @param [in] nwiersze Funcja pobiera od uzytkownika nowa ilosc wierszy
     * @param [out] tablica Funcja zwraca nowa tablice
     */
    int zmiana_rozmiaru_tablicy(int nkolumny, int nwiersze);

    /**
     * @brief Funcja zwraca ilosc wierszy
     * @param [in] wiersze Funcja zwraca ilosc wiersze
     */
    int get_wiersze();

    /**
     * @brief Funcja ustawia ilosc wierszy
     * @param [out] wiersze Funcja ustawia ilosc wierszey
     */
    void set_wiersze(int w);

    /**
     * @brief Funcja zwraca ilosc kolumn
     * @param [in] kolumny Funcja zwraca ilosc kolumn
     */
    int get_kolumny();

    /**
     * @brief Funcja ustawia ilosc kolumn
     * @param [out] kolumny Funcja ustawia ilosc kolumn
     */
    void set_kolumny(int k);

    /**
     * @brief Funcja zwraca zawartosc komorek
     * @param [in] zawartosc Funcja zwraca zawartosc komorek
     */
    std::string get_zawartosc_komorek(int x, int y);

    /**
     * @brief Funcja ustawia zawartosc komorek
     * @param [out] zawawrtosc Funca ustawia zawartosc komorek
     */
    void set_zawartosc_komorek(int x, int y, std::string zaw);

    /**
     * @brief Funcja ustawia tablice
     * @param [out] tablica Funcja ustawia tablice
     */
    void set_tablica(cell ***tab);

    /**
     * @brief Funcja zwraca typy kolumn
     * @param [in] jaka_kolumna Funcja zwraca typy kolumn
     */
    int get_typy_kol(int jakakol);
};