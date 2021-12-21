object FormAsosiy: TFormAsosiy
  Left = 0
  Top = 0
  Caption = 'FormAsosiy'
  ClientHeight = 631
  ClientWidth = 1201
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Times New Roman'
  Font.Style = []
  WindowState = wsMaximized
  PixelsPerInch = 96
  TextHeight = 21
  object CardPanel1: TCardPanel
    Left = 200
    Top = 0
    Width = 1001
    Height = 631
    Align = alClient
    ActiveCard = Teatr
    Caption = 'CardPanel1'
    TabOrder = 0
    ExplicitLeft = -98
    ExplicitWidth = 1137
    ExplicitHeight = 537
    object Teatr: TCard
      Left = 1
      Top = 1
      Width = 999
      Height = 629
      Caption = 'Teatr'
      CardIndex = 0
      TabOrder = 0
      ExplicitWidth = 1135
      ExplicitHeight = 535
      object DBGrid1: TDBGrid
        Left = 0
        Top = 74
        Width = 999
        Height = 555
        Align = alClient
        DataSource = DataModule2.DataSourceTeatr
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -19
        TitleFont.Name = 'Times New Roman'
        TitleFont.Style = []
        OnDblClick = DBGrid1DblClick
        Columns = <
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'id'
            Title.Alignment = taCenter
            Width = 62
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Teatr_nomi'
            Width = 187
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Chipta_narxi'
            Title.Alignment = taCenter
            Width = 254
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Dastur_nomi'
            Title.Alignment = taCenter
            Width = 266
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'janri'
            Title.Alignment = taCenter
            Width = 185
            Visible = True
          end>
      end
      object Panel1: TPanel
        Left = 0
        Top = 0
        Width = 999
        Height = 74
        Align = alTop
        TabOrder = 1
        ExplicitWidth = 1135
        object Teatr_Viloyat_combobox: TComboBox
          Left = 16
          Top = 16
          Width = 241
          Height = 29
          TabOrder = 0
          Text = 'Tanlang'
          OnSelect = Teatr_Viloyat_comboboxSelect
          Items.Strings = (
            'Andijon viloyati'
            'Buxoro viloyati'
            'Fargona viloyati'
            'Jizzax viloyati'
            'Xorazm viloyati'
            'Namangan viloyati'
            'Navoiy viloyati'
            'Qashqadaryo viloyati'
            'Samarqand viloyati'
            'Sirdaryo viloyati'
            'Surxondaryo viloyati'
            'Toshkent viloyati')
        end
        object Teatr_Teatr: TComboBox
          Left = 280
          Top = 16
          Width = 401
          Height = 29
          TabOrder = 1
          Text = 'Tanlang'
          OnClick = Teatr_TeatrClick
        end
        object Edit3: TEdit
          Left = 705
          Top = 16
          Width = 121
          Height = 29
          TabOrder = 2
        end
        object Button3: TButton
          Left = 848
          Top = 16
          Width = 57
          Height = 31
          Caption = 'OK'
          TabOrder = 3
          OnClick = Button3Click
        end
      end
    end
    object Muzey: TCard
      Left = 1
      Top = 1
      Width = 999
      Height = 629
      Caption = 'Muzey'
      CardIndex = 1
      TabOrder = 1
      ExplicitWidth = 1135
      ExplicitHeight = 535
      object DBGrid2: TDBGrid
        Left = 0
        Top = 73
        Width = 999
        Height = 556
        Align = alClient
        DataSource = DataModule2.DataSourceMuzey
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -19
        TitleFont.Name = 'Times New Roman'
        TitleFont.Style = []
        OnDblClick = DBGrid2DblClick
        Columns = <
          item
            Expanded = False
            FieldName = 'id'
            Title.Alignment = taCenter
            Width = 76
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Muzey_nomi'
            Width = 323
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Chipta_narxi'
            Title.Alignment = taCenter
            Width = 213
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Viloyati'
            Title.Alignment = taCenter
            Width = 368
            Visible = True
          end>
      end
      object Panel2: TPanel
        Left = 0
        Top = 0
        Width = 999
        Height = 73
        Align = alTop
        TabOrder = 1
        ExplicitWidth = 1135
        object ComboBox1: TComboBox
          Left = 24
          Top = 18
          Width = 354
          Height = 29
          TabOrder = 0
          Text = 'ComboBox1'
          OnSelect = ComboBox1Select
          Items.Strings = (
            'Andijon viloyati'
            'Buxoro viloyati'
            'Fargona viloyati'
            'Jizzax viloyati'
            'Xorazm viloyati'
            'Namangan viloyati'
            'Navoiy viloyati'
            'Qashqadaryo viloyati'
            'Samarqand viloyati'
            'Sirdaryo viloyati'
            'Surxondaryo viloyati'
            'Toshkent viloyati')
        end
        object ComboBox2: TComboBox
          Left = 400
          Top = 18
          Width = 371
          Height = 29
          TabOrder = 1
          Text = 'ComboBox2'
          OnSelect = ComboBox2Select
        end
        object Edit1: TEdit
          Left = 792
          Top = 18
          Width = 121
          Height = 29
          TabOrder = 2
        end
        object Button1: TButton
          Left = 919
          Top = 18
          Width = 66
          Height = 31
          Caption = 'OK'
          TabOrder = 3
          OnClick = Button1Click
        end
      end
    end
    object Kinoteatr: TCard
      Left = 1
      Top = 1
      Width = 999
      Height = 629
      Caption = 'Kinoteatr'
      CardIndex = 2
      TabOrder = 2
      ExplicitWidth = 1135
      ExplicitHeight = 535
      object DBGrid3: TDBGrid
        Left = 0
        Top = 129
        Width = 999
        Height = 500
        Align = alClient
        DataSource = DataModule2.DataSourceKino_teatr
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -19
        TitleFont.Name = 'Times New Roman'
        TitleFont.Style = []
        Columns = <
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'id'
            Title.Alignment = taCenter
            Title.Caption = #8470
            Width = 30
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Kinoteatr_nomi'
            Title.Alignment = taCenter
            Width = 155
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Chipta_narxi'
            Title.Alignment = taRightJustify
            Width = 130
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Dastur_nomi'
            Width = 300
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Kuni'
            Title.Alignment = taCenter
            Width = 130
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'janri'
            Title.Alignment = taCenter
            Title.Caption = 'Janri'
            Width = 110
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Vaqt'
            Title.Alignment = taCenter
            Title.Caption = 'Boshlashi'
            Width = 120
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Vaqti2'
            Title.Alignment = taCenter
            Title.Caption = 'Tugashi'
            Width = 120
            Visible = True
          end>
      end
      object Panel3: TPanel
        Left = 0
        Top = 0
        Width = 999
        Height = 129
        Align = alTop
        TabOrder = 1
        ExplicitLeft = 1
        ExplicitTop = -6
        ExplicitWidth = 1135
        object ComboBox3: TComboBox
          Left = 8
          Top = 15
          Width = 391
          Height = 29
          TabOrder = 0
          Text = 'Tanlang'
          Items.Strings = (
            'Andijon viloyati'
            'Buxoro viloyati'
            'Fargona viloyati'
            'Jizzax viloyati'
            'Xorazm viloyati'
            'Namangan viloyati'
            'Navoiy viloyati'
            'Qashqadaryo viloyati'
            'Samarqand viloyati'
            'Sirdaryo viloyati'
            'Surxondaryo viloyati'
            'Toshkent viloyati')
        end
        object ComboBox4: TComboBox
          Left = 405
          Top = 15
          Width = 296
          Height = 29
          TabOrder = 1
          Text = 'Tanlang'
        end
        object Edit2: TEdit
          Left = 405
          Top = 50
          Width = 296
          Height = 29
          TabOrder = 2
        end
        object Button2: TButton
          Left = 464
          Top = 87
          Width = 153
          Height = 36
          Caption = 'OK'
          TabOrder = 3
        end
        object Button4: TButton
          Left = 216
          Top = 87
          Width = 183
          Height = 36
          Caption = 'Qidirish'
          HotImageIndex = 0
          ImageAlignment = iaRight
          ImageIndex = 0
          TabOrder = 4
          OnClick = Button4Click
        end
        object Button5: TButton
          Left = 8
          Top = 87
          Width = 186
          Height = 36
          Caption = 'Hammasi'
          TabOrder = 5
          OnClick = Button5Click
        end
        object DatePicker1: TDatePicker
          Left = 5
          Top = 52
          Width = 186
          Date = 44551.000000000000000000
          DateFormat = 'yyyy-mm-dd'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Segoe UI'
          Font.Style = []
          TabOrder = 6
        end
        object DatePicker2: TDatePicker
          Left = 213
          Top = 49
          Width = 186
          Date = 44551.000000000000000000
          DateFormat = 'yyyy-mm-dd'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Segoe UI'
          Font.Style = []
          TabOrder = 7
        end
      end
    end
  end
  object SplitView1: TSplitView
    Left = 0
    Top = 0
    Width = 200
    Height = 631
    OpenedWidth = 200
    Placement = svpLeft
    TabOrder = 1
    ExplicitLeft = 345
    object Button_Teatr: TButton
      Left = 0
      Top = 90
      Width = 193
      Height = 81
      Caption = 'Teatr'
      TabOrder = 0
      OnClick = Button_TeatrClick
    end
    object Button_Muzey: TButton
      Left = 0
      Top = 200
      Width = 193
      Height = 81
      Caption = 'Muzey'
      TabOrder = 1
      OnClick = Button_MuzeyClick
    end
    object Button_kinoteatr: TButton
      Left = 0
      Top = 312
      Width = 193
      Height = 81
      Caption = 'Kino teatr'
      TabOrder = 2
      OnClick = Button_kinoteatrClick
    end
  end
end
