// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "rdocolumns.h"

// Dispatch interfaces referenced by this interface
#include "_rdocolumn.h"


/////////////////////////////////////////////////////////////////////////////
// CrdoColumns properties

/////////////////////////////////////////////////////////////////////////////
// CrdoColumns operations

long CrdoColumns::GetCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CrdoColumns::Refresh()
{
	InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

C_rdoColumn CrdoColumns::GetItem(const VARIANT& Index)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, parms,
		&Index);
	return C_rdoColumn(pDispatch);
}
