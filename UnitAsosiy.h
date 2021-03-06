//---------------------------------------------------------------------------

#ifndef UnitAsosiyH
#define UnitAsosiyH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.WinXCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.WinXPanels.hpp>
#include <Vcl.WinXPickers.hpp>
//---------------------------------------------------------------------------
class TFormAsosiy : public TForm
{
__published:	// IDE-managed Components
	TCardPanel *CardPanel1;
	TCard *Teatr;
	TDBGrid *DBGrid1;
	TPanel *Panel1;
	TComboBox *Teatr_Viloyat_combobox;
	TComboBox *Teatr_Teatr;
	TEdit *Edit3;
	TButton *Button3;
	TCard *Muzey;
	TDBGrid *DBGrid2;
	TPanel *Panel2;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TEdit *Edit1;
	TButton *Button1;
	TCard *Kinoteatr;
	TDBGrid *DBGrid3;
	TPanel *Panel3;
	TComboBox *ComboBox3;
	TComboBox *ComboBox4;
	TEdit *Edit2;
	TButton *Button2;
	TButton *Button4;
	TButton *Button5;
	TDatePicker *DatePicker1;
	TDatePicker *DatePicker2;
	TSplitView *SplitView1;
	TButton *Button_Teatr;
	TButton *Button_Muzey;
	TButton *Button_kinoteatr;
	void __fastcall Button_TeatrClick(TObject *Sender);
	void __fastcall Button_MuzeyClick(TObject *Sender);
	void __fastcall Button_kinoteatrClick(TObject *Sender);
	void __fastcall Teatr_Viloyat_comboboxSelect(TObject *Sender);
	void __fastcall Teatr_TeatrClick(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall DBGrid1DblClick(TObject *Sender);
	void __fastcall ComboBox1Select(TObject *Sender);
	void __fastcall DBGrid2DblClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall ComboBox2Select(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall ComboBox3Select(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall DBGrid3DblClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormAsosiy(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormAsosiy *FormAsosiy;
//---------------------------------------------------------------------------
#endif
