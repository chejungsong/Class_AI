// CConstantDlg.cpp: 구현 파일
//

#include "pch.h"
#include "IMG_SCJ_0721.h"
#include "CConstantDlg.h"
#include "afxdialogex.h"


// CConstantDlg 대화 상자

IMPLEMENT_DYNAMIC(CConstantDlg, CDialog)

CConstantDlg::CConstantDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG4, pParent)
	, m_Constant(0)
{

}

CConstantDlg::~CConstantDlg()
{
}

void CConstantDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Constant);
	DDV_MinMaxDouble(pDX, m_Constant, 0, 255);
}


BEGIN_MESSAGE_MAP(CConstantDlg, CDialog)
	ON_COMMAND(ID_SUM_CONSTANT, &CConstantDlg::OnSumConstant)
	ON_UPDATE_COMMAND_UI(ID_SUM_CONSTANT, &CConstantDlg::OnUpdateSumConstant)
END_MESSAGE_MAP()


// CConstantDlg 메시지 처리기


void CConstantDlg::OnSumConstant()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
}


void CConstantDlg::OnUpdateSumConstant(CCmdUI* pCmdUI)
{
	// TODO: 여기에 명령 업데이트 UI 처리기 코드를 추가합니다.
}
