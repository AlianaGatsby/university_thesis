// SFDlg.cpp : implementation file
//

#include "stdafx.h"
#include "SF.h"
#include "SFDlg.h"
#include "stdio.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSFDlg dialog

bool change = true;

CSFDlg::CSFDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSFDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSFDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSFDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSFDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CSFDlg, CDialog)
	//{{AFX_MSG_MAP(CSFDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSFDlg message handlers

BOOL CSFDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CSFDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();

		if(change)
		{
			CEdit* pBoxOne;
			CStdioFile File;
			CString str;
			CString strText;
			pBoxOne = (CEdit*) GetDlgItem(IDC_EDIT1);
			str.Empty();
			strText.Empty();
			File.Open("i.txt", CFile::modeReadWrite);
			while(File.ReadString(str))
			{
				str += "\r\n";//必须加，确保正常读取换行，制表
				strText += str;
			}
			pBoxOne->SetWindowText(strText);
			File.Close();
		}
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CSFDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CSFDlg::OnOK() 
{
	// TODO: Add extra validation here
	
	//CDialog::OnOK();
}

void CSFDlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	//CDialog::OnCancel();
}

void CSFDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	CDialog::OnOK();
}

void CSFDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	if(Hege())
	{
		ShellExecute(0, "open", "4.exe", "", "", 1);
	}
	else
		MessageBox("您输入的文法格式有误，请修改!", "刘路路", MB_OK);
}

void CSFDlg::OnButton4() 
{
	// TODO: Add your control notification handler code here
	if(IDYES == MessageBox("您确定当前的输入符合规范吗？", "刘路路", MB_YESNO))
	{
		CEdit* pBoxOne;
		CStdioFile File;
		CString str;
		pBoxOne = (CEdit*) GetDlgItem(IDC_EDIT1);
		pBoxOne->GetWindowText(str);
		File.Open("t.txt", CFile::modeCreate|CFile::modeReadWrite);
		File.WriteString(str);
		File.Close();
		
		FILE *fp1, *fp2;
		char c;
		fp1 = fopen("t.txt", "r");
		fp2 = fopen("in.txt", "w");
		
		while(!feof(fp1))
		{
			c = fgetc(fp1);
			if(c != '\r')
			{
				fputc(c, fp2);
			}
		}
		fclose(fp1);
		fclose(fp2);
		
		MessageBox("保存成功!", "刘路路", MB_OK);
		change = false;
	}
}

void CSFDlg::OnButton5() 
{
	// TODO: Add your control notification handler code here
	if(Hege())
	{
		ShellExecute(0, "open", "3.exe", "", "", 0);
		MessageBox("分析完成!", "刘路路", MB_OK);
	}
	else
		MessageBox("您输入的文法格式有误，请修改!", "刘路路", MB_OK);
}

void CSFDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	CEdit* pBoxOne;
	CStdioFile File;
	CString str;
	CString strText;
	pBoxOne = (CEdit*) GetDlgItem(IDC_EDIT1);
	
	str.Empty();
	strText.Empty();
	File.Open("out.txt", CFile::modeReadWrite);
	while(File.ReadString(str))
	{
		str += "\r\n";//必须加，确保正常读取换行，制表
		strText += str;
	}
	pBoxOne->SetWindowText(strText);
	File.Close();
}

void CSFDlg::OnButton6() 
{
	// TODO: Add your control notification handler code here
	CEdit* pBoxOne;
	CStdioFile File;
	CString str;
	CString strText;
	pBoxOne = (CEdit*) GetDlgItem(IDC_EDIT1);
	str.Empty();
	strText.Empty();
	File.Open("t.txt", CFile::modeReadWrite);
	while(File.ReadString(str))
	{
		str += "\r\n";//必须加，确保正常读取换行，制表
		strText += str;
	}
	pBoxOne->SetWindowText(strText);
	File.Close();
}

//DEL void CSFDlg::OnButton7() 
//DEL {
//DEL 	// TODO: Add your control notification handler code here
//DEL 	CTDlg dlg;
//DEL 	dlg.Create(IDD_DIALOG1, this);
//DEL }

bool CSFDlg::Hege()
{
		FILE *p1;
		char c;
		char b[10000];
		int i;
		p1 = fopen("in.txt", "r");
		while(!feof(p1))
		{
			i = 0;
			c = '\r';
			while('\n' != c)
			{
				c = fgetc(p1);
				b[i++] = c;
				if(b[0] == '#' && b[1] == '\n')
				{
					fclose(p1);
					return true;
				}
				if(i >= 3)
				{
					if(b[0] >= 'A' && b[0] <= 'Z' && b[1] == '-' && b[2] == '>') continue;
					else
					{
						fclose(p1);
						return false;
					}
				}
			}
		}
		fclose(p1);
		return false;
}
