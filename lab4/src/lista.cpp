#include "lista.hh"
#include <cstdlib>
using namespace std;

 lista::lista()
 {
     head=0;
     tail=0;
     rozmiar=0;
     current=0;
 }
 lista::lista(int rozm)
 {
     head=0;
     tail=0;
     current=0;
     rozmiar=0;
     inicjuj(rozm);
 }
int lista::size()
{
    return rozmiar;
}
void lista::add(int e)
    {
        wezel* nowy = new wezel;
        nowy->element=e;

        if(tail==NULL)
        {
        tail=nowy;
        }

        nowy->next=head;
        head=nowy;
        ++rozmiar;
    }
void lista::remove()
    {
        wezel* old =head;
        head=old->next;
        delete old;

        --rozmiar;
    }
int lista:: getfirst ()
    {
        return head->element;
    }
int lista::getlast()
{
        return tail->element;
}
int lista::get(int it)
{
        current=head;
        for(int i=0; i<it-1; ++i)
        {
            current=current->next;
        }
        return current->getelement();
}
int lista::find(int data)
{
    int position=1;
    current=head;
    while (current->getelement()!=data)
    {
        current=current->next;
        position++;
    }
    current=0;
    return position;

}
void lista::inicjuj(int rozm)
{
    int pozycja=0; //w tym wypadku szukana warto�� b�dzie na samy ko�cu kolejki
  //  srand(time(NULL));
  //  pozycja=rand()%10*rozm/10; //generujemy tu pseudolosow� pozycj�
    for(int i=0;i<rozm;++i)
    {
        if(i==pozycja)
            add(5);
        else
            add(1);
    }

}
void lista:: wykonaj(int rozmiar_problemu)
{
    
    find(5);
}
string lista:: przedstaw_sie()
{
    string nazwa="lista";
    return nazwa;
}
