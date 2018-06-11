#include "QuackObservable.h"
#include "IObserver.h"

QuackObservable::QuackObservable(IObservable* duck)
{
	this->duck = duck;
}

void QuackObservable::notifyObserver()
{
	for each (IObserver* var in observers)
		var->update(duck);
}
