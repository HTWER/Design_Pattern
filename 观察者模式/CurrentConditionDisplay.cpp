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
	cout << "��ǰ�����¶�:" << m_temp << "F ʪ��:" << m_humidity << "% ��ѹ:" << m_pressure  << "P" << endl;
}
