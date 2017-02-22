#pragma once
#include "OuterUserBaseInfo.h"
#include "OuterUserHomeInfo.h"
#include "OuterUserOfficeInfo.h"
#include "IOuterUser.h"
class COuterUser:public IOuterUser
{
public:
	COuterUser(void);
	~COuterUser(void);
	COuterUserBaseInfo * GetUserBaseInfo();
	COuterUserHomeInfo * GetUserHomeInfo();
	COuterUserOfficeInfo * GetUserOfficeInfo();
};