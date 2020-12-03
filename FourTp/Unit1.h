//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants g�r�s par l'EDI
	TGroupBox *Option;
	TComboBox *Puissance;
	TButton *Stop;
	TGroupBox *Temperature;
	TLabel *TempInstante;
	TButton *Instantan�e;
	TLabel *Label1;
	void __fastcall PuissanceChange(TObject *Sender);
	void __fastcall StopClick(TObject *Sender);
	void __fastcall Instantan�eClick(TObject *Sender);
private:	// D�clarations utilisateur
	four *FOUR;
	double temperature;
	int Tcom;
	float volt;
public:		// D�clarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
