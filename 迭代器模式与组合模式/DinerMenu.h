#ifndef __DINERMENU_H__
#define __DINERMENU_H__

//�����˵���

#include <iostream>
#include "MenuItem.h"
#include "DinerMenuIterator.h"
using namespace std;

class DinerMenu
{
public:
	DinerMenu()
	{
		//���Ĭ�ϲ˵���
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
			cout << "�˵��������޷����" << endl;
		}
		else
		{
			menuItems[numberOfItems] = MenuItem(name, description, vegetarian, price);
			++numberOfItems;
		}
	}

	//����
	Iterator* createIterator()
	{
		return new DinerMenuIterator(menuItems, &numberOfItems);
	}

private:
	static const int MAX_ITEMS = 6; //�˵�����Ĵ�С
	int numberOfItems = 0;			//��ǰʵ�ʲ˵������
	MenuItem menuItems[MAX_ITEMS];	//MAX_ITEMS���ǳ�����
};

#endif