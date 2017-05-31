#if 0

#ifndef __COMPOSITEITERATOR_H__
#define __COMPOSITEITERATOR_H__

#include <vector>
#include <stack>
#include "Iterator.h"
#include "MenuComponent.h"
using namespace std;

class NewMenu;		//为避免头文件交叉包含

//组合结构迭代器类，或者说是 用于遍历MenuComponent类型vector的树结构迭代器

class CompositeIterator :public Iterator
{
public:
	CompositeIterator(vector<MenuComponent*>* source)
	{
		m_stack.push(source->begin());	//压下原点
		m_source = source;
	}

	//返回了迭代器的指针，外面使用的时候要**才能得到真正的原vector内容，且最后要记得将这个指针delete;
	void* next() override
	{
		vector<MenuComponent*>::iterator iter = (vector<MenuComponent*>::iterator) m_stack.top();
		m_stack.pop();
		
		if (iter+1 != m_source->end())	//如果这个迭代器对应的数组还有下一个项，	这里这个写法是不行的，除非能够通过iter直接获取原vector相关信息................................
			m_stack.push(iter+1);		//是，将当前菜单的下一项位置保存下来

		if (typeid(**iter) == typeid(NewMenu))	//判断拿出来的东西是不是菜单；使用typeid判断子类时，要确保父类是有虚函数的；不要判断指针类型，要判断值类型；
		{
			//是,保存下菜单的迭代器
			Iterator* temp0 = (*iter)->createIterator();
			if (temp0->hasNext())
			{
				vector<MenuComponent*>::iterator* temp = (vector<MenuComponent*>::iterator*)(temp0->next());
				m_stack.push(*temp);	//第一次展开才得到真正的迭代器
				delete temp;
			}

			delete temp0;
		}
					

		//c++只能这样做，分配一个固定内存
		vector<MenuComponent*>::iterator* temp = new vector<MenuComponent*>::iterator();
		*temp = iter;

		return temp;
	}

	bool hasNext() override
	{
		if (m_stack.empty())
			return false;
		
		return true;
	}

private:
	//迭代器都要有一个能够访问 需要迭代的聚合 的变量；
	//这里用栈，因为涉及递归操作；
	//这个栈的类型之所以这么复杂是因为 需要迭代的聚合 是用vector来存储的；为了能够访问vector其中的原数据，才使用vector的迭代器
	//这个栈只存储菜单(NewMenu)
	//栈里的迭代器里面的一个元素代表着一个菜单
	//用栈来控制的递归可以在需要的时候停下来，需要的时候在继续递归
	stack<vector<MenuComponent*>::iterator> m_stack;

//	vector<MenuComponent*>* m_source;

};

#endif

#endif