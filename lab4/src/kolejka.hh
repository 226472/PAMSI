#include "iqueue.hh"
#include "stos.hh"
using namespace std;

class kolejka:public iqueue, public wykonywalny
{
    int *elementy;
    int f;
    int r;
    int rozmiar;

public:
    kolejka();
    kolejka(int);
    virtual int size();
    virtual void enqueue(int);
    virtual int dequeue();
    virtual int front();
    int find(int);
    virtual void wykonaj(int rozmiar_problemu);
    virtual string przedstaw_sie();
    void inicjuj(int);//inicjujemy nasza kolejke wartoœciami na potrzeby przeprowadzenia testu

};
