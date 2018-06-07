#ifndef __IOBSERVABLE_H__
#define __IOBSERVABLE_H__

class IObservable
{
public:
	virtual void registerObservable() = 0;
	virtual void notifyObservers() = 0;
};

#endif