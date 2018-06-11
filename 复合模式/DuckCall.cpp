#include "DuckCall.h"
#include "QuackObservable.h"
#include <iostream>
using namespace std;

DuckCall::DuckCall()
{
	quackObservable = new QuackObservable(this);
}

DuckCall::~DuckCall()
{
	delete quackObservable;
}

void DuckCall::quack()
{
	cout << "Kwak" << endl;
	notifyObserver();
}

void DuckCall::registerObserver(IObserver* observer)
{
	quackObservable->registerObserver(observer);
}

void DuckCall::removeObserver(IObserver* observer)
{
	quackObservable->removeObserver(observer);
}

void DuckCall::notifyObserver()
{
	quackObservable->notifyObserver();
}

