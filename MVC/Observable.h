#ifndef __OBSERVABLE_H__
#define __OBSERVABLE_H__

#include "MVCDlg.h"

#include <vector>
using namespace std;

template <typename T>
class Observable
{
private:
	vector<Observer<T>*> observers;
public:
	void registerObserver(Observer<T>* o)
	{
		observers.push_back(o);
	}
	void removeObserver(Observer<T>* o)
	{
		vector<Observer<T>*>::iterator iter;
		for (iter = observers.begin(); iter != observers.end(); iter++)
		{
			if (*iter == 0)
				break;
		}
		observers.erase(iter);
	}
	void notifyObservers(void* observableObj)
	{
		for each (Observer<T>* var in observers)
			var->update(observableObj);
	}
};

#endif