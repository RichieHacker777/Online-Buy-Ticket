//---------------------------------------------------------------------------

#include <vcl.h>
#include <DateUtils.hpp>
#pragma hdrstop

#include "UnitAsosiy.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormAsosiy *FormAsosiy;
AnsiString mySQLDateTime(TDateTime sanaTest)
  {
    Word year, month, date, hour, minute, sekund, msekund;
    AnsiString month1, date1, year1, hour1, minute1, sekund1, Natija;
	DecodeDateTime(sanaTest, year, month, date, hour, minute, sekund, msekund);
	if(month<10)
	{
	  month1="0"+IntToStr(month);
    }
	else
    {
	  month1=IntToStr(month);
    }
	if(date<10)
    {
	  date1="0"+IntToStr(date);
	}
    else
    {
      date1=IntToStr(date);
    }
      if(hour<10)
    {
      hour1="0"+IntToStr(hour);
    }
    else
    {
      hour1=IntToStr(hour);
    }
    if(minute<10)
    {
      minute1="0"+IntToStr(minute);
    }
    else
    {
      minute1=IntToStr(minute);
	}
	if(sekund<10)
	{
	  sekund1="0"+IntToStr(sekund);
	}
	else
	{
	  sekund1=IntToStr(sekund);
	}
	year1=IntToStr(year);
	Natija=year1+"-"+month1+"-"+date1+" "+hour1+":"+minute1+":"+sekund1;
	return Natija;
//---------------------------------------------------------------------------
__fastcall TFormAsosiy::TFormAsosiy(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormAsosiy::Button_TeatrClick(TObject *Sender)
{
	  CardPanel1->ActiveCardIndex=0;
}
//---------------------------------------------------------------------------
void __fastcall TFormAsosiy::Button_MuzeyClick(TObject *Sender)
{
CardPanel1->ActiveCardIndex=1;
}
//---------------------------------------------------------------------------
void __fastcall TFormAsosiy::Button_kinoteatrClick(TObject *Sender)
{
CardPanel1->ActiveCardIndex=2;
}
//---------------------------------------------------------------------------
