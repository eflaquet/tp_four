object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 436
  ClientWidth = 728
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Option: TGroupBox
    Left = 16
    Top = 24
    Width = 185
    Height = 153
    Caption = 'Option'
    TabOrder = 0
    object Label1: TLabel
      Left = 24
      Top = 36
      Width = 92
      Height = 13
      Align = alCustom
      Alignment = taCenter
      Caption = 'Demarage du Four '
    end
    object Puissance: TComboBox
      Left = 24
      Top = 61
      Width = 145
      Height = 21
      TabOrder = 0
      Text = '0'
      OnChange = PuissanceChange
      Items.Strings = (
        '0'
        '25'
        '50'
        '75'
        '100')
    end
    object Stop: TButton
      Left = 56
      Top = 88
      Width = 75
      Height = 25
      Caption = 'Stop'
      TabOrder = 1
      OnClick = StopClick
    end
  end
  object Temperature: TGroupBox
    Left = 216
    Top = 24
    Width = 489
    Height = 153
    Caption = 'Temperature'
    TabOrder = 1
    object TempInstante: TLabel
      Left = 208
      Top = 36
      Width = 3
      Height = 13
    end
    object Instantanée: TButton
      Left = 104
      Top = 34
      Width = 75
      Height = 25
      Caption = 'Instantan'#233'e'
      TabOrder = 0
      OnClick = InstantanéeClick
    end
  end
end
