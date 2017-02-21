#pragma once
#include "blackhuman.h"
#include <iostream>
using std::cout;
using std::endl;
class CBlackMaleHuman :
	public CBlackHuman
{
public:
	CBlackMaleHuman(void)
	{
	}
	~CBlackMaleHuman(void)
	{
	}
	void Sex()
	{
		cout << "该黑种人的性别为男..." << endl;
	}
};