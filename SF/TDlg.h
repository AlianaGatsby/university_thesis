#if !defined(AFX_TDLG_H__9266618E_258C_4BC9_ACF3_E882826A0E2A__INCLUDED_)
#define AFX_TDLG_H__9266618E_258C_4BC9_ACF3_E882826A0E2A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTDlg dialog

class CTDlg : public CDialog
{
// Construction
public:
	CTDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CTDlg)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CTDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TDLG_H__9266618E_258C_4BC9_ACF3_E882826A0E2A__INCLUDED_)
