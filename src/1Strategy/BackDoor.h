#pragma once
#include "Istrategy.h"
#include <iostream>
using std::cout;
using std::endl;
class CBackDoor:public IStrategy
{
public:
	CBackDoor(void);
	~CBackDoor(void);
	void Operate(void);
};