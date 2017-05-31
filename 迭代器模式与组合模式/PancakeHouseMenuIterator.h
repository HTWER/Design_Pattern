#ifndef __PANCAKEHOUSEMENUITERATOR_H__
#define __PANCAKEHOUSEMENUITERATOR_H__

//餐厅菜单迭代器类，或者说是 用于遍历MenuItem类型vector的迭代器；
//其实vector本身有迭代器，但是现在不好用，而是手动为vector写个迭代器

#include <vector>
#include "Iterator.h"
#include "MenuItem.h"
using namespace std;

class PancakeHouseMenuIterator :public Iterator
{
public:
	PancakeHouseMenuIterator(vector<MenuItem>* items)
	{
		this->items = items;
	}

	void* next() override
	{
		MenuItem* temp = &(*items)[position];		//这个代码这样写其实是不安全的，因为items里面元素是系统自动管理，元素的指针并不是固定的；
		position++;
		return temp;
	}

	bool hasNext() override
	{
		if (position > items->size() - 1)
			return false;
		
			return true;
	}

private:
	vector<MenuItem>* items;
	int position = 0;	//记录下一次应该要访问的菜单项

};

#endif