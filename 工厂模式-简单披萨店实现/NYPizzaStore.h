#ifndef __NYPIZZASTORE_H__
#define __NYPIZZASTORE_H__

#include "PizzaStore.h"

class NYPizzaStore:public PizzaStore
{
public:
	NYPizzaStore();
	~NYPizzaStore();

	Pizza * createPizza(string type);
};


#endif

