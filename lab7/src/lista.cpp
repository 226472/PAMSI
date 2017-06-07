#include "lista.hh"
#include <cstdlib>
#include <iostream>
using namespace std;

 lista::lista()
 {
     head=0;
     tail=0;
     rozmiar=0;
     current=0;
 }

int lista::size()
{
    return rozmiar;
}
void lista::add(int nowyindex, string nowawartosc)
    {
        if(czyjest(nowyindex)==true)
        {
            get(nowyindex)=nowawartosc;
        }
        wezel* nowy = new wezel;
        nowy->setwartosc(nowawartosc);
        nowy->setindex(nowyindex);

        if(tail==NULL)
        {
        tail=nowy;
        }

        nowy->setnext(head);
        head=nowy;
        ++rozmiar;
    }
void lista::remove()
    {
        wezel* old =head;
        head=old->getnext();
        delete old;

        --rozmiar;
    }
string& lista::get (int szukanyindex)
{
        int it=find(szukanyindex);
        current=head;
        for(int i=0; i<it-1; ++i)
        {
            current=current->getnext();
        }
        return current->getwartosc();
}

int lista::find(int szukanyindex)
{
	 //cout<<szukanyindex<<endl;
    int position=1;
    current=head;
    while (current->getindex()!=szukanyindex)
    {
        current=current->getnext();
        position++;
        //cout<<"jestem";
    }
    current=0;
    //cout<<position<<endl;
    return position;
    

}
bool lista::czyjest(int szukany_index)
{
    bool jest=false;
    current=head;
    for(int i=0; i<rozmiar; ++i)
    {
        if (current->getindex()==szukany_index)
        {
            jest=true;
            break;
        }
        current=current->getnext();
    }
    return jest;

}
