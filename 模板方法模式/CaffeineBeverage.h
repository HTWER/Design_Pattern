#ifndef __CAFFEINEBEVERAGE_H__
#define __CAFFEINEBEVERAGE_H__

//ģ�巽������һ�� ����������������˳�� �ĺ�����ͨ����������ɳ���ʵ�֣����ɳ��ౣ����������������д;
//��������е����������������鷽��������ʵ�ֽ�������;

#include <iostream>
using namespace std;

class CaffeineBeverage
{
public:
	virtual ~CaffeineBeverage(){}

	//���������ģ�庯�����������ú������������ĵ��÷�ʽ
	//�˺���Ӧ�ý�ֹ��д�����Ǳ������ƺ���֧��
	void prepareRecipe()
	{
		boilWater();
		brew();
		pourInCup();
		addCondiments();
	}

	//���麯������������ʵ��
	virtual void brew() = 0;
	virtual void addCondiments() = 0;

	//ʵ�������ڳ���ͳһʵ�֣����е����඼�õ���ͬ������
	void boilWater()
	{
		cout << "Boiling water" << endl;
	}

	void pourInCup()
	{
		cout << "Pouring into cup" << endl;
	}
};

#endif