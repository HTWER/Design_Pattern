#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include "DataPakeger.h"

//声明一下
class Subject;

//接口类，接到了Subject主题类的observersList中
class Observer
{
public:
	Observer();
	~Observer();

	//观察的主题对象
	Subject * subject;

	//注册函数
	void toRegister(Subject * subject);

	void toCancel();

	virtual void update(DataPakeger data) = 0;
};

#endif


