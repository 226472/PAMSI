#include <string>
using namespace std;
class wezel
{
    string wartosc;
    int index;
    wezel* next;
    //friend class lista;;

public:
   void operator = (string nowawartosc){wartosc=nowawartosc;};
    string & getwartosc()
    {
        return wartosc;
    }
     int getindex()
    {
        return index;
    }

    wezel* getnext()
    {
        return next;
    }
     wezel* getprev()
    {
        return next;
    }
    void setwartosc(string newwartosc)
    {
        wartosc=newwartosc;
    }
    void setindex(int newindex)
    {
        index=newindex;
    }

    void setnext (wezel* newN)
    {
        next=newN;
    }
};
