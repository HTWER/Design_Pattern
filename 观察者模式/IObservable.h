#ifndef __IOBSERVABLE_H__
#define __IOBSERVABLE_H__

#include <vector>
#include "IObserver.h"
using namespace std;

//也算是接口类，没接到接口上面
class IObservable
{
public:
	virtual ~IObservable();

	//所有注册的观察者都存放在这里
	vector<IObserver*> observersList;

	void registerObserver(IObserver * o);   //注册
	void removeObserver(IObserver * o);	   //注销
	virtual void notifyObserver() = 0;	   //通知所有观察者,这个函数不在这里实现
};

#endif



