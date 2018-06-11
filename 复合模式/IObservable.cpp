#include "IObservable.h"

void IObservable::registerObserver(IObserver* observer)
{
	observers.push_back(observer);
}

void IObservable::removeObserver(IObserver* observer)
{
	vector<IObserver*>::iterator iter;
	for (iter = observers.begin(); iter != observers.end(); iter++)
	{
		if (*iter == observer)
			break;
	}
	observers.erase(iter);
}