#pragma once
#include "afxcaptionbar.h"
class CNoCloseCaptionBar :
	public CMFCCaptionBar
{
public:
	CNoCloseCaptionBar();
	~CNoCloseCaptionBar();

	virtual void RecalcLayout();
};

