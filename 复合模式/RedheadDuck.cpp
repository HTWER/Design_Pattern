#include "RedheadDuck.h"
#include "QuackObservable.h"
#include <iostream>
using namespace std;

RedheadDuck::RedheadDuck()
{
	quackObservable = new QuackObservable(this);
}

RedheadDuck::~RedheadDuck()
{
	delete quackObservable;
}

void RedheadDuck::quack()
{
	cout << "Quack" << endl;
	notifyObserver();
}

void RedheadDuck::registerObserver(IObserver* observer)
{
	quackObservable->registerObserver(observer);
}

void RedheadDuck::removeObserver(IObserver* observer)
{
	quackObservable->removeObserver(observer);
}

void RedheadDuck::notifyObserver()
{
	quackObservable->notifyObserver();
}
