#ifndef __IOBSERVABLE_H__
#define __IOBSERVABLE_H__

#include <vector>
#include "IObserver.h"
using namespace std;

class IObservable
{
public:
	virtual ~IObservable();

	//所有注册的观察者都存放在这里
	vector<IObserver*> observersList;

	virtual void registerObserver(IObserver * o);   //注册
	virtual void removeObserver(IObserver * o);		//注销

	virtual void notifyObserver();			//通知
};

#endif



