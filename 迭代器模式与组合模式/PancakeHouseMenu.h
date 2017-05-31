#ifndef __PANCAKEHOUSEMENU_H__
#define __PANCAKEHOUSEMENU_H__

//�����˵���

#include "MenuItem.h"
#include "PancakeHouseMenuIterator.h"
#include <vector>

class PancakeHouseMenu
{
public:
	PancakeHouseMenu()
	{
		//���Ĭ�ϲ˵���
		addItem("Blueberry Pancakes","Pancakes made with fresh blueberries or strawberries",true,3.49);
		addItem("Waffles", "Waffles,with your choice of blueberries or strawberries", true, 3.59);
	}
	~PancakeHouseMenu(){};

	void addItem(string name, string description, bool vegetarian, double price)
	{
		MenuItem menuItem(name, description, vegetarian, price);
		menuItems.push_back(menuItem);
	}

	//����
	Iterator* createIterator()
	{
		return new PancakeHouseMenuIterator(&menuItems);
	}

private:
	vector < MenuItem > menuItems;
};

#endif