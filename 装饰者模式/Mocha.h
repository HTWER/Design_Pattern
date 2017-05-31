#ifndef __MOCHA_H__
#define __MOCHA_H__

#include "Beverage.h"

class Mocha:public Beverage
{
public:
	Mocha(Beverage * beverage);
	~Mocha();

	//���ģ�����װ�ζ���
	Beverage * beverage;

	//ʵ���麯��������װ��ЧӦ
	string getDescription();
	float cost();

private:
	Mocha();  //��סĬ�Ϲ��캯������Ϊһ��Ҫ�б�װ����
};

#endif


