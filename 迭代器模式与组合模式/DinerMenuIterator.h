#ifndef __DINERMENUITERATOR_H__
#define __DINERMENUITERATOR_H__

//�����˵��������࣬����˵�� ���ڱ���MenuItem��������ĵ�����

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
	int position = 0;	//��¼��һ����Ҫ����λ��

};

#endif