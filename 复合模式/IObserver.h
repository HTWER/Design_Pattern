#ifndef __IOBSERVER_H__
#define __IOBSERVER_H__

class IObservable;

class IObserver
{
public:
	virtual void update(IObservable* observable) = 0;
};

#endif