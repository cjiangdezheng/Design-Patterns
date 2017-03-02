// Observer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
/*
#include "HanFeiZi.h"
#include "LiSi.h"
#include "HanFeiZiNew.h"*/
#include "HanFeiziObservable.h"
#include "LiSiObserver.h"
#include "ZhouSiObserver.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

void DoNew()
{
	//IHanFeiZi.h, HanFeiZiNew.h, ILiSi.h, LiSi.h
	// cout << "----------用新的方法试试----------" << endl;

	//CHanFeiZiNew hanfeizi;

	//hanfeizi.HaveBreakfast();

	//hanfeizi.HaveFun();
}


void DoNewNew()
{
	//IObservable.h, HanfeiziObservable.h, IObserver.h, LiSiObserver.h
	cout << "----------用更新的方法再试试----------" << endl;
	IObserver *pLiSi = new CLiSiObserver();
	IObserver *pZhouSi = new CZhouSiObserver();

	CHanFeiziObservable *pHanFeiZi = new CHanFeiziObservable();

	pHanFeiZi->AddObserver(pLiSi);
	pHanFeiZi->AddObserver(pZhouSi);
	pHanFeiZi->HaveBreakfast();

	delete pLiSi;
	pLiSi = NULL;
	delete pHanFeiZi;
	pHanFeiZi = NULL;
}

int _tmain(int argc, _TCHAR* argv[])
{
	//比较原始的方法，用线程来观察。
	//DoIt();

	//把李斯这个类聚集到韩非子这个类上，这样的话耦合度太高了，还是用更抽象的方式。
	DoNew();

	//更抽象的方式，想要观察韩非子的人多了去了，不可能只允许李斯观察。
	DoNewNew();
	return 0;
}

