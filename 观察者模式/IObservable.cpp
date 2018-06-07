#include "IObservable.h"

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

