#include "tabasocjac.hh"
#include <iostream>
using namespace std;

void tabasocjac::dodajelement(string index, string opis)
{
    haszujaca(index);
    kontenery[id_aktywnego_kontenera].add(index, opis);
}
string& tabasocjac::zwrocelement(string index)
{
    haszujaca(index);
    return kontenery[id_aktywnego_kontenera].get(index);

}
void tabasocjac::haszujaca(string index)
{
    id_aktywnego_kontenera=(int)index[0]-97;
}
void tabasocjac::wykonaj(int rozmiar_problemu)
{
    string slowo,definicja;
    for(int i=0; i<rozmiar_problemu; ++i)
        {
        cout<<"Dodaj slowo"<<endl;
        getline(cin, slowo);
        cout<<"dodaj definicje"<<endl;
        getline(cin, definicja);
        dodajelement(slowo,definicja);
        }
        while(1)
        {
            cout<<"Podaj slowo"<<endl;
            getline(cin, slowo);
            cout<<zwrocelement(slowo)<<endl;
        }
}

    string tabasocjac::przedstaw_sie()
    {
        string imie="tablica asocjacyjna";
        return imie;
    }
