#pragma once
#include "OuterUserBaseInfo.h"
#include "OuterUserHomeInfo.h"
#include "OuterUserOfficeInfo.h"
class IOuterUser
{
public:
	IOuterUser(void)
	{
	}
	~IOuterUser(void)
	{
	}
	virtual COuterUserBaseInfo * GetUserBaseInfo() = 0;
	virtual  COuterUserHomeInfo * GetUserHomeInfo() = 0;
	virtual  COuterUserOfficeInfo * GetUserOfficeInfo() = 0;
};