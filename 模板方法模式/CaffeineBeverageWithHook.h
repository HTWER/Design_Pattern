#ifndef __CAFFEINEBEVERAGEIWTHHOOK_H__
#define __CAFFEINEBEVERAGEIWTHHOOK_H__

//������ģʽ��֮ǰ�����ģʽ���Ĳ�ͬ���ڣ�����ʹ�ö�����ϣ�����ʹ�ü̳���ʵ���¹���
//���ģʽ�����ô�������ƿ��

#include <iostream>
using namespace std;

class CaffeineBeverageWithHook
{
public:
	virtual ~CaffeineBeverageWithHook(){}

	//���������ģ�庯�����������ú������������ĵ��÷�ʽ
	//�˺���Ӧ�ý�ֹ��д�����Ǳ������ƺ���֧��
	//���������һ�����Ӻ���
	//�������������麯����һ��Ҫ����������������ģ�Ҳ�������ⲿ����麯����ֻҪ��ʶ�Ǹ��ⲿ����С�
	//��ʶ����˼�ǣ���֪���ⲿ��һ��������麯�����������������Ӷ��󴫽�����ʱ��Ϳ���ֱ�ӵ����������
	void prepareRecipe()
	{
		boilWater();
		brew();
		pourInCup();
		if(customerWantsCondiments())	//���Ӻ�������Ҫ��ʱ����д�Ϳ��Ի�ö���Ĺ���
			addCondiments();
	}


	//���麯������������ʵ��
	virtual void brew() = 0;
	virtual void addCondiments() = 0;

	//�����麯��������麯���Ƿ���Ҫ��д����������������
	//���㲻��д��ģ�庯��Ҳ����������
	//�����д�����ܸ�ģ�庯���ṩ�µĹ���
	virtual bool customerWantsCondiments()
	{
		return true;
	}

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