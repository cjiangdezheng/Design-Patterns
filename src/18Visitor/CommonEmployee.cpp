#include "StdAfx.h"
#include "CommonEmployee.h"

CCommonEmployee::CCommonEmployee()
{
	m_job = "";

}
CCommonEmployee::~CCommonEmployee()
{

}
string CCommonEmployee::GetJob()
{
	return m_job;
}
void CCommonEmployee::SetJob(string job)
{
	m_job = job;
}
void CCommonEmployee::Accept(IVisitor *pVisitor)
{
	pVisitor->Visit(*this);
}

/*string CCommonEmployee::GetOtherInfo()
{
	return "A";

}*/