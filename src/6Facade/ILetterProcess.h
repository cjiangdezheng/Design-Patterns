#pragma once
#include <iostream>
using std::string;
class ILetterProcess
{
public:
	ILetterProcess(void){}
	virtual ~ILetterProcess(void){}
	virtual void WriteContext(string context) = 0; //写信
	virtual void FillEnvelope(string address) = 0; //填信封
	virtual void LetterIntoEnvelope() = 0; //装入信封
	virtual void SendLetter() = 0; //发信
};