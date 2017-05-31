#pragma once
#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include <vector>
#include "Observer.h"
using namespace std;

//��ʵ���ģʽ����һ����Ϣ�ƹ�ģʽ�������뽫�Լ���������һ����ʱ���ƹ㵽���ж��ĵĹ۲�����

//Ҳ���ǽӿ��࣬û�ӵ��ӿ�����
class Subject
{
public:
	Subject();
	~Subject();

	//����ע��Ĺ۲��߶����������
	vector<Observer*> observersList;

	void registerObserver(Observer * o);   //ע��
	void removeObserver(Observer * o);	   //ע��
	virtual void notifyObserver() = 0;	   //֪ͨ���й۲���,���������������ʵ��
};

#endif



