#include "StdAfx.h"
#include "Context.h"
CContext::CContext(IStrategy *pStrategy)
{
	//cout << "CContext::CContext" << endl;
	this->m_pStrategy = pStrategy;
}
CContext::~CContext(void)
{
	//cout << "CContext::~CContext" << endl;
	delete this->m_pStrategy;
}
void CContext::Operate(void)
{
	//cout << "CContext::Operate" << endl;
	this->m_pStrategy->Operate();
}