/** Global handles **********************************************************/

HWND		g_frmMain;
HMENU 		mnuMain;
/** Global variables ********************************************************/

HANDLE		g_hInstance;
SIZE		g_MinSize;
TABCTRL		g_MainWebTabCtrl;
//��Ϣ��
#define WM_NEW_IEVIEW		  WM_USER+101

// һЩ����
LRESULT CALLBACK FormMain_DlgProc (HWND, UINT, WPARAM, LPARAM);
void cmdClickRunUrl_Click (HWND hwnd);
LRESULT FormMain_OnChangeUrlAndTitle();
LRESULT FormMain_OnChangeTabLabel();
PVOID wpFormMain_OrigEditProc = NULL;