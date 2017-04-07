
class iqueue
{
virtual int size()=0; // zwraca rozmiar kolejki
virtual void enqueue(int)=0; //dodaje element na koniec kolejki
virtual int dequeue()=0; //usuwa element z początku kolejki
virtual int front()=0;
};
