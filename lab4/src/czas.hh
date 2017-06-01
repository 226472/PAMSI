#include <iostream>
#include <ctime>
#include "lista.hh"
using namespace std;

class czas
{
    int rozmiar;
    double *ilosc_czasu;
    clock_t poczatek, koniec;
    double srednia;
public:
    void start();
    void stop(int ilosc);
    void zapisz_czas(wykonywalny& obj, unsigned int rozmiar_problemu);
    void stworz_tablice(int rozmiar);
    void wykonaj_algorytm(unsigned int ilosc_powtorzen, wykonywalny& obj, unsigned int rozmiar_probblemu);

};
