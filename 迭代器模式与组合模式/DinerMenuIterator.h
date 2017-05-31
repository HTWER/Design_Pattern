#ifndef __DINERMENUITERATOR_H__
#define __DINERMENUITERATOR_H__

//餐厅菜单迭代器类，或者说是 用于遍历MenuItem类型数组的迭代器

#include "Iterator.h"
#include "MenuItem.h"

class DinerMenuIterator :public Iterator
{
public:
	DinerMenuIterator(MenuItem* items,int* numberOfItems)
	{
		this->items = items;
		this->numberOfItems = numberOfItems;
	}

	void* next() override
	{
		MenuItem* temp = items+position;
		position++;
		return temp;
	}

	bool hasNext() override
	{
		if (position > *numberOfItems - 1)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

private:
	MenuItem* items;
	int* numberOfItems;
	int position = 0;	//记录下一个将要访问位置

};

#endif