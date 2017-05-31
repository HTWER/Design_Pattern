#include "Milk.h"


Milk::Milk(Beverage * beverage)
{
	this->beverage = beverage;
}

Milk::Milk()
{

}

Milk::~Milk()
{

}

std::string Milk::getDescription()
{
	return beverage->getDescription() + " + Milk";
}

float Milk::cost()
{
	return 0.20 + beverage->cost();
}
