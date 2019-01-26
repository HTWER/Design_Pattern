#include <iostream>
#include "Singleton2.h"
using namespace std;

Singleton2 Singleton2::uniqueInstance;

Singleton2 * Singleton2::getIntance()
{
	return &uniqueInstance;
}