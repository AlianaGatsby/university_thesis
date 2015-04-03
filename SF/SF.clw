; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CSFDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "SF.h"

ClassCount=7
Class1=CSFApp
Class2=CSFDlg

ResourceCount=2
Resource1=IDR_MAINFRAME
Class3=CMainFrame
Class4=CSplashWnd
Class5=OnCreate
Class6=CTestDlg
Class7=CTDlg
Resource2=IDD_SF_DIALOG

[CLS:CSFApp]
Type=0
HeaderFile=SF.h
ImplementationFile=SF.cpp
Filter=T
LastObject=CSFApp

[CLS:CSFDlg]
Type=0
HeaderFile=SFDlg.h
ImplementationFile=SFDlg.cpp
Filter=W
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_BUTTON5



[DLG:IDD_SF_DIALOG]
Type=1
Class=CSFDlg
ControlCount=14
Control1=IDC_BUTTON1,button,1342243073
Control2=IDC_BUTTON2,button,1342243073
Control3=IDC_BUTTON3,button,1342243073
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_BUTTON4,button,1342243073
Control12=IDC_BUTTON5,button,1342243073
Control13=IDC_EDIT1,edit,1353782468
Control14=IDC_BUTTON6,button,1342243073

[CLS:CMainFrame]
Type=0
HeaderFile=MainFrame.h
ImplementationFile=MainFrame.cpp
BaseClass=CFrameWnd
Filter=T

[CLS:CSplashWnd]
Type=0
HeaderFile=Splash.h
ImplementationFile=Splash.cpp
BaseClass=CWnd

[CLS:OnCreate]
Type=0
HeaderFile=OnCreate.h
ImplementationFile=OnCreate.cpp
BaseClass=CView
Filter=C
LastObject=OnCreate

[CLS:CTestDlg]
Type=0
HeaderFile=TestDlg.h
ImplementationFile=TestDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CTestDlg

[CLS:CTDlg]
Type=0
HeaderFile=TDlg.h
ImplementationFile=TDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CTDlg

