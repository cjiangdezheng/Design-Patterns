#pragma once
#include "Employee.h"
#include "IVisitor.h"
#include <iostream>
#include <string>
using namespace std;

class CCommonEmployee :public CEmployee
{
public:
	CCommonEmployee();
	~CCommonEmployee();
	string GetJob();
	void SetJob(string per);
	void Accept(IVisitor *pVisitor);
//protected:
//	string GetOtherInfo();
private:
	string m_job;

};