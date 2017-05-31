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
	//对数据进行打包
	DataPakeger data;
	data.temp = m_temp;
	data.humidity = m_humidity;
	data.pressure = m_pressure;

	//开始推送
	for (vector<Observer*>::iterator iter = observersList.begin(); iter != observersList.end();iter++)
	{
		(*iter)->update(data);
	}
}
