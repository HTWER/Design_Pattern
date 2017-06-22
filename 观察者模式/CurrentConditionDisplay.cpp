#include "CurrentConditionDisplay.h"
#include <iostream>
using namespace std;


CurrentConditionDisplay::CurrentConditionDisplay()
{

}


CurrentConditionDisplay::~CurrentConditionDisplay()
{
}

void CurrentConditionDisplay::update(DataPakeger data)
{
	m_temp = data.temp;
	m_humidity = data.humidity;
	m_pressure = data.pressure;
	display();
}

void CurrentConditionDisplay::display()
{
	cout << "当前气候：温度:" << m_temp << "F 湿度:" << m_humidity << "% 气压:" << m_pressure  << "P" << endl;
}
