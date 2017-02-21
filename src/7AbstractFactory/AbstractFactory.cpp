// AbstractFactory.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "IHuman.h"
#include "IHumanFactory.h"
#include "FemaleHumanFactory.h"
#include "MaleHumanFactory.h"
#include "MaleHumanFactory.cpp"
#include "YellowFemaleHuman.h"
#include "YellowMaleHuman.h"
#include "WhiteFemaleHuman.h"
#include "WhiteMaleHuman.h"
#include "BlackFemaleHuman.h"
#include "BlackMaleHuman.h"
void DoIt()
{
	IHumanFactory *pFemaleHumanFactory = new CFemaleHumanFactory<CYellowFemaleHuman>();
	IHuman *pYellowFemaleHuman = pFemaleHumanFactory->CreateYellowHuman();
	pYellowFemaleHuman->Cry();
	pYellowFemaleHuman->Laugh();
	pYellowFemaleHuman->Talk();
	pYellowFemaleHuman->Sex();
	delete pYellowFemaleHuman;
	delete pFemaleHumanFactory;

	cout << "**************" << endl;

	/*IHumanFactory *pMaleHumanFactory = new CMaleHumanFactory<CYellowMaleHuman>();
	IHuman *pYellowMaleHuman = pMaleHumanFactory->CreateYellowHuman();
	pYellowMaleHuman->Cry();
	pYellowMaleHuman->Laugh();
	pYellowMaleHuman->Talk();
	pYellowMaleHuman->Sex();
	delete pYellowMaleHuman;
	delete pMaleHumanFactory;*/
}


int _tmain(int argc, _TCHAR* argv[])
{
	DoIt();
	return 0;
}

