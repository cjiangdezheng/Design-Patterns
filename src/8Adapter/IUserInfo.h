#pragma once
#include <iostream>
using std::string;
class IUserInfo
{
public:
	IUserInfo(void)
	{
	}
	virtual ~IUserInfo(void)
	{
	}
	virtual string GetUserName() = 0;        //姓名
	virtual string GetHomeAddress() = 0;     //家庭地址
	virtual string GetMobileNumber() = 0;    //手机号
	virtual string GetOfficeTelNumber() = 0; //办公室电话号码	
	virtual string GetJobPosition() = 0;     //工作岗位
	virtual string GetHomeTelNumber() = 0;   //家庭电话号码
};