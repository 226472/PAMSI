#include <iostream>
#include <ctime>
#include "czas.hh"
using namespace std;

int main()
{
   unsigned int ilosc_powtorzen=1;
   unsigned int rozmiar_problemu=10000000;
    czas t;
    drzewoAVL obj;
    obj.inicjuj(rozmiar_problemu);
    t.wykonaj_algorytm(ilosc_powtorzen, obj, rozmiar_problemu);
    return 0;
}
