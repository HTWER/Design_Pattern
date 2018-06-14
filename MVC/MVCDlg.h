
// MVCDlg.h : ͷ�ļ�
//

#pragma once
#pragma region other
#include "afxwin.h"
#include "Resource.h"
#pragma endregion

#include "Observer.h"
#include "afxcmn.h"

class IController;
class IBeatModel;

class CMVCDlg : public CDialogEx
{
public:
#pragma region other
	CMVCDlg(CWnd* pParent = NULL);	// ��׼���캯��

	// �Ի�������
	enum { IDD = IDD_MVC_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

// ʵ��
protected:
	HICON m_hIcon;

	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
#pragma endregion

protected:
	virtual BOOL OnInitDialog();
private:
	IController* controller;
	IBeatModel* model;			//view��ʵ���س���model����Ϊ����ͨ���۲���ģʽ���model����ô����ȱ�㣿����
	Observer<CMVCDlg>* beatObserver;
	Observer<CMVCDlg>* bpmObserver;
public:
	afx_msg void OnBnClickedBtnStart();
	afx_msg void OnBnClickedBtnStop();
	afx_msg void OnBnClickedBtnDecreasebpm();
	afx_msg void OnBnClickedBtnIncreasebpm();
	afx_msg void OnBnClickedBtnSet();
private:
	CButton m_startBtn;
	CButton m_stopBtn;
	int m_textField_BPM;
	CProgressCtrl m_beatBar;
public:
	void enableStartBtn();
	void disableStartBtn();
	void enableStopBtn();
	void disableStopBtn();
	void updateBeat(void* observableObj);
	void updateBPM(void* observableObj);
};
