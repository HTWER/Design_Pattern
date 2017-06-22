#include "StatisticsDisplay.h"
#include <iostream>
using namespace std;


StatisticsDisplay::StatisticsDisplay()
{
}


StatisticsDisplay::~StatisticsDisplay()
{
}

void StatisticsDisplay::update(DataPakeger data)
{
	if (data.temp > m_maxTemp)
		m_maxTemp = data.temp;

	if (data.humidity > m_maxHumidity)
		m_maxHumidity = data.humidity;

	if (data.pressure > m_maxPressure)
		m_maxPressure = data.pressure;

	display();
}

void StatisticsDisplay::display()
{
	cout << "目前最高温度:" << m_maxTemp << "F 最高湿度:" << m_maxHumidity << "% 最高气压:" << m_maxPressure << "P" << endl;
}
