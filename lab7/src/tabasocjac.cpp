#include "tabasocjac.hh"
#include <cmath>
#include <iostream>
using namespace std;
tabasocjac::tabasocjac(int rozm)
{
	rozmiar=rozm;
	ilosc_elementow=0;
	kontenery = new lista[rozm];
	//inicjuj(rozm);
}
void tabasocjac::inicjuj(int rozm)
{
	for(int i=0; i<rozm; i++)
		{
			dodajelement(i+65,"opis");	
			//cout<<i<<" ";
		}
	
}

void tabasocjac::dodajelement(int index, string opis)
{
    haszujaca_mod(index);
    kontenery[id_aktywnego_kontenera].add(index, opis);
    ++ilosc_elementow;
}
string& tabasocjac::zwrocelement(int index)
{
    haszujaca_mod(index);
    return kontenery[id_aktywnego_kontenera].get(index);

}
void tabasocjac::haszujaca_mod(int index)
{
	
    //id_aktywnego_kontenera=index%rozmiar; //haszowanie modularne
    id_aktywnego_kontenera=(int)((float)(fmod((double)(0.61226472*index),1.0)*rozmiar));  //haszowanie przez mnożenie
    
}

void tabasocjac::wykonaj(int pozycja)
{

	zwrocelement(pozycja);
	
}

    string tabasocjac::przedstaw_sie()
    {
        string imie="tablica asocjacyjna";
        return imie;
    }
