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
    void add(string, string); //dodaje element na wskazane miejsce
    void remove(); //usuwa element ze wskazanego miejsca
    int find(string);
    string &get(string);
    bool czyjest(string);

};
