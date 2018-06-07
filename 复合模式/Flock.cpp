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
