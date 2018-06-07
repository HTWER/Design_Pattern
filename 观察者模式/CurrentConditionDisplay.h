#ifndef __CURRENTCONDITIONDISPLAY_H__
#define __CURRENTCONDITIONDISPLAY_H__

#include "IObserver.h"
#include "IDisplay.h"

//显示板，具有两个接口类
class CurrentConditionDisplay :public IObserver, IDisplay
{
public:
	//数据
	float m_temp;
	float m_humidity;
	float m_pressure;

	//重写两个函数
	void update(DataPakeger data);
	void display();
};

#endif


