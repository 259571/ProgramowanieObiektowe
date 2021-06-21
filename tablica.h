#pragma once 
/// @file

class cell
{
public: 
    /**
     * @brief Funkcja nadaje wasrtosc komorce
     * @param [out] Wartosc Zostaje nadana wartosc komorce
     */
    
    virtual void set_wartosc(std::string)=0;

    /**
     * @brief Funckaj pobiera wartosc komorki
     * @param [in] Wartosc Wartosc zostaje pobrana z komorki
     */
    virtual std::string get_wartosc_string()=0;
};




class stringcell : public cell
{
    std::string zdanie;
public:
    
/**
 * @brief Funkcja przypisuje podstawowa wartosc komorek typu string
 */
    stringcell()
    {
        zdanie="-";
    }
    
/**
 * @brief Funkcja ustawia wartosc komorki
 */
    void set_wartosc(std::string);
 
 /**
  * @brief Funcja pobiera wartosc komorki stringowej
  */
    std::string get_wartosc_string();
};




class intcell : public cell
{
    int liczba;
public:
 
 /**
 * @brief Funkcja przypisuje podstawowa wartosc komorek typu int
 */
    intcell()
    {
        liczba=0;
    }

/**
 * @brief Funkcja ustawia wartosc komorki
 */
    void set_wartosc(std::string);
    
/**
  * @brief Funcja pobiera wartosc komorki stringowej
  */
    std::string get_wartosc_string(); 
};




class Tablica
{
private:
    cell*** tablica;
    int wiersze;
    int kolumny;
    int* typykol;
public:

    /**
     * @brief Funkcja tworzy tablice
     * @param [in] kolumny Funkcja pobiera ilosc kolumn
     * @param [in] wiersze Funkcja pobiera ilosc wierszy
     * @param [in] typy_kolumn Funcja pobiera typy kolumn

     */
    int tworz_tablice(int x, int y, int *typykol);
    
    //void zmiana_rozmiaru ();

    /**
     * @brief Funcja zmienia wymiary tablicy wedle uznania uzytkownika
     * @param [in] nkolumny Funcja pobiera nowa ilosc kolumny
     * @param [in] nwiersze Funcja pobiera nowa ilosc wierszy
     * @param [out] tablica Funcja zwraca nowa tablice
     */
    int zmiana_rozmiaru_tablicy (int nkolumny, int nwiersze);

    /**
     * @brief Funcja pobiera ilosc wierszy
     * @param [in] wiersze Funcja pobiera ilosc wiersze
     */
    int get_wiersze();

    /**
     * @brief Funcja ustawia ilosc wierszy
     * @param [out] wiersze Funcja ustawia ilosc wierszey
     */
    void set_wiersze(int w);

     /**
     * @brief Funcja pobiera ilosc kolumn
     * @param [in] kolumny Funcja pobiera ilosc kolumn
     */
    int get_kolumny();

     /**
     * @brief Funcja ustawia ilosc kolumn
     * @param [out] kolumny Funcja ustawia ilosc kolumn
     */
    void set_kolumny(int k);

    /**
     * @brief Funcja pobiera zawartosc komorek
     * @param [in] zawartosc Funcja pobiera zawartosc komorek
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
    void set_tablica(cell*** tab);

    /**
     * @brief Funcja pobiera typy kolumn
     * @param [in] jaka_kolumna Funcja pobiera typy kolumn
     */
    int get_typy_kol(int jakakol);

};




/** 
 * @brief Funkcja tworzy tablice
 * @param[in] wiersze program pobiera ilosc wierszy
 * @param[in] kolumny program pobiera ilosc kolumn
 */
int tworz_tablice(int x, int y, Tablica *arkusz);


/** 
 * @brief uzytkownik moze zmienic wartosc wybranej komorki 
 * @param[in,out] tablica program zwraca nowa wartosc komorki wprowadzana przez uzytkownika
 */
int zmiana_rozmiaru_tablicy (Tablica *tablica, int nkolumny, int nwiersze);