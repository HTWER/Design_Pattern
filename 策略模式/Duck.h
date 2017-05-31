#ifndef __DUCK_H__
#define __DUCK_H__

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
public:
	//�ӿ�;�ӿڱ�����ָ���������;�����Ȳ��
	//�ӿ������мܹ��������ã��̳���������Ϳ���ֱ��ʹ��
	FlyBehavior * m_flyBehavior;
	QuackBehavior * m_quackBahavior;

	//ʵ����
	void swin();            //���е�Ѽ�Ӷ�����Ӿ,����Ӿ�ķ�ʽ����ͬ
	void PerformFly();      //���ýӿڵĺ���
	void PerformQuack();    //���ýӿڵĺ���
	void SetFlyBehavior(FlyBehavior * flyBehavior);  //Ϊ�ӿ�FlyBehavior����оƬ�����Ӻ���
	void SetQuackBehavior(QuackBehavior * quackBahavior);//Ϊ�ӿ�QuackBehavior����оƬ�����Ӻ���

	//���麯��
	virtual void Display() = 0; //ÿ��Ѽ�ӵ����Ӷ���ͬ���ýӿ���ʵ�ָ���

	Duck();
	~Duck();
};


#endif

