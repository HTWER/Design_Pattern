#ifndef __FLYWITHWINGS_H__
#define __FLYWITHWINGS_H__

//�ӿ���ľ�����

#include "FlyBehavior.h"

class FlyWithWings:public FlyBehavior
{
public:
	FlyWithWings();
	~FlyWithWings();

	//ʵ�ֽӿ����еĴ��麯��
	void Fly();
};

#endif

