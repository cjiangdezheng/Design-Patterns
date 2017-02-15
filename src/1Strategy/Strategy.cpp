// Strategy.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Context.h"
#include "BackDoor.h"
#include "GivenGreenLight.h"
#include "BlockEnemy.h"
#include <iostream>
using std::cout;
using std::endl;


int _tmain(int argc, _TCHAR* argv[])
{
	CContext *pContext;

	
	cout << "----------第一个----------" << endl;
	pContext = new CContext(new CBackDoor());
	pContext->Operate();
	delete pContext;

	

	cout << "----------第二个----------" << endl;
	pContext = new CContext(new CGivenGreenLight());
	pContext->Operate();
	delete pContext;

	
	cout << "----------第三个----------" << endl;
	pContext = new CContext(new CBlockEnemy());
	pContext->Operate();
	delete pContext;


	system("PAUSE");
	return 0;
}

