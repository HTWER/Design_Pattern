#include "MallardDuck.h"
#include "QuackObservable.h"
#include <iostream>
using namespace std;

MallardDuck::MallardDuck()
{
	quackObservable = new QuackObservable(this);
}

MallardDuck::~MallardDuck()
{
	delete quackObservable;
}

void MallardDuck::quack()
{
	cout << "Quack" << endl;
	notifyObserver();
}

void MallardDuck::registerObserver(IObserver* observer)
{
	quackObservable->registerObserver(observer);
}

void MallardDuck::removeObserver(IObserver* observer)
{
	quackObservable->removeObserver(observer);
}

void MallardDuck::notifyObserver()
{
	quackObservable->notifyObserver();
}

