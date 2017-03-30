#include "istack.hh"

class stos:public istack
{
	int *elementy = new int;
	int rozmiar;
	public:
	stos();
	virtual int size(); 
	virtual void push(int); 
	virtual void pop();
	virtual int top()=0;	
	virtual void wykonaj(int rozmiar_problemu);
	virtual string przedstaw_sie();

}