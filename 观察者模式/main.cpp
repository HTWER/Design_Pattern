#include <iostream>
#include <Windows.h>  //用回控制时间间隔
#include <ctime>
#include <cstdlib>
#include "WeatherData.h"                 //主题
#include "CurrentConditionDisplay.h"     //观察者
#include "StatisticsDisplay.h"			 //观察者
using namespace std;

int main()
{
	WeatherData weatherdata;  //主题

	//观察者
	CurrentConditionDisplay currentconditiondisplay;  
	StatisticsDisplay statisticsdisplay;

	//观察者到主题注册
	currentconditiondisplay.toRegister(&weatherdata); 
	statisticsdisplay.toRegister(&weatherdata);

	//模拟检测站
	srand(time(0));
	while (true)
	{
		weatherdata.m_temp = rand()%36;
		weatherdata.m_humidity = rand()%100;
		weatherdata.m_pressure = rand()%101;
		weatherdata.measurementsChanged();   //消息推送
		Sleep(500);
	}


	cin.get();

	return 0;
}