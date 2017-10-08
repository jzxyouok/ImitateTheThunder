// XLDemo.cpp : 定义应用程序的入口点。
//

#include "stdafx.h"
#include "XLDemo.h"

#include "DuiFrameWnd.h"

int APIENTRY _tWinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPTSTR lpCmdLine,int nCmdShow)
{
	CPaintManagerUI::SetInstance(hInstance);

	CDuiFrameWnd duiFrame;
	duiFrame.Create(NULL, L"DuiFrame", UI_WNDSTYLE_FRAME, WS_EX_WINDOWEDGE);

	HICON hIcon = ::LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON_BLACK));
	::SendMessage(duiFrame.GetHWND(), STM_SETICON, IMAGE_ICON, (LPARAM)(UINT)hIcon);

	duiFrame.CenterWindow();
	duiFrame.ShowModal();

	return 0;
}


