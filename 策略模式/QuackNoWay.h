#ifndef _QUACKNOWAY_H__
#define _QUACKNOWAY_H__
#include "QuackBehavior.h"

class QuackNoWay:public QuackBehavior
{
public:
	QuackNoWay();
	~QuackNoWay();

	//ʵ�ֽӿ����еĴ��麯��
	void Quack();
};

#endif


