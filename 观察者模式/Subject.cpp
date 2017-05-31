#include "Subject.h"


Subject::Subject()
{
}


Subject::~Subject()
{
}

void Subject::registerObserver(Observer * o)
{
	observersList.push_back(o);   
}

void Subject::removeObserver(Observer * o)
{
	vector<Observer*>::iterator iter;
	for (iter = observersList.begin(); iter != observersList.end(); iter++)
	{
		if (*iter == o)
			break;
	}
	observersList.erase(iter);
}

