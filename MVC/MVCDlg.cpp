
// MVCDlg.cpp : ʵ���ļ�
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


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
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


// CMVCDlg �Ի���

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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CMVCDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CMVCDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}
#pragma endregion


BOOL CMVCDlg::OnInitDialog()
{
#pragma region other
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������
#pragma endregion

	model = new BeatModel();							//�ǵ�delete...
	controller = new BeatController(model, this);		//�ǵ�delete...

	//HeartModel* temp = new HeartModel();				//�ǵ�delete...
	//model = new HeartAdapte2Beat(temp);					//�ǵ�delete...
	//controller = new HeartController(temp, this);		//�ǵ�delete...

	model->registerObserver((IBeatObserver*)this);
	model->registerObserver((IBPMObserver*)this);

#pragma region other
	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
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
	//����...
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