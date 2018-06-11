#ifndef __WEATHERDATA_H__
#define __WEATHERDATA_H__

#include "IObservable.h"

//气象站例子
class WeatherData :public IObservable
{
public:
	WeatherData();
	~WeatherData();

	//数据
	float m_temp;
	float m_humidity;
	float m_pressure;

	//当有数据改变时，将会自动调用这个函数(其中调用notifyObservers函数)
	//由于没有检测站这个对象，所以这个函数直接在主函数中调用一下就好了
	void measurementsChanged();

	//重写通知函数，因为可能因具体对象的不同导致需要传输数据的不同
	void notifyObserver() override;
};


#endif
