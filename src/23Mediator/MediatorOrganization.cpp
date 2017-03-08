// MediatorOrganization.cpp: implementation of the CMediatorOrganization class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MediatorOrganization.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////


HouseMediator::HouseMediator(): m_A(0), m_B(0) 
{

}  
void HouseMediator::SetA(Person *A) 
{ 
	m_A = A; 
}  
void HouseMediator::SetB(Person *B) 
{ 
	m_B = B; 
}  
void HouseMediator::Send(string message, Person *person)   
{  
	if(person == m_A) //租房者给房东发信息  
		m_B->GetMessage(message); //房东收到信息  
	else  
		m_A->GetMessage(message);  
}  