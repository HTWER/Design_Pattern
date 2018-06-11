#include "Flock.h"

void Flock::add(IQuackable* quacker)
{
	quackers.push_back(quacker);
}

void Flock::quack()
{
	for each (IQuackable* var in quackers)
		var->quack();
}

void Flock::registerObserver(IObserver * o)
{
	for each (IQuackable* var in quackers)
		var->registerObserver(o);
}

void Flock::removeObserver(IObserver * o)
{
	for each (IQuackable* var in quackers)
		var->registerObserver(o);
}

void Flock::notifyObserver()
{

}
