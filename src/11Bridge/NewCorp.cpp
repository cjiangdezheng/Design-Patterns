#include "StdAfx.h"
#include "NewCorp.h"
CNewCorp::CNewCorp( IProduct *pProduct )
{
	this->m_pProduct = pProduct;
}
CNewCorp::~CNewCorp(void)
{
}
void CNewCorp::MakeMoney()
{
	//
	this->m_pProduct->BeProducted();

	//
	this->m_pProduct->BeSelled();
}