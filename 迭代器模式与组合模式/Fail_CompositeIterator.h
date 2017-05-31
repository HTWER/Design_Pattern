#if 0

#ifndef __COMPOSITEITERATOR_H__
#define __COMPOSITEITERATOR_H__

#include <vector>
#include <stack>
#include "Iterator.h"
#include "MenuComponent.h"
using namespace std;

class NewMenu;		//Ϊ����ͷ�ļ��������

//��Ͻṹ�������࣬����˵�� ���ڱ���MenuComponent����vector�����ṹ������

class CompositeIterator :public Iterator
{
public:
	CompositeIterator(vector<MenuComponent*>* source)
	{
		m_stack.push(source->begin());	//ѹ��ԭ��
		m_source = source;
	}

	//�����˵�������ָ�룬����ʹ�õ�ʱ��Ҫ**���ܵõ�������ԭvector���ݣ������Ҫ�ǵý����ָ��delete;
	void* next() override
	{
		vector<MenuComponent*>::iterator iter = (vector<MenuComponent*>::iterator) m_stack.top();
		m_stack.pop();
		
		if (iter+1 != m_source->end())	//��������������Ӧ�����黹����һ���	�������д���ǲ��еģ������ܹ�ͨ��iterֱ�ӻ�ȡԭvector�����Ϣ................................
			m_stack.push(iter+1);		//�ǣ�����ǰ�˵�����һ��λ�ñ�������

		if (typeid(**iter) == typeid(NewMenu))	//�ж��ó����Ķ����ǲ��ǲ˵���ʹ��typeid�ж�����ʱ��Ҫȷ�����������麯���ģ���Ҫ�ж�ָ�����ͣ�Ҫ�ж�ֵ���ͣ�
		{
			//��,�����²˵��ĵ�����
			Iterator* temp0 = (*iter)->createIterator();
			if (temp0->hasNext())
			{
				vector<MenuComponent*>::iterator* temp = (vector<MenuComponent*>::iterator*)(temp0->next());
				m_stack.push(*temp);	//��һ��չ���ŵõ������ĵ�����
				delete temp;
			}

			delete temp0;
		}
					

		//c++ֻ��������������һ���̶��ڴ�
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
	//��������Ҫ��һ���ܹ����� ��Ҫ�����ľۺ� �ı�����
	//������ջ����Ϊ�漰�ݹ������
	//���ջ������֮������ô��������Ϊ ��Ҫ�����ľۺ� ����vector���洢�ģ�Ϊ���ܹ�����vector���е�ԭ���ݣ���ʹ��vector�ĵ�����
	//���ջֻ�洢�˵�(NewMenu)
	//ջ��ĵ����������һ��Ԫ�ش�����һ���˵�
	//��ջ�����Ƶĵݹ��������Ҫ��ʱ��ͣ��������Ҫ��ʱ���ڼ����ݹ�
	stack<vector<MenuComponent*>::iterator> m_stack;

//	vector<MenuComponent*>* m_source;

};

#endif

#endif