// Person.h: interface for the CPerson class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PERSON_H__4716A36D_FB89_4D86_9332_1502B1CA71CA__INCLUDED_)
#define AFX_PERSON_H__4716A36D_FB89_4D86_9332_1502B1CA71CA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include <iostream>
#include <string>


using namespace std;

class Mediator;  

//抽象人  
class Person  
{  
protected:  
    Mediator *m_mediator; //中介  
public:  
    virtual void SetMediator(Mediator *mediator){} //设置中介  
    virtual void SendMessage(string message) {}    //向中介发送信息  
    virtual void GetMessage(string message) {}     //从中介获取信息  
};  

class Renter: public Person  
{  
public:  
    void SetMediator(Mediator *mediator);  
    void SendMessage(string message);  
    void GetMessage(string message);  
};  

class Landlord: public Person  
{  
public:  
    void SetMediator(Mediator *mediator);  
    void SendMessage(string message);  
    void GetMessage(string message);  
};  

#endif // !defined(AFX_PERSON_H__4716A36D_FB89_4D86_9332_1502B1CA71CA__INCLUDED_)
