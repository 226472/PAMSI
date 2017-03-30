#include "stos.hh"
using namespaces std;


stos::int size()
{
	return rozmiar;
} 
stos:: void push(int element)
{	
	++rozmiar;
	int *elementyhelp = new int[rozmiar]
	for(int i=0; i<rozmiar-1; ++i)
	int elementyhelp[i]=elementy[i];
	
	elementyhelp[i]=element;
	elementy = new int[rozmiar]
	
	for(int i=0; i<rozmiar; ++i)
	int elementy[i]=elementyhelp[i];
	
	delete elementyhelp;
} 
stos:: void pop()
{
	--rozmiar;
	int *elementyhelp = new int[rozmiar]
	for(int i=0; i<rozmiar; ++i)
	int elementyhelp[i]=elementy[i];
	
	elementy = new int[rozmiar]
	
	for(int i=0; i<rozmiar; ++i)
	int elementy[i]=elementyhelp[i];
	
	delete elementyhelp; 
}
stos:: int top();
{
	return elementy[rozmiar];
}
virtual void wykonaj(int rozmiar_problemu);
virtual string przedstaw_sie()
{
	string nazwa="stos"
	return nazwa;
}