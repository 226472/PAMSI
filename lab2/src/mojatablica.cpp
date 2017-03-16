#include <iostream>
#include "mojatablica.hh"

using namespace std;

void mojatablica::powieksztablice(int rozmiarn)
{
    int *tablicabuff = new int[rozmiarn]; //tworzenie tablicy pomocniczej
    for(int i=0; i<rozmiar; ++i)
    {
        tablicabuff[i]=tablica[i]; //przepisanie tablicy głównej do pomocniczej
    }
    tablica= new int[rozmiarn]; //stworzenie nowej tablicy o większym rozmiarze
     for(int i=0; i<rozmiarn; ++i)
    {
        tablica[i]=tablicabuff[i]; //przepisanie wartości z tablicy pomocniczej do nowo utworzonej
    }
    delete tablicabuff;
    rozmiar=rozmiarn;
}

void mojatablica::przypisanie(int index, int wartosc)
{
    if (index>(rozmiar-1)){
            powieksztablice(rozmiar*2); //w tym miejscu realizujemy metodę powiększnia tablicy.
    }
    tablica[index]=wartosc;
}

int mojatablica::odczytanie(int index)
{
    return tablica[index];
}
int mojatablica::podajrozmiar()
{
        return rozmiar;
}

void mojatablica::wyswietl()
{
    for(int i=0; i<mojatablica::podajrozmiar(); ++i)
    {
        cout<<tablica[i]<<" ";
    }
    cout<<endl;
}

void mojatablica::rozmiarinicjuj(int rozm)
{
    rozmiar=rozm;
}
