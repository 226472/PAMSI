#include <iostream>
#include <ctime>
#include "lista.hh"
using namespace std;

#define ILOSC_POWTORZEN 20
#define ROZMIAR_PROBLEMU 10000

int main()
{
    unsigned int ilosc_powtorzen=ILOSC_POWTORZEN;
    unsigned int rozmiar_problemu=ROZMIAR_PROBLEMU;
    czas t;
    lista obj(ROZMIAR_PROBLEMU);
    t.wykonaj_algorytm(ilosc_powtorzen, obj, rozmiar_problemu);
    return 0;
}
