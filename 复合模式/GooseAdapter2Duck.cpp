#include "GooseAdapter2Duck.h"
#include "Goose.h"
#include "QuackObservable.h"

GooseAdapter2Duck::GooseAdapter2Duck(Goose* goose)
{
	this->goose = goose;
	quackObservable = new QuackObservable(this);
}

GooseAdapter2Duck::~GooseAdapter2Duck()
{
	delete quackObservable;
	delete goose;
}

void GooseAdapter2Duck::quack()
{
	goose->honk();
	notifyObserver();
}

void GooseAdapter2Duck::registerObserver(IObserver* observer)
{
	quackObservable->registerObserver(observer);
}

void GooseAdapter2Duck::removeObserver(IObserver* observer)
{
	quackObservable->removeObserver(observer);
}

void GooseAdapter2Duck::notifyObserver()
{
	quackObservable->notifyObserver();
}