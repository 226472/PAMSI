#include <iostream>
#include <ctime>
#include "czas.hh"
using namespace std;

int main()
{
   unsigned int ilosc_powtorzen=1000;
   unsigned int rozmiar_problemu=10000000;
    czas t;
    drzewoAVL obj;
	//obj.inicjuj(10);
   //obj.szukaj(0);

    for(int i=1; i<rozmiar_problemu+1; i*=10)
    {
   	drzewoAVL obj;
    	obj.inicjuj(i);
    	t.wykonaj_algorytm(ilosc_powtorzen, obj, i);
    }

    return 0;
}
