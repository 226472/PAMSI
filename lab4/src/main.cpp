#include <iostream>
#include <ctime>
#include "czas.hh"
using namespace std;

int main()
{
    unsigned int ilosc_powtorzen=20;
    unsigned int rozmiar_problemu=10000000;
    for(int i=1; i<=rozmiar_problemu; i*=10)
{
    czas t;
    lista obj(i);
    t.wykonaj_algorytm(ilosc_powtorzen, obj, i); 
    cout<<"ok"<<endl;  
}
    return 0;
}
