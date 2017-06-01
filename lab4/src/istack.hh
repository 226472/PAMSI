

class istack
{
virtual int size()=0; //zwraca rozmiar stosu
virtual void push(int)=0; // dodaje element na stos(zawsze na górę)
virtual int pop()=0; // usuwa element ze stosu(zawsze z góry)
virtual int top()=0; //zwraca górny element ze stosu
};
