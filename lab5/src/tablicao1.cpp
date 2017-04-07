#include <iostream>
#include "tablicao1.hh"

using namespace std;

void tablicao1::wykonaj(int rozmiar_problemu)
{
    for(int i=0; i<rozmiar_problemu; ++i)
    {
       przypisanie(i,5);
    }
}
void tablicao1::powieksztablice()
{
    int rozmiarn=rozmiar+1;
    int *tablicabuff = new int[rozmiarn];
    for(int i=0; i<rozmiar; ++i)
    {
        tablicabuff[i]=tab[i];
    }
    tab= new int[rozmiarn];
     for(int i=0; i<rozmiarn; ++i)
    {
        tab[i]=tablicabuff[i];
    }
    delete tablicabuff;
    rozmiar=rozmiarn;
}

void tablicao1::przypisanie(int index, int wartosc)
{
   if (index>(rozmiar-1)){
            powieksztablice();
    }
    tab[index]=wartosc;
}

int tablicao1::odczytanie(int index)
{
    return tab[index];
}

int tablicao1::podajrozmiar()
{
        return rozmiar;
}

void tablicao1::wyswietl()
{
    for(int i=0; i<rozmiar; ++i)
    {
        cout<<tab[i]<<" ";
    }
    cout<<endl;
}

string tablicao1::przedstaw_sie()
{
    string nazwa = "tablica";
    return nazwa;
}
