#include "stdafx.h"
#include "SignCardReportLossBaseOfficeDlg.h"

// ����ڴ�й©
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

IMPLEMENT_DYNAMIC(CSignCardReportLossBaseOfficeDlg,COperationDlg)
BEGIN_MESSAGE_MAP(CSignCardReportLossBaseOfficeDlg,COperationDlg)
	ON_WM_CREATE()
	ON_BTN_OK_CLICK(OnOK)
	ON_BTN_RESET_CLICK(OnReset)
END_MESSAGE_MAP()

//////////////////////////////////////////////////////////////////////////
/**
@brief      ���캯��

@param      (i)CService* pService

@retval     void 

@exception  none
*/
//////////////////////////////////////////////////////////////////////////
CSignCardReportLossBaseOfficeDlg::CSignCardReportLossBaseOfficeDlg(CService* pService) :
COperationDlg(CSignCardReportLossBaseOfficeDlg::IDD, pService)
{

}

//////////////////////////////////////////////////////////////////////////
/**
@brief      ��������

@param      none

@retval     void

@exception  none
*/
//////////////////////////////////////////////////////////////////////////
CSignCardReportLossBaseOfficeDlg::~CSignCardReportLossBaseOfficeDlg()
{
}

//////////////////////////////////////////////////////////////////////////
/**
@brief      ���洴������

@param      (i)LPCREATESTRUCT lpCreateStruct

@retval     int \n
0:�ɹ�  -1:ʧ��

@exception  none
*/
//////////////////////////////////////////////////////////////////////////
int CSignCardReportLossBaseOfficeDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	// ����������Ϣ���򣬷��ؼ���ȷ�ϼ�
	if(-1 == __super::OnCreate(lpCreateStruct, GUIDE_AREA |  BTN_RESET | BTN_OK)){
		return -1;
	}

	return 0;
}

//////////////////////////////////////////////////////////////////////////
/**
@brief      ����ȷ�ϰ�ť��Ϣ

@param      (i)WPARAM wParam  ��Ϣ��Ϣ
@param      (i)LPARAM lParam  ��Ϣ��Ϣ����ʾ��ť���·��͵ĸ�����Ϣ

@retval     LRESULT  \n
TRUE:�����ɹ�  FALSE:����ʧ��

@exception  CSysException
*/
//////////////////////////////////////////////////////////////////////////
LRESULT  CSignCardReportLossBaseOfficeDlg::OnOK(WPARAM wParam,LPARAM lParam)
{
	return TRUE;
}

//////////////////////////////////////////////////////////////////////////
/**
@brief      �������ð�ť��Ϣ

@param      (i)WPARAM wParam  ��Ϣ��Ϣ
@param      (i)LPARAM lParam  ��Ϣ��Ϣ����ʾ��ť���·��͵ĸ�����Ϣ

@retval     LRESULT  \n
TRUE:�����ɹ�  FALSE:����ʧ��

@exception  CSysException
*/
//////////////////////////////////////////////////////////////////////////
LRESULT  CSignCardReportLossBaseOfficeDlg::OnReset(WPARAM wParam,LPARAM lParam)
{
	return TRUE;
}

