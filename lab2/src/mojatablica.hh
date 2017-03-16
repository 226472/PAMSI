#include <iostream>

using namespace std;

class mojatablica
{

    int rozmiar;
    int *tablica;
    void powieksztablice(int rozmiarn); //powiększa tablicę dynamiczną 

 public:
    void przypisanie(int index, int wartosc); //wpisuje wartość do wyznaczonego miejsca tablicy 
    int odczytanie(int index); //zwraca wartość tablicy 
    int podajrozmiar(); //zwraca rozmiar tablicy
    void wyswietl(); //wyświetla wartości tablicy
    void rozmiarinicjuj(int rozm); //inicjuje rozmiar tablicy
};
