#include "Observer.h"
#include "Subject.h"


Observer::Observer()
{
}


Observer::~Observer()
{
}

void Observer::toRegister(Subject * subject)
{
	this->subject = subject;
	subject->registerObserver(this);
}

void Observer::toCancel()
{
	subject->removeObserver(this);
	subject = NULL;
}
