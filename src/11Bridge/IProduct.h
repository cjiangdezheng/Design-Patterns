#pragma once
class IProduct
{
public:
	IProduct(void)
	{
	}
	virtual ~IProduct(void)
	{
	}
	virtual void BeProducted() = 0;  //生产
	virtual void BeSelled() = 0;   //销售
};