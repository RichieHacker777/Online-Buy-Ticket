//---------------------------------------------------------------------------

#include <vcl.h>
#include <DateUtils.hpp>
#pragma hdrstop

#include "UnitAsosiy.h"
#include "Unit2.h"
#include "Unit3.h"
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
  }
//---------------------------------------------------------------------------
__fastcall TFormAsosiy::TFormAsosiy(TComponent* Owner): TForm(Owner)
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
void __fastcall TFormAsosiy::Teatr_Viloyat_comboboxSelect(TObject *Sender)
{
	if(Teatr_Viloyat_combobox->ItemIndex==0)
	{
		Teatr_Teatr->Items->Clear();
	   Teatr_Teatr->Items->Add("Musiqali Drama Teatri");
	   Teatr_Teatr->Items->Add("Qo`g`irchoq teatri");
	   Teatr_Teatr->Items->Add("Yoshlar teatri");
	   Teatr_Teatr->Items->Add("Abbos Bakirov nomidagi teatr");
	   Teatr_Teatr->Items->Add("Z.M.Bobur nomidagi dramma teatri");
//	   "Когирчок Театри"
//	   "yoshlar teatri"
//	   "Abbos Bakirov nomidagi teatr"
//	   "Z.M.BOBUR nomidagi DRAMA TEATRI""");
	}
		if(Teatr_Viloyat_combobox->ItemIndex==1)
	{
		Teatr_Teatr->Items->Clear();
	   Teatr_Teatr->Items->Add("Musiqali Drama Teatri");
	   Teatr_Teatr->Items->Add("YUSUF-KIZIK SHAKARJANOV nomidagi MUSIQA DRAMA TEATR");
	   Teatr_Teatr->Items->Add("Dramma teatri");
	   Teatr_Teatr->Items->Add("S. Ayniy teatrlari");
	   //Teatr_Teatr->Items->Add("Z.M.Bobur nomidagi dramma teatri");
//	   "Когирчок Театри"
//	   "yoshlar teatri"
//	   "Abbos Bakirov nomidagi teatr"
//	   "Z.M.BOBUR nomidagi DRAMA TEATRI""");
	}
	if(Teatr_Viloyat_combobox->ItemIndex==2)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("Rus Drama Teatri");
	   Teatr_Teatr->Items->Add("Qo`g`irchoq teatri");
	   Teatr_Teatr->Items->Add("Dramma teatri");

	}

			if(Teatr_Viloyat_combobox->ItemIndex==3)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("JIZZAX QO'G'IRCHOQLAR TEATRI");
	   Teatr_Teatr->Items->Add("YU.RAJABIY NOMIDAGI JIZZAX MUSIQA-DRAMA TEATRI");
	   Teatr_Teatr->Items->Add("Dramma teatri");

	}
					if(Teatr_Viloyat_combobox->ItemIndex==4)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("Ogahiy nomidagi musiqali drama teatri");

	}
						if(Teatr_Viloyat_combobox->ItemIndex==5)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("A.Navoiy nomidagi davlat musiqali drama teatri");

	}
							if(Teatr_Viloyat_combobox->ItemIndex==6)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("Alisher Navoiy nomidagi davlat akademik katta teatri");

	}
								if(Teatr_Viloyat_combobox->ItemIndex==7)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("M.T.Toshmuhamedov nomidagi musiqali drama teatri");

	}
									if(Teatr_Viloyat_combobox->ItemIndex==8)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("A.JO'RAYEV nomidagi SAMARQAND VILOYAT QO'G'IRCHOQ TEATRI");
		Teatr_Teatr->Items->Add(" A.P. CHEXOV nomidagi SAMARQAND RUS DRAMA TEATRI");
		Teatr_Teatr->Items->Add("X.OLIMJON NOMIDAGI SAMARQAND VILOYAT TEATR");

	}
										if(Teatr_Viloyat_combobox->ItemIndex==9)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("O.Xoʻjayev nomidagi Sirdaryo viloyati musiqali drama teatri");
		Teatr_Teatr->Items->Add("Musiqali dramma teatri");


	}
											if(Teatr_Viloyat_combobox->ItemIndex==10)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("M.Uygʻur nomidagi oʻzbek davlat musiqali drama teatri");
		Teatr_Teatr->Items->Add("Musiqali dramma teatri");


	}
												if(Teatr_Viloyat_combobox->ItemIndex==11)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("Ilxom teatri");
		Teatr_Teatr->Items->Add("Bolalar teatri");
		Teatr_Teatr->Items->Add("Rus drama teatri");
		Teatr_Teatr->Items->Add("Musiqali dramma teatri");
			Teatr_Teatr->Items->Add("O‘ZBEKISTON DAVLAT MUSIQALI KOMEDIYA TEATRI");
		Teatr_Teatr->Items->Add("O‘ZBEK MILLIY AKADEMIK DRAMA TEATRI");
			Teatr_Teatr->Items->Add("HOLOGRAM WORLD nomidagi GOLOGRAFIK TEATRI");
		Teatr_Teatr->Items->Add("Diydor teatri");
			Teatr_Teatr->Items->Add("O‘ZBEKISTON DAVLAT SATIRA TEATRI");
		Teatr_Teatr->Items->Add("O‘ZBEKISTON RESPUBLIKASI YOSHLAR TEATRI");
			Teatr_Teatr->Items->Add("YULDOSH OXUNBOBOYEV nomidagi RESPUBLIKA YOSH TOMOSHABIRLAR TEATRI");
		Teatr_Teatr->Items->Add("O‘ZBEK DAVLAT DRAMMA TEATRI");
			Teatr_Teatr->Items->Add("MUKIMI nomidagi O‘ZBEK DAVLAT MUSIQA TEATRI");
		Teatr_Teatr->Items->Add("O`zbek milliy qo`g`irchoq teatri");

	}

}
//---------------------------------------------------------------------------
void __fastcall TFormAsosiy::Teatr_TeatrClick(TObject *Sender)
{
	DataModule2->ADOQueryTeatr->Close();
	DataModule2->ADOQueryTeatr->SQL->Text=" select * from Teatr where teatr_nomi like '"+Teatr_Teatr->Text+"' ";
	DataModule2->ADOQueryTeatr->Open();
}
//---------------------------------------------------------------------------
void __fastcall TFormAsosiy::Button3Click(TObject *Sender)
{
if(Edit3->Text=="")
	{
		ShowMessage("O`quvchilar sonini kiritng !!!");
	}
	else
	{
	float narxi=StrToFloat(Edit3->Text);
	float summa=DataModule2->ADOQueryTeatr->FieldByName("Chipta_narxi")->AsFloat;

	Form3->Label3->Caption=narxi*summa;

	Form3->ShowModal();
}
}
//---------------------------------------------------------------------------
void __fastcall TFormAsosiy::DBGrid1DblClick(TObject *Sender)
{
if(Edit3->Text=="")
	{
		ShowMessage("O`quvchilar sonini kiritng !!!");
	}
	else
	{
	float narxi=StrToFloat(Edit3->Text);
	float summa=DataModule2->ADOQueryTeatr->FieldByName("Chipta_narxi")->AsFloat;

	Form3->Label3->Caption=narxi*summa;

	Form3->ShowModal();
}
}
//---------------------------------------------------------------------------
void __fastcall TFormAsosiy::ComboBox1Select(TObject *Sender)
{
if(ComboBox1->ItemIndex==0)
	{
		ComboBox2->Items->Clear();
	   ComboBox2->Items->Add("BOBUR MUZEY");
	   ComboBox2->Items->Add("ADABIYOT VA SAN`AT MUZEYI");
	   ComboBox2->Items->Add("TARIXI VA MADANIYATI DAVLAT MUZEYI");
	   ComboBox2->Items->Add("Z.M.BOBUR UY-MUZEYI");

////
	}
	if(ComboBox1->ItemIndex==1)
	{
		ComboBox2->Items->Clear();
	   ComboBox2->Items->Add("SOPOL IDISHLAR MUZEYI");
	   ComboBox2->Items->Add("DAVLAT ARXITEKTURA-BADIIY MUZEYI-QO`RIQXONASI");

//
	}
	if(Teatr_Viloyat_combobox->ItemIndex==2)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("O`LKASHUNOSLIK MUZEYI");
//	   Teatr_Teatr->Items->Add("Qo`g`irchoq teatri");
//	   Teatr_Teatr->Items->Add("Dramma teatri");

	}

	if(Teatr_Viloyat_combobox->ItemIndex==3)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("JIZZAX QO`G`IRCHOQLAR muzeyi");
	   Teatr_Teatr->Items->Add("YU.RAJABIY NOMIDAGI JIZZAX muzeyi");
//	   Teatr_Teatr->Items->Add("Dramma teatri");
//
	}
	if(Teatr_Viloyat_combobox->ItemIndex==4)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("Ogahiy nomidagi Xorazm viloyat muzeyi");

	}
	if(Teatr_Viloyat_combobox->ItemIndex==5)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("Alisher Navoiy hayoti muzeyi");

	}
	if(Teatr_Viloyat_combobox->ItemIndex==6)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("Alisher Navoiy nomidagi davlat muzeyi");

	}
	if(Teatr_Viloyat_combobox->ItemIndex==7)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("Mulla To`ychi Toshmuhamedov nomidagi muzeyi");

	}
	if(Teatr_Viloyat_combobox->ItemIndex==8)
	{
		Teatr_Teatr->Items->Clear();
		//Teatr_Teatr->Items->Add("A.JO'RAYEV nomidagi SAMARQAND VILOYAT QO'G'IRCHOQ TEATRI");
		Teatr_Teatr->Items->Add(" A.P. CHEXOV nomidagi SAMARQAND MUZEYI");
		Teatr_Teatr->Items->Add("X.OLIMJON NOMIDAGI SAMARQAND VILOYAT MUZEYI");

	}
	if(Teatr_Viloyat_combobox->ItemIndex==9)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("O.Xo`jayev nomidagi Sirdaryo viloyati muzeyi");
//		Teatr_Teatr->Items->Add("Musiqali dramma teatri");
//
//
	}
	if(Teatr_Viloyat_combobox->ItemIndex==10)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("M.Uygʻur nomidagi o`zbek davlat muzeyi");
//		Teatr_Teatr->Items->Add("Musiqali dramma teatri");
//
//
	}
	if(Teatr_Viloyat_combobox->ItemIndex==11)
	{
		Teatr_Teatr->Items->Clear();
		Teatr_Teatr->Items->Add("Temuriylar tarixi davlat muzeyi");
		Teatr_Teatr->Items->Add("A.QAHHOR UY- MUZEYI");
		Teatr_Teatr->Items->Add("DAVLAT TABIAT MUZEYI");
		Teatr_Teatr->Items->Add("GEOLOGIYA MUZEYI");
			Teatr_Teatr->Items->Add("ISLOM ABDUG`ANIYEVICH KARIMOV YODGORLIK MUZEYI");
		Teatr_Teatr->Items->Add("O`ZBEK MILLIY AKADEMIK DRAMA TEATRI");
//			Teatr_Teatr->Items->Add("HOLOGRAM WORLD nomidagi GOLOGRAFIK TEATRI");
//		Teatr_Teatr->Items->Add("Diydor teatri");
//			Teatr_Teatr->Items->Add("O‘ZBEKISTON DAVLAT SATIRA TEATRI");
//		Teatr_Teatr->Items->Add("O‘ZBEKISTON RESPUBLIKASI YOSHLAR TEATRI");
//			Teatr_Teatr->Items->Add("YULDOSH OXUNBOBOYEV nomidagi RESPUBLIKA YOSH TOMOSHABIRLAR TEATRI");
//		Teatr_Teatr->Items->Add("O‘ZBEK DAVLAT DRAMMA TEATRI");
//			Teatr_Teatr->Items->Add("MUKIMI nomidagi O‘ZBEK DAVLAT MUSIQA TEATRI");
//		Teatr_Teatr->Items->Add("O`zbek milliy qo`g`irchoq teatri");

	}

}
//---------------------------------------------------------------------------
void __fastcall TFormAsosiy::DBGrid2DblClick(TObject *Sender)
{
if(Edit1->Text=="")
	{
		ShowMessage("Bolalar sonini kiriting !!!");

	}
	else
	{
		float narxi=StrToFloat(Edit1->Text);
	float summa=DataModule2->ADOQueryMuzey->FieldByName("Chipta_narxi")->AsFloat;

	Form3->Label3->Caption=narxi*summa;

	Form3->ShowModal();
	}
}

//---------------------------------------------------------------------------
void __fastcall TFormAsosiy::Button1Click(TObject *Sender)
{
if(Edit1->Text=="")
	{
		ShowMessage("Bolalar sonini kiriting !!!");

	}
	else
	{
		float narxi=StrToFloat(Edit1->Text);
	float summa=DataModule2->ADOQueryMuzey->FieldByName("Chipta_narxi")->AsFloat;

	Form3->Label3->Caption=narxi*summa;

	Form3->ShowModal();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFormAsosiy::ComboBox2Select(TObject *Sender)
{
	DataModule2->ADOQueryMuzey->Close();
	DataModule2->ADOQueryMuzey->SQL->Text=" select * from Muzey where muzey_nomi like '"+ComboBox2->Text+"' ";
	DataModule2->ADOQueryMuzey->Open();
}
//---------------------------------------------------------------------------
void __fastcall TFormAsosiy::Button4Click(TObject *Sender)
{
TDateTime sanaTest1=DatePicker1->Date;
TDateTime sanaTest2=DatePicker2->Date;

String sana1=mySQLDateTime(sanaTest1);
String sana2=mySQLDateTime(sanaTest2);

DataModule2->ADOQueryKino_teatr->Close();
DataModule2->ADOQueryKino_teatr->SQL->Text="select * from Kino_teatr where kuni>='"+sana1+"' and kuni<='"+sana2+"' ";
DataModule2->ADOQueryKino_teatr->Open();

if(DataModule2->ADOQueryKino_teatr->RecordCount==0)
{
  ShowMessage("Bu sanada kino topilmadi !!!");
}
}
//---------------------------------------------------------------------------
void __fastcall TFormAsosiy::Button5Click(TObject *Sender)
{
DataModule2->ADOQueryKino_teatr->Close();
DataModule2->ADOQueryKino_teatr->SQL->Text="select * from Kino_teatr";
DataModule2->ADOQueryKino_teatr->Open();
}
//---------------------------------------------------------------------------
void __fastcall TFormAsosiy::ComboBox3Select(TObject *Sender)
{
if(ComboBox3->ItemIndex==0)
	{
		ComboBox4->Items->Clear();
	   ComboBox4->Items->Add("O'ZBEGIM CINEMA KINOTEATRI");
//	   ComboBox2->Items->Add("ADABIYOT VA SAN`AT MUZEYI");
//	   ComboBox2->Items->Add("TARIXI VA MADANIYATI DAVLAT MUZEYI");
//	   ComboBox2->Items->Add("Z.M.BOBUR UY-MUZEYI");
//
//////
	}
	if(ComboBox3->ItemIndex==1)
	{
		ComboBox4->Items->Clear();

	   ComboBox4->Items->Add("Uz Cinema");

//
	}
	if(ComboBox3->ItemIndex==2)
	{
		ComboBox4->Items->Clear();
		ComboBox4->Items->Add("A.NAVOIY nomidagi KINOTEATRI");
//	   Teatr_Teatr->Items->Add("Qo`g`irchoq teatri");
//	   Teatr_Teatr->Items->Add("Dramma teatri");

	}
//
	if(ComboBox3->ItemIndex==3)
	{
		ComboBox4->Items->Clear();
	   //	Teatr_Teatr->Items->Add("JIZZAX QO`G`IRCHOQLAR muzeyi");
	   ComboBox4->Items->Add("YU.RAJABIY NOMIDAGI KINO TEATR");
////	   Teatr_Teatr->Items->Add("Dramma teatri");
////
	}
	if(ComboBox3->ItemIndex==4)
	{
		ComboBox4->Items->Clear();
		ComboBox4->Items->Add("SHOVOT KINO KINOTEATRI");

	}
	if(ComboBox3->ItemIndex==5)
	{
		ComboBox4->Items->Clear();
		ComboBox4->Items->Add("Alisher Navoiy Kino teatr");
//
	}
	if(ComboBox3->ItemIndex==6)
	{
		ComboBox4->Items->Clear();
		ComboBox4->Items->Add("Alisher Navoiy Kino teatr");

	}
	if(ComboBox3->ItemIndex==7)
	{
		ComboBox4->Items->Clear();
		ComboBox4->Items->Add("Mulla To`ychi Toshmuhamedov nomidagi Kino teatr");

	}
	if(ComboBox3->ItemIndex==8)
	{
		ComboBox2->Items->Clear();
		//Teatr_Teatr->Items->Add("A.JO'RAYEV nomidagi SAMARQAND VILOYAT QO'G'IRCHOQ TEATRI");
		ComboBox2->Items->Add(" A.P. CHEXOV nomidagi SAMARQAND Kino teatr");
		ComboBox2->Items->Add("X.OLIMJON NOMIDAGI SAMARQAND VILOYAT Kino teatr");

	}
	if(ComboBox3->ItemIndex==9)
	{
		ComboBox2->Items->Clear();
		ComboBox2->Items->Add("O.Xo`jayev nomidagi Sirdaryo viloyati Kino teatr");
//		Teatr_Teatr->Items->Add("Musiqali dramma teatri");
//
	}
	if(ComboBox3->ItemIndex==10)
	{
		ComboBox2->Items->Clear();
		ComboBox2->Items->Add("M.Uygʻur nomidagi o`zbek davlat Kino teatr");
//		Teatr_Teatr->Items->Add("Musiqali dramma teatri");
//
	}
	if(ComboBox3->ItemIndex==11)
	{
		ComboBox4->Items->Clear();
		ComboBox4->Items->Add("MEGAPLANET 5D CINEMA");
		ComboBox4->Items->Add("NEXT CINEMA KINOTEATRI");
//		Teatr_Teatr->Items->Add("DAVLAT TABIAT MUZEYI");
//		Teatr_Teatr->Items->Add("GEOLOGIYA MUZEYI");
//			Teatr_Teatr->Items->Add("ISLOM ABDUG`ANIYEVICH KARIMOV YODGORLIK MUZEYI");
//		Teatr_Teatr->Items->Add("O`ZBEK MILLIY AKADEMIK DRAMA TEATRI");
////			Teatr_Teatr->Items->Add("HOLOGRAM WORLD nomidagi GOLOGRAFIK TEATRI");
////		Teatr_Teatr->Items->Add("Diydor teatri");
////			Teatr_Teatr->Items->Add("O‘ZBEKISTON DAVLAT SATIRA TEATRI");
////		Teatr_Teatr->Items->Add("O‘ZBEKISTON RESPUBLIKASI YOSHLAR TEATRI");
////			Teatr_Teatr->Items->Add("YULDOSH OXUNBOBOYEV nomidagi RESPUBLIKA YOSH TOMOSHABIRLAR TEATRI");
////		Teatr_Teatr->Items->Add("O‘ZBEK DAVLAT DRAMMA TEATRI");
////			Teatr_Teatr->Items->Add("MUKIMI nomidagi O‘ZBEK DAVLAT MUSIQA TEATRI");
////		Teatr_Teatr->Items->Add("O`zbek milliy qo`g`irchoq teatri");
//
	}

}
//---------------------------------------------------------------------------
void __fastcall TFormAsosiy::Button2Click(TObject *Sender)
{
	if(Edit2->Text=="")
	{
		ShowMessage("Bolalar sonini kiriting !!!");

	}
	else
	{
		float narxi=StrToFloat(Edit2->Text);
	float summa=DataModule2->ADOQueryKino_teatr->FieldByName("Chipta_narxi")->AsFloat;

	Form3->Label3->Caption=narxi*summa;

	Form3->ShowModal();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFormAsosiy::DBGrid3DblClick(TObject *Sender)
{
	if(Edit2->Text=="")
	{
		ShowMessage("Bolalar sonini kiriting !!!");

	}
	else
	{
		float narxi=StrToFloat(Edit2->Text);
	float summa=DataModule2->ADOQueryKino_teatr->FieldByName("Chipta_narxi")->AsFloat;

	Form3->Label3->Caption=narxi*summa;

	Form3->ShowModal();
	}
}
//---------------------------------------------------------------------------
