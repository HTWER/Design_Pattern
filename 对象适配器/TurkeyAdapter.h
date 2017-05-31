#ifndef __TURKEYADAPTER_H__
#define __TURKEYADAPTER_H__

//����ģʽ�ĶԱȣ�
//װ���ߣ�Ϊ�˱��ֲ�����ΰ�װ����ͬһ�����͵Ķ������̳е��� �� ��װ���� �϶�����ͬ�ģ���װ����һ��ֻ����һ��
//������������Ϊ��ת���ӿڣ� �̳е��� �� ��װ���� �϶��ǲ�ͬ�ģ���װ��������ж��
//���ģʽ��Ϊ�˼�ʹ�÷�ʽ���������Ĺ��ܼ��ɣ�����һ�㲻�̳б���࣬�����а�װ����,��װ����������⣻(�������ģʽ�Ƚϼ򵥣�û����һ����Ŀ��д����)

//����һ��������ģʽ���������������ص��Ǳ��������Ҳ�Ǳ��̳������Ķ����ǰ�װ���ڣ����ģʽҪ�õ����ؼ̳�

#include "Duck.h"
#include "Turkey.h"

//�����Duck������ȴ��Turkey
//���ö�����ϵķ�ʽʵ�ֶ���������
class TurkeyAdapter :public Duck
{
private:
	Turkey * turkey;
public:
	TurkeyAdapter(Turkey * turkey)
	{
		this->turkey = turkey;
	}
	void quack()
	{
		turkey->gobble();
	}
	void fly()
	{
		for (int i = 0; i < 5;i++)
		{
			turkey->fly();
		}
	}
};

#endif