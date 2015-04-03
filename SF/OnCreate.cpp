// OnCreate.cpp : implementation file
//

#include "stdafx.h"
#include "SF.h"
#include "OnCreate.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// OnCreate

IMPLEMENT_DYNCREATE(OnCreate, CView)

OnCreate::OnCreate()
{
}

OnCreate::~OnCreate()
{
}


BEGIN_MESSAGE_MAP(OnCreate, CView)
	//{{AFX_MSG_MAP(OnCreate)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// OnCreate drawing

void OnCreate::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}

/////////////////////////////////////////////////////////////////////////////
// OnCreate diagnostics

#ifdef _DEBUG
void OnCreate::AssertValid() const
{
	CView::AssertValid();
}

void OnCreate::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// OnCreate message handlers
