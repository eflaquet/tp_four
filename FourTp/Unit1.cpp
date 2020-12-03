//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "four.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	FOUR = new four(); //nouvel objet four

	volt=2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PuissanceChange(TObject *Sender)
{
	FOUR->Ecriture(Puissance->Text.ToDouble()/10);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StopClick(TObject *Sender)
{
   FOUR->Ecriture(0); //on met le voltage à 0V pour arreter de chauffer
	volt= 2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::InstantanéeClick(TObject *Sender)
{
	temperature = FOUR->Lecture(); //stockage dans la variable 'temperature'

   TempInstante->Caption =  temperature ;  //affichage de la température
}
//---------------------------------------------------------------------------

