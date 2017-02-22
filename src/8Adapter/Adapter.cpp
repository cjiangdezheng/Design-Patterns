// Adapter.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "IOuterUser.h"
#include "IUserInfo.h"
#include "UserInfo.h"
#include "OuterUserInfo.h"
void DoIt()
{
	IUserInfo *pYourGirl = new CUserInfo();
	for(int i = 0; i < 101; i += 20)
	{
		pYourGirl->GetMobileNumber();
	}
	delete pYourGirl;
}
void NowDoIt()
{
	IUserInfo *pYourGirl = new COuterUserInfo();

	for(int i = 0; i < 101; i += 20)
	{
		pYourGirl->GetMobileNumber();
	}

	delete pYourGirl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	//DoIt();

	NowDoIt();
	return 0;
}

