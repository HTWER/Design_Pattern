#include "Mocha.h"


Mocha::Mocha()
{
}

Mocha::Mocha(Beverage * beverage)
{
	this->beverage = beverage;
}


Mocha::~Mocha()
{
}

std::string Mocha::getDescription()
{
	return beverage->getDescription() + " + Mocha";
}

float Mocha::cost()
{
	return beverage->cost() + 0.31;
}
