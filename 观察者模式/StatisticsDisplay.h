#ifndef __STATISTICSDISPLAY_H__
#define __STATISTICSDISPLAY_H__

#include "Observer.h"
#include "DisplayElement.h"

class StatisticsDisplay:public Observer,DisplayElement
{
public:
	StatisticsDisplay();
	~StatisticsDisplay();

	//最高数据量
	float m_maxTemp;
	float m_maxHumidity;
	float m_maxPressure;

	void update(DataPakeger data);
	void display();
};

#endif

