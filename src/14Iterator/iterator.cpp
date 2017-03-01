// iterator.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "IProject.h"
#include "Project.h"
//#include "..\CommonDeclare\Convert.h"
#include "ProjectIterator.h"
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
void DoIt()
{
	cout << "----------未使用迭代模式----------" << endl;
	vector<IProject*> projectList;

	projectList.push_back(new CProject("星球大战项目", 10, 100000));
	projectList.push_back(new CProject("扭转时空项目", 100, 10000000));
	projectList.push_back(new CProject("超人改造项目", 10000, 1000000000));

	for (int i = 4; i < 6; i ++)
	{
		string name = "";
		name.append("第");
		char temp[32] = {0};
		sprintf(temp,"%d",i);
		name.append(temp);
		//name.append(CConvert::ToString(i));
		name.append("个项目");
		projectList.push_back(new CProject(name, i * 5, i * 1000000));
	}

	vector<IProject*>::const_iterator projectIt = projectList.begin();
	for (; projectIt != projectList.end(); projectIt++)
		cout << (*projectIt)->GetProjectInfo().c_str() << endl;

	vector<IProject*>::reverse_iterator projectDelIt = projectList.rbegin();
	for (; projectDelIt != projectList.rend(); projectDelIt++)
	{
		delete (*projectDelIt);
		(*projectDelIt) = NULL;
	}
	projectList.clear();
}
void DoNew()
{
	cout << "----------使用迭代模式----------" << endl;
	IProject *pproject = new CProject();
	pproject->Add("星球大战项目", 10, 100000);
	pproject->Add("扭转时空项目", 100, 10000000);
	pproject->Add("超人改造项目", 10000, 1000000000);

	for (int i = 4; i < 6; i ++)
	{
		string name = "";
		name.append("第");
		char temp[32] = {0};
		sprintf(temp,"%d",i);
		//itoa(i,temp.c_str(),10);
		name.append(temp);
		//name.append(CConvert::ToString(i));
		name.append("个项目");
		pproject->Add(name, i * 5, i * 1000000);
	}

	IProjectIterator *pprojectIt = pproject->GetIterator();
	while(pprojectIt->HasNext())
	{
		IProject *p = dynamic_cast<IProject*>(pprojectIt->Next());
		cout << p->GetProjectInfo().c_str() << endl;
	}
	delete pprojectIt;
	pprojectIt = NULL;
	pproject->Erase();
	delete pproject;
	pproject = NULL;
}

int _tmain(int argc, _TCHAR* argv[])
{
	//使用Iterator模式之前
	//DoIt();

	//使用Iterator
	DoNew();
	return 0;
}

