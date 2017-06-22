#ifndef __COMPOSITEITERATOR_H__
#define __COMPOSITEITERATOR_H__

//组合迭代器：用于遍历 迭代器Iterator类型的 “不透明的”树迭代器
//要遍历的是一棵树,遍历树要用递归，或者用个状态栈,使用状态栈的好处是可以在遍历过程中随时停下来，需要遍历下一个元素的时候再手动往前走
//注意：c++标准的vector迭代器不是通常所说的迭代器，可以将它课程一个智能的指针，这个指针能够自动跟踪vector的元素；
//这个类与VectorIterator的最大区别是：该类可以遍历当前聚合以及组合中的聚合的聚合的聚合.........................的聚合；只要保证所有的聚合都是“相同”类型即可；

#include <stack>
#include "MenuComponent.h"
#include "Iterator.h"
using namespace std;

class NewMenu;

class CompositeIterator :public Iterator
{
public:
	CompositeIterator(Iterator* iter)
	{
		m_stack.push(iter);
	}

	//这个版本导致外部使用起来不透明,但是线程安全
// 	void* next() override
// 	{
// 		Iterator* iter = m_stack.top();
// 
// 		//拿到这个菜单的下一个元素A
// 		vector<MenuComponent*>::iterator* vIterPointer = (vector<MenuComponent*>::iterator*)(iter->next());		//vetor迭代器的指针
// 		vector<MenuComponent*>::iterator vIter = *vIterPointer;			//vector迭代器
// 		MenuComponent* menuComponent = *vIter;			//元素
// 		delete vIterPointer;
// 
// 		//如果这个元素A是一个菜单
// 		if (m_stack.size() == 1 && typeid(*menuComponent) == typeid(NewMenu))		//这里我加了一个条件m_stack.size(),意义是只保存第一层的菜单，菜单的菜单不再归这个迭代器管
// 			m_stack.push(menuComponent->createIterator());		//将这个菜单的迭代器加入到栈里面
// 
// 		//返回这个元素A
// 		vector<MenuComponent*>::iterator* temp = new vector<MenuComponent*>::iterator();
// 		*temp = vIter;
// 		return temp;
// 
// 	}

	//递归算法
	//这个版本线程不安全，但是外部使用起来透明
	void* next() override
	{
		Iterator* iter = m_stack.top();

		MenuComponent** menuComponent = (MenuComponent**)(iter->next());

		if (m_stack.size() == 1 && typeid(**menuComponent) == typeid(NewMenu))
			m_stack.push((*menuComponent)->createIterator());

		return menuComponent;
	}

	//递归算法
	//这个函数是去检查整个栈，看看还有没有可能的新节点...................................
	//其实还有一个功能，能够将那些已经遍历完成的子菜单扔掉
	bool hasNext() override
	{
		if (m_stack.empty())
			return false;
		else
		{
			Iterator* iter = m_stack.top();

			if (iter->hasNext())
				return true;
			else
			{
				delete m_stack.top();
				m_stack.pop();
				return hasNext();
			}
		}
	}

private:
	//这个栈里面只存着CompositeIterator和VectorIterator
	//栈的类型是Iterator*的好处是，递归遍历的时候，栈中的元素不用弹出修改再重新压栈。而是获取栈顶元素执行以下next()函数(Iterator都有)即可；
	//系统的设计应该自顶向下、逐步细化，比如：
	//我在设计某个功能的时候，里面要用到一种数据类型，它要有特定功能；我只要设计一个简单的类，里面包含着需要的函数（虚函数）；而这个类有多少变种不用管，只要变种里面都实现了那些函数即可；
	stack<Iterator*> m_stack;	

};

#endif