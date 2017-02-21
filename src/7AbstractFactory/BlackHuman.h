#pragma once
#include "ihuman.h"
#include <iostream>
using std::cout;
using std::endl;
class CBlackHuman :
	public IHuman
{
public:
	CBlackHuman(void)
	{
	}
	~CBlackHuman(void)
	{
	}
	void Laugh()
	{
		cout << "黑人会笑" << endl;
	}
	void Cry()
	{
		cout << "黑人会哭" << endl;
	}
	void Talk()
	{
		cout << "黑人可以说话，一般人听不懂" << endl;
	}

	virtual void Sex() = 0;
};