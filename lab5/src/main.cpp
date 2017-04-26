#include <iostream>
#include <ctime>
#include "lista.hh"
using namespace std;

int main()
{
    unsigned int ilosc_powtorzen=1;
    unsigned int rozmiar_problemu=1000000;
    czas t;
    tablicao1 obj(rozmiar_problemu);
	 obj.inicjuj('m');
	 //obj.wyswietl();
	 cout<<"ok"<<endl;
    t.wykonaj_algorytm(ilosc_powtorzen, obj, rozmiar_problemu);
    //obj.wyswietl();    
    
    return 0;
}
