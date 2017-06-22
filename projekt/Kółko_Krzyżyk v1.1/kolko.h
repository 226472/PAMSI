//---------------------------------------------------------------------------

#ifndef kolkoH
#define kolkoH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Tokno : public TForm
{
__published:	// IDE-managed Components
        TStaticText *StaticText1;
        TButton *przyciskl;
        TButton *przyciskt;
        TLabel *poziom;
        TStaticText *StaticText2;
        TButton *przyciskw;
        TButton *przycisks;
        TImage *pole1;
        TImage *pole2;
        TImage *pole3;
        TImage *pole4;
        TImage *pole5;
        TImage *pole6;
        TImage *pole7;
        TImage *pole8;
        TImage *pole9;
        TStaticText *StaticText3;
        TImage *figura;
        TButton *przyciskg;
        void __fastcall przycisklClick(TObject *Sender);
        void __fastcall przycisktClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall przycisksClick(TObject *Sender);
        void __fastcall pole1Click(TObject *Sender);
        void __fastcall pole2Click(TObject *Sender);
        void __fastcall pole3Click(TObject *Sender);
        void __fastcall pole4Click(TObject *Sender);
        void __fastcall pole5Click(TObject *Sender);
        void __fastcall pole6Click(TObject *Sender);
        void __fastcall pole7Click(TObject *Sender);
        void __fastcall pole8Click(TObject *Sender);
        void __fastcall pole9Click(TObject *Sender);
        void __fastcall przyciskgClick(TObject *Sender);
        void __fastcall przyciskwClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tokno(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tokno *okno;
//---------------------------------------------------------------------------
#endif
