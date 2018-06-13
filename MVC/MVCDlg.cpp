
// MVCDlg.cpp : 实现文件
//

#pragma region other
#include "stdafx.h"
#include "MVC.h"
#include "MVCDlg.h"
#include "afxdialogex.h"
#pragma endregion

#include "BeatModel.h"
#include "HeartModel.h"
#include "BeatController.h"
#include "IBeatObserver.h"
#include "IBPMObserver.h"
#include "HeartAdapte2Beat.h"
#include "HeartController.h"
#include "string"

#pragma region other
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMVCDlg 对话框

CMVCDlg::CMVCDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMVCDlg::IDD, pParent)
	, m_textField_BPM(0)
	, m_bpmLabel(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMVCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BTN_START, m_startBtn);
	DDX_Text(pDX, IDC_TEXTFIELD_BPM, m_textField_BPM);
	DDV_MinMaxInt(pDX, m_textField_BPM, 0, 9999);
	DDX_Control(pDX, IDC_BTN_STOP, m_stopBtn);
	DDX_Text(pDX, IDC_LABEL_BPM, m_bpmLabel);
}

BEGIN_MESSAGE_MAP(CMVCDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTN_START, &CMVCDlg::OnBnClickedBtnStart)
	ON_BN_CLICKED(IDC_BTN_STOP, &CMVCDlg::OnBnClickedBtnStop)
	ON_BN_CLICKED(IDC_BTN_DECREASEBPM, &CMVCDlg::OnBnClickedBtnDecreasebpm)
	ON_BN_CLICKED(IDC_BTN_INCREASEBPM, &CMVCDlg::OnBnClickedBtnIncreasebpm)
	ON_BN_CLICKED(IDC_BTN_SET, &CMVCDlg::OnBnClickedBtnSet)
END_MESSAGE_MAP()

void CMVCDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMVCDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMVCDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}
#pragma endregion


BOOL CMVCDlg::OnInitDialog()
{
#pragma region other
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码
#pragma endregion

	model = new BeatModel();							//记得delete...
	controller = new BeatController(model, this);		//记得delete...

	//HeartModel* temp = new HeartModel();				//记得delete...
	//model = new HeartAdapte2Beat(temp);					//记得delete...
	//controller = new HeartController(temp, this);		//记得delete...

	model->registerObserver((IBeatObserver*)this);
	model->registerObserver((IBPMObserver*)this);

#pragma region other
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
#pragma endregion
}

void CMVCDlg::OnBnClickedBtnStart()
{
	controller->start();
}


void CMVCDlg::OnBnClickedBtnStop()
{
	controller->stop();
}


void CMVCDlg::OnBnClickedBtnDecreasebpm()
{
	controller->decreaseBPM();
}


void CMVCDlg::OnBnClickedBtnIncreasebpm()
{
	controller->increaseBPM();
}


void CMVCDlg::OnBnClickedBtnSet()
{
	UpdateData(TRUE);		//J...
	controller->setBPM(m_textField_BPM);
}

void CMVCDlg::enableStartBtn()
{
	m_startBtn.EnableWindow(true);		//J...
}


void CMVCDlg::disableStartBtn()
{
	m_startBtn.EnableWindow(false);
}


void CMVCDlg::enableStopBtn()
{
	m_stopBtn.EnableWindow(true);
}


void CMVCDlg::disableStopBtn()
{
	m_stopBtn.EnableWindow(false);
}

void CMVCDlg::updateBeat()
{
	//脉动...
}

void CMVCDlg::updateBPM()
{
	int bpm = model->getBPM();
	if (bpm == 0)
		m_bpmLabel = "offline";
	else
		m_bpmLabel = ("Current BPM: " + to_string(bpm)).c_str();

	UpdateData(FALSE);
}