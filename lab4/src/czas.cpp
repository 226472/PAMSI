#include <iostream>
#include "czas.hh"
#include <fstream>
using namespace std;

void czas::start()
{
    poczatek= clock();
}
void czas::stop(int ilosc)
{
    koniec= clock();
    ilosc_czasu[ilosc]=(double)(koniec-poczatek)/CLOCKS_PER_SEC;
}

void czas::zapisz_czas(wykonywalny& obj, unsigned int rozmiar_problemu)
{
    srednia=0;
    ofstream plik;
    plik.open("czasy.txt", ios::app);
    if(plik.good()==true)
    {
        for(int i=0; i<rozmiar; ++i)
        {
            srednia+=ilosc_czasu[i];
        }
        plik<<"sredni czas dla \""<<obj.przedstaw_sie()<<"\" o rozmiarze"<<rozmiar_problemu<<" wynosi: "<<srednia/rozmiar<<"s"<<endl;
    }
    else cerr << "Nie mozna zapisac do pliku" << std::endl;
    plik.close();
    cout<<"sredni czas trwania: "<<(double)(srednia/rozmiar)<<"s"<<endl;
}
void czas::stworz_tablice(int wielkosc)
{
    ilosc_czasu = new double[wielkosc];
    rozmiar=wielkosc;
}
void czas::wykonaj_algorytm(unsigned int ilosc_powtorzen, wykonywalny& obj, unsigned int rozmiar_problemu)
{
   stworz_tablice(ilosc_powtorzen);
   for(unsigned int i=0; i<ilosc_powtorzen; ++i)
   {
        start();
        obj.wykonaj(rozmiar_problemu);
        stop(i);
   }
   zapisz_czas(obj, rozmiar_problemu);
}
