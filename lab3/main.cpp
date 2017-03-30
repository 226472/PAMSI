#include <iostream>
#include "czas.hh"
#include <ctime>
using namespace std;

#define ILOSC_POWTORZEN 10
#define ROZMIAR_PROBLEMU 1000000
int main()
{
    unsigned int ilosc_powtorzen=ILOSC_POWTORZEN;
    unsigned int rozmiar_problemu=ROZMIAR_PROBLEMU;
    czas t;
    tablicax2 obj;
    t.wykonaj_algorytm(ilosc_powtorzen, obj, rozmiar_problemu);
    return 0;
}
