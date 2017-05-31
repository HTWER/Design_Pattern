#ifndef __COMPOSITEITERATOR_H__
#define __COMPOSITEITERATOR_H__

//��ϵ����������ڱ��� ������Iterator���͵� ����͸���ġ���������
//Ҫ��������һ����,������Ҫ�õݹ飬�����ø�״̬ջ,ʹ��״̬ջ�ĺô��ǿ����ڱ�����������ʱͣ��������Ҫ������һ��Ԫ�ص�ʱ�����ֶ���ǰ��
//ע�⣺c++��׼��vector����������ͨ����˵�ĵ����������Խ����γ�һ�����ܵ�ָ�룬���ָ���ܹ��Զ�����vector��Ԫ�أ�
//�������VectorIterator����������ǣ�������Ա�����ǰ�ۺ��Լ�����еľۺϵľۺϵľۺ�.........................�ľۺϣ�ֻҪ��֤���еľۺ϶��ǡ���ͬ�����ͼ��ɣ�

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

	//����汾�����ⲿʹ��������͸��,�����̰߳�ȫ
// 	void* next() override
// 	{
// 		Iterator* iter = m_stack.top();
// 
// 		//�õ�����˵�����һ��Ԫ��A
// 		vector<MenuComponent*>::iterator* vIterPointer = (vector<MenuComponent*>::iterator*)(iter->next());		//vetor��������ָ��
// 		vector<MenuComponent*>::iterator vIter = *vIterPointer;			//vector������
// 		MenuComponent* menuComponent = *vIter;			//Ԫ��
// 		delete vIterPointer;
// 
// 		//������Ԫ��A��һ���˵�
// 		if (m_stack.size() == 1 && typeid(*menuComponent) == typeid(NewMenu))		//�����Ҽ���һ������m_stack.size(),������ֻ�����һ��Ĳ˵����˵��Ĳ˵����ٹ������������
// 			m_stack.push(menuComponent->createIterator());		//������˵��ĵ��������뵽ջ����
// 
// 		//�������Ԫ��A
// 		vector<MenuComponent*>::iterator* temp = new vector<MenuComponent*>::iterator();
// 		*temp = vIter;
// 		return temp;
// 
// 	}

	//�ݹ��㷨
	//����汾�̲߳���ȫ�������ⲿʹ������͸��
	void* next() override
	{
		Iterator* iter = m_stack.top();

		MenuComponent** menuComponent = (MenuComponent**)(iter->next());

		if (m_stack.size() == 1 && typeid(**menuComponent) == typeid(NewMenu))
			m_stack.push((*menuComponent)->createIterator());

		return menuComponent;
	}

	//�ݹ��㷨
	//���������ȥ�������ջ����������û�п��ܵ��½ڵ�...................................
	//��ʵ����һ�����ܣ��ܹ�����Щ�Ѿ�������ɵ��Ӳ˵��ӵ�
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
	//���ջ����ֻ����CompositeIterator��VectorIterator
	//ջ��������Iterator*�ĺô��ǣ��ݹ������ʱ��ջ�е�Ԫ�ز��õ����޸�������ѹջ�����ǻ�ȡջ��Ԫ��ִ������next()����(Iterator����)���ɣ�
	//ϵͳ�����Ӧ���Զ����¡���ϸ�������磺
	//�������ĳ�����ܵ�ʱ������Ҫ�õ�һ���������ͣ���Ҫ���ض����ܣ���ֻҪ���һ���򵥵��࣬�����������Ҫ�ĺ������麯��������������ж��ٱ��ֲ��ùܣ�ֻҪ�������涼ʵ������Щ�������ɣ�
	stack<Iterator*> m_stack;	

};

#endif