#include <iostream>
#include "tablicao1.hh"
#include <cstdlib>
using namespace std;
void tablicao1::inicjuj(char znak)
{
	if (znak=='l')
	{
		srand(time(NULL));
		for(int i=0; i<rozmiar; ++i)
			przypisanie(i, rand()%rozmiar);		
	}
	else if (znak=='m')
	{
		for(int i=0; i<rozmiar; ++i)
			przypisanie(rozmiar-1-i,i);	
	}
	else 
		{
			for(int i=0; i<rozmiar; ++i)
				przypisanie(i,i);	
		}


}

void tablicao1::quicksort(int tab[], int left, int right)
{
	int i = left;
	int j = right;
	int pivot = tab[(left+right)/2];  // pivot po srodku
	//int pivot = tab[left];            // pivot lewy skrajny
	//int pivot = tab[right];           // pivot prawy skrajny
	do
	{
		while (tab[i] < pivot)
		{
			i++;
		}
		while (tab[j] > pivot)
		{
			j--;
		}
		if (i <= j)
		{
			int bufor = tab[i];
			tab[i] = tab[j];
			tab[j] = bufor;
			i++;
			j--;
		}
	} while (i <= j);
	if (left < j) quicksort(tab, left, j);
	if (right > i) quicksort(tab, i, right);
}
void tablicao1::wykonaj(int rozmiar_problemu)
{
 quicksort(tab,0,rozmiar-1);
	
	//pierwsza wersja programu
   // for(int i=0; i<rozmiar_problemu; ++i)
   // {
   //    przypisanie(i,5);
   // }
}
tablicao1::tablicao1(int rozm)
{
	rozmiar=rozm;
	tab=new int[rozmiar];
}
	
tablicao1::tablicao1()
{
	rozmiar=1;	
	tab=new int[rozmiar];
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
