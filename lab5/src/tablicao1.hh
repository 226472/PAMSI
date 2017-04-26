#include <iostream>
#include "wykonywalny.hh"

using namespace std;

class tablicao1:public wykonywalny
{
    protected:
    int rozmiar;
    int *tab;
   virtual void powieksztablice();
 public:
     tablicao1();
     tablicao1(int);
   virtual void wykonaj(int rozmiar_problemu);
   virtual string przedstaw_sie();
    void przypisanie(int index, int wartosc);
    int odczytanie(int index);
    int podajrozmiar();
    void wyswietl();
    void inicjuj(char);
    void quicksort(int tab[], int left, int right);
};
