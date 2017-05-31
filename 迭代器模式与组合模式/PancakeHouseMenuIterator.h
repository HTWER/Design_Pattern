#ifndef __PANCAKEHOUSEMENUITERATOR_H__
#define __PANCAKEHOUSEMENUITERATOR_H__

//�����˵��������࣬����˵�� ���ڱ���MenuItem����vector�ĵ�������
//��ʵvector�����е��������������ڲ����ã������ֶ�Ϊvectorд��������

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
		MenuItem* temp = &(*items)[position];		//�����������д��ʵ�ǲ���ȫ�ģ���Ϊitems����Ԫ����ϵͳ�Զ�����Ԫ�ص�ָ�벢���ǹ̶��ģ�
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
	int position = 0;	//��¼��һ��Ӧ��Ҫ���ʵĲ˵���

};

#endif