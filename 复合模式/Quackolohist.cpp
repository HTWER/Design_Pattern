#include "Quackolohist.h"
#include <iostream>

void Quackolohist::update(IObservable* observable)
{
	std::cout << "Quackologist: " << observable << " just quacked.\n";
}
