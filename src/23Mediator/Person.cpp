// Person.cpp: implementation of the CPerson class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Person.h"
#include "MediatorOrganization.h"
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

void Renter::SetMediator(Mediator *mediator) 
{
	m_mediator = mediator; 
}  
void Renter::SendMessage(string message) 
{ 
	m_mediator->Send(message, this); 
}  
void Renter::GetMessage(string message) 
{ 
	cout<<"租房者收到信息"<<message; 
}  

//////////////////////////////////////////////////////////////////////////
void Landlord::SetMediator(Mediator *mediator) 
{ 
	m_mediator = mediator; 
}  
void Landlord::SendMessage(string message) 
{ 
	m_mediator->Send(message, this); 
}  
void Landlord::GetMessage(string message) 
{ 
	cout<<"房东收到信息："<<message; 
}  
