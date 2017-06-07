#include <iostream>
#include <ctime>
#include "czas.hh"
using namespace std;

int main()
{

   unsigned int ilosc_powtorzen=5;
   unsigned int rozmiar_problemu=1000000;

	for(int i=1; i<100000; i*=10)
		{
    czas t;
    tabasocjac obj(rozmiar_problemu/i);
    obj.inicjuj(rozmiar_problemu);
   // obj.wykonaj(5);
	 //obj.wyswietl();
	// cout<<"ok"<<endl;
   t.wykonaj_algorytm(ilosc_powtorzen, obj, rozmiar_problemu);
    //obj.wyswietl();
}
    return 0;
}
