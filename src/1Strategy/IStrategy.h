#pragma once
#include <iostream>
using std::cout;
using std::endl;

class IStrategy
{
public:
	IStrategy(void)
	{
		//cout << "IStrategy::IStrategy" << endl;
	}
	virtual ~IStrategy(void)
	{
		//cout << "IStrategy::~IStrategy" << endl;
	}
	virtual void Operate(void) = 0;
};