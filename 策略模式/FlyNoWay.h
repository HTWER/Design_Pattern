#ifndef __FLYNOWAY_H__
#define __FLYNOWAY_H__
#include "FlyBehavior.h"

class FlyNoWay:public FlyBehavior
{
public:
	FlyNoWay();
	~FlyNoWay();

	//ʵ�ֽӿ���Ĵ��麯��
	void Fly();
};

#endif


