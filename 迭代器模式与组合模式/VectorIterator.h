#ifndef __VECTORITERATOR_H__
#define __VECTORITERATOR_H__

//用于遍 历任何类型vector 的通用迭代器
//其实vector本身有迭代器，但是现在不好用，而是手动为vector写个迭代器

#include <vector>
#include "Iterator.h"
using namespace std;

//这个类只是简单地将vector封装了一下，只能遍历当前聚合的元素

template <class DataType>
class VectorIterator : public Iterator
{
public:
	VectorIterator(vector<DataType>* items)
	{
		this->items = items;
	}

	//这个版本导致外部使用起来不透明，但是多线程安全
// 	void* next() override
// 	{
// 		vector<DataType>::iterator iter = items->begin() + position;			//取得迭代器，只有迭代器可以准确定位vector的内部元素
// 		position++;
// 
// 		vector<DataType>::iterator* temp = new vector<DataType>::iterator();	//创建一个空的迭代器,new出一个固定内存
// 		*temp = iter;															//在固定内存中放入迭代器
// 		return temp;	//返回固定内存指针,这样做的话，释放的工作就交给了调用这个函数的人;且需要*两次才得到真正的元素
// 	}

	//这个版本在多线程中不安全，但是外部使用起来透明
	void* next() override
	{
		DataType* data = &(*items)[position];
		position++;

		return data;
	}

	bool hasNext() override
	{
		if (position <= items->size() - 1)
			return true;

		return false;
	}

private:
	vector<DataType>* items;
	int position = 0;

};

#endif