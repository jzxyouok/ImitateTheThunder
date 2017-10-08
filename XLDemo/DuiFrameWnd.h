#pragma once
#include "stdafx.h"

class CDuiFrameWnd:public WindowImplBase
{
public:
	CDuiFrameWnd();
	~CDuiFrameWnd();

	virtual LPCTSTR GetWindowClassName() const;
	virtual CDuiString GetSkinFile();
	virtual CDuiString GetSkinFolder();

	virtual void InitWindow();

	virtual CControlUI* CreateControl(LPCTSTR pstrClassName);
};

