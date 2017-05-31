#include "WeatherData.h"
#include "DataPakeger.h"

WeatherData::WeatherData()
{
}


WeatherData::~WeatherData()
{
}

void WeatherData::measurementsChanged()
{
	notifyObserver();
}

void WeatherData::notifyObserver()
{
	//�����ݽ��д��
	DataPakeger data;
	data.temp = m_temp;
	data.humidity = m_humidity;
	data.pressure = m_pressure;

	//��ʼ����
	for (vector<Observer*>::iterator iter = observersList.begin(); iter != observersList.end();iter++)
	{
		(*iter)->update(data);
	}
}
