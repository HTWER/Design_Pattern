#ifndef __IOBSERVABLE_H__
#define __IOBSERVABLE_H__

#include <vector>
using namespace std;

class IObserver;

//这个项目中，结构的设计比原来的要好，这个设计中，notifyObserver函数只需要重写一次就好
class IObservable
{
protected:
	vector<IObserver*> observers;
public:
	virtual ~IObservable(){};
	virtual void registerObserver(IObserver* observer);
	virtual void removeObserver(IObserver* observer);
	virtual void notifyObserver() = 0;
};

#endif