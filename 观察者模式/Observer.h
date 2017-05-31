#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include "DataPakeger.h"

//����һ��
class Subject;

//�ӿ��࣬�ӵ���Subject�������observersList��
class Observer
{
public:
	Observer();
	~Observer();

	//�۲���������
	Subject * subject;

	//ע�ắ��
	void toRegister(Subject * subject);

	void toCancel();

	virtual void update(DataPakeger data) = 0;
};

#endif


