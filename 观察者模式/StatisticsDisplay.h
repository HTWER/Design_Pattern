#ifndef __STATISTICSDISPLAY_H__
#define __STATISTICSDISPLAY_H__

#include "IObserver.h"
#include "IDisplay.h"

class StatisticsDisplay :public IObserver, IDisplay
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

