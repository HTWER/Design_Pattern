#include "IObservable.h"
#include "DataPakeger.h"

IObservable::~IObservable()
{

}

void IObservable::registerObserver(IObserver * o)
{
	observersList.push_back(o);   
}

void IObservable::removeObserver(IObserver * o)
{
	vector<IObserver*>::iterator iter;
	for (iter = observersList.begin(); iter != observersList.end(); iter++)
	{
		if (*iter == o)
			break;
	}
	observersList.erase(iter);
}

void IObservable::notifyObserver()
{
	DataPakeger data;
	data.humidity = 0;	//随便初始化一下
	for (vector<IObserver*>::iterator iter = observersList.begin(); iter != observersList.end(); iter++)
		(*iter)->update(data);		//这个接口的参数设计不合理...
}

