#include <iostream>
#include <Windows.h>  //�ûؿ���ʱ����
#include <ctime>
#include <cstdlib>
#include "WeatherData.h"                 //����
#include "CurrentConditionDisplay.h"     //�۲���
#include "StatisticsDisplay.h"			 //�۲���
using namespace std;

int main()
{
	WeatherData weatherdata;  //����

	//�۲���
	CurrentConditionDisplay currentconditiondisplay;  
	StatisticsDisplay statisticsdisplay;

	//�۲��ߵ�����ע��
	currentconditiondisplay.toRegister(&weatherdata); 
	statisticsdisplay.toRegister(&weatherdata);

	//ģ����վ
	srand(time(0));
	while (true)
	{
		weatherdata.m_temp = rand()%36;
		weatherdata.m_humidity = rand()%100;
		weatherdata.m_pressure = rand()%101;
		weatherdata.measurementsChanged();   //��Ϣ����
		Sleep(500);
	}


	cin.get();

	return 0;
}