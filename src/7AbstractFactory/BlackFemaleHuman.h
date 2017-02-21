#pragma once
#include "blackhuman.h"
#include <iostream>
using std::cout;
using std::endl;
class CBlackFemaleHuman :
	public CBlackHuman
{
public:
	CBlackFemaleHuman(void)
	{
	}
	~CBlackFemaleHuman(void)
	{
	}
	void Sex()
	{
		cout << "该黑种人的性别为女..." << endl;
	}
};