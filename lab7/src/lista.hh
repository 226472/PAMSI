#include "wezel.hh"
#include <string>
using namespace std;



class lista
{
    int rozmiar;
    wezel* head;
    wezel* tail;
    wezel* current;
public:
    lista();
    lista(int);
    int size(); //zwraca rozmiar listy
    void add(int, string); //dodaje element na wskazane miejsce
    void remove(); //usuwa element ze wskazanego miejsca
    int find(int);
    string &get(int);
    bool czyjest(int);

};
