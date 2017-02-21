#pragma once
#include "standardhumanfactory.h"
#include "IHumanFactory.h"
template<class T>
class CMaleHumanFactory :
	public CStandardHumanFactory<T>
{
public:
	CMaleHumanFactory(void){}
	~CMaleHumanFactory(void){}
	IHuman * CreateYellowHuman()
	{
		return CreateHuman();
	}
	IHuman * CreateWhiteHuman()
	{
		return CreateHuman();
	}
	IHuman * CreateBlackHuman()
	{
		return CreateHuman();
	}
};