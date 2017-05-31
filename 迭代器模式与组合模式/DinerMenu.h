#ifndef __DINERMENU_H__
#define __DINERMENU_H__

//餐厅菜单类

#include <iostream>
#include "MenuItem.h"
#include "DinerMenuIterator.h"
using namespace std;

class DinerMenu
{
public:
	DinerMenu()
	{
		//添加默认菜单项
		addItem("Vegetarian BLT", "good", true, 2.99);
		addItem("BLT", "very good", false, 2.99);
		addItem("Soup of the day", "Yeah",false,3.29);
		addItem("Hotdog", "good good", false, 3.05);
	}
	~DinerMenu(){}

	void addItem(string name, string description, bool vegetarian, double price)
	{
		if (numberOfItems >= MAX_ITEMS)
		{
			cout << "菜单已满，无法添加" << endl;
		}
		else
		{
			menuItems[numberOfItems] = MenuItem(name, description, vegetarian, price);
			++numberOfItems;
		}
	}

	//核心
	Iterator* createIterator()
	{
		return new DinerMenuIterator(menuItems, &numberOfItems);
	}

private:
	static const int MAX_ITEMS = 6; //菜单数组的大小
	int numberOfItems = 0;			//当前实际菜单项个数
	MenuItem menuItems[MAX_ITEMS];	//MAX_ITEMS算是常变量
};

#endif