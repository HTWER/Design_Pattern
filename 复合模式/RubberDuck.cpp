#include "RubberDuck.h"
#include "QuackObservable.h"
#include <iostream>
using namespace std;

RubberDuck::RubberDuck()
{
	quackObservable = new QuackObservable(this);
}

RubberDuck::~RubberDuck()
{
	delete quackObservable;
}

void RubberDuck::quack()
{
	cout << "Squeak" << endl;
	notifyObserver();
}

void RubberDuck::registerObserver(IObserver* observer)
{
	quackObservable->registerObserver(observer);
}

void RubberDuck::removeObserver(IObserver* observer)
{
	quackObservable->removeObserver(observer);
}

void RubberDuck::notifyObserver()
{
	quackObservable->notifyObserver();
}
