#include "kolejka.hh"
#include "ilist.hh"
using namespace std;
class wezel //klasa wezla wykorzystywanego w strukturze listy
{
    int element;
    wezel* next;
    friend class lista;
public:
    int getelement()
    {
        return element;
    }
    wezel* getnext()
    {
        return next;
    }
     wezel* getprev()
    {
        return next;
    }
    void setelement(int newelement)
    {
        element=newelement;
    }
    void setnext (wezel* newN)
    {
        next=newN;
    }
};

class lista:public ilist, public wykonywalny
{
    int rozmiar;
    wezel* head;
    wezel* tail;
    wezel* current;
public:
    lista();
    lista(int);
    virtual int size(); //zwraca rozmiar listy
    virtual void add(int); //dodaje element na wskazane miejsce
    virtual void remove(); //usuwa element ze wskazanego miejsca
    virtual int find(int);
    int getfirst(); //zwraca pierwszy element listy
    int getlast(); //zwraca ostatni element listy
    virtual int get(int);
    virtual void wykonaj(int rozmiar_problemu);
    virtual string przedstaw_sie();
    void inicjuj(int);//inicjujemy nasza listê wartoœciami na potrzeby przeprowadzenia testu


};
