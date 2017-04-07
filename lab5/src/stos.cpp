#include "stos.hh"
#include <cstdlib>
using namespace std;

stos::stos()
{
    rozmiar=10;
    index=-1;
    elementy = new int[rozmiar];
}
stos::stos(int rozm)
{
    index=-1;
    rozmiar=rozm;
    elementy = new int[rozmiar];
    inicjuj(rozmiar);
}
int stos::size()
{
	return rozmiar;
}
 void stos::push(int element)
{
    ++index;
	if(index<=rozmiar)
        elementy[index]=element;
    else
    {

    int *elementyhelp = new int[rozmiar+1];
	for(int i=0; i<rozmiar; ++i)
        elementyhelp[i]=elementy[i];

	elementyhelp[index]=element;
	int rozmiarn=2*rozmiar;
	elementy = new int[rozmiarn];

	for(int i=0; i<rozmiar+1; ++i)
        elementy[i]=elementyhelp[i];

	delete elementyhelp;
	rozmiar=rozmiarn;
    }

}
int stos::pop()
{
    return elementy[index--];
}
 int stos::top()
{
	return elementy[index];
}
int stos::find(int data)
{
    int position=1;
    int indexcopy=index;
    while(pop()!=data)
    {
        ++position;
    }
    index=indexcopy;
    return position;
}
void stos::inicjuj(int rozm)
{
    int pozycja=1; //w tym wypadku szukana wartoœæ bêdzie na samym dole stosu
   srand(time(NULL));
    pozycja=rand()%10*rozm/10; //generujemy tu pseudolosow¹ pozycjê

    for(int i=0; i<rozm-1; ++i)
    {
        if(i==pozycja)
            push(5);
        else
            push(1);
    }
}
 void stos::wykonaj(int rozmiar_problemu)
{
    int indexcopy=index;
    index=rozmiar_problemu;
    cout<<"szukam..."<<endl;
    cout<<"Dana wartosc 5 znajduje sie na "<<find(5)<<"pozycji w stosie."<<endl;
    index=indexcopy;
}

 string stos::przedstaw_sie()
{
	string nazwa="stos";
	return nazwa;
}


