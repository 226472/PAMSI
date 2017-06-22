#include "rozgrywka.h"

Rozgrywka::Rozgrywka()
{
        nowa_rozgrywka();
}

void Rozgrywka::nowa_rozgrywka()
{
        if((rand()%2)==1)
        {
                figuragracza='o';
                figurakomputera='x';
        }
        else
        {
                figuragracza='x';
                figurakomputera='o';
        }
        p[1]='n';  p[2]='n';  p[3]='n';
        p[4]='n';  p[5]='n';  p[6]='n';
        p[7]='n';  p[8]='n';  p[9]='n';
}
bool Rozgrywka::sprawdzwygrana(char* p, char znak)
{
        if((p[1]==p[2] && p[2]==p[3] && p[1]==znak)||
           (p[4]==p[5] && p[5]==p[6] && p[4]==znak)||
           (p[7]==p[8] && p[8]==p[9] && p[7]==znak)||
           (p[1]==p[4] && p[4]==p[7] && p[4]==znak)||
           (p[2]==p[5] && p[5]==p[8] && p[2]==znak)||
           (p[3]==p[6] && p[6]==p[9] && p[3]==znak)||
           (p[1]==p[5] && p[5]==p[9] && p[1]==znak)||
           (p[3]==p[5] && p[5]==p[7] && p[3]==znak))
           {

                return true;
           }
           else
           {
            return false;
           }

}
bool Rozgrywka::sprawdzremis(char* p)
{
        for(int i=1;i<10;i++){
         if (p[i]=='n')
         {

                return false;
         }

        }
        return true;
}
char Rozgrywka::zmien_pole(char znak, TImage* pole)
{
        if(znak=='o')
        {
                pole->Picture->LoadFromFile("img/o.bmp");
        }
        else
        {
                pole->Picture->LoadFromFile("img/X.bmp");
        }
        pole->Enabled=false;
        return znak;
}

void Rozgrywka::zmien_aktualna_figure(char fig)
{
        aktualnafigura= fig;
}


char Rozgrywka::wez_figure_gracza()
{
        return figuragracza;
}
char Rozgrywka::wez_figure_komputera()
{
        return figurakomputera;
}
char Rozgrywka::wez_aktualna_figure()
{
        return aktualnafigura;
}

