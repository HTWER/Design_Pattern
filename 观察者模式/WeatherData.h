#ifndef __WEATHERDATA_H__
#define __WEATHERDATA_H__

#include "Subject.h"

//����վ����
class WeatherData:public Subject
{
public:
	WeatherData();
	~WeatherData();

	//����
	float m_temp;
	float m_humidity;
	float m_pressure;

	//�������ݸı�ʱ�������Զ������������(���е���notifyObservers����)
	//����û�м��վ������������������ֱ�����������е���һ�¾ͺ���
	void measurementsChanged();

	//��д֪ͨ��������Ϊ������������Ĳ�ͬ������Ҫ�������ݵĲ�ͬ
	void notifyObserver();
};


#endif
