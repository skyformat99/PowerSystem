// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
//#include "msdgridctrl.h"

// Dispatch interfaces referenced by this interface



/////////////////////////////////////////////////////////////////////////////
// CMsDgridCtrl

IMPLEMENT_DYNCREATE(CMsDgridCtrl, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CMsDgridCtrl properties

BOOL CMsDgridCtrl::GetAllowDelete()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetAllowDelete(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

BOOL CMsDgridCtrl::GetAllowAddNew()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetAllowAddNew(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

BOOL CMsDgridCtrl::GetAllowRowSizing()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetAllowRowSizing(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

BOOL CMsDgridCtrl::GetAllowUpdate()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetAllowUpdate(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

short CMsDgridCtrl::GetAppearance()
{
	short result;
	GetProperty(DISPID_APPEARANCE, VT_I4, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetAppearance(short propVal)
{
	SetProperty(DISPID_APPEARANCE, VT_I4, propVal);
}

short CMsDgridCtrl::GetBorderStyle()
{
	short result;
	GetProperty(DISPID_BORDERSTYLE, VT_I4, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetBorderStyle(short propVal)
{
	SetProperty(DISPID_BORDERSTYLE, VT_I4, propVal);
}

VARIANT CMsDgridCtrl::GetBookmark()
{
	VARIANT result;
	GetProperty(0x5, VT_VARIANT, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetBookmark(const VARIANT& propVal)
{
	SetProperty(0x5, VT_VARIANT, &propVal);
}

short CMsDgridCtrl::GetCol()
{
	short result;
	GetProperty(0x6, VT_I2, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetCol(short propVal)
{
	SetProperty(0x6, VT_I2, propVal);
}

BOOL CMsDgridCtrl::GetColumnHeaders()
{
	BOOL result;
	GetProperty(0x7, VT_BOOL, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetColumnHeaders(BOOL propVal)
{
	SetProperty(0x7, VT_BOOL, propVal);
}

BOOL CMsDgridCtrl::GetCurrentCellVisible()
{
	BOOL result;
	GetProperty(0x48, VT_BOOL, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetCurrentCellVisible(BOOL propVal)
{
	SetProperty(0x48, VT_BOOL, propVal);
}

BOOL CMsDgridCtrl::GetCurrentCellModified()
{
	BOOL result;
	GetProperty(0x40, VT_BOOL, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetCurrentCellModified(BOOL propVal)
{
	SetProperty(0x40, VT_BOOL, propVal);
}

BOOL CMsDgridCtrl::GetDataChanged()
{
	BOOL result;
	GetProperty(0x46, VT_BOOL, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetDataChanged(BOOL propVal)
{
	SetProperty(0x46, VT_BOOL, propVal);
}

long CMsDgridCtrl::GetDataMode()
{
	long result;
	GetProperty(0x25, VT_I4, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetDataMode(long propVal)
{
	SetProperty(0x25, VT_I4, propVal);
}

LPUNKNOWN CMsDgridCtrl::GetDataSource()
{
	LPUNKNOWN result;
	GetProperty(0x9, VT_UNKNOWN, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetDataSource(LPUNKNOWN propVal)
{
	SetProperty(0x9, VT_UNKNOWN, propVal);
}

float CMsDgridCtrl::GetDefColWidth()
{
	float result;
	GetProperty(0xa, VT_R4, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetDefColWidth(float propVal)
{
	SetProperty(0xa, VT_R4, propVal);
}

BOOL CMsDgridCtrl::GetEditActive()
{
	BOOL result;
	GetProperty(0x3f, VT_BOOL, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetEditActive(BOOL propVal)
{
	SetProperty(0x3f, VT_BOOL, propVal);
}

BOOL CMsDgridCtrl::GetEnabled()
{
	BOOL result;
	GetProperty(DISPID_ENABLED, VT_BOOL, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetEnabled(BOOL propVal)
{
	SetProperty(DISPID_ENABLED, VT_BOOL, propVal);
}

VARIANT CMsDgridCtrl::GetFirstRow()
{
	VARIANT result;
	GetProperty(0x16, VT_VARIANT, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetFirstRow(const VARIANT& propVal)
{
	SetProperty(0x16, VT_VARIANT, &propVal);
}


void CMsDgridCtrl::SetHeadFont(LPDISPATCH propVal)
{
	SetProperty(0xb, VT_DISPATCH, propVal);
}

float CMsDgridCtrl::GetHeadLines()
{
	float result;
	GetProperty(0xc, VT_R4, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetHeadLines(float propVal)
{
	SetProperty(0xc, VT_R4, propVal);
}

OLE_HANDLE CMsDgridCtrl::GetHWnd()
{
	OLE_HANDLE result;
	GetProperty(DISPID_HWND, VT_I4, (void*)&result);
	return result;
}

long CMsDgridCtrl::GetHWndEditor()
{
	long result;
	GetProperty(0x28, VT_I4, (void*)&result);
	return result;
}

BOOL CMsDgridCtrl::GetMarqueeUnique()
{
	BOOL result;
	GetProperty(0x4a, VT_BOOL, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetMarqueeUnique(BOOL propVal)
{
	SetProperty(0x4a, VT_BOOL, propVal);
}

long CMsDgridCtrl::GetMarqueeStyle()
{
	long result;
	GetProperty(0x4b, VT_I4, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetMarqueeStyle(long propVal)
{
	SetProperty(0x4b, VT_I4, propVal);
}

BOOL CMsDgridCtrl::GetRecordSelectors()
{
	BOOL result;
	GetProperty(0xd, VT_BOOL, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetRecordSelectors(BOOL propVal)
{
	SetProperty(0xd, VT_BOOL, propVal);
}

short CMsDgridCtrl::GetRow()
{
	short result;
	GetProperty(0xe, VT_I2, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetRow(short propVal)
{
	SetProperty(0xe, VT_I2, propVal);
}

long CMsDgridCtrl::GetRowDividerStyle()
{
	long result;
	GetProperty(0xf, VT_I4, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetRowDividerStyle(long propVal)
{
	SetProperty(0xf, VT_I4, propVal);
}

float CMsDgridCtrl::GetRowHeight()
{
	float result;
	GetProperty(0x10, VT_R4, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetRowHeight(float propVal)
{
	SetProperty(0x10, VT_R4, propVal);
}

long CMsDgridCtrl::GetScrollBars()
{
	long result;
	GetProperty(0x20, VT_I4, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetScrollBars(long propVal)
{
	SetProperty(0x20, VT_I4, propVal);
}

long CMsDgridCtrl::GetSelLength()
{
	long result;
	GetProperty(0x41, VT_I4, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetSelLength(long propVal)
{
	SetProperty(0x41, VT_I4, propVal);
}

long CMsDgridCtrl::GetSelStart()
{
	long result;
	GetProperty(0x42, VT_I4, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetSelStart(long propVal)
{
	SetProperty(0x42, VT_I4, propVal);
}

CString CMsDgridCtrl::GetSelText()
{
	CString result;
	GetProperty(0x43, VT_BSTR, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetSelText(LPCTSTR propVal)
{
	SetProperty(0x43, VT_BSTR, propVal);
}

short CMsDgridCtrl::GetSelStartCol()
{
	short result;
	GetProperty(0x11, VT_I2, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetSelStartCol(short propVal)
{
	SetProperty(0x11, VT_I2, propVal);
}

short CMsDgridCtrl::GetSelEndCol()
{
	short result;
	GetProperty(0x12, VT_I2, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetSelEndCol(short propVal)
{
	SetProperty(0x12, VT_I2, propVal);
}

short CMsDgridCtrl::GetSplit()
{
	short result;
	GetProperty(0x2b, VT_I2, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetSplit(short propVal)
{
	SetProperty(0x2b, VT_I2, propVal);
}

short CMsDgridCtrl::GetVisibleCols()
{
	short result;
	GetProperty(0x21, VT_I2, (void*)&result);
	return result;
}

short CMsDgridCtrl::GetVisibleRows()
{
	short result;
	GetProperty(0x13, VT_I2, (void*)&result);
	return result;
}

OLE_COLOR CMsDgridCtrl::GetBackColor()
{
	OLE_COLOR result;
	GetProperty(DISPID_BACKCOLOR, VT_I4, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetBackColor(OLE_COLOR propVal)
{
	SetProperty(DISPID_BACKCOLOR, VT_I4, propVal);
}

OLE_COLOR CMsDgridCtrl::GetForeColor()
{
	OLE_COLOR result;
	GetProperty(DISPID_FORECOLOR, VT_I4, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetForeColor(OLE_COLOR propVal)
{
	SetProperty(DISPID_FORECOLOR, VT_I4, propVal);
}

CString CMsDgridCtrl::GetCaption()
{
	CString result;
	GetProperty(DISPID_CAPTION, VT_BSTR, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetCaption(LPCTSTR propVal)
{
	SetProperty(DISPID_CAPTION, VT_BSTR, propVal);
}


void CMsDgridCtrl::SetFont(LPDISPATCH propVal)
{
	SetProperty(DISPID_FONT, VT_DISPATCH, propVal);
}

short CMsDgridCtrl::GetLeftCol()
{
	short result;
	GetProperty(0x17, VT_I2, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetLeftCol(short propVal)
{
	SetProperty(0x17, VT_I2, propVal);
}

BOOL CMsDgridCtrl::GetAllowArrows()
{
	BOOL result;
	GetProperty(0x2f, VT_BOOL, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetAllowArrows(BOOL propVal)
{
	SetProperty(0x2f, VT_BOOL, propVal);
}

BOOL CMsDgridCtrl::GetTabAcrossSplits()
{
	BOOL result;
	GetProperty(0x31, VT_BOOL, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetTabAcrossSplits(BOOL propVal)
{
	SetProperty(0x31, VT_BOOL, propVal);
}

long CMsDgridCtrl::GetTabAction()
{
	long result;
	GetProperty(0x32, VT_I4, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetTabAction(long propVal)
{
	SetProperty(0x32, VT_I4, propVal);
}

BOOL CMsDgridCtrl::GetWrapCellPointer()
{
	BOOL result;
	GetProperty(0x33, VT_BOOL, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetWrapCellPointer(BOOL propVal)
{
	SetProperty(0x33, VT_BOOL, propVal);
}

long CMsDgridCtrl::GetApproxCount()
{
	long result;
	GetProperty(0x51, VT_I4, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetApproxCount(long propVal)
{
	SetProperty(0x51, VT_I4, propVal);
}

CString CMsDgridCtrl::GetErrorText()
{
	CString result;
	GetProperty(0x52, VT_BSTR, (void*)&result);
	return result;
}

long CMsDgridCtrl::GetAddNewMode()
{
	long result;
	GetProperty(0x54, VT_I4, (void*)&result);
	return result;
}

CString CMsDgridCtrl::GetText()
{
	CString result;
	GetProperty(0x0, VT_BSTR, (void*)&result);
	return result;
}

void CMsDgridCtrl::SetText(LPCTSTR propVal)
{
	SetProperty(0x0, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CMsDgridCtrl operations

void CMsDgridCtrl::AboutBox()
{
	InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH CMsDgridCtrl::GetColumns(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPDISPATCH CMsDgridCtrl::GetSplits(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x23, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

VARIANT CMsDgridCtrl::GetSelBookmarks(const VARIANT& Index)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		&Index);
	return result;
}

short CMsDgridCtrl::ColContaining(float X)
{
	short result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		X);
	return result;
}

VARIANT CMsDgridCtrl::GetBookmark(long RowNum)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x19, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		RowNum);
	return result;
}

void CMsDgridCtrl::ReBind()
{
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

VARIANT CMsDgridCtrl::RowBookmark(short RowNum)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		RowNum);
	return result;
}

short CMsDgridCtrl::RowContaining(float Y)
{
	short result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Y);
	return result;
}

float CMsDgridCtrl::RowTop(short RowNum)
{
	float result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x1d, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		RowNum);
	return result;
}

void CMsDgridCtrl::Scroll(long Cols, long Rows)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x1e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Cols, Rows);
}

void CMsDgridCtrl::Refresh()
{
	InvokeHelper(DISPID_REFRESH, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


void CMsDgridCtrl::ClearSelCols()
{
	InvokeHelper(0x4c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CMsDgridCtrl::ClearFields()
{
	InvokeHelper(0x4d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CMsDgridCtrl::HoldFields()
{
	InvokeHelper(0x59, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

short CMsDgridCtrl::SplitContaining(float X, float Y)
{
	short result;
	static BYTE parms[] =
		VTS_R4 VTS_R4;
	InvokeHelper(0x53, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		X, Y);
	return result;
}
