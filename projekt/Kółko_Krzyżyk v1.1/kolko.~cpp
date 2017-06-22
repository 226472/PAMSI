//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "kolko.h"
#include "komputer.h"
#include "rozgrywka.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tokno *okno;
Komputer komp;
Rozgrywka roz;
void sprawdzenie_wyniku()
{
        if(roz.sprawdzwygrana(roz.p, roz.wez_figure_gracza()))
        {

                Application->MessageBox("Wygra³es! :D","Koniec Gry",MB_OK);

        }
        else
        if(roz.sprawdzremis(roz.p))
        {
                char *w;
                w="REMIS";
                Application->MessageBox(w,"Koniec Gry",MB_OK);

        }
}
//---------------------------------------------------------------------------
__fastcall Tokno::Tokno(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tokno::przyciskgClick(TObject *Sender)
{
        poziom->SetTextBuf("g³upi");
        poziom->Color=clWhite;
        komp.ustaw_poziom('g');
}
//---------------------------------------------------------------------------
void __fastcall Tokno::przycisklClick(TObject *Sender)
{
        poziom->SetTextBuf("³atwy");
        poziom->Color=clGreen;
        komp.ustaw_poziom('l');
}
//---------------------------------------------------------------------------
void __fastcall Tokno::przycisktClick(TObject *Sender)
{
        poziom->SetTextBuf("trudny");
        poziom->Color=clRed;
        komp.ustaw_poziom('t');
}
//---------------------------------------------------------------------------
void __fastcall Tokno::FormCreate(TObject *Sender)
{
        pole1->Visible=false;
        pole2->Visible=false;
        pole3->Visible=false;
        pole4->Visible=false;
        pole5->Visible=false;
        pole6->Visible=false;
        pole7->Visible=false;
        pole8->Visible=false;
        pole9->Visible=false;
        figura->Visible=false;
        StaticText3->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall Tokno::przycisksClick(TObject *Sender)
{

        roz.nowa_rozgrywka();
        pole1->Visible=true;
        pole1->Picture->LoadFromFile("img/pusty.bmp");
        pole2->Visible=true;
        pole2->Picture->LoadFromFile("img/pusty.bmp");
        pole3->Visible=true;
        pole3->Picture->LoadFromFile("img/pusty.bmp");
        pole4->Visible=true;
        pole4->Picture->LoadFromFile("img/pusty.bmp");
        pole5->Visible=true;
        pole5->Picture->LoadFromFile("img/pusty.bmp");
        pole6->Visible=true;
        pole6->Picture->LoadFromFile("img/pusty.bmp");
        pole7->Visible=true;
        pole7->Picture->LoadFromFile("img/pusty.bmp");
        pole8->Visible=true;
        pole8->Picture->LoadFromFile("img/pusty.bmp");
        pole9->Visible=true;
        pole9->Picture->LoadFromFile("img/pusty.bmp");
        pole1->Enabled=true;
        pole2->Enabled=true;
        pole3->Enabled=true;
        pole4->Enabled=true;
        pole5->Enabled=true;
        pole6->Enabled=true;
        pole7->Enabled=true;
        pole8->Enabled=true;
        pole9->Enabled=true;
        figura->Visible=true;
        StaticText3->Visible=true;
        if(roz.wez_figure_gracza()=='o')
        {
                figura->Picture->LoadFromFile("img/os.bmp");
        }
        else
        {
                figura->Picture->LoadFromFile("img/xs.bmp");
        }
        if(roz.wez_figure_komputera()=='x') komp.wykonaj_ruch(roz, okno);

}
//---------------------------------------------------------------------------

void __fastcall Tokno::pole1Click(TObject *Sender)
{
        if (roz.p[1]=='n')
        {
                roz.zmien_aktualna_figure(roz.wez_figure_gracza());
                roz.p[1]=roz.zmien_pole(roz.wez_aktualna_figure(), pole1);
                if(!roz.sprawdzwygrana(roz.p, roz.wez_figure_gracza())&&!roz.sprawdzremis(roz.p)) komp.wykonaj_ruch(roz, okno);
                else
                {
                sprawdzenie_wyniku();
                przycisksClick(okno);
                }



        }
}

//---------------------------------------------------------------------------
void __fastcall Tokno::pole2Click(TObject *Sender)
{
         if (roz.p[2]=='n')
        {
                roz.zmien_aktualna_figure(roz.wez_figure_gracza());
                roz.p[2]=roz.zmien_pole(roz.wez_aktualna_figure(), pole2);
                if(!roz.sprawdzwygrana(roz.p, roz.wez_figure_gracza())&&!roz.sprawdzremis(roz.p)) komp.wykonaj_ruch(roz, okno);
                else
                {
                sprawdzenie_wyniku();
                przycisksClick(okno);
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall Tokno::pole3Click(TObject *Sender)
{
          if (roz.p[3]=='n')
        {
                roz.zmien_aktualna_figure(roz.wez_figure_gracza());
                roz.p[3]=roz.zmien_pole(roz.wez_aktualna_figure(), pole3);
                if(!roz.sprawdzwygrana(roz.p, roz.wez_figure_gracza())&&!roz.sprawdzremis(roz.p)) komp.wykonaj_ruch(roz, okno);
                else
                {
                sprawdzenie_wyniku();
                przycisksClick(okno);
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall Tokno::pole4Click(TObject *Sender)
{
   if (roz.p[4]=='n')
        {
                roz.zmien_aktualna_figure(roz.wez_figure_gracza());
                roz.p[4]=roz.zmien_pole(roz.wez_aktualna_figure(), pole4);
                if(!roz.sprawdzwygrana(roz.p, roz.wez_figure_gracza())&&!roz.sprawdzremis(roz.p)) komp.wykonaj_ruch(roz, okno);
                else
                {
                sprawdzenie_wyniku();
                przycisksClick(okno);
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall Tokno::pole5Click(TObject *Sender)
{
   if (roz.p[5]=='n')
        {
                roz.zmien_aktualna_figure(roz.wez_figure_gracza());
                roz.p[5]=roz.zmien_pole(roz.wez_aktualna_figure(), pole5);
                if(!roz.sprawdzwygrana(roz.p, roz.wez_figure_gracza())&&!roz.sprawdzremis(roz.p)) komp.wykonaj_ruch(roz, okno);
                else
                {
                sprawdzenie_wyniku();
                przycisksClick(okno);
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall Tokno::pole6Click(TObject *Sender)
{
   if (roz.p[6]=='n')
        {
                roz.zmien_aktualna_figure(roz.wez_figure_gracza());
                roz.p[6]=roz.zmien_pole(roz.wez_aktualna_figure(), pole6);
                if(!roz.sprawdzwygrana(roz.p, roz.wez_figure_gracza())&&!roz.sprawdzremis(roz.p)) komp.wykonaj_ruch(roz, okno);
                else
                {
                sprawdzenie_wyniku();
                przycisksClick(okno);
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall Tokno::pole7Click(TObject *Sender)
{
   if (roz.p[7]=='n')
        {
                roz.zmien_aktualna_figure(roz.wez_figure_gracza());
                roz.p[7]=roz.zmien_pole(roz.wez_aktualna_figure(), pole7);
                if(!roz.sprawdzwygrana(roz.p, roz.wez_figure_gracza())&&!roz.sprawdzremis(roz.p)) komp.wykonaj_ruch(roz, okno);
                else
                {
                sprawdzenie_wyniku();
                przycisksClick(okno);
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall Tokno::pole8Click(TObject *Sender)
{
   if (roz.p[8]=='n')
        {
                roz.zmien_aktualna_figure(roz.wez_figure_gracza());
                roz.p[8]=roz.zmien_pole(roz.wez_aktualna_figure(), pole8);
                if(!roz.sprawdzwygrana(roz.p, roz.wez_figure_gracza())&&!roz.sprawdzremis(roz.p)) komp.wykonaj_ruch(roz, okno);
                else
                {
                sprawdzenie_wyniku();
                przycisksClick(okno);
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall Tokno::pole9Click(TObject *Sender)
{
   if (roz.p[9]=='n')
        {
                roz.zmien_aktualna_figure(roz.wez_figure_gracza());
                roz.p[9]=roz.zmien_pole(roz.wez_aktualna_figure(), pole9);
                if(!roz.sprawdzwygrana(roz.p, roz.wez_figure_gracza())&&!roz.sprawdzremis(roz.p)) komp.wykonaj_ruch(roz, okno);
                else
                {
                sprawdzenie_wyniku();
                przycisksClick(okno);
                }
        }
}
//---------------------------------------------------------------------------


void __fastcall Tokno::przyciskwClick(TObject *Sender)
{
        okno->Close();        
}
//---------------------------------------------------------------------------


