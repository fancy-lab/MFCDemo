
// MFCDemoDlg.h: 头文件
//

#pragma once

#define WM_LOAD_IMAGE WM_USER+100

// CMFCDemoDlg 对话框
class CMFCDemoDlg : public CDialogEx
{
// 构造
public:
	CMFCDemoDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCDEMO_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CEdit mLog;
	int showLog(LPCTSTR lpszString);
	int loadImage(int index);
protected:
	afx_msg LRESULT OnLoadImage(WPARAM wParam, LPARAM lParam);
};
