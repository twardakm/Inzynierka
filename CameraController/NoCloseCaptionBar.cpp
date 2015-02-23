#include "stdafx.h"
#include "NoCloseCaptionBar.h"


CNoCloseCaptionBar::CNoCloseCaptionBar()
{
}


CNoCloseCaptionBar::~CNoCloseCaptionBar()
{
}

void CNoCloseCaptionBar::RecalcLayout()
{
	__super::RecalcLayout();
	m_rectClose.SetRectEmpty();
}
