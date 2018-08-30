// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class C_rdoResultset;
class COleFont;
class C_rdoConnection;
class C_rdoEnvironment;

/////////////////////////////////////////////////////////////////////////////
// CRdc wrapper class

class CRdc : public CWnd
{
protected:
	DECLARE_DYNCREATE(CRdc)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x43478d73, 0x78e0, 0x11cf, { 0x8e, 0x78, 0x0, 0xa0, 0xd1, 0x0, 0x3, 0x8e } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	CString GetDataSourceName();
	void SetDataSourceName(LPCTSTR lpszNewValue);
	CString GetSql();
	void SetSql(LPCTSTR lpszNewValue);
	long GetLoginTimeout();
	void SetLoginTimeout(long nNewValue);
	CString GetVersion();
	CString GetConnect();
	void SetConnect(LPCTSTR lpszNewValue);
	long GetQueryTimeout();
	void SetQueryTimeout(long nNewValue);
	long GetRowsetSize();
	void SetRowsetSize(long nNewValue);
	long GetResultsetType();
	void SetResultsetType(long nNewValue);
	long GetMaxRows();
	void SetMaxRows(long nNewValue);
	CString GetLogMessages();
	void SetLogMessages(LPCTSTR lpszNewValue);
	long GetKeysetSize();
	void SetKeysetSize(long nNewValue);
	short GetEditMode();
	void SetEditMode(short nNewValue);
	BOOL GetEnabled();
	void SetEnabled(BOOL bNewValue);
	C_rdoResultset GetResultset();
	void SetRefResultset(LPDISPATCH newValue);
	BOOL GetReadOnly();
	void SetReadOnly(BOOL bNewValue);
	short GetOptions();
	void SetOptions(short nNewValue);
	CString GetUserName_();
	void SetUserName(LPCTSTR lpszNewValue);
	CString GetPassword();
	void SetPassword(LPCTSTR lpszNewValue);
	long GetCursorDriver();
	void SetCursorDriver(long nNewValue);
	COleFont GetFont();
	void SetRefFont(LPDISPATCH newValue);
	C_rdoConnection GetConnection();
	void SetRefConnection(LPDISPATCH newValue);
	long GetEOFAction();
	void SetEOFAction(long nNewValue);
	long GetBOFAction();
	void SetBOFAction(long nNewValue);
	long GetErrorThreshold();
	void SetErrorThreshold(long nNewValue);
	long GetLockType();
	void SetLockType(long nNewValue);
	long GetPrompt();
	void SetPrompt(long nNewValue);
	long GetAppearance();
	void SetAppearance(long nNewValue);
	C_rdoEnvironment GetEnvironment();
	void SetRefEnvironment(LPDISPATCH newValue);
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
	unsigned long GetBackColor();
	void SetBackColor(unsigned long newValue);
	unsigned long GetForeColor();
	void SetForeColor(unsigned long newValue);
	long GetBatchCollisionCount();
	VARIANT GetBatchCollisionRows();
	long GetBatchSize();
	void SetBatchSize(long nNewValue);
	short GetUpdateOperation();
	void SetUpdateOperation(short nNewValue);
	short GetUpdateCriteria();
	void SetUpdateCriteria(short nNewValue);
	void UpdateControls();
	void UpdateRow();
	void BeginTrans();
	void CommitTrans();
	void RollbackTrans();
	void Cancel();
	void Refresh();
};
