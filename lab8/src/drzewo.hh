#include "wykonywalny.hh"
#include "wezelAVL.hh"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stddef.h>

using namespace std;

class drzewoAVL: public wykonywalny
{
    wezelAVL *korzen;
    int ilosc_elementow;

  public:
   drzewoAVL();
    wezelAVL *rotacjaRR(wezelAVL *A);
    wezelAVL *rotacjaLL(wezelAVL *A);
    wezelAVL *rotacjaRL(wezelAVL *A);
    wezelAVL *rotacjaLR(wezelAVL *A);
    bool insert(wezelAVL *n);
    wezelAVL *szukaj(int key);
    wezelAVL *pred(wezelAVL *x);
    wezelAVL *remove(wezelAVL *x);
    wezelAVL *maxwezel(wezelAVL *x);
    void dodaj(int);
    void usun(int);
    void inicjuj(int);
    virtual void wykonaj(int rozmiar_problemu);
    virtual string przedstaw_sie();
};

