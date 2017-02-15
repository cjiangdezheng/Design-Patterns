#pragma once
#include "Istrategy.h"
class CGivenGreenLight :public IStrategy
{
public:
	CGivenGreenLight(void);
	~CGivenGreenLight(void);
	void Operate(void);
};