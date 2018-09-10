// Demo.cpp : ����Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Demo.h"
#include "MainFrameWnd.h"

int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPTSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
	CoInitialize(NULL);
	OleInitialize(NULL);
	// ��ʼ��UI������
	CPaintManagerUI::SetInstance(hInstance);
	// ��Դ·��
	CDuiString strResourcePath = CPaintManagerUI::GetInstancePath();
	strResourcePath += _T("Res\\");
	CPaintManagerUI::SetResourcePath(strResourcePath.GetData());
	// ������
	CMainFrameWnd* pFrame = new CMainFrameWnd();
	pFrame->Create(NULL, _T("MainFrameWnd"), UI_WNDSTYLE_FRAME, WS_EX_STATICEDGE | WS_EX_APPWINDOW);
	::ShowWindow(*pFrame, SW_SHOW);
	CPaintManagerUI::MessageLoop();

	CResourceManager::GetInstance()->Release();

	OleUninitialize();
	CoUninitialize();

	return 0;
}