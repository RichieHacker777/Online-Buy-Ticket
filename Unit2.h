//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDataModule2 : public TDataModule
{
__published:	// IDE-managed Components
	TDataSource *DataSourceTeatr;
	TADOQuery *ADOQueryTeatr;
	TADOConnection *ADOConnection1;
	TDataSource *DataSourceKino_teatr;
	TADOQuery *ADOQueryKino_teatr;
	TDataSource *DataSourceMuzey;
	TADOQuery *ADOQueryMuzey;
private:	// User declarations
public:		// User declarations
	__fastcall TDataModule2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule2 *DataModule2;
//---------------------------------------------------------------------------
#endif
