#pragma once
#include "ikindwomen.h"
class CWangPo :public IKindWomen
{
public:
	CWangPo(IKindWomen *pKindWomen);
	~CWangPo(void);
	void HappyWithMan(void);
	void MakeEyesWithMan(void);
private:
	IKindWomen *m_pKindWomen;
};