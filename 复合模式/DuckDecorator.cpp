#include "DuckDecorator.h"

int DuckDecorator::numberOfQuacks = 0;

DuckDecorator::DuckDecorator(IQuackable* duck)
{
	this->duck = duck;
}


DuckDecorator::~DuckDecorator()
{
	delete duck;
}

int DuckDecorator::getQuacks()
{
	return numberOfQuacks;
}

void DuckDecorator::quack()
{
	duck->quack();
	numberOfQuacks++;
}