#ifndef __IBEATOBSERVER_H__
#define __IBEATOBSERVER_H__

//将该类和IBPMObserver改成一个类，在view中包含两个新类的实例...
class IBeatObserver
{
public:
	virtual void updateBeat() = 0;
};

#endif