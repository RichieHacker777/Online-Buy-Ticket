//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "UnitAsosiy.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
	ShowMessage("Siz "+ Label4->Caption + " ga "
			+ Summa->Text +
			"mablag otkazdingiz");
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormShow(TObject *Sender)
{
Summa->Text=Label3->Caption;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::CardExit(TObject *Sender)
{
Label4->Caption="Timur Bogdanov";
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
	 Card->Text="";
	 Summa->Text="";
     Label4->Caption="";
}
//---------------------------------------------------------------------------
