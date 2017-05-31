#ifndef __MILK_H__
#define __MILK_H__

#include "Beverage.h"

class Milk:public Beverage   //���ģ��̳�����
{
public:
	Milk(Beverage * beverage);
	~Milk();
	
	//���ģ�����װ�ζ���
	Beverage * beverage;

	//ʵ���麯��������װ��ЧӦ
	string getDescription();
	float cost();

private:
	Milk();  //��סĬ�Ϲ��캯������Ϊһ��Ҫ�б�װ����
};

#endif


