#ifndef __LIGHT_H__
#define __LIGHT_H__

#include <iostream>
using namespace std;

//��ϵ��ʵ��������������豸Ҫ�õ���һ���ⲿ����
class Light
{
public:
	void on()
	{
		cout << "���ƣ�" << endl;
	}
	void off()
	{
		cout << "�صƣ�" << endl;
	}
};

#endif