#include "DuckFactory.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "DuckCall.h"
#include "RubberDuck.h"

IQuackable* DuckFactory::createMallardDuck()
{
	return new MallardDuck();
}

IQuackable* DuckFactory::createRedheadDuck()
{
	return new RedheadDuck();
}

IQuackable* DuckFactory::createDuckCall()
{
	return new DuckCall();
}

IQuackable* DuckFactory::createRubberDuck()
{
	return new RubberDuck();
}
