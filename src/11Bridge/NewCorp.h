#pragma once
#include "IProduct.h"
class CNewCorp
{
public:
	CNewCorp(IProduct *pProduct);
	virtual ~CNewCorp(void);
	void MakeMoney();
private:
	IProduct *m_pProduct;
};