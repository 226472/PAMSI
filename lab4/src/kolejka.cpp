#include "kolejka.hh"
#include <cstdlib>
using namespace std;
kolejka::kolejka()
{
    rozmiar=10;
    r=-1;
    f=0;
    elementy=new int[rozmiar];
}
kolejka::kolejka(int rozm)
{
    rozmiar=rozm;
    r=-1;
    f=0;
    elementy=new int[rozmiar];
    inicjuj(rozm);
}
int kolejka:: size()
{
    return rozmiar-f+r;
}
void kolejka::enqueue(int element)
{
    r++;
    if(r<=rozmiar)
    {
        elementy[r]=element;
    }
    else
    {
    int *elementyhelp = new int[rozmiar+1];
	for(int i=0; i<rozmiar; ++i)
        elementyhelp[i]=elementy[i];

	elementyhelp[r]=element;
	int rozmiarn=2*rozmiar;
	elementy = new int[rozmiarn];

	for(int i=0; i<rozmiar+1; ++i)
        elementy[i]=elementyhelp[i];

	delete elementyhelp;
	rozmiar=rozmiarn;
    }
}
int kolejka:: dequeue()
    {
        return elementy[f++];
    }
int kolejka:: front()
    {
        return elementy[f];
    }
int kolejka::find(int data)
    {
        int position=1;
        int fcopy=f;

        while(dequeue()!=data)
            ++position;

        f=fcopy;
        return position;

    }
    void kolejka::inicjuj(int rozm)
{
    int pozycja=rozm-1; //w tym wypadku szukana wartoœæ bêdzie na samy koñcu kolejki
    srand(time(NULL));
    pozycja=rand()%10*rozm/10; //generujemy tu pseudolosow¹ pozycjê
    for(int i=0; i<rozm; ++i)
    {
        if(i==pozycja)
            enqueue(5);
        else
            enqueue(1);
    }
}
void kolejka::wykonaj(int rozmiar_problemu)
    {
    cout<<"szukam..."<<endl;
    cout<<"Dana wartosc 5 znajduje sie na "<<find(5)<<"pozycji w kolejce."<<endl;
    }
string kolejka::przedstaw_sie()
    {
        string nazwa="kolejka";
        return nazwa;
    }
