// This MFC Samples source code demonstrates using MFC Microsoft Office Fluent User Interface 
// (the "Fluent UI") and is provided only as referential material to supplement the 
// Microsoft Foundation Classes Reference and related electronic documentation 
// included with the MFC C++ library software.  
// License terms to copy, use or distribute the Fluent UI are available separately.  
// To learn more about our Fluent UI licensing program, please visit 
// http://go.microsoft.com/fwlink/?LinkId=238214.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// CameraControllerView.cpp : implementation of the CCameraControllerView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "CameraController.h"
#endif

#include "CameraControllerDoc.h"
#include "CameraControllerView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCameraControllerView

IMPLEMENT_DYNCREATE(CCameraControllerView, CView)

BEGIN_MESSAGE_MAP(CCameraControllerView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CCameraControllerView construction/destruction

CCameraControllerView::CCameraControllerView()
{
	// TODO: add construction code here

}

CCameraControllerView::~CCameraControllerView()
{
}

BOOL CCameraControllerView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CCameraControllerView drawing

void CCameraControllerView::OnDraw(CDC* /*pDC*/)
{
	CCameraControllerDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}

void CCameraControllerView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CCameraControllerView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CCameraControllerView diagnostics

#ifdef _DEBUG
void CCameraControllerView::AssertValid() const
{
	CView::AssertValid();
}

void CCameraControllerView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCameraControllerDoc* CCameraControllerView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCameraControllerDoc)));
	return (CCameraControllerDoc*)m_pDocument;
}
#endif //_DEBUG


// CCameraControllerView message handlers
