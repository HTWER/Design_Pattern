#include "DecoratingDuckFactory.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "DuckCall.h"
#include "RubberDuck.h"
#include "DuckDecorator.h"

IQuackable* DecoratingDuckFactory::createMallardDuck()
{
	return new DuckDecorator(new MallardDuck());
}

IQuackable* DecoratingDuckFactory::createRedheadDuck()
{
	return new DuckDecorator(new RedheadDuck());
}

IQuackable* DecoratingDuckFactory::createDuckCall()
{
	return new DuckDecorator(new DuckCall());
}

IQuackable* DecoratingDuckFactory::createRubberDuck()
{
	return new DuckDecorator(new RubberDuck());
}
