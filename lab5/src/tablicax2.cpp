#include "tablicax2.hh"

void tablicax2::powieksztablice()
{
    int rozmiarn=rozmiar*2;
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

string tablicax2::przedstaw_sie()
{
    string nazwa = "tablica zwiekszania x2";
    return nazwa;
}

tablicax2::tablicax2(int rozm)
{
	rozmiar=rozm;
}