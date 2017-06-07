#include "lista.hh"
#include "iassociative.hh"
#include "wykonywalny.hh"

class tabasocjac:public iassociative, public wykonywalny
{
	int rozmiar;
	int ilosc_elementow;
	lista* kontenery;
	public:
	void inicjuj(int);	
	tabasocjac(int);
	
	
    int id_aktywnego_kontenera;
    void dodajelement(int, string);
    void haszujaca_mod(int);
    string &zwrocelement(int);
    virtual string & operator[] (int ind){return zwrocelement(ind); };
    virtual void wykonaj(int rozmiar_problemu);
    virtual string przedstaw_sie();

};
