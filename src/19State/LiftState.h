#pragma once
class CContext;
class CLiftState
{
public:
	CLiftState(void);
	virtual ~CLiftState(void);
	virtual void Open() = 0;
	virtual void Close() = 0;
	virtual void Run() = 0;
	virtual void Stop() = 0;

	void SetContext(CContext *pContext);
protected:
	CContext *m_pContext;
};