object DataModule1: TDataModule1
  Height = 296
  Width = 374
  PixelsPerInch = 96
  object DataSourceTeatr: TDataSource
    DataSet = ADOQueryTeatr
    Left = 96
    Top = 144
  end
  object ADOQueryTeatr: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from Teatr')
    Left = 96
    Top = 40
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Data Source=Hacat' +
      'on'
    LoginPrompt = False
    Left = 16
    Top = 96
  end
  object DataSourceKino_teatr: TDataSource
    DataSet = ADOQueryKino_teatr
    Left = 152
    Top = 144
  end
  object ADOQueryKino_teatr: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from Kino_teatr')
    Left = 176
    Top = 40
  end
  object DataSourceMuzey: TDataSource
    DataSet = ADOQueryMuzey
    Left = 248
    Top = 144
  end
  object ADOQueryMuzey: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from Muzey')
    Left = 240
    Top = 40
  end
end
