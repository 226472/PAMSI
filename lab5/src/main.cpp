#include <iostream>
#include <ctime>
#include "czas.hh"
using namespace std;

int main()
{
    unsigned int ilosc_powtorzen=1;
    unsigned int rozmiar_problemu=100000;
    czas t;
		
    for(int i=1; i<rozmiar_problemu+1; i*=10)
	 {	
    	tablicao1 obj(i);
		obj.inicjuj('r');
	 	cout<<"ok"<<endl;
   	t.wykonaj_algorytm(ilosc_powtorzen, obj, i);  
   	cout<<"ok"<<endl; 
    }
    return 0;
}
