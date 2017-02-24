// Bridge.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#include "ClothesCorp.h"
#include "Clothes.h"
#include "NewHouseCorp.h"
#include "Clothes.h"
#include "IPod.h"
#include "ShanZhaiCorp.h"
#include <iostream>
using std::cout;
using std::endl;

void DoNewRun1()
{
	cout << "----------房----------" << endl;
	CHouse house;
	CNewHouseCorp newHouseCorp(&house);
	newHouseCorp.MakeMoney();
	cout << endl;

	cout << "----------山----------" << endl;
	CClothes clothes;
	CShanZhaiCorp shanZhaiCorp(&clothes);
	shanZhaiCorp.MakeMoney();
	cout << endl;
}

void DoNewRun2()
{
	cout << "----------房----------" << endl;
	CHouse house;
	CNewHouseCorp newHouseCorp(&house);
	newHouseCorp.MakeMoney();
	cout << endl;

	cout << "----------山----------" << endl;
	CIPod ipod;
	CShanZhaiCorp shanZhaiCorp(&ipod);
	shanZhaiCorp.MakeMoney();
	cout << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	//房，衣
	DoNewRun1();

	//房，ipod
	DoNewRun2();
	return 0;
}

