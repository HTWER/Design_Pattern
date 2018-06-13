
// MVCDlg.h : 头文件
//

#pragma once
#pragma region other
#include "afxwin.h"
#include "Resource.h"
#pragma endregion

#include "IBeatObserver.h"
#include "IBPMObserver.h"
#include "afxcmn.h"

class IController;
class IBeatModel;

class CMVCDlg : public CDialogEx, public IBeatObserver, public IBPMObserver
{
public:
#pragma region other
	CMVCDlg(CWnd* pParent = NULL);	// 标准构造函数

	// 对话框数据
	enum { IDD = IDD_MVC_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

// 实现
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
	IBeatModel* model;			//view其实不必持有model，因为可以通过观察者模式获得model；这么做有缺点？？？
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
	void updateBeat() override;
	void updateBPM() override;
};
