#pragma once
#include <iostream>
#include <string>
#include "IVisitor.h"
using namespace std;

class CEmployee
{
public:
	CEmployee(void);
	virtual ~CEmployee(void);

	virtual void Accept(IVisitor *pVisitor) = 0;

	static int MALE;
	static int FEMALE;
public:
	string GetName();
	void SetName(string name);

	int GetSalary();
	void SetSalary(int v);

	int GetSex();
	void SetSex(int v);
private:
	string m_name;
	int m_salary;
	int m_sex;
};