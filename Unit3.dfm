object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 300
  ClientWidth = 434
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -24
  Font.Name = 'Times New Roman'
  Font.Style = []
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 27
  object Label1: TLabel
    Left = 81
    Top = 8
    Width = 282
    Height = 27
    Caption = 'Infinity Card raqamini kirting'
  end
  object Label2: TLabel
    Left = 164
    Top = 136
    Width = 118
    Height = 27
    Caption = 'Jami summa'
  end
  object Label3: TLabel
    Left = 0
    Top = 216
    Width = 67
    Height = 27
    Caption = 'Label3'
    Visible = False
  end
  object Label4: TLabel
    Left = 102
    Top = 88
    Width = 6
    Height = 27
  end
  object Card: TMaskEdit
    Left = 102
    Top = 53
    Width = 225
    Height = 35
    EditMask = '86\0\0 0000 0000 0000;1;_'
    MaxLength = 19
    TabOrder = 0
    Text = '8600               '
    OnExit = CardExit
  end
  object Summa: TEdit
    Left = 64
    Top = 163
    Width = 299
    Height = 35
    Alignment = taCenter
    TabOrder = 1
    Text = 'Summa'
  end
  object Button1: TButton
    Left = 148
    Top = 216
    Width = 144
    Height = 49
    Caption = 'Tasdiqlash'
    TabOrder = 2
    OnClick = Button1Click
  end
end
