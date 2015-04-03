#if !defined(AFX_MAINFRAME_H__03373101_6614_4F69_9815_54F560ECC7DC__INCLUDED_)
#define AFX_MAINFRAME_H__03373101_6614_4F69_9815_54F560ECC7DC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MainFrame.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMainFrame frame

class CMainFrame : public CFrameWnd
{
	DECLARE_DYNCREATE(CMainFrame)
protected:
	CMainFrame();           // protected constructor used by dynamic creation

// Attributes
public:

// Operations
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMainFrame)
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CMainFrame();

	// Generated message map functions
	//{{AFX_MSG(CMainFrame)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRAME_H__03373101_6614_4F69_9815_54F560ECC7DC__INCLUDED_)
