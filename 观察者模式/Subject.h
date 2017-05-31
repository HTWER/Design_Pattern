#pragma once
#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include <vector>
#include "Observer.h"
using namespace std;

//其实这个模式就是一个消息推广模式，就是想将自己的数据在一定的时候推广到所有订阅的观察者上

//也算是接口类，没接到接口上面
class Subject
{
public:
	Subject();
	~Subject();

	//所有注册的观察者都存放在这里
	vector<Observer*> observersList;

	void registerObserver(Observer * o);   //注册
	void removeObserver(Observer * o);	   //注销
	virtual void notifyObserver() = 0;	   //通知所有观察者,这个函数不在这里实现
};

#endif



