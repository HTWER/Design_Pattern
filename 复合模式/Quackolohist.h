#ifndef __QUACKOLOGIST_H__
#define __QUACKOLOGIST_H__

#include "IObserver.h"
#include "IObservable.h"

class Quackolohist : public IObserver
{
public:
	void update(IObservable* observable) override;
};

#endif



