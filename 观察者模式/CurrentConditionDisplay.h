#ifndef __CURRENTCONDITIONDISPLAY_H__
#define __CURRENTCONDITIONDISPLAY_H__

#include "Observer.h"
#include "DisplayElement.h"

//��ʾ�壬���������ӿ���
class CurrentConditionDisplay:public Observer,DisplayElement
{
public:
	CurrentConditionDisplay();
	~CurrentConditionDisplay();

	//����
	float m_temp;
	float m_humidity;
	float m_pressure;

	//��д��������
	void update(DataPakeger data);
	void display();
};

#endif


