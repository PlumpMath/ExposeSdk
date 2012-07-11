/////////////////////////////////////////////////////////////////////////////
// ExposeSdkApp.h : main header file for the ExposeSdk DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "Resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CExposeSdkApp
// See ExposeSdkApp.cpp for the implementation of this class
//

class CExposeSdkApp : public CWinApp
{
public:
	CExposeSdkApp();

// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};
