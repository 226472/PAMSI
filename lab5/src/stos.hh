#include "istack.hh"
#include "czas.hh"

class stos:public istack, public wykonywalny
{
	int *elementy;
	int rozmiar;
	int index;
	public:
	stos();
	stos(int);
	virtual int size();
	virtual void push(int);
	virtual int pop();
	virtual int top();
	virtual void wykonaj(int rozmiar_problemu);
	virtual string przedstaw_sie();
	int find(int); // funkcja przeszukuje stos i zwraca na jakiej pozycji znajduje siêszukana wartosc
	void inicjuj(int); //inicjujemy nasz stos wartoœciami na potrzeby przeprowadzenia testu

};
