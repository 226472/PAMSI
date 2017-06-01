#include "lista.hh"
#include "iassociative.hh"
#include "wykonywalny.hh"

class tabasocjac:public iassociative, public wykonywalny
{
    lista kontenery[26];
    int id_aktywnego_kontenera;
    public:
    void dodajelement(string, string);
    void haszujaca(string);
    string &zwrocelement(string);
    virtual string & operator[] (string ind){return zwrocelement(ind); };
    virtual void wykonaj(int rozmiar_problemu);
    virtual string przedstaw_sie();

};
