#pragma once
#include "Istrategy.h"
class CBlockEnemy :public IStrategy
{
public:
	CBlockEnemy(void);
	~CBlockEnemy(void);
	void Operate(void);
};