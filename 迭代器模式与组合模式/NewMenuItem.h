#ifndef __NEWMENUITEM_H__
#define __NEWMENUITEM_H__

#include "MenuComponent.h"
#include <string>

class NewMenuItem :public MenuComponent
{
public:
	string name;
	string description;
	bool vegetarian;
	double price;

	NewMenuItem(string name, string description, bool vegetarian, double price)
	{
		this->name = name;
		this->description = description;
		this->vegetarian = vegetarian;
		this->price = price;
	}

	Iterator* createIterator() override
	{
		return NULL;
	}

	string getName() override
	{
		return name;
	}

	string getDescription() override
	{
		return description;
	}

	double getPrice() override
	{
		return price;
	}

	bool isVegetarian() override
	{
		return vegetarian;
	}

	void print() override
	{
		cout << getName();
		if (isVegetarian())
			cout << "(V)";
		cout << "," << getPrice() << endl;
		cout << "	--" << getDescription() << endl;
		cout << endl;
	}

};

#endif