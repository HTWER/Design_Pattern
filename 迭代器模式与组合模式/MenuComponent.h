#ifndef __MENUCOMPONENT_H__
#define __MENUCOMPONENT_H__

#include <iostream>
#include <cstdlib>
#include "Iterator.h"
using namespace std;

//���ģʽ�����Խ�Ԫ����֯�����ͽṹ�����еĽڵ㶼��ͬһ���ӿڣ��ڵ�һ���Ϊ���࣬�ڽڵ���Դ�����������Ҷ�ڵ㲻���Դ�����������

//�������ʵ�����ṹ�еĽڵ�
//���еĺ������ṩĬ��ʵ�֣����׳��쳣��
//û����д��ĳЩ���������࣬�ڵ�����Щ������ʱ��ͻ��׳��쳣,��֪����ô��c++�׳��쳣��
//��������ǲ˵��Ļ��������Ҫ����һ������
//������Ѿ��ƻ��˵�һ����ԭ�򣬻�������͸����
//�������������������

class MenuComponent
{
public:
	//�˵���
	virtual void add(MenuComponent* menuComponent)
	{
		cout << "add fali";
		abort();
	}
	virtual void remove(MenuComponent* menuComponent)
	{
		cout << "remove fail";
		abort();
	}
	virtual MenuComponent* getChild(int i)
	{
		cout << "getChild fail";
		abort();
	}
	//========================


	//�˵�����
	virtual double getPrice()
	{
		cout << "getPrice fail";
		abort();
	}
	virtual bool isVegetarian()
	{
		cout << "isVegetarian";
		abort();
	}
	//========================


	//���߹���
	virtual string getName()
	{
		cout << "getName fail";
		abort();
	}
	virtual string getDescription()
	{
		cout << "getDescription fail";
		abort();
	}
	virtual void print()
	{
		cout << "print fail";
		abort();
	}
	virtual Iterator* createIterator()
	{
		cout << "createIterator fail";
		abort();
	}
	//========================


	virtual ~MenuComponent(){};

protected:
	MenuComponent(){};	//���������ʵ����
};

#endif