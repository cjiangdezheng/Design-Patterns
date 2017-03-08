// MediatorOrganization.h: interface for the CMediatorOrganization class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MEDIATORORGANIZATION_H__4374D62D_0FAB_4797_A8B3_9ABC1BDE479E__INCLUDED_)
#define AFX_MEDIATORORGANIZATION_H__4374D62D_0FAB_4797_A8B3_9ABC1BDE479E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

//抽象中介机构  
class Mediator  
{  
public:  
    virtual void Send(string message, Person *person) {}  
    virtual void SetA(Person *A) {}  //设置其中一方  
    virtual void SetB(Person *B) {}  
};  
//房屋中介  
class HouseMediator : public Mediator  
{  
private:  
    Person *m_A; //租房者  
    Person *m_B; //房东  
public:  
    HouseMediator();  
    void SetA(Person *A);  
    void SetB(Person *B);  
    void Send(string message, Person *person);
};  

#endif // !defined(AFX_MEDIATORORGANIZATION_H__4374D62D_0FAB_4797_A8B3_9ABC1BDE479E__INCLUDED_)
