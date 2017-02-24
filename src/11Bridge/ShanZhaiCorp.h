#pragma once
#include "newcorp.h"
#include "IProduct.h"
class CShanZhaiCorp :public CNewCorp
{
public:
	CShanZhaiCorp(IProduct *pProduct);
	~CShanZhaiCorp(void);
	void MakeMoney();
};