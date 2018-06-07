#include "IObserver.h"
#include "IObservable.h"

IObserver::~IObserver()
{
}

void IObserver::toRegister(IObservable * subject)
{
	this->subject = subject;
	subject->registerObserver(this);
}

void IObserver::toCancel()
{
	subject->removeObserver(this);
	subject = NULL;
}
