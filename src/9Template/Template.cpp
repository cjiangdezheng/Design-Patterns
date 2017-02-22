// Template.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "HummerModel.h"
#include "HummerH1Model.h"
#include "HummerH2Model.h"
#include <crtdbg.h>
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//H1型号
	CHummerModel *ph1 = new CHummerH1Model();
	ph1->Run();
	delete ph1;

	cout << "****************" << endl;

	//H2型号
	CHummerModel *ph2 = new CHummerH2Model();
	ph2->Run();
	delete ph2;

	//H1型号并且不让响
	/*CHummerH1Model *ph11 = new CHummerH1Model();
	ph11->SetAlarm(false);
	ph11->Run();
	delete ph11;*/
	return 0;
}

