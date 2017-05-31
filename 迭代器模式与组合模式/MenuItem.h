#ifndef __MENUITEM_H__
#define __MENUITEM_H__

//≤Àµ•œÓ¿‡

#include <string>
using namespace std;

class MenuItem
{
public:
	MenuItem(string name, string description, bool vegetarian, double price)
	{
		this->name = name;
		this->description = description;
		this->vegetarian = vegetarian;
		this->price = price;
	}
	MenuItem(){};
	~MenuItem(){}

	string getName()
	{
		return name;
	}

	string getDescription()
	{
		return description;
	}

	bool isVegetarian()
	{
		return vegetarian;
	}

	double getPrice()
	{
		return price;
	}

private:
	string name;
	string description;
	bool vegetarian;
	double price;


};

#endif