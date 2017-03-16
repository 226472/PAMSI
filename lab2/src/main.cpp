#include <iostream>
#include "mojatablica.hh"
#include <ctime>
using namespace std;

int main()
{
    int dane=1000000;
    //cout<<"podaj ilość danych"<<endl; 
    //cin>>dane;
    mojatablica tab;
    tab.rozmiarinicjuj(1); 
    cout<<tab.podajrozmiar()<<endl;
    cout<<"OK"<<endl;
    clock_t start = clock();
    
    for(int i=0; i<dane; ++i)
    {
            tab.przypisanie(i,5);
    }
    
   cout<<"OK  czas trwania= "<<(double)(clock()-start)/(double)CLOCKS_PER_SEC<<"s"<<endl;
   // tab.wyswietl();
    cout<<tab.podajrozmiar()<<endl;
    cout<<"OK"<<endl;
    return 0;
}
