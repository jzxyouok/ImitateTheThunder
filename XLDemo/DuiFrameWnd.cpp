#include "stdafx.h"
#include "DuiFrameWnd.h"

#include "resource.h"


CDuiFrameWnd::CDuiFrameWnd()
{
}


CDuiFrameWnd::~CDuiFrameWnd()
{
}

LPCTSTR CDuiFrameWnd::GetWindowClassName() const
{
	return L"DuiMainFrame";
}

DuiLib::CDuiString CDuiFrameWnd::GetSkinFile()
{
	return L"mainFrame.xml";
}

DuiLib::CDuiString CDuiFrameWnd::GetSkinFolder()
{
	return L"";
}

void CDuiFrameWnd::InitWindow()
{

	SetIcon(IDI_ICON_WHITE);

	CListUI* pList = (CListUI*)m_PaintManager.FindControl(_T("itemlist"));
	if (pList == NULL)
	{
		::MessageBox(NULL,L"List NULL",L"Error",NULL);
		return;
	}

	CDialogBuilder builder;
	CListContainerElementUI* pElem = NULL;

	pElem = (CListContainerElementUI*)builder.Create(L"xlListNodeFocusEx.xml");
	//CListContainerElementUI* pElem2 = (CListContainerElementUI*)builder.Create(L"xlListNodeFocusEx.xml");

	CDialogBuilder builder2;
	CListContainerElementUI* pElem2 = NULL;

	pElem2 = (CListContainerElementUI*)builder2.Create(L"xlListNodeFocusEx.xml");

	CLabelUI* pFileName = (CLabelUI*)pElem->FindSubControl(L"fileName");
	pFileName->SetText(L"Firefox-55.0.3.6445-setup.exe");

	pList->Add(pElem);
	pList->Add(pElem2);
}

CControlUI* CDuiFrameWnd::CreateControl(LPCTSTR pstrClassName)
{
	CDialogBuilder builder;
	CControlUI* pUI = NULL;
	if (_tcsicmp(pstrClassName, L"LeftPane") == 0)
	{
		pUI = builder.Create(L"leftPane.xml");
	}
	else if (_tcsicmp(pstrClassName, L"Caption") == 0)
	{
		pUI = builder.Create(L"caption.xml");
	} 
	else if (_tcsicmp(pstrClassName, L"ListView") == 0)
	{
		pUI = builder.Create(L"listView.xml");
	}
	else if (_tcsicmp(pstrClassName, L"Bottom") == 0)
	{
		pUI = builder.Create(L"bottom.xml");
	}

	return pUI;

	//return NULL;
}

